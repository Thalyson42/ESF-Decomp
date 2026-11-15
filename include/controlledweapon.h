// controlledweapon.h -- CControlledBeam (arma de feixe controlável: Kamehameha, Gallit Gun...)
// RECUPERADO À MÃO (ESF 1.2.3). Offsets = do hl_i386.so; nomes dos campos são deduzidos do uso.
#pragma once
#include "weapons.h"

class CControlledBeam : public CBasePlayerWeapon
{
public:
    // --- virtuais (ordem da vtable: ver src/headers/CControlledBeam.h) ---
    virtual void Precache(void);
    virtual BOOL Deploy(void);
    virtual BOOL CanHolster(void);
    virtual void Holster(int skiplocal = 0);
    virtual void PrimaryAttack(void);
    virtual void SecondaryAttack(void);
    virtual void WeaponIdle(void);
    virtual void CreateBeam(Vector vecOrigin, Vector vecDir, float flSpeed);  // assinatura [?]: (G6Vector,T1,f)
    virtual void EmitControlSound(void);
    virtual void EmitChargeSound(void);
    virtual void EmitShootSound(void);
    virtual void InitChargeSprite(void);
    virtual void EnableChargeSprite(void);
    virtual void DisableChargeSprite(void);
    virtual void GrowChargeSprite(void);
    virtual void RemoveChargeSprite(void);
    virtual void Shoot(void);
    virtual BOOL CanBeamJump(void);

    // --- não virtuais ---
    void Charge(void);
    void ReleaseAttack(void);
    void StopAiming(void);
    void StartBeamJump(void);
    void StopBeamJump(void);
    void EnableBeamJump(void);
    void DisableBeamJump(void);
    void UpdateBeamJumpStatus(void);
    void CheckWallJump(void);
    void SilenceWeaponSounds(void);   // canal 1
    void SilenceVoice(void);          // canal 2
    void SilenceBodySounds(void);     // canal 4

    // --- campos (offsets no .so) ---
    int         m_iAttackState;       // +0xc4: 0 parado, 1 carregando, 2 disparado/controlando
    CBaseEntity *m_pBeam;             // +0xc8: o feixe atual
    int         m_iSavedMoveType;     // +0x200 (usado em StopBeamJump)
    int         m_fBeamJumping;       // +0x204
    int         m_fBeamJumpFlying;    // +0x208
    int         m_iCharge;            // +0xd8  carga atual (ticks)
    int         m_iMaxCharge;         // +0xdc
    int         m_iBeamSpeed;         // +0xe0
    int         m_iKiCost;            // +0xe4  ki por tick
    int         m_iDmgPerCharge;      // +0xe8
    int         f_0ec;                // +0xec  (4 nas duas armas)
    float       m_flChargeSpeedMult;  // +0xf0  (0.5)
    char        m_szWeaponName[12];   // +0xf4  "kamehameha" / "gallitgun"
    // herdados e confirmados pela save-table: m_pPlayer(+0x80) m_iId(+0x88) m_flNextPrimaryAttack(+0x9c)
    //   m_flNextSecondaryAttack(+0xa0) m_flTimeWeaponIdle(+0xa4) m_iClip(+0xb0) m_iDefaultAmmo(+0xc0)
};
