// bodypart.h -- CBodyPart (arma do Buu que arremessa parte do corpo) e CBodyPartAttack (projetil que estrangula). RECUPERADO.
#pragma once
class CBodyPart : public CBasePlayerWeapon
{
public:
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 6; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0) {}
    void PrimaryAttack(void);
};

class CBodyPartAttack : public CMagicAttack
{
public:
    CBasePlayer *m_pVictim;     // +0x2ac [OK] jogador estrangulado
    void Spawn(void);
    static CBodyPartAttack *ShootBodyPart(entvars_t *pevOwner, Vector vecStart, Vector vecVelocity);
    void StickyTouch(CBaseEntity *pOther);
    void StrangleThink(void);
};
