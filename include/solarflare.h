// solarflare.h -- CSolarFlare (Taiyoken / flash solar). RECUPERADO de decomp_raw/CSolarFlare.
#pragma once
class CSolarFlare : public CBasePlayerWeapon
{
public:
    int  m_fUsed;                         // +0xc4 [OK] zerado no Deploy; testado no inicio de PrimaryAttack
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 6; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0) {}
    void PrimaryAttack(void);
    void EmitShootSound(void);
};
