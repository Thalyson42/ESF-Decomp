// player_esf.h -- campos do ESF em CBasePlayer que NÃO estão nas save-tables.
// Offsets do hl_i386.so. Nome + evidência. [OK] = visto em >=2 funções ou confirmado por outra fonte.
#pragma once
// ki do jogador = pev->fuser4 (entvars +0x260), confirmado em UseKi.
enum { ESF_KI_OFFSET_IN_PEV = 0x260 };

#define ESF_PLAYER_FIELDS \
    /* +0x320 */ int   m_fFlying;        /* StartFly=1 / StopFly=0                                   [OK] */ \
    /* +0x324 */ int   m_fPoweredUp;     /* GetPowerLevel x1.25; limite de PL 999999999 em vez de 799999999 (SSJ/forma) [?] nome */ \
    /* +0x32c */ int   m_fBlocking;      /* StartFly/StopFly chamam StopBlock se setado              [OK] */ \
    /* +0x6d0 */ int   m_iChargeBar;     /* último valor enviado por DrawChargeBar (msg gmsgCharge)  [OK] */ \
    /* +0x744 */ int   m_iPowerLevel;    /* GetPowerLevel/SetPowerLevel                              [OK] */ \
    /* +0x748 */ int   m_iMaxPowerLevel; /* SetMaxPowerLevel                                         [OK] */ \
    /* +0x74c */ int   m_iBaseSpeed;     /* base de GetMaxSpeed                                      [OK] */ \
    /* +0x754 */ float m_flSpeedMult;    /* multiplicador final de GetMaxSpeed (0.5 carregando, 0 disparando) [OK] */ \
    /* +0x764 */ class CBaseClass *m_pClass; /* personagem (Goku, Vegeta...): GetSoundDir, GetKiCostMult... [OK] */ \
    /* +0x354 */ int   m_fInPowerStruggle; /* PrimaryAttack/WeaponIdle/StopAiming                   [?] nome */ \
    /* +0x35c */ int   m_fInBlockStruggle; /* idem                                                  [?] nome */ \
    /* +0x36c */ class CPowerStruggle *m_pPowerStruggle; /* aponta p/ a disputa atual               [?] nome */ \
    /* +0x358 */ int   m_fBlockStruggling; /* ExplodeTouch: preso num block struggle                  [OK] */ \
    /* +0x780 */ class CExplodingAttack *m_pBlockAttack; /* ataque que o jogador está segurando    [OK] */ \
    /* +0x508 */ int   m_fTurbo;         /* GetMaxSpeed x5                                           [?] nome */
// pev (entvars_t) usado pelo ESF: fuser4=ki(+0x260), iuser1=spectator(+0x244)
// Mensagens: gmsgCharge, gmsgMaxHealth, gmsgPowerStruggle
