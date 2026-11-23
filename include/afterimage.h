// afterimage.h -- CAfterImage (rastro de imagem fantasma) e CDragonBallPoint (spawn item_dragonball). RECUPERADO.
#pragma once
class CAfterImage : public CBaseEntity
{
public:
    float m_flSpawnTime;    // +0x64 [OK]
    void Spawn(void);
    void FadeOutThink(void);
};
class CDragonBallPoint : public CPointEntity    // item_dragonball: ponto de spawn invisivel das esferas
{
public:
    void Spawn(void);
};
