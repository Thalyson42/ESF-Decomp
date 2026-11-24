// aura.h -- CAura (entidade de aura de ki que segue o jogador). RECUPERADO de decomp_raw/CAura.
#pragma once
class CAura : public CBaseAnimating
{
public:
    // m_pPlayer em +0x2a8 e m_usTrailSprite em +0x2ac [OK] (acessados por offset: a base ESF e maior que a do SDK)
    CBasePlayer *Player(void)    { return *(CBasePlayer **)((char *)this + 0x2a8); }
    void  Spawn(void);
    void  Precache(void);
    int   TakeDamage(entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType);
    static CAura *Create(CBasePlayer *pPlayer);
    void  Destroy(void);
    void  RemoveThink(void);
    void  SetColor(void);
};
