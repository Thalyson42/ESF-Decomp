// player_spectator.cpp -- modo espectador e observador do ESF (CBasePlayer). RECUPERADO À MÃO.
// Fonte: decomp_raw/CBasePlayer/{StartSpectator,StopSpectator,StartObserving,StopObserving,Spectator_*}*.c
// Espectador: pev->iuser1 = modo (1..6; 3 e 5 não seguem jogador), pev->iuser2 = índice do alvo; m_hObserverTarget = alvo.
// Observador (StartObserving): usado ao morrer/entrar; efeito EF_NODRAW (128) + câmera em info_intermission ou acima do jogador.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "client.h"
#include "esf_classes.h"

extern int gmsgChangeView, gmsgCurWeapon, gmsgSetFOV, gmsgSpectator, gmsgTeamInfo, gmsgScoreInfo;
#define PFI(off) (*(int *)((char *)this + (off)))

void CBasePlayer::Spectator_FindNextPlayer(bool bReverse)
{
    CBaseEntity *pCur = m_hObserverTarget ? (CBaseEntity *)m_hObserverTarget : (CBaseEntity *)this;
    int iStart = ENTINDEX(pCur->edict());
    m_hObserverTarget = NULL;
    int iDir = bReverse ? -1 : 1;
    int i = iStart;
    do {
        i += iDir;
        if (i > gpGlobals->maxClients) i = 1;
        if (i <= 0) i = gpGlobals->maxClients;
        CBaseEntity *pPlayer = UTIL_PlayerByIndex(i);
        if (pPlayer && pPlayer != this && !pPlayer->pev->iuser1 && !(pPlayer->pev->effects & EF_NODRAW)) {   // [OK] byte pev+0x118 >= 0
            m_hObserverTarget = pPlayer;
            break;
        }
    } while (i != iStart);

    if (!m_hObserverTarget) { ALERT(at_console, "No observer targets.\n"); return; }
    CBaseEntity *pTarget = m_hObserverTarget;
    pev->iuser2 = ENTINDEX(pTarget->edict());
    UTIL_SetOrigin(pev, pTarget->pev->origin);
    ALERT(at_console, "Now Tracking %s\n", STRING(pTarget->pev->netname));
}

void CBasePlayer::Spectator_HandleButtons(void)
{
    if (m_flNextObserverInput > gpGlobals->time) return;
    if (m_afButtonPressed & IN_JUMP) {                                // troca de modo: 1->2->...->6->1
        int m = pev->iuser1;
        int iNext = (m >= 1 && m <= 5) ? m + 1 : 1;
        Spectator_SetMode(iNext);
        m_flNextObserverInput = gpGlobals->time + 0.2f;
    }
    if ((m_afButtonPressed & IN_ATTACK) && pev->iuser1 != 3) {         // próximo alvo
        Spectator_FindNextPlayer(false);
        m_flNextObserverInput = gpGlobals->time + 0.2f;
    }
    if ((m_afButtonPressed & IN_ATTACK2) && pev->iuser1 != 3) {        // alvo anterior (0x800 = byte1 & 8)
        Spectator_FindNextPlayer(true);
        m_flNextObserverInput = gpGlobals->time + 0.2f;
    }
}

void CBasePlayer::Spectator_SetMode(int iMode)
{
    if (iMode == pev->iuser1) return;
    if ((unsigned)(iMode - 1) > 5) iMode = 4;                         // fora de 1..6 vira 4
    if (iMode != 3 && iMode != 5) {                                   // modos que precisam de alvo
        if (!m_hObserverTarget) {
            Spectator_FindNextPlayer(false);
            if (!m_hObserverTarget) {
                ClientPrint(pev, HUD_PRINTCENTER, "#Spec_NoTarget");
                iMode = 3;
            }
        }
    }
    pev->iuser1 = iMode;
    if (iMode != 3 && iMode != 5) {
        CBaseEntity *pTarget = m_hObserverTarget;
        pev->iuser2 = ENTINDEX(pTarget->edict());
    } else {
        pev->iuser2 = 0;
    }
}

void CBasePlayer::StopSpectator(void)
{
    if (!pev->iuser1 && !pev->iuser2) return;
    MESSAGE_BEGIN(MSG_ALL, gmsgSpectator);
        WRITE_BYTE(ENTINDEX(edict()));
        WRITE_BYTE(0);
    MESSAGE_END();
    pev->iuser2 = 0;
    pev->iuser1 = 0;
    m_hObserverTarget = NULL;
    m_iHideHUD &= 0xf6;                                               // [OK] tira os bits 1 e 8 (ligados em StartSpectator)
}

void CBasePlayer::StartSpectator(Vector vecPosition, Vector vecViewAngle)
{
    if (pev->iuser1) return;
    if (f_328) StopObserving();

    MESSAGE_BEGIN(MSG_PAS, SVC_TEMPENTITY, pev->origin);              // [?] TE 125 próprio do ESF (cliente)
        WRITE_BYTE(125);
        WRITE_BYTE(ENTINDEX(edict()) & 0xff);
    MESSAGE_END();

    if (m_pActiveItem) m_pActiveItem->Holster(0);                     // [?] vfunc +0x104
    EHANDLE &hGrab = *(EHANDLE *)((char *)this + 0x90c);              // [?] entidade segurada (soltada com Use(this, this, USE_OFF, 0))
    if ((CBaseEntity *)hGrab) {
        ((CBaseEntity *)hGrab)->Use(this, this, USE_OFF, 0);          // [?] vfunc +0xb8
        hGrab = NULL;
    }
    if (CanFly()) RemoveSpecialModes();                               // [?] vfunc +0x8c (vivo?)
    SetSuitUpdate(NULL, FALSE, 0);

    MESSAGE_BEGIN(MSG_ONE, gmsgCurWeapon, NULL, pev);
        WRITE_BYTE(0); WRITE_BYTE(0xff); WRITE_BYTE(0xff);
    MESSAGE_END();
    m_iClientFOV = 0;                                                 // +0x93c
    m_iFOV = 0;                                                       // +0x938
    pev->fov = 0;
    MESSAGE_BEGIN(MSG_ONE, gmsgSetFOV, NULL, pev);
        WRITE_BYTE(0);
    MESSAGE_END();

    m_iHideHUD = 9;                                                   // [OK] +0x930: esconde arma e vida
    m_afPhysicsFlags |= PFLAG_OBSERVER;
    pev->effects = EF_NODRAW;
    pev->view_ofs = g_vecZero;
    pev->v_angle = vecViewAngle;
    pev->angles = pev->v_angle;
    pev->fixangle = 1;
    pev->solid = SOLID_NOT;
    pev->takedamage = DAMAGE_NO;
    pev->movetype = MOVETYPE_NONE;
    pev->deadflag = DEAD_RESPAWNABLE;
    pev->health = 1;
    pev->team = 0;
    pev->playerclass = 0;
    m_szTeamName[0] = 0;                                              // [?] byte +0x99c
    PFI(0x8fc) = 1;                                                   // [?] nome desconhecido

    MESSAGE_BEGIN(MSG_ALL, gmsgTeamInfo);
        WRITE_BYTE(ENTINDEX(edict()));
        WRITE_STRING("");
    MESSAGE_END();
    MESSAGE_BEGIN(MSG_ALL, gmsgScoreInfo);
        WRITE_BYTE(ENTINDEX(edict()));
        WRITE_SHORT((int)pev->frags);
        WRITE_SHORT(m_iDeaths);
        WRITE_SHORT(f_738);
        WRITE_SHORT(0);
        WRITE_SHORT(0);
    MESSAGE_END();

    RemoveAllItems(FALSE);
    UTIL_SetOrigin(pev, vecPosition);
    m_flNextObserverInput = 0;
    Spectator_SetMode(1);
    MESSAGE_BEGIN(MSG_ALL, gmsgSpectator);
        WRITE_BYTE(ENTINDEX(edict()));
        WRITE_BYTE(1);
    MESSAGE_END();
}

void CBasePlayer::StartObserving(void)
{
    if (f_328) return;
    if (PFI(0x344)) UTIL_ScreenFade(this, Vector(255, 255, 255), 0, 0, 255, 0);   // [?] campo +0x344 (efeito de tela ativo)
    if (f_770) Descend(1);
    if (f_330) StopPowerUp();
    if (m_fBlocking) StopBlock();
    if (m_fFlying) StopFly();
    if (m_fPoweredUp) StopTurbo();
    if (f_37c) f_37c = 0;

    f_328 = 1;
    pev->effects |= EF_NODRAW;
    EnableControl(FALSE);
    RemoveAllItems(TRUE);

    MESSAGE_BEGIN(MSG_ONE, gmsgChangeView, NULL, pev);
        WRITE_BYTE(1); WRITE_BYTE(1);
    MESSAGE_END();

    edict_t *pentSpot = FIND_ENTITY_BY_STRING(NULL, "classname", "info_intermission");
    if (FNullEnt(pentSpot) || !OFFSET(pentSpot)) {                    // sem câmera no mapa: olha de cima
        TraceResult tr;
        Vector vecEnd = pev->origin + Vector(0, 0, 128);
        UTIL_TraceLine(pev->origin, vecEnd, ignore_monsters, edict(), &tr);
        Vector vecPos = tr.vecEndPos;
        Vector vecAng = UTIL_VecToAngles(tr.vecEndPos - pev->origin);
        StartObserver(vecPos, vecAng);
        return;
    }
    int n = RANDOM_LONG(0, 3);                                        // escolhe uma das câmeras
    while (n-- > 0) {
        edict_t *pNext = FIND_ENTITY_BY_STRING(pentSpot, "classname", "info_intermission");
        if (!FNullEnt(pNext)) pentSpot = pNext;
    }
    StartObserver(pentSpot->v.origin, pentSpot->v.v_angle);
}

void CBasePlayer::StopObserving(void)
{
    if (!f_328) return;
    MESSAGE_BEGIN(MSG_ONE, gmsgChangeView, NULL, pev);
        WRITE_BYTE(3); WRITE_BYTE(0);
    MESSAGE_END();
    f_328 = 1;
    m_afPhysicsFlags |= PFLAG_OBSERVER;
    EnableControl(TRUE);
    pev->effects &= ~EF_NODRAW;
    f_328 = 0;
    m_afPhysicsFlags &= ~PFLAG_OBSERVER;
    pev->button = 0;
    m_iRespawnFrames = 0;                                             // +0x988 (float)
    respawn(pev, FALSE);
    pev->nextthink = -1;
}
