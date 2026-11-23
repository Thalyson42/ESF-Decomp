// ctdb.cpp -- CHalfLifeCaptureTheDragonBalls 10/10. RECUPERADO de decomp_raw. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "weapons.h"
#include "teamplay_gamerules.h"
#include "player_esf_manual.h"
#include "esf_extras.h"
#include "dragonball.h"
#include "shenlong.h"
#include "ctdb.h"

#define PF(p, type, off) (*(type *)((char *)(p) + (off)))
#define BALL(i) (((CDragonBall **)((char *)this + CTDB_BALLS))[i])
extern int gmsgDragonBallEnt;
extern cvar_t wishlimit;

static void SendBallEnt(int idx, int entindex, edict_t *pTo)   // msg gmsgDragonBallEnt: byte idx0, short ent
{
    if (pTo) { MESSAGE_BEGIN(MSG_ONE, gmsgDragonBallEnt, NULL, pTo); }
    else     { MESSAGE_BEGIN(MSG_ALL, gmsgDragonBallEnt); }
        WRITE_BYTE(idx);
        WRITE_SHORT(entindex);
    MESSAGE_END();
}

void CHalfLifeCaptureTheDragonBalls::DragonBallPickUp(int nr, int iPlayerIndex)
{
    if ((unsigned)(nr - 1) > 6) return;
    BALL(nr - 1) = NULL;                                  // [OK] a esfera virou item da arma
    SendBallEnt(nr - 1, iPlayerIndex, NULL);              // [OK] HUD: a esfera agora e do jogador
}

void CHalfLifeCaptureTheDragonBalls::DragonBallDrop(int nr, CDragonBall *pBall)
{
    if ((unsigned)(nr - 1) > 6) return;
    BALL(nr - 1) = pBall;
    SendBallEnt(nr - 1, ENTINDEX(pBall->edict()), NULL);  // [OK]
}

void CHalfLifeCaptureTheDragonBalls::InitHUD(CBasePlayer *pl)
{
    for (int i = 0; i <= 6; i++)                          // [OK] esferas no chao
        if (BALL(i))
            SendBallEnt(i, ENTINDEX(BALL(i)->edict()), pl->edict());
    for (int i = 1; i <= gpGlobals->maxClients; i++)      // [OK] esferas carregadas por jogadores
    {
        CBasePlayer *p = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (p && p->IsPlayer() && PF(p, int, 0x760))
            SendBallEnt(PF(p, int, 0x760) - 1, ENTINDEX(p->edict()), pl->edict());
    }
    CHalfLifeTeamplay::InitHUD(pl);
}

BOOL CHalfLifeCaptureTheDragonBalls::DragonBallsGathered(void)
{
    for (int i = 0; BALL(i); )
    {
        TraceResult tr;
        Vector vecStart = BALL(i)->pev->origin;
        UTIL_TraceLine(vecStart, vecStart + Vector(0, 0, 300), ignore_monsters, BALL(i)->edict(), &tr);   // [OK] 300 u livres acima
        if (tr.flFraction < 1.0 || BALL(i)->m_fStone)
            return FALSE;
        for (int j = i + 1; j <= 6; j++)
        {
            if (!BALL(j)) return FALSE;
            if ((BALL(i)->pev->origin - BALL(j)->pev->origin).Length() > 100)   // [OK] todas a menos de 100 u uma da outra
                return FALSE;
        }
        if (++i > 5) return TRUE;
    }
    return FALSE;
}

void CHalfLifeCaptureTheDragonBalls::SpawnDragonBalls(void)
{
    edict_t *pSpots[100];
    int n = 0;
    pSpots[0] = FIND_ENTITY_BY_STRING(NULL, "classname", "item_dragonball");
    while (n <= 99 && !FNullEnt(pSpots[n]))               // [OK] conta ate 100 spawns
    {
        n++;
        pSpots[n] = FIND_ENTITY_BY_STRING(pSpots[n - 1], "classname", "item_dragonball");
    }
    if (n <= 6)
    {
        ALERT(at_error, "not enough dragonballs in this map\n");   // [OK]
        GR_F(this, int, CTDB_NO_BALLS) = 1;
        return;
    }
    int pick[7];
    for (int i = 0; i <= 6; i++)                          // [OK] 7 spawns distintos, sorteados
    {
        int r, ok;
        do {
            r = RANDOM_LONG(0, n - 1);
            ok = 1;
            for (int k = 0; k < i; k++) if (pick[k] == r) ok = 0;
        } while (!ok);
        pick[i] = r;
    }
    for (int j = 0; j <= 6; j++)
    {
        BALL(j) = CDragonBall::CreateDragonBall(pSpots[pick[j]]->v.origin, j + 1);
        if (!BALL(j)) return;                             // [OK]
    }
    if (GR_F(this, int, CTDB_RESPAWN_STONE))              // [OK] respawn pos-desejo: esferas de pedra
    {
        GR_F(this, int, CTDB_RESPAWN_STONE) = 0;
        for (int k = 0; k <= 6; k++)
        {
            SendBallEnt(k, ENTINDEX(BALL(k)->edict()), NULL);
            BALL(k)->Stonify();
        }
    }
    GR_F(this, int, CTDB_BALLS_SPAWNED) = 1;
}

BOOL CHalfLifeCaptureTheDragonBalls::PlayerUses(CBasePlayer *pPlayer)
{
    if (!GR_F(this, int, CTDB_GATHERED) || !pPlayer->IsAlive() || !GR_F(this, int, CTDB_WISH_AVAILABLE))
        return FALSE;
    for (int i = 0; i <= 6; i++)
    {
        if ((pPlayer->pev->origin - BALL(i)->pev->origin).Length() < 100)   // [OK] perto de qualquer esfera
        {
            PF(pPlayer, int, 0x348) = 1;                  // [OK] jogador esta fazendo o desejo
            MESSAGE_BEGIN(MSG_ONE, gmsgVGUIMenu, NULL, pPlayer->edict());
                WRITE_BYTE(31);                           // [OK] menu de desejos
            MESSAGE_END();
            if (GR_F(this, CShenlong *, CTDB_SHENLONG))
                return TRUE;                              // [OK] Shenlong ja invocado
            Vector vecBall = BALL(0)->pev->origin;
            Vector vecDir(pPlayer->pev->origin.x - vecBall.x, pPlayer->pev->origin.y - vecBall.y, 0);   // [OK]
            GR_F(this, CShenlong *, CTDB_SHENLONG) =
                CShenlong::CreateShenlong(vecBall + Vector(0, 0, 50), vecDir, (CDragonBall **)((char *)this + CTDB_BALLS));
            return TRUE;
        }
    }
    return FALSE;
}

void CHalfLifeCaptureTheDragonBalls::FinishWish(CBasePlayer *pPlayer, int iPoints)
{
    PF(pPlayer, int, 0x348) = 0;
    GR_F(this, int, CTDB_WISH_AVAILABLE) = 0;
    PF(pPlayer, int, 0x738) += iPoints;                   // [OK] pontos de desejo do jogador
    MESSAGE_BEGIN(MSG_ALL, gmsgScoreInfo);
        WRITE_BYTE(ENTINDEX(pPlayer->edict()));
        WRITE_SHORT((int)pPlayer->pev->frags);
        WRITE_SHORT(PF(pPlayer, int, 0x984));
        WRITE_SHORT(PF(pPlayer, int, 0x738));
        WRITE_SHORT(PF(pPlayer->pev, int, 0x20c));        // [OK] mortes
        WRITE_SHORT(GetTeamIndex(pPlayer->m_szTeamName) + 1);
    MESSAGE_END();
    GR_F(this, CShenlong *, CTDB_SHENLONG)->GrantWish();
    GR_F(this, CShenlong *, CTDB_SHENLONG) = NULL;
    for (int i = 0; i <= 6; i++)
        SendBallEnt(i, 0, NULL);                          // [OK] some do HUD
    GR_F(this, int, CTDB_RESPAWN_STONE) = 1;
    GR_F(this, int, CTDB_BALLS_SPAWNED) = 0;
    GR_F(this, float, CTDB_RESPAWN_TIME) = gpGlobals->time + 45;
}

BOOL CHalfLifeCaptureTheDragonBalls::ClientCommand(CBasePlayer *pPlayer, const char *pcmd)
{
    BOOL fCan = GR_F(this, int, CTDB_WISH_AVAILABLE) && PF(pPlayer, int, 0x348) && GR_F(this, int, CTDB_GATHERED);
    if (!strcmp(pcmd, "immortality"))
    {
        if (fCan)
        {
            PF(pPlayer, int, 0x34c) = 1;                  // [OK] imortal por 45 s
            PF(pPlayer, float, 0x73c) = gpGlobals->time + 45;
            FinishWish(pPlayer, 1);
        }
    }
    else if (!strcmp(pcmd, "strength"))
    {
        if (fCan)
        {
            pPlayer->IncreasePL(1000000);                 // [OK]
            GiveBaseItems(pPlayer);                       // [?] vtable +0xf0 (argumento nao aparece no decompilado)
            FinishWish(pPlayer, 1);
        }
    }
    else if (!strcmp(pcmd, "wishpoint"))
    {
        if (fCan)
            FinishWish(pPlayer, 2);                       // [OK] vale 2 pontos
    }
    else
        return CHalfLifeTeamplay::ClientCommand(pPlayer, pcmd);
    return TRUE;
}

void CHalfLifeCaptureTheDragonBalls::Think(void)
{
    if (GR_F(this, int, CTDB_BALLS_SPAWNED) || GR_F(this, int, CTDB_NO_BALLS))
    {
        if (DragonBallsGathered())
        {
            if (!GR_F(this, int, CTDB_GATHERED))
            {
                GR_F(this, int, CTDB_GATHERED) = 1;
                for (int i = 0; i <= 6; i++) BALL(i)->Glow();   // [OK]
            }
        }
        else if (GR_F(this, int, CTDB_GATHERED))
        {
            GR_F(this, int, CTDB_GATHERED) = 0;
            for (int i = 0; i <= 6; i++) if (BALL(i)) BALL(i)->UnGlow();
            UTIL_Remove((CBaseEntity *)GR_F(this, CShenlong *, CTDB_SHENLONG));   // [OK]
            GR_F(this, CShenlong *, CTDB_SHENLONG) = NULL;
        }
        if (wishlimit.value != 0 && !g_fGameOver)         // [OK] limite de pontos de desejo por time
        {
            int iTeamPts[32] = {0};
            for (int i = 1; i <= gpGlobals->maxClients; i++)
            {
                CBasePlayer *p = (CBasePlayer *)UTIL_PlayerByIndex(i);
                if (p && p->IsPlayer())
                {
                    int t = GetTeamIndex(p->m_szTeamName) + 1;
                    if (t) iTeamPts[t] += PF(p, int, 0x738);
                }
            }
            for (int t = 1; t <= 31; t++)
                if ((double)iTeamPts[t] >= wishlimit.value)
                {
                    GoToIntermission();                   // [OK] vtable +0x110
                    return;
                }
        }
    }
    else if (!GR_F(this, int, CTDB_RESPAWN_STONE) || GR_F(this, float, CTDB_RESPAWN_TIME) < gpGlobals->time)
    {
        SpawnDragonBalls();
        GR_F(this, int, CTDB_WISH_AVAILABLE) = 1;
    }
    CHalfLifeTeamplay::Think();
}
