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

// ---- Metas (goals) ----
int WaypointFindNearestGoal(Vector v_src, edict_t *pEntity, float range, int team, int flags)   // [OK] por distancia reta, dentro de range
{
    if (num_waypoints <= 0) return -1;
    int min_index = -1, min_distance = 99999;
    for (int i = 0; i < num_waypoints; i++)
    {
        if (waypoints[i].flags < 0 || (waypoints[i].flags & W_FL_AIMING)) continue;
        if (!WPTeamOK(i, team)) continue;
        if ((flags & waypoints[i].flags) != flags) continue;
        int distance = (int)(Vector(waypoints[i].x, waypoints[i].y, waypoints[i].z) - v_src).Length();   // [OK] int
        if ((double)distance >= range) continue;
        if (distance < min_distance) { min_index = i; min_distance = distance; }
    }
    return min_index;
}

int WaypointFindNearestGoal(edict_t *pEntity, int src, int team, int flags)   // [OK] por distancia de ROTA (Floyd) a partir de src
{
    if (num_waypoints <= 0) return -1;
    int min_index = -1, min_distance = 99999;
    for (int i = 0; i < num_waypoints; i++)
    {
        if (i == src) continue;
        if (waypoints[i].flags < 0 || (waypoints[i].flags & W_FL_AIMING)) continue;
        if (!WPTeamOK(i, team)) continue;
        if ((flags & waypoints[i].flags) != flags) continue;
        int distance = WaypointDistanceFromTo(src, i, team);
        if (distance < min_distance) { min_index = i; min_distance = distance; }
    }
    return min_index;
}

int WaypointFindNearestGoal(edict_t *pEntity, int src, int team, int flags, int *pExclude)   // [OK] idem, ignorando a lista (terminada em 0)
{
    if (num_waypoints <= 0) return -1;
    int min_index = -1, min_distance = 99999;
    for (int i = 0; i < num_waypoints; i++)
    {
        if (i == src) continue;
        if (waypoints[i].flags < 0 || (waypoints[i].flags & W_FL_AIMING)) continue;
        if (!WPTeamOK(i, team)) continue;
        if ((flags & waypoints[i].flags) != flags) continue;
        int k = 0;
        if (pExclude[0])
        {
            if (i == pExclude[0]) continue;
            while (pExclude[++k] && i != pExclude[k]) ;
        }
        if (i == pExclude[k]) continue;
        int distance = WaypointDistanceFromTo(src, i, team);
        if (distance < min_distance) { min_index = i; min_distance = distance; }
    }
    return min_index;
}

int WaypointFindRandomGoal(edict_t *pEntity, int team, int flags)   // [OK] sorteia entre ate 200 candidatos
{
    int indexes[200];
    int count = 0;
    if (num_waypoints <= 0) return -1;
    for (int i = 0; i < num_waypoints; i++)
    {
        if (waypoints[i].flags < 0 || (waypoints[i].flags & W_FL_AIMING)) continue;
        if (team != -1 && (waypoints[i].flags & W_FL_TEAM_SPECIFIC) && (waypoints[i].flags & W_FL_TEAM) != team) continue;
        if ((flags & waypoints[i].flags) != flags) continue;
        if (count <= 199) indexes[count++] = i;
    }
    if (count) return indexes[RANDOM_LONG(1, count) - 1];   // [?] o decompilado le [RandomLong(1,count)] a partir de &indexes[-1]
    return -1;
}

int WaypointFindNearestEnemyGoal(edict_t *pEntity, int src, int team, int iEnemy)   // [OK] waypoint a menos de 400 u do jogador
{
    if (num_waypoints <= 0 || !iEnemy) return -1;
    int min_index = -1, min_distance = 400;
    for (int i = 0; i < num_waypoints; i++)
    {
        if (i == src) continue;
        if (waypoints[i].flags < 0 || (waypoints[i].flags & W_FL_AIMING)) continue;
        if (!WPTeamOK(i, team)) continue;
        WaypointDistanceFromTo(src, i, team);            // [OK] resultado descartado no binario
        float distance = (Vector(waypoints[i].x, waypoints[i].y, waypoints[i].z) - pEntity->v.origin).Length();
        if ((double)min_distance > distance) { min_index = i; min_distance = (int)distance; }
    }
    return min_index;
}

// ---- Edicao de waypoints (comandos do dono do servidor) ----
extern int g_waypoint_on;                     // [OK] modo de edicao ligado
extern int g_path_waypoint_enable;            // [OK] criar caminhos automaticamente
extern int m_iSpriteTexture;                  // [OK] sprite do feixe

void WaypointDrawBeam(edict_t *pEntity, Vector start, Vector end, int width, int noise,
                      int red, int green, int blue, int brightness, int speed)   // [OK] TE_BEAMPOINTS so p/ o editor
{
    if (!g_waypoint_on) return;
    MESSAGE_BEGIN(MSG_ONE, SVC_TEMPENTITY, NULL, pEntity);
        WRITE_BYTE(TE_BEAMPOINTS);
        WRITE_COORD(start.x); WRITE_COORD(start.y); WRITE_COORD(start.z);
        WRITE_COORD(end.x);   WRITE_COORD(end.y);   WRITE_COORD(end.z);
        WRITE_SHORT(m_iSpriteTexture);
        WRITE_BYTE(1);                        // frame inicial
        WRITE_BYTE(10);                       // framerate
        WRITE_BYTE(10);                       // vida
        WRITE_BYTE(width);
        WRITE_BYTE(noise);
        WRITE_BYTE(red); WRITE_BYTE(green); WRITE_BYTE(blue);
        WRITE_BYTE(brightness);
        WRITE_BYTE(speed);
    MESSAGE_END();
}

void WaypointAdd(edict_t *pEntity)            // [OK]
{
    if (num_waypoints > MAX_WAYPOINTS - 1) return;
    int index = 0;
    while (index < num_waypoints && waypoints[index].flags >= 0) index++;   // [OK] reaproveita slot deletado
    waypoints[index].flags = 0;
    waypoints[index].x = pEntity->v.origin.x;
    waypoints[index].y = pEntity->v.origin.y;
    waypoints[index].z = pEntity->v.origin.z;
    last_waypoint = pEntity->v.origin;
    wp_display_time[index] = gpGlobals->time;
    Vector start = pEntity->v.origin - Vector(0, 0, 34);
    Vector end = start + Vector(0, 0, 68);
    if (pEntity->v.movetype == 5)             // [OK] MOVETYPE_FLY (+0x108 do entvars): waypoint de voo
        waypoints[index].flags |= 16;
    WaypointDrawBeam(pEntity, start, end, 30, 0, 0, 0, 255, 250, 5);
    if (g_waypoint_on)
        EMIT_SOUND_DYN(pEntity, CHAN_WEAPON, "weapons/xbow_hit1.wav", 1.0, 0.8, 0, 100);
    if (index == num_waypoints) num_waypoints++;
    for (int i = 0; i < num_waypoints; i++)   // [OK] liga o novo ponto aos visiveis, nos dois sentidos
    {
        if (i == index || (waypoints[i].flags & W_FL_AIMING)) continue;
        Vector vecI(waypoints[i].x, waypoints[i].y, waypoints[i].z);
        if (WaypointReachable(pEntity->v.origin, vecI, pEntity) && g_path_waypoint_enable)
            WaypointAddPath((short)index, (short)i);
        if (WaypointReachable(vecI, pEntity->v.origin, pEntity) && g_path_waypoint_enable)
            WaypointAddPath((short)i, (short)index);
    }
}

void WaypointAddAiming(edict_t *pEntity)      // [OK] waypoint de mira 25 u a frente (flag 0x4000)
{
    if (num_waypoints > MAX_WAYPOINTS - 1) return;
    int index = 0;
    while (index < num_waypoints && waypoints[index].flags >= 0) index++;
    waypoints[index].flags = W_FL_AIMING;
    Vector v_angle(pEntity->v.v_angle.x, pEntity->v.v_angle.y, 0);
    UTIL_MakeVectors(v_angle);
    Vector pos = pEntity->v.origin + gpGlobals->v_forward * 25;
    waypoints[index].x = pos.x; waypoints[index].y = pos.y; waypoints[index].z = pos.z;
    wp_display_time[index] = gpGlobals->time;
    Vector start = pEntity->v.origin - Vector(0, 0, 10);
    Vector end = start + Vector(0, 0, 14);
    WaypointDrawBeam(pEntity, start, end, 30, 0, 0, 0, 255, 250, 5);
    EMIT_SOUND_DYN(pEntity, CHAN_WEAPON, "weapons/xbow_hit1.wav", 1.0, 0.8, 0, 100);
    if (index == num_waypoints) num_waypoints++;
}

void WaypointDelete(edict_t *pEntity)         // [OK]
{
    if (num_waypoints <= 0) return;
    int index = WaypointFindNearest(pEntity, 50.0f, -1);
    if (index == -1) return;
    // [OK] flags 0x400/0x8000/0x10000/0x40000 indicam waypoint com mira associada: apaga a mira mais proxima (< 40 u)
    if ((waypoints[index].flags & 0x400) || (short)waypoints[index].flags < 0 ||
        (waypoints[index].flags & 0x10000) || (waypoints[index].flags & 0x40000))
    {
        int min_index = -1, min_distance = 9999;
        for (int i = 0; i < num_waypoints; i++)
        {
            if (waypoints[i].flags >= 0 && (waypoints[i].flags & W_FL_AIMING))
            {
                float d = (Vector(waypoints[i].x, waypoints[i].y, waypoints[i].z) -
                           Vector(waypoints[index].x, waypoints[index].y, waypoints[index].z)).Length();
                if ((double)min_distance > d && d < 40.0f) { min_index = i; min_distance = (int)d; }
            }
        }
        if (min_index != -1)
        {
            waypoints[min_index].flags = (int)W_FL_DELETED;
            waypoints[min_index].x = waypoints[min_index].y = waypoints[min_index].z = 0;
            wp_display_time[min_index] = 0;
        }
    }
    WaypointDeletePath((short)index);
    if (paths[index])
    {
        PATH *p = paths[index];
        while (p) { PATH *pn = p->next; free(p); p = pn; }
        paths[index] = NULL;
    }
    waypoints[index].flags = (int)W_FL_DELETED;
    waypoints[index].x = waypoints[index].y = waypoints[index].z = 0;
    wp_display_time[index] = 0;
    EMIT_SOUND_DYN(pEntity, CHAN_WEAPON, "weapons/mine_activate.wav", 1.0, 0.8, 0, 100);
}

void WaypointCreatePath(edict_t *pEntity, int cmd)   // [OK] cmd 1 = origem, cmd 2 = destino (liga origem -> destino)
{
    static int waypoint1 = -1, waypoint2 = -1;
    const char *snd;
    if (cmd == 1)
    {
        waypoint1 = WaypointFindNearest(pEntity, 50.0f, -1);
        snd = (waypoint1 == -1) ? "common/wpn_moveselect.wav" : "common/wpn_hudoff.wav";
    }
    else if (cmd == 2)
    {
        waypoint2 = WaypointFindNearest(pEntity, 50.0f, -1);
        if (waypoint1 != -1 && waypoint2 != -1)
        {
            WaypointAddPath((short)waypoint1, (short)waypoint2);
            EMIT_SOUND_DYN(pEntity, CHAN_WEAPON, "common/wpn_hudon.wav", 1.0, 0.8, 0, 100);
            return;
        }
        snd = "common/wpn_denyselect.wav";
    }
    else return;
    EMIT_SOUND_DYN(pEntity, CHAN_WEAPON, snd, 1.0, 0.8, 0, 100);
}

void WaypointRemovePath(edict_t *pEntity, int cmd)   // [OK] idem, remove o caminho origem -> destino
{
    static int waypoint1 = -1, waypoint2 = -1;
    const char *snd;
    if (cmd == 1)
    {
        waypoint1 = WaypointFindNearest(pEntity, 50.0f, -1);
        snd = (waypoint1 == -1) ? "common/wpn_moveselect.wav" : "common/wpn_hudoff.wav";
    }
    else if (cmd == 2)
    {
        waypoint2 = WaypointFindNearest(pEntity, 50.0f, -1);
        if (waypoint1 != -1 && waypoint2 != -1)
        {
            WaypointDeletePath((short)waypoint1, (short)waypoint2);
            EMIT_SOUND_DYN(pEntity, CHAN_WEAPON, "common/wpn_hudon.wav", 1.0, 0.8, 0, 100);
            return;
        }
        snd = "common/wpn_denyselect.wav";
    }
    else return;
    EMIT_SOUND_DYN(pEntity, CHAN_WEAPON, snd, 1.0, 0.8, 0, 100);
}

// ---- Arquivo .ESF_wpt ----
struct WAYPOINT_HDR                           // [OK] 52 bytes
{
    char  filetype[8];                        // "HPB_bot"
    int   waypoint_file_version;              // 4
    int   waypoint_file_flags;
    int   number_of_waypoints;
    char  mapname[32];
};
extern void BuildBotFileName(char *szOut, const char *szDir, const char *szFile);
extern void WaypointRouteInit(void);

BOOL WaypointLoad(edict_t *pEntity)           // [OK]
{
    char mapname[64], filename[256], msg[256];
    strcpy(mapname, STRING(gpGlobals->mapname));
    strcat(mapname, ".ESF_wpt");
    BuildBotFileName(filename, "waypoints", mapname);
    FILE *bfp = fopen(filename, "rb");
    BOOL fOldFormat = FALSE;
    if (!bfp)
    {
        fOldFormat = TRUE;                    // [OK] tenta o antigo .wpt e depois renomeia
        strcpy(mapname, STRING(gpGlobals->mapname));
        strcat(mapname, ".wpt");
        BuildBotFileName(filename, "waypoints", mapname);
        bfp = fopen(filename, "rb");
        if (!bfp)
        {
            if (pEntity)
            {
                sprintf(msg, "Waypoint file %s does not exist!\n", filename);
                ClientPrint(&pEntity->v, HUD_PRINTNOTIFY, msg);
            }
            return FALSE;
        }
    }
    WAYPOINT_HDR header;
    fread(&header, sizeof(header), 1, bfp);
    if (strncmp(header.filetype, "HPB_bot", 8) != 0)
    {
        if (pEntity) { sprintf(msg, "%s is not a ESF bot waypoint file!\n", filename); ClientPrint(&pEntity->v, HUD_PRINTNOTIFY, msg); }
        fclose(bfp); return FALSE;
    }
    if (header.waypoint_file_version != 4)    // [OK]
    {
        if (pEntity) ClientPrint(&pEntity->v, HUD_PRINTNOTIFY, "Incompatible ESF bot waypoint file version!\nWaypoints not loaded!\n");
        fclose(bfp); return FALSE;
    }
    header.mapname[31] = 0;
    if (strcmp(header.mapname, STRING(gpGlobals->mapname)) != 0)
    {
        if (pEntity) { sprintf(msg, "%s ESF bot waypoints are not for this map!\n", filename); ClientPrint(&pEntity->v, HUD_PRINTNOTIFY, msg); }
        fclose(bfp); return FALSE;
    }
    WaypointInit();
    for (int i = 0; i < header.number_of_waypoints; i++)
    {
        fread(&waypoints[i], sizeof(waypoint_s), 1, bfp);
        num_waypoints++;
    }
    for (int i = 0; i < num_waypoints; i++)
    {
        short num;
        fread(&num, 2, 1, bfp);
        for (int k = 0; k < num; k++)
        {
            short path_index;
            fread(&path_index, 2, 1, bfp);
            WaypointAddPath((short)i, path_index);
        }
    }
    g_waypoint_paths = 1;
    fclose(bfp);
    if (fOldFormat)                           // [OK] migra para o nome novo
    {
        strcpy(mapname, STRING(gpGlobals->mapname));
        strcat(mapname, ".ESF_wpt");
        char newname[256], cmd[600];
        BuildBotFileName(newname, "waypoints", mapname);
        sprintf(cmd, "/bin/mv -f %s %s", filename, newname);
        system(cmd);
    }
    WaypointRouteInit();
    return TRUE;
}

void WaypointSave(void)                       // [OK]
{
    WAYPOINT_HDR header;
    strcpy(header.filetype, "HPB_bot");
    header.waypoint_file_version = 4;
    header.waypoint_file_flags = 0;
    header.number_of_waypoints = num_waypoints;
    memset(header.mapname, 0, 32);
    strncpy(header.mapname, STRING(gpGlobals->mapname), 31);
    header.mapname[31] = 0;
    char filename[256], mapname[64];
    strcpy(mapname, STRING(gpGlobals->mapname));
    strcat(mapname, ".ESF_wpt");
    BuildBotFileName(filename, "waypoints", mapname);
    FILE *bfp = fopen(filename, "wb");
    fwrite(&header, sizeof(header), 1, bfp);
    for (int i = 0; i < num_waypoints; i++)
        fwrite(&waypoints[i], sizeof(waypoint_s), 1, bfp);
    for (int i = 0; i < num_waypoints; i++)   // [OK] por waypoint: contagem (short) e os indices validos
    {
        short count = 0;
        for (PATH *p = paths[i]; p; p = p->next)
            for (int k = 0; k <= 3; k++)
                if (p->index[k] != -1) count++;
        fwrite(&count, 2, 1, bfp);
        for (PATH *p = paths[i]; p; p = p->next)
            for (int k = 0; k <= 3; k++)
                if (p->index[k] != -1) fwrite(&p->index[k], 2, 1, bfp);
    }
    fclose(bfp);
}

void WaypointPrintInfo(edict_t *pEntity)      // [OK] descreve o waypoint mais proximo (< 50 u)
{
    int index = WaypointFindNearest(pEntity, 50.0f, -1);
    if (index == -1) return;
    char msg[96];
    sprintf(msg, "Waypoint %d of %d total\n", index, num_waypoints);
    ClientPrint(&pEntity->v, HUD_PRINTNOTIFY, msg);
    int flags = waypoints[index].flags;
    entvars_t *pev = &pEntity->v;
    if (flags & W_FL_TEAM_SPECIFIC)
    {
        sprintf(msg, "Waypoint is for TEAM %d\n", (flags & W_FL_TEAM) + 1);   // [OK] 4 textos, um por time
        ClientPrint(pev, HUD_PRINTNOTIFY, msg);
    }
    if (flags & 32)      ClientPrint(pev, HUD_PRINTNOTIFY, "Bot will wait for lift before approaching\n");
    if (flags & 16)      ClientPrint(pev, HUD_PRINTNOTIFY, "This waypoint is on a ladder\n");
    if (flags & 64)      ClientPrint(pev, HUD_PRINTNOTIFY, "This is a door waypoint\n");
    if (flags & 128)     ClientPrint(pev, HUD_PRINTNOTIFY, "There is health near this waypoint\n");
    if (flags & 0x100)   ClientPrint(pev, HUD_PRINTNOTIFY, "There is armor near this waypoint\n");
    if (flags & 0x200)   ClientPrint(pev, HUD_PRINTNOTIFY, "There is ammo near this waypoint\n");
    if (flags & 0x20000) ClientPrint(pev, HUD_PRINTNOTIFY, "There is a weapon near this waypoint\n");
    if (flags & 0x40000) ClientPrint(pev, HUD_PRINTNOTIFY, "Bot will jump here\n");
    if (flags & 0x400)   ClientPrint(pev, HUD_PRINTNOTIFY, "This is a sniper waypoint\n");
    if (flags & 0x1000)  ClientPrint(pev, HUD_PRINTNOTIFY, "There is a flag goal near this waypoint\n");
    if (flags & 0x2000)  ClientPrint(pev, HUD_PRINTNOTIFY, "Bot will go prone here\n");
    if (flags & 0x8000)  ClientPrint(pev, HUD_PRINTNOTIFY, "Engineers will build a sentry gun here\n");
    if (flags & 0x10000) ClientPrint(pev, HUD_PRINTNOTIFY, "Engineers will build a dispenser here\n");
}
