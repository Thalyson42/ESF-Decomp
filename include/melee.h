// melee.h -- CMelee (arma "melee") e CSword. RECUPERADO de decomp_raw/CMelee e CSword.
#pragma once
class CMelee : public CBasePlayerWeapon
{
public:
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 1; }
    BOOL CanDeploy(void);
    BOOL Deploy(void);
    void Holster(int skiplocal = 0) {}
    void PrimaryAttack(void);
    void SecondaryAttack(void);
    void WeaponIdle(void) {}
};
class CSword : public CMelee
{
public:
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 1; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
};
