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

#define W_FL_DELETED  0x80000000              // [OK] flags < 0
#define W_FL_AIMING   0x4000                  // [OK] byte 1 & 64

static inline BOOL WPTeamOK(int iWP, int iTeam)   // [OK] filtro de time usado nas buscas
{
    return iTeam == -1 || !(waypoints[iWP].flags & W_FL_TEAM_SPECIFIC) || (waypoints[iWP].flags & W_FL_TEAM) == iTeam;
}

int WaypointFindNearest(edict_t *pEntity, float range, int team)   // [OK] mais proximo visivel a partir dos olhos
{
    if (num_waypoints <= 0) return -1;
    int min_index = -1;
    float min_distance = 9999.0f;
    for (int i = 0; i < num_waypoints; i++)
    {
        if (waypoints[i].flags < 0 || (waypoints[i].flags & W_FL_AIMING)) continue;
        if (!WPTeamOK(i, team)) continue;
        Vector vecWP(waypoints[i].x, waypoints[i].y, waypoints[i].z);
        float distance = (vecWP - pEntity->v.origin).Length();
        if (distance < min_distance && distance < range)
        {
            TraceResult tr;
            Vector vecEye = pEntity->v.origin + pEntity->v.view_ofs;
            UTIL_TraceLine(vecEye, vecWP, ignore_monsters, pEntity->v.pContainingEntity, &tr);
            if (tr.flFraction >= 1.0) { min_index = i; min_distance = distance; }
        }
    }
    return min_index;
}

int WaypointFindNearest(Vector v_src, edict_t *pEntity, float range, int team)   // [OK] a partir de um ponto
{
    if (num_waypoints <= 0) return -1;
    int min_index = -1;
    float min_distance = 9999.0f;
    for (int i = 0; i < num_waypoints; i++)
    {
        if (waypoints[i].flags < 0 || (waypoints[i].flags & W_FL_AIMING)) continue;
        if (!WPTeamOK(i, team)) continue;
        Vector vecWP(waypoints[i].x, waypoints[i].y, waypoints[i].z);
        float distance = (vecWP - v_src).Length();
        if (distance < min_distance && distance < range)
        {
            TraceResult tr;
            UTIL_TraceLine(v_src, vecWP, ignore_monsters, pEntity->v.pContainingEntity, &tr);
            if (tr.flFraction >= 1.0) { min_index = i; min_distance = distance; }
        }
    }
    return min_index;
}

int WaypointFindNearestAiming(Vector v_origin)   // [OK] waypoint de mira (flag 0x4000) a menos de 40 u
{
    int index = -1;
    int min_distance = 9999;
    if (num_waypoints <= 0) return index;
    for (int i = 0; i < num_waypoints; i++)
    {
        if (waypoints[i].flags < 0) continue;
        if (waypoints[i].flags & W_FL_AIMING)
        {
            float distance = (v_origin - Vector(waypoints[i].x, waypoints[i].y, waypoints[i].z)).Length();
            if ((double)min_distance > distance && distance < 40.0f)
            {
                index = i;
                min_distance = (int)distance;
            }
        }
    }
    return index;
}

BOOL WaypointReachable(Vector v_src, Vector v_dest, edict_t *pEntity)   // [OK] < 400 u e linha livre
{
    if ((v_dest - v_src).Length() < 400.0f)
    {
        TraceResult tr;
        UTIL_TraceLine(v_src, v_dest, ignore_monsters, pEntity->v.pContainingEntity, &tr);
        if (tr.flFraction >= 1.0) return TRUE;
    }
    return FALSE;
}

int WaypointFindReachable(edict_t *pEntity, float range, int team)   // [OK] mais proximo com linha livre dos olhos E dos pes
{
    int min_index = 0;
    float min_distance = 9999.0f;
    for (int i = 0; i < num_waypoints; i++)
    {
        if (waypoints[i].flags < 0 || (waypoints[i].flags & W_FL_AIMING)) continue;
        if (!WPTeamOK(i, team)) continue;
        Vector vecWP(waypoints[i].x, waypoints[i].y, waypoints[i].z);
        float distance = (vecWP - pEntity->v.origin).Length();
        if (distance < min_distance)
        {
            TraceResult tr;
            Vector vecEye = pEntity->v.origin + pEntity->v.view_ofs;
            UTIL_TraceLine(vecEye, vecWP, ignore_monsters, pEntity->v.pContainingEntity, &tr);
            if (tr.flFraction >= 1.0 && WaypointReachable(pEntity->v.origin, vecWP, pEntity))
            {
                min_index = i;
                min_distance = distance;
            }
        }
    }
    if (min_distance > range) return -1;
    return min_index;
}

void WaypointFloyds(unsigned short *shortest, unsigned short *from)   // [OK] Floyd-Warshall com tabela de proximo salto
{
    int n = route_num_waypoints;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            from[i * n + j] = (unsigned short)j;
    BOOL changed = TRUE;
    while (changed)
    {
        changed = FALSE;
        for (int k = 0; k < n; k++)
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                {
                    if (shortest[i * n + k] == 0xffff || shortest[k * n + j] == 0xffff) continue;
                    int dist = shortest[i * n + k] + shortest[k * n + j];
                    if (dist > 0xfffe) dist = 0xfffe;                       // [OK] satura em 0xfffe
                    if (dist < shortest[i * n + j] || shortest[i * n + j] == 0xffff)
                    {
                        shortest[i * n + j] = (unsigned short)dist;
                        from[i * n + j] = from[i * n + k];
                        changed = TRUE;
                    }
                }
    }
}
