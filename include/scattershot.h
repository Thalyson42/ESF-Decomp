// scattershot.h -- CScatterShot (rajada de ki que converge no alvo) + CScatterShotAttack. RECUPERADO de decomp_raw/CScatterShot*
#pragma once
#include "explodingattack.h"
class CScatterShotAttack : public CExplodingAttack
{
public:
    Vector m_vecContractPos;     // +0x304 [OK] ponto de convergencia
    float  m_flContractDist;     // +0x310 [OK] ultima distancia ao ponto
    int    m_fContracting;       // +0x314 [OK] 1 = em convergencia
    static CScatterShotAttack *ShootScatterShotAttack(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity, int iDamage, short sSpriteA, short sSpriteB, short sSpriteTrail);
    void ContractThink(void);
};
class CScatterShot : public CBasePlayerWeapon
{
public:
    CScatterShotAttack *m_pShot[8];   // +0xc4 [OK] disparos ativos (max 8)
    int m_iShots;                     // +0xe4 [OK]
    unsigned short m_usSpriteA, m_usSpriteB, m_usSpriteTrail;   // +0xe8,+0xea,+0xec [OK]
    float GetPowerRatio(void);
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 7; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void WeaponIdle(void);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
    void AddShotEntry(CScatterShotAttack *pShot);
    void CleanUpShotList(void);
    void FreeShot(CScatterShotAttack *pShot);
};
