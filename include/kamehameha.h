// kamehameha.h -- RECUPERADO À MÃO a partir de hl_i386.so (ESF 1.2.3) + SDK.
// Layout: os offsets (+0x..) são do binário Linux (GCC 2.95). Ao recompilar com outro
// compilador o layout muda; os offsets servem para conferência, não para o compilador.
#pragma once
#include "controlledweapon.h"   // CControlledBeam (ainda a recuperar)

class CSprite;

class CKamehameha : public CControlledBeam
{
public:
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 4; }

    void InitChargeSprite(void);
    void GrowChargeSprite(void);
    void EnableChargeSprite(void);
    void DisableChargeSprite(void);
    void RemoveChargeSprite(void);
    void EmitChargeSound(void);
    void EmitShootSound(void);

    // campos próprios (offsets verificados nas funções acima)
    unsigned short m_usTrailSprite;      // +0xcc  (204)
    unsigned short m_usKameSpriteA;      // +0xce  (206)
    unsigned short m_usKameSpriteB;      // +0xd0  (208)
    unsigned short m_usKameSpriteAStart; // +0xd2  (210)
    unsigned short m_usKameSpriteBStart; // +0xd4  (212)
    CSprite *m_pChargeSprite;            // +0x20c (524)
    // +0xd8 (216): carga atual (float usado como scale*0.015 em GrowChargeSprite;
    //              zerado em Spawn). Provavelmente herdado de CControlledBeam -> ver classe-base.
};
