// dragonball.h -- esfera do dragao no chao / arremessada. RECUPERADO de decomp_raw/CDragonBall.
#pragma once
extern cvar_t dbrespawntime;   // [OK] cvar usado por Stonify (campo value)

class CDragonBall : public CBaseEntity
{
public:
    int   m_fStone;        // +0x64 [OK] lido em PickupTouch (nao pega se setado); quem seta nao foi visto [?]
    float m_flDropTime;    // +0x68 [OK] PickupTouch: apos 0.5 s limpa o dono; ThrowDragonBall seta = time
    int   m_iNumber;       // +0x6c [OK] numero da esfera 1..7
    short m_iTrailSprite;  // +0x70 [OK] sprites/dragonballtrail.spr
    float m_flSpreadLtime; // +0x74 [?] SpreadThink compara com pev->ltime

    void Spawn(void);
    void Precache(void);
    void PickupTouch(CBaseEntity *pOther);
    void Glow(void);
    void UnGlow(void);
    void SpreadThink(void);
    void Spread(void);
    void Stonify(void);
    void UnStoneThink(void);
    static CDragonBall *CreateDragonBall(Vector vecOrigin, int nr);
    static CDragonBall *ThrowDragonBall(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int nr);
};
