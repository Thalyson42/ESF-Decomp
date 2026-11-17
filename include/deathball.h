// deathball.h -- RECUPERADO de decomp_raw/CDeathBall (Frieza). Derivada de CBasePlayerWeapon [OK: usa CBasePlayerWeapon::GetPowerRatio]
#pragma once
class CDeathBallAttack { public: static void ShootDeathBall(CBasePlayer *pPlayer, Vector *pvecStart, Vector *pvecVel, int iDamage); };  // [?] assinatura
class CDeathBall : public CBasePlayerWeapon
{
public:
    // [?] campos do tail ESF de CBasePlayerWeapon (offsets: 0xc4 carga, 0xc8 max, 0xcc, 0xd0, 0xd4 nome, 0x1d4 sprite, 0x1d8 modelo)
    int   m_iCharge;  int f_0c8;  float f_0cc;  int f_0d0;  char m_szWeaponName[16];
    int   f_1d4;  int f_1d8;  float f_1e0;
    float GetPowerRatio(void);              // CBasePlayerWeapon::GetPowerRatio [OK]
    virtual void vfunc_174(void);           // [?] slot 0x174 (chamado em EnableChargeSprite)
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 6; }
    void InitChargeSprite(void);
    void GrowChargeSprite(void);
    void EnableChargeSprite(void);
    void DisableChargeSprite(void);
    void RemoveChargeSprite(void);
    void EmitChargeSound(void);
    void EmitShootSound(void);
    void ShootAttack(void);
};
