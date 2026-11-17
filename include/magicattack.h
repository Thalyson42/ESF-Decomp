// magicattack.h -- CMagicAttack / CBeamAttack / CGuidedAttack (ataques de ki). RECUPERADO À MÃO.
// Hierarquia (pela vtable): CMagicAttack <- CExplodingAttack <- CBeamAttack <- CGuidedAttack / CKiAttack.
// Slots de vtable confirmados (offset = (slot+2)*4): 125=Remove(0x1fc) 126=Explode(0x200) 127=GetExplosionRadius(0x204) 128=Release(0x208).
#pragma once

class CMagicAttack : public CBaseMonster   // [?] base pela heurística da vtable
{
public:
    float m_flSpeed;      // +0x2a8  módulo da velocidade inicial ([OK]; usado por CExplodingAttack/CBeamAttack)
    virtual void Spawn(void);
    virtual void Precache(void);
    virtual int  BloodColor(void) { return DONT_BLEED; }
    virtual void Remove(void);                  // slot 125
    void SetDamage(int iDamage);                // pev->dmg = min(iDamage, 9999)
    void NormalThink(void);
    void AnimateSprite(void);
    void DrawBubbles(void);
    BOOL BlocksAttack(CBasePlayer *pPlayer);
    void SwatAway(CBasePlayer *pPlayer, int iDir);   // slot 124 [OK]
};
