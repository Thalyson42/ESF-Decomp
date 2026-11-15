// gallitgun.h -- RECUPERADO À MÃO (ESF 1.2.3). Ver kamehameha.h para as ressalvas de layout.
#pragma once
#include "controlledweapon.h"
class CSprite;
class CGallitGun : public CControlledBeam
{
public:
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
    // GrowChargeSprite: não existe -> usa CControlledBeam::GrowChargeSprite
    unsigned short m_usTrailSprite;      // +0xcc
    unsigned short m_usSpriteA, m_usSpriteB, m_usSpriteAStart, m_usSpriteBStart; // +0xce..+0xd4
    CSprite *m_pChargeSprite;            // +0x20c
};
