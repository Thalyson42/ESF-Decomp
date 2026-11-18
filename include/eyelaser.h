// eyelaser.h -- CEyelaser (raio dos olhos). RECUPERADO de decomp_raw/CEyelaser. Derivada de CBasePlayerWeapon.
#pragma once
class CEyelaser : public CBasePlayerWeapon
{
public:
    CBeam *m_pBeam1;        // +0xc4 [OK] laser do olho (attach 3)
    CBeam *m_pBeam2;        // +0xc8 [OK] laser do outro olho (attach 2)
    int    m_fFiring;       // +0xcc [OK]
    int    m_iShots;        // +0xd0 [OK] disparos seguidos (max 5)
    char   m_fSoundPlayed;  // +0xd4 [OK]
    float  GetPowerRatio(void);
    virtual void vf_148(void);   // [?] slot 0x148 (chamado apos 5 disparos e no SecondaryAttack)
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 5; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
    void WeaponIdle(void);
    CBeam *CreateLaser(int iAttachment);
    void DestroyLaser(CBeam *pBeam);
    void SetBeam(CBeam *pBeam);
    void SetRedEye(CBeam *pBeam);
    void ShootLaser(CBeam *pBeam, Vector vecStart, Vector vecTarget);
};
