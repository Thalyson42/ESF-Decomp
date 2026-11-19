// shieldattack.h -- CShieldAttack (barreira de ki do Gohan) + CShield/CShieldAtk. RECUPERADO de decomp_raw/CShieldAttack, CShield, CShieldAtk
#pragma once
#include "explodingattack.h"
class CShield : public CBaseEntity     // classname "Shield" [OK]; Classify() = 16
{
public:
    int  m_iSize;                      // +0x64 [OK] raio da bolha (40 -> 110); tambem enviado ao cliente
    float m_flNextGain;                // +0x68 [OK] proximo ganho de forca (a cada 1.75 s)
    char m_fBroken;                    // +0x6c [OK] 1 = escudo quebrado (dono ficou sem ki)
    // a forca acumulada do escudo fica em pev->dmg (+0x1e0)
    void Spawn(void);
    void Precache(void) {}
    int  Classify(void) { return 16; }
    static CShield *CreateShield(CBasePlayer *pPlayer);
    static CBaseEntity *GetOwner(entvars_t *pev);
    void CreateExplosion(void);
    void ExpandShieldThink(void);
    void ShieldThink(void);
    void ShieldTouch(CBaseEntity *pOther);
    void UpdateShieldClient(void);
    void Remove(void);
};
class CShieldAtk : public CExplodingAttack     // [OK] usa ExplodeTouch/NormalThink
{
public:
    static CShieldAtk *ShootShield(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity, int iDamage);
};
class CShieldAttack : public CBasePlayerWeapon
{
public:
    CShield *m_pShield;         // +0xc4 [OK]
    float    m_flStateTime;     // +0xc8 [OK] fim da carga (estado 2)
    float    m_flCooldown;      // +0xcc [OK] fim do disparo (estado 3)
    int      m_iDamage;         // +0xd0 [OK] dano do disparo (copiado da forca do escudo)
    int      m_iState;          // +0xd4 [OK] 0 nada, 1 escudo erguido, 2 carregando, 3 disparado
    float    GetPowerRatio(void);
    virtual void vf_148(void);  // [?] slot 0x148
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 5; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
    void WeaponIdle(void);
    void CreateShield(void);
    void RemoveShield(void);
    void ShootShield(void);
};
