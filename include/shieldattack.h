// shieldattack.h -- CShieldAttack (barreira de ki do Gohan) + CShield/CShieldAtk. RECUPERADO de decomp_raw/CShieldAttack, CShield, CShieldAtk
#pragma once
class CShield : public CBaseEntity     // [?] base (decomp_raw/CShield)
{
public:
    char  m_fBroken;                   // +0x6c [?] marcado quando o escudo foi destruido
    float m_flPower;                   // +0x1e0 [?] forca acumulada (vira o dano do disparo)
    static CShield *CreateShield(CBasePlayer *pPlayer);
    void Remove(void);
};
class CShieldAtk : public CBaseEntity
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
