// shenlong.h -- declaracao minima (corpo ainda nao recuperado; ver src/server/shenlong.cpp)
#pragma once
class CDragonBall;
class CShenlong : public CBaseEntity
{
public:
    static CShenlong *CreateShenlong(Vector vecOrigin, Vector vecVelocity, CDragonBall **ppBalls);   // [OK] assinatura do simbolo
    void GrantWish(void);
};
