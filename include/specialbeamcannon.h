// specialbeamcannon.h -- RECUPERADO de decomp_raw/CSpecialBeamCannon (Piccolo/Cell). Derivada de CBasePlayerWeapon.
#pragma once
class CSpecialBeamCannonAttack { public: static void ShootSbc(CBasePlayer *pPlayer, Vector *pvecStart, Vector *pvecVel, int iDamage, ...); };  // [?] assinatura (recebe tambem 6 sprites/shorts + 4)
class CSpecialBeamCannon : public CBasePlayerWeapon
{
public:
    // [?] campos do tail ESF (offsets: 0xc4 carga, 0xc8 max, 0xcc, 0xd0, 0xd4 nome[16], 0x1d4 sprite, 0x1d8.. sprites)
    int   m_iCharge;  int f_0c8;  float f_0cc;  int f_0d0;  char m_szWeaponName[16];
    int   f_1d4;
    short m_usTrail, m_usOrbitTrail, m_usSpriteA, m_usSpriteB, m_usOrbitA, m_usOrbitB;   // +0x1d8..+0x1e2
    float GetPowerRatio(void);              // CBasePlayerWeapon::GetPowerRatio [OK]
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 4; }
    void InitChargeSprite(void);
    void EnableChargeSprite(void);
    void DisableChargeSprite(void);
    void RemoveChargeSprite(void);
    void EmitChargeSound(void);
    void EmitShootSound(void);
    void ShootAttack(void);
};
