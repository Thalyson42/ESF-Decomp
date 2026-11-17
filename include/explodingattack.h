// explodingattack.h -- CExplodingAttack: ataque que explode ao tocar; participa de power/block struggle. RECUPERADO À MÃO.
#pragma once
#include "magicattack.h"

class CPowerStruggle;
enum { ESF_CLASS_KIATTACK = 1 };   // Classify() deste ataque devolve 1; 15 e 16 aparecem em ExplodeTouch [?]

class CExplodingAttack : public CMagicAttack
{
public:
    int   f_2c8;          // +0x2c8 [?]
    virtual void Spawn(void);
    virtual void Precache(void);
    virtual int  Classify(void) { return ESF_CLASS_KIATTACK; }
    virtual void Explode(void);                    // slot 126 (+0x200)
    virtual float GetExplosionRadius(void);        // slot 127
    virtual void Release(void);                    // slot 128 (+0x208)
    virtual void SwatAway(CBasePlayer *pPlayer, int iDir);   // slot 124 (+0x1f8): Release() + CMagicAttack::SwatAway
    void ExplodeTouch(CBaseEntity *pOther);
    void Vaporize(void);
    void StartPowerStruggle(CExplodingAttack *pOther);
    void PowerStruggleThink(void);
    void BlockStruggleThink(void);
    void DrawExplosionFX(int iType, Vector vecPos);

    // campos (offsets do .so)
    int   m_fInStruggle;        // +0x2ac
    int   m_fInBlockStruggle;   // +0x2b0   (preso a um jogador que bloqueia)
    int   f_2b4;                // +0x2b4   (zerado em Spawn)
    float m_flStruggleRatio;    // +0x2b8
    CBaseEntity *m_pBlocker;    // +0x2bc   jogador que bloqueou
    CPowerStruggle *m_pStruggle;// +0x2c0
    int   m_fVaporized;         // +0x2c4   vaporizado (por um ataque >5x mais forte)
    int   m_fRemoveOnVaporize;  // +0x2c8   [?] 1 = Vaporize remove de vez; 0 = só some (EF_NODRAW)
    int   m_fStuck;             // +0x2cc   grudou numa parede (StopTouch)
    int   m_iRadiusMult;        // +0x2d0   raio = m_iRadiusMult * pev->dmg (máx. 4000)
    float f_2d8;                // +0x2d8   (zerado ao iniciar o block struggle)
    int   m_iExplosionType;     // +0x2d4   (byte enviado em gmsgExplosion)
    int   m_fReleased;          // +0x2dc
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

    float m_flTurnRate;   // +0x2e0  [OK] 0..1: quanto a direção é puxada para a mira do dono por tick
};
