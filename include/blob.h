// blob.h -- CBlob: bolha de ki (Spirit Bomb/absorcao) que cresce ao engolir ataques. RECUPERADO de decomp_raw/CBlob.
#pragma once
class CBlob : public CBaseEntity
{
public:
    int   m_iSize;          // +0x64 [OK] raio (50 inicial, max 200)
    float m_flLastGrow;     // +0x68 [OK] ultima vez que cresceu/encolheu; apos 7 s sem crescer, explode
    void Spawn(void);
    void Precache(void) {}
    int  Classify(void) { return 15; }
    static CBlob *CreateBlob(CBasePlayer *pPlayer, Vector vecPos);
    void CreateExplosion(void);
    void UpdateExplosion(void);
    void SizeInc(int iInc);
    void BlobThink(void);
    void BlobTouch(CBaseEntity *pOther);
    void Remove(void);
};
