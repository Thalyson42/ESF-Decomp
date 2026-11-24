// regeneration.h -- CRegeneration (arma de cura do Piccolo/Dende). RECUPERADO de decomp_raw/CRegeneration.
#pragma once
class CRegeneration : public CBasePlayerWeapon
{
public:
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 7; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void PrimaryAttack(void);
    void WeaponIdle(void);
    void StopRegen(void);                 // [?] helper: o corpo de Holster/WeaponIdle e identico
};
