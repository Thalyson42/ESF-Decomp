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

class CBeamAttack : public CExplodingAttack
{
public:
    void AddEntEntTrail(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, Vector vecOffset);
    virtual void Remove(void);                  // slot 125
};

class CGuidedAttack : public CBeamAttack            // feixe guiado pelo olhar do dono (Kamehameha controlado etc.)
{
public:
    // [OK] 16 argumentos pelo nome mangled: (entvars_t*, Vector, Vector, int, char*, float, int, short x5, int, float, int, int)
    static CGuidedAttack *ShootGuidedMagic(entvars_t *pevShooter, Vector vecOrigin, Vector vecDir, int iDamage,
                                           char *szClassname, float flScale, int iExplosionType,
                                           short s1, short s2, short s3, short s4, short s5,
                                           int iRadiusMult, float flTurnRate, int iTrail1, int iTrail2);
    virtual void Release(void);
    virtual void PowerStruggleThink(void);
    void StopTouch(CBaseEntity *pOther);
    void FollowThink(void);

    float m_flSpeed;      // +0x2a8  módulo da velocidade inicial
    float m_flTurnRate;   // +0x2e0  [OK] 0..1: quanto a direção é puxada para a mira do dono por tick
};
