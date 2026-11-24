// envmodel.h -- CEnvModel ("env_model": modelo de mapa animado que pode ser levantado e arremessado). RECUPERADO de decomp_raw/CEnvModel.
#pragma once
class CEnvModel : public CBaseMonster
{
public:
    int   m_iState;            // +0x2a8 [OK] 0 parado, 1 sendo levantado (RotateThink ativo)
    float m_flMaxZ;            // +0x2ac [?] = maxs.z original
    float m_flMinZ;            // +0x2b0 [?] = mins.z original
    float m_flBoxA;            // +0x2b4 [?] max(maxs.x, maxs.y) original
    float m_flBoxB;            // +0x2b8 [?] min(mins.x, mins.y) original
    float m_flSize;            // +0x2bc [OK] raiz cubica do volume (escala o arremesso)
    short m_sGibModel;         // +0x2c0 [OK] "models/rockgibs.mdl"
    void  Spawn(void);
    void  Precache(void);
    void  KeyValue(KeyValueData *pkvd);
    int   TakeDamage(entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType);
    int   SetIdleAnimation(void);
    void  SetBoundingBox(void);
    void  AnimateThink(void);
    void  EnvTouch(CBaseEntity *pOther);
    void  Lift(entvars_t *pevPlayer, float flZVel, float flTime);
    void  RotateThink(void);
    void  Shoot(Vector vecDir, float flSpeed, float flMult);
    void  ExplodeTouch(CBaseEntity *pOther);
    void  Drop(void);
    void  AimAtPlayer(entvars_t *pevPlayer, float flTime);   // [?] helper: trecho comum de Lift e RotateThink
};
