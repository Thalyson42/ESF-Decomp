// gamerules_esf.cpp -- CHalfLifeMultiplay/Teamplay: funções que o ESF modificou. RECUPERADO À MÃO.
// [OK] conferido; [?] incerto. Campos de jogador ESF: include/player_esf.h.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "multiplay_gamerules.h"

void CHalfLifeMultiplay::ClientDisconnected(edict_t *pClient)
{
    if (!pClient) return;
    CBasePlayer *pPlayer = (CBasePlayer *)CBaseEntity::Instance(pClient);
    if (!pPlayer) return;

    FireTargets("game_playerleave", pPlayer, pPlayer, USE_TOGGLE, 0);
    if (g_teamplay)
        UTIL_LogPrintf("\"%s<%i><%s><%s>\" disconnected\n", STRING(pPlayer->pev->netname), GETPLAYERUSERID(pPlayer->edict()),
                       GETPLAYERAUTHID(pPlayer->edict()), g_engfuncs.pfnInfoKeyValue(g_engfuncs.pfnGetInfoKeyBuffer(pPlayer->edict()), "model"));
    else
        UTIL_LogPrintf("\"%s<%i><%s><%i>\" disconnected\n", STRING(pPlayer->pev->netname), GETPLAYERUSERID(pPlayer->edict()),
                       GETPLAYERAUTHID(pPlayer->edict()), GETPLAYERUSERID(pPlayer->edict()));
    pPlayer->RemoveAllItems(TRUE);

    MESSAGE_BEGIN(MSG_ALL, gmsgSpectator);                    // [OK] ESF: avisa que o jogador saiu do modo espectador
        WRITE_BYTE(ENTINDEX(pClient));
        WRITE_BYTE(0);
    MESSAGE_END();

    CBaseEntity *pEnt = NULL;                                 // [OK] quem observava o jogador que saiu volta ao modo livre
    while ((pEnt = UTIL_FindEntityByClassname(pEnt, "player")) != NULL)
    {
        if (FNullEnt(pEnt->edict())) break;
        CBasePlayer *pOther = (CBasePlayer *)pEnt;
        if (pOther->pev && pOther != pPlayer && pOther->m_hObserverTarget == pPlayer)
        {
            int iMode = pOther->pev->iuser1;
            pOther->pev->iuser1 = 0;
            pOther->m_hObserverTarget = NULL;
            pOther->Spectator_SetMode(iMode);
        }
    }
}

void CHalfLifeMultiplay::PlayerSpawn(CBasePlayer *pPlayer)    // ESF: sem armas/munição do SDK; define PL e vida do personagem
{
    pPlayer->pev->weapons |= (1 << WEAPON_SUIT);              // [OK]
    GiveBaseItems(pPlayer);                                   // [?] virtual +0xf0 do gamerules (equipamento inicial)

    int iPL;
    if (plcatchup.value == 1.0f)                              // [OK] "catch-up": novos jogadores nascem mais perto do PL médio
    {
        iPL = pPlayer->m_pClass->GetBasePL();                 // [?] vtable do personagem +0x14
        if (m_iAveragePL)                                     // [?] CHalfLifeMultiplay+4
        {
            int iDiff = m_iAveragePL - pPlayer->GetPotentialPL();
            iPL = (int)((double)pPlayer->m_iMaxPowerLevel + (double)iDiff * 0.1);   // [OK] 10% da diferença
            if (pPlayer->f_794 && iPL > pPlayer->m_iMaxPowerLevel)   // [?] f_794 = suicídio (ver Killed)
            {
                pPlayer->f_794 = 0;
                iPL = pPlayer->m_iMaxPowerLevel;
            }
        }
        pPlayer->SetMaxPowerLevel(iPL);
    }
    else
        iPL = pPlayer->m_iMaxPowerLevel;
    pPlayer->f_750 = -1;                                      // [?]
    pPlayer->SetPowerLevel(iPL);

    int v = pPlayer->m_pClass->vfunc_c();                     // [?] +0x74c
    int iHealth = pPlayer->m_pClass->vfunc_10();              // [OK] vida inicial do personagem
    pPlayer->pev->fuser4 = 1000.0f;                           // [OK] ki cheio (+0x260)
    pPlayer->f_74c = v;
    pPlayer->f_24c = iHealth;
    pPlayer->SetMaxHealth(iHealth);
    pPlayer->pev->health = (float)iHealth;
}

void CHalfLifeMultiplay::InitHUD(CBasePlayer *pl)
{
    pl->StartObserving();                                     // [OK] ESF: entra como espectador até escolher o personagem
    MESSAGE_BEGIN(MSG_ONE, gmsgAllowSpec, NULL, pl->edict());
        WRITE_BYTE((int)allowspectator.value);
    MESSAGE_END();
    if (!g_teamplay)
    {
        MESSAGE_BEGIN(MSG_ONE, gmsgVGUIMenu, NULL, pl->edict());   // [OK] abre o menu de seleção de personagem
            WRITE_BYTE(3);
        MESSAGE_END();
    }

    UTIL_ClientPrintAll(HUD_PRINTNOTIFY, UTIL_VarArgs("%s has joined the game\n",
        (pl->pev->netname && STRING(pl->pev->netname)[0] != 0) ? STRING(pl->pev->netname) : "unconnected"));

    if (g_teamplay)
        UTIL_LogPrintf("\"%s<%i><%s><%s>\" entered the game\n", STRING(pl->pev->netname), GETPLAYERUSERID(pl->edict()),
                       GETPLAYERAUTHID(pl->edict()), g_engfuncs.pfnInfoKeyValue(g_engfuncs.pfnGetInfoKeyBuffer(pl->edict()), "model"));
    else
        UTIL_LogPrintf("\"%s<%i><%s><%i>\" entered the game\n", STRING(pl->pev->netname), GETPLAYERUSERID(pl->edict()),
                       GETPLAYERAUTHID(pl->edict()), GETPLAYERUSERID(pl->edict()));

    UpdateGameMode(pl);

    MESSAGE_BEGIN(MSG_ONE, gmsgScoreInfo, NULL, pl->edict());
        WRITE_BYTE(ENTINDEX(pl->edict()));
        WRITE_SHORT(0); WRITE_SHORT(0); WRITE_SHORT(0); WRITE_SHORT(0); WRITE_SHORT(0);   // [OK] 5 shorts (ESF: +PL/classe)
    MESSAGE_END();

    if (!(!pl->IsNetClient() && (pl->pev->flags & FL_FAKECLIENT)))   // [OK] bots não recebem o MOTD
        SendMOTDToClient(pl->edict());

    MESSAGE_BEGIN(MSG_ONE, gmsgFog, NULL, pl->edict());       // [OK] neblina do mapa (entidade "fog")
    edict_t *pFog = FIND_ENTITY_BY_CLASSNAME(NULL, "fog");
    if (!FNullEnt(pFog))
    {
        CFog *pF = (CFog *)CBaseEntity::Instance(pFog);       // [?] classe do env_fog do ESF
        WRITE_BYTE(pF->m_iR); WRITE_BYTE(pF->m_iG); WRITE_BYTE(pF->m_iB);
        WRITE_SHORT((int)pF->m_flStart); WRITE_SHORT((int)pF->m_flEnd);
    }
    else
    {
        WRITE_BYTE(0); WRITE_BYTE(0); WRITE_BYTE(0);
        WRITE_SHORT(-1); WRITE_SHORT(0);
    }
    MESSAGE_END();

    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *plr = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (!plr) continue;
        MESSAGE_BEGIN(MSG_ONE, gmsgScoreInfo, NULL, pl->edict());
            WRITE_BYTE(i);
            WRITE_SHORT((int)plr->pev->frags);
            WRITE_SHORT(plr->m_iDeaths);
            WRITE_SHORT(plr->f_738);                          // [?] +0x738 (kills/"streak")
            WRITE_SHORT(plr->pev->team);                      // [?] +0x20c
            WRITE_SHORT(GetTeamIndex(plr->m_szTeamName) + 1);
        MESSAGE_END();
        MESSAGE_BEGIN(MSG_ONE, gmsgPowerLevel, NULL, pl->edict());   // [OK] ESF: PL de cada jogador
            WRITE_BYTE(ENTINDEX(plr->edict()));
            WRITE_LONG(plr->GetPowerLevel());
        MESSAGE_END();
        MESSAGE_BEGIN(MSG_ONE, gmsgSpectator, NULL, pl->edict());
            WRITE_BYTE(i);
            WRITE_BYTE(plr->pev->iuser1 != 0);
        MESSAGE_END();
    }
    pl->f_374 = 1;                                            // [?]
    if (g_fGameOver)
    {
        MESSAGE_BEGIN(MSG_ONE, SVC_INTERMISSION, NULL, pl->edict());
        MESSAGE_END();
    }
}
