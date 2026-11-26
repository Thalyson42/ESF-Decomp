// player_misc3.cpp -- UpdatePlayerSound, Precache, TraceAttack, BodyTarget, SwitchWeapon do CBasePlayer.
// As quatro primeiras são como no SDK 2.x com pequenas mudanças do ESF (ver comentários). RECUPERADO À MÃO.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "soundent.h"
#include "nodes.h"
#include "esf_classes.h"

#ifndef TRAIN_NEW
#define TRAIN_NEW 0xc0
#endif
#define PFI(off) (*(int *)((char *)this + (off)))
extern DLL_GLOBAL BOOL g_fGameOver;
extern int gInitHUD;
extern CGraph WorldGraph;
void LinkUserMessages(void);
void SpawnBlood(Vector vecSpot, int bloodColor, float flDamage);

// Som que o jogador emite (passos/arma) para a IA dos monstros. Igual ao SDK; usa +0x918 (m_fNoPlayerSound).
void CBasePlayer::UpdatePlayerSound(void)
{
    int iBodyVolume, iVolume;
    CSound *pSound = CSoundEnt::SoundPointerForIndex(CSoundEnt::ClientSoundIndex(edict()));
    if (!pSound) { ALERT(at_console, "Client lost reserved sound!\n"); return; }
    pSound->m_iType = 0;                                            // [OK] +0xc = 0 (bits_SOUND_* recalculado abaixo)

    if (pev->flags & FL_ONGROUND) {
        iBodyVolume = (int)pev->velocity.Length();
        if (iBodyVolume > 512) iBodyVolume = 512;
    } else iBodyVolume = 0;
    if (pev->button & IN_JUMP) iBodyVolume += 100;

    if (m_iWeaponVolume > iBodyVolume) {
        m_iTargetVolume = m_iWeaponVolume;
        pSound->m_iType |= bits_SOUND_COMBAT;
    } else {
        m_iTargetVolume = iBodyVolume;
    }
    m_iWeaponVolume = (int)((double)m_iWeaponVolume - gpGlobals->frametime * 250.0);

    iVolume = pSound->m_iVolume;
    if (m_iTargetVolume > iVolume) iVolume = m_iTargetVolume;
    else if (iVolume > m_iTargetVolume) {
        iVolume = (int)((double)iVolume - gpGlobals->frametime * 250.0);
        if (iVolume < m_iTargetVolume) iVolume = 0;
    }
    if (PFI(0x918)) iVolume = 0;                                    // [?] m_fNoPlayerSound
    if (gpGlobals->time > m_flStopExtraSoundTime) m_iExtraSoundTypes = 0;

    pSound->m_vecOrigin = pev->origin;
    pSound->m_iType |= (bits_SOUND_PLAYER | m_iExtraSoundTypes);
    pSound->m_iVolume = iVolume;

    m_iWeaponFlash = (int)((double)m_iWeaponFlash - gpGlobals->frametime * 256.0);
    if (m_iWeaponFlash < 0) m_iWeaponFlash = 0;
}

// Como no SDK, sem o contador geiger; chama LinkUserMessages (o ESF registra as mensagens aqui).
void CBasePlayer::Precache(void)
{
    if (WorldGraph.m_fGraphPresent && !WorldGraph.m_fGraphPointersSet) {
        ALERT(at_console, WorldGraph.FSetGraphPointers() ? "**Graph Pointers Set!\n" : "**Graph pointers were not set!\n");
    }
    m_bitsDamageType = 0;                                           // +0x268
    m_bitsHUDDamage = -1;                                           // +0x8f8
    m_iClientBattery = -1;                                          // +0x92c
    m_iTrain = TRAIN_NEW;                                           // +0x904 = 192
    LinkUserMessages();
    m_iUpdateTime = 5;                                              // +0x924
    if (gInitHUD) m_fInitHUD = TRUE;                                // +0x8fc
}

// ESF: sem multiplicador por hitgroup (o SDK tem); só marca o hitgroup e sangra.
void CBasePlayer::TraceAttack(entvars_t *pevAttacker, float flDamage, Vector vecDir, TraceResult *ptr, int bitsDamageType)
{
    if (pev->takedamage == 0) {
        AddMultiDamage(pevAttacker, this, flDamage, bitsDamageType);
        return;
    }
    m_LastHitGroup = ptr->iHitgroup;                                // +0x17c
    SpawnBlood(ptr->vecEndPos, BloodColor(), flDamage);
    TraceBleed(flDamage, vecDir, ptr, bitsDamageType);
    AddMultiDamage(pevAttacker, this, flDamage, bitsDamageType);
}

// BodyTarget(posSrc) = Center() + pev->view_ofs * RANDOM_FLOAT(0.5, 1.1): igual ao SDK (definido inline em player.h).

// Troca a arma ativa: só se der para embainhar a atual e sacar a nova.
BOOL CBasePlayer::SwitchWeapon(CBasePlayerItem *pWeapon)
{
    if (!pWeapon->CanDeploy()) return FALSE;                        // vfunc +0xf8
    if (m_pActiveItem) {
        if (!m_pActiveItem->CanHolster()) return FALSE;             // vfunc +0x100
        m_pActiveItem->Holster(0);                                  // vfunc +0x104
        PFI(0x778) = 0;                                             // zera gatilho de animação (ver player_anim.cpp)
        PFI(0x784) = 0;
    }
    m_pActiveItem = pWeapon;
    pWeapon->Deploy();                                              // vfunc +0xfc
    return TRUE;
}
