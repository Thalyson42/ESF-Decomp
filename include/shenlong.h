// shenlong.h -- o dragao Shenlong (invocado no modo CTDB). RECUPERADO de decomp_raw/CShenlong.
#pragma once
class CDragonBall;
class CShenlong : public CBaseAnimating
{
public:
    CSprite *m_pEyes[2];       // +0x2a8 [OK] sprites/shens_eyes.spr (brilho dos olhos, attachments 1 e 2)
    int      m_iAlpha;         // +0x2b0 [OK] renderamt dos olhos (pulsa)
    int      m_fRising;        // +0x2b4 [OK] 1 = alpha subindo
    int      m_iPulses;        // +0x2b8 [OK] pulsos restantes (6); <0 = desejo concedido
    CDragonBall *m_pBalls[7];  // +0x2bc [OK] copia do array do gamerules

    void Spawn(void);
    void Precache(void);
    void Touch(CBaseEntity *pOther);
    void PissedThink(void);
    void WishGrantThink(void);
    void GrantWish(void);
    static CShenlong *CreateShenlong(Vector vecOrigin, Vector vecDir, CDragonBall **ppBalls);
};
