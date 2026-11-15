// magicattack.h -- CMagicAttack / CBeamAttack / CGuidedAttack (ataques de ki). RECUPERADO À MÃO.
// Hierarquia (pela vtable): CMagicAttack <- CExplodingAttack <- CBeamAttack <- CGuidedAttack / CKiAttack.
// Slots de vtable confirmados (offset = (slot+2)*4): 125=Remove(0x1fc) 126=Explode(0x200) 127=GetExplosionRadius(0x204) 128=Release(0x208).
#pragma once

class CMagicAttack : public CBaseMonster   // [?] base pela heurística da vtable
{
public:
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

// Campos da CExplodingAttack/CGuidedAttack usados pelo struggle e pela arma:
//   +0x2ac m_fInStruggle   +0x2b0 m_fInBlockStruggle [?]   +0x2b8 m_flStruggleRatio   +0x2c0 m_pStruggle
//   +0x2c8 (setado por CGuidedAttack::Release) [?]  +0x2cc m_fStuck (grudou na parede: habilita beam jump)
//   +0x2dc m_fReleased (setado por CGuidedAttack::Release)
