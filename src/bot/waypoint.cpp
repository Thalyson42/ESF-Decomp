// waypoint.cpp -- sistema de waypoints do bot (funcoes livres; derivado do waypoint.cpp do botman). RECUPERADO de decomp_raw/_funcoes_livres.
// [OK] = conferido no binario; [?] = adivinhado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "bot.h"

#define MAX_WAYPOINTS 1024                    // [OK] loops 0..0x3ff
#define W_FL_TEAM_SPECIFIC 4                  // [OK] WaypointFindPath testa flags & 4 e (flags & 3) != team
#define W_FL_TEAM          3
struct PATH { short index[4]; PATH *next; };  // [OK] 12 bytes (malloc(12)), index[] = -1 se livre, next em +8

waypoint_s waypoints[MAX_WAYPOINTS];          // [OK] 16 bytes cada
int        num_waypoints;
PATH      *paths[MAX_WAYPOINTS];              // [OK] listas encadeadas por waypoint
float      wp_display_time[MAX_WAYPOINTS];    // [OK]
float      f_path_time;
Vector     last_waypoint;                     // [OK] ultimo ponto adicionado
unsigned short *shortest_path[4];             // [OK] matrizes Floyd por time (0 = sem time)
unsigned short *from_to[4];
int        route_num_waypoints;               // [OK] lado da matriz
static int g_waypoint_paths;                  // [?] flag "caminhos carregados"

void WaypointDebug(void)                      // [OK]
{
    FILE *fp = fopen("ESF_bot.txt", "a");
    fprintf(fp, "WaypointDebug: LINKED LIST ERROR!!!\n");
    fclose(fp);
}

void WaypointFree(void)                       // [OK] libera matrizes e listas de caminhos
{
    for (int i = 0; i <= 3; i++)
    {
        if (shortest_path[i]) { free(shortest_path[i]); shortest_path[i] = NULL; }
        if (from_to[i])       { free(from_to[i]);       from_to[i] = NULL; }
    }
    for (int i = 0; i < MAX_WAYPOINTS; i++)
    {
        if (paths[i])
        {
            PATH *p = paths[i];
            while (p) { PATH *pn = p->next; free(p); p = pn; }   // [OK]
            paths[i] = NULL;
        }
    }
}

void WaypointInit(void)                       // [OK]
{
    if (g_waypoint_paths) WaypointFree();
    for (int i = 0; i <= 3; i++)              // [OK] libera de novo (WaypointFree nao rodou se nao havia caminhos)
    {
        if (shortest_path[i]) free(shortest_path[i]);
        if (from_to[i]) free(from_to[i]);
    }
    for (int j = 0; j < MAX_WAYPOINTS; j++)
    {
        waypoints[j].flags = 0;
        waypoints[j].x = waypoints[j].y = waypoints[j].z = 0;
        wp_display_time[j] = 0;
        paths[j] = NULL;
    }
    f_path_time = 0;
    num_waypoints = 0;
    last_waypoint = Vector(0, 0, 0);
    for (int k = 0; k <= 3; k++) { shortest_path[k] = NULL; from_to[k] = NULL; }
}

void WaypointUpdate(edict_t *pEntity)         // [OK] limpa flags de exibicao/selecao (0x20380)
{
    for (int i = 0; i < num_waypoints; i++)
        waypoints[i].flags &= ~0x20380;
}

void WaypointAddPath(short iFrom, short iTo)  // [OK] acrescenta iTo na lista de iFrom
{
    PATH *p = paths[iFrom], *pPrev = NULL;
    while (p)
    {
        for (int i = 0; i <= 3; i++)
            if (p->index[i] == -1) { p->index[i] = iTo; return; }
        pPrev = p;
        p = p->next;
    }
    p = (PATH *)malloc(sizeof(PATH));
    if (!p) ALERT(at_error, "ESF_bot - Error allocating memory for path!");
    p->index[0] = iTo;
    p->index[1] = p->index[2] = p->index[3] = -1;
    p->next = NULL;
    if (pPrev) pPrev->next = p;
    if (!paths[iFrom]) paths[iFrom] = p;
}

void WaypointDeletePath(short iTo)            // [OK] remove iTo de todas as listas
{
    for (int i = 0; i < num_waypoints; i++)
        for (PATH *p = paths[i]; p; p = p->next)
            for (int k = 0; k <= 3; k++)
                if (p->index[k] == iTo) p->index[k] = -1;
}

void WaypointDeletePath(short iFrom, short iTo)   // [OK]
{
    for (PATH *p = paths[iFrom]; p; p = p->next)
        for (int k = 0; k <= 3; k++)
            if (p->index[k] == iTo) p->index[k] = -1;
}

short WaypointFindPath(void **ppPath, int *pIndex, short iWP, int iTeam)   // [OK] iterador de vizinhos
{
    PATH **pPath = (PATH **)ppPath;
    if (!*pPath) { *pPath = paths[iWP]; *pIndex = 0; }
    if (*pIndex == 4) { *pIndex = 0; *pPath = (*pPath)->next; }
    if (!*pPath) return -1;
    for (;;)
    {
        if (*pIndex <= 3)
        {
            short v = (*pPath)->index[*pIndex];
            if (v != -1)
            {
                // [OK] pula waypoints exclusivos de outro time
                if (iTeam == -1 || !((waypoints[v].flags & W_FL_TEAM_SPECIFIC) && (waypoints[v].flags & W_FL_TEAM) != iTeam))
                {
                    (*pIndex)++;
                    return v;
                }
            }
            (*pIndex)++;
        }
        else
        {
            *pIndex = 0;
            *pPath = (*pPath)->next;
            if (!*pPath) break;
        }
    }
    return -1;
}

short WaypointRouteFromTo(short iFrom, short iTo, int iTeam)   // [OK] proximo salto da rota
{
    if (iTeam + 1 <= 4)                       // [OK] iTeam < 4 (-1 = sem time)
    {
        if (iTeam == -1) iTeam = 0;
        if (from_to[iTeam] || (iTeam = 0, from_to[0]))
            return from_to[iTeam][iTo + route_num_waypoints * iFrom];
    }
    return -1;
}

int WaypointDistanceFromTo(int iFrom, int iTo, int iTeam)      // [OK]
{
    if (iTeam + 1 <= 4)
    {
        if (iTeam == -1) iTeam = 0;
        if (shortest_path[iTeam] || (iTeam = 0, shortest_path[0]))
            return (short)shortest_path[iTeam][iTo + route_num_waypoints * iFrom];
    }
    return -1;
}
