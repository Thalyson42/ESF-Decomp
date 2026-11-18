// spiritbomb.h -- CSpiritBomb (Goku). RECUPERADO de decomp_raw/CSpiritBomb. Derivada de CBasePlayerWeapon.
#pragma once
class CSpiritBombAttack : public CBaseEntity   // [?] assinaturas (ver decomp_raw/CSpiritBombAttack)
{
public:
    static CSpiritBombAttack *CreateSpiritBomb(CBasePlayer *pPlayer, Vector *pvecPos, short sSprite);
    static void ShootSpiritBomb(CSpiritBombAttack *pBomb, Vector *pvecVel, int iDamage);                       // modo 1
    static void ShootSpiritBomb(CBasePlayer *pPlayer, Vector *pvecStart, Vector *pvecVel, int iDamage, float flScale, short sSprite);   // modo 2
    void Grow(void);
};
class CSpiritBomb : public CBasePlayerWeapon
{
public:
    int   m_iCharge;          // +0xc4 [OK] ticks de carga
    CSpiritBombAttack *m_pBomb;     // +0xc8 [OK] bola atual (entidade de ataque)
    int   m_fShoot1;          // +0xcc [OK] modo 1 (disparo direto)
    int   m_fShoot2;          // +0xd0 [OK] modo 2 (bola controlada)
    CSprite *m_pChargeSprite; // +0xd4
    int   f_0d8;              // +0xd8
    int   m_usSprite;         // +0xdc [OK] indice de spiritbomb.spr
    // virtuais da vtable (slots 0x15c..0x16c) [OK pela ordem das chamadas]
    virtual void InitChargeSprite(void);      // 0x15c
    virtual void EnableChargeSprite(void);    // 0x160
    virtual void DisableChargeSprite(void);   // 0x164
    virtual void GrowChargeSprite(void);      // 0x168
    virtual void RemoveChargeSprite(void);    // 0x16c
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 5; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void WeaponIdle(void);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
    void Shoot1(void);
    void Shoot2(void);
};
