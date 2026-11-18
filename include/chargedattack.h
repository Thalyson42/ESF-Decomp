// chargedattack.h -- CChargedAttack: base das armas de carga simples (CDeathBall, CSpecialBeamCannon...). RECUPERADO de decomp_raw/CChargedAttack
#pragma once
class CChargedAttack : public CBasePlayerWeapon
{
public:
    int   m_iCharge;          // +0xc4 [OK] ticks de carga
    int   m_iMaxCharge;       // +0xc8 [OK]
    float f_0cc;              // +0xcc
    int   m_iKiCost;          // +0xd0 [OK] ki por tick (UseKi)
    char  m_szWeaponName[16]; // +0xd4 [OK] nome do viewmodel passado a DefaultDeploy
    // virtuais, na ordem da vtable (slots 0x15c..0x17c) [OK pela ordem das chamadas]
    virtual void Shoot(void);                 // 0x15c
    virtual void EmitChargeSound(void);       // 0x160
    virtual void EmitShootSound(void);        // 0x164
    virtual void InitChargeSprite(void);      // 0x168
    virtual void EnableChargeSprite(void);    // 0x16c
    virtual void DisableChargeSprite(void);   // 0x170
    virtual void GrowChargeSprite(void);      // 0x174
    virtual void RemoveChargeSprite(void);    // 0x178
    virtual void ShootAttack(void);           // 0x17c
    float GetPowerRatio(void);                // CBasePlayerWeapon::GetPowerRatio
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void PrimaryAttack(void);
    void WeaponIdle(void);
    void SilenceVoice(void);
    void SilenceWeaponSounds(void);
};
