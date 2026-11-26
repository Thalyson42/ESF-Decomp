// player_misc4.cpp -- métodos pequenos do CBasePlayer (iguais ao SDK ou quase). RECUPERADO À MÃO.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "esf_classes.h"

#ifndef TRAIN_NEW
#define TRAIN_NEW 0xc0
#endif
#define PFI(off) (*(int *)((char *)this + (off)))
#define PFF(off) (*(float *)((char *)this + (off)))

int CBasePlayer::TakeHealth(float flHealth, int bitsDamageType)
{
    return CBaseMonster::TakeHealth(flHealth, bitsDamageType);
}

// Barnacle: mata o jogador de vez (vida + armadura de dano, DMG_SLASH | DMG_ALWAYSGIB = 0x2004).
void CBasePlayer::BarnacleVictimBitten(entvars_t *pevBarnacle)
{
    TakeDamage(pevBarnacle, pevBarnacle, pev->health + pev->armorvalue, DMG_SLASH | DMG_ALWAYSGIB);
}

void CBasePlayer::BarnacleVictimReleased(void)
{
    m_afPhysicsFlags &= ~PFLAG_ONBARNACLE;
}

BOOL CBasePlayer::FBecomeProne(void)
{
    m_afPhysicsFlags |= PFLAG_ONBARNACLE;
    return TRUE;
}

void CBasePlayer::EnableControl(BOOL fControl)
{
    if (!fControl) pev->flags |= FL_FROZEN;
    else           pev->flags &= ~FL_FROZEN;
}

// Força o reenvio de todo o estado do HUD ao cliente.
void CBasePlayer::ForceClientDllUpdate(void)
{
    m_iClientHealth = -1;                                           // +0x928
    m_iClientBattery = -1;                                          // +0x92c
    m_iTrain |= TRAIN_NEW;                                          // +0x904
    PFI(0x908) = 0;                                                 // [?] m_fWeapon: força o envio da arma
    m_fKnownItem = FALSE;                                           // +0x308
    m_fInitHUD = TRUE;                                              // +0x8fc
    PFI(0x374) = 1;                                                 // [?] nome desconhecido (extra do ESF)
    UpdateClientData_Hook();                                        // vtable +0x204
}

int CBasePlayer::Illumination(void)
{
    int iIllum = GETENTITYILLUM(ENT(pev));
    iIllum += m_iWeaponFlash;
    return (iIllum > 255) ? 255 : iIllum;
}

// iBody é aplicado em pev->body quando flTime passar (ver CheckSubModelStatus).
void CBasePlayer::SetBodyPart(float flTime, int iBody)
{
    PFF(0x598) = flTime;
    PFI(0x584) = iBody;
}

void CBasePlayer::SetCustomDecalFrames(int nFrames)
{
    if (nFrames > 0 && nFrames < 8) m_nCustomSprayFrames = nFrames;   // +0x994
    else                            m_nCustomSprayFrames = -1;
}

int CBasePlayer::GetCustomDecalFrames(void)
{
    return m_nCustomSprayFrames;
}
