// masenko.h -- gerado por tools/gen_beam_weapon.py a partir de decomp_raw/CMasenko
#pragma once
#include "controlledweapon.h"
class CMasenko : public CControlledBeam
{
public:
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
};
