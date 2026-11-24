// fingerlaser.h -- CFingerLaser (Piccolo "Special Beam"/dedo laser). RECUPERADO de decomp_raw/CFingerLaser.
#pragma once
class CFingerLaser : public CBasePlayerWeapon
{
public:
    int  m_fHand;                         // +0xc4 [OK] alterna a animacao (5/6) a cada tiro
    float GetPowerRatio(void) { return m_pPlayer->GetPowerRatio(); }
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 4; }
    BOOL Deploy(void);
    void PrimaryAttack(void);             // laser que atravessa tudo (200 ki... 150 ki)
    void SecondaryAttack(void);           // laser que explode no 1o alvo (200 ki)
    void EmitShootSound(void);
    CBeam *MakeBeam(Vector vecEnd);       // [?] helper: o corpo se repete em Primary e Secondary
};
