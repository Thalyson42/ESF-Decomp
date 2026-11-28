// combo.h -- entradas de combo dos bots (herdam de CBaseBotComboEntry, declarada em bot.h).
// Layout [OK]: +0 status, +4 CBot*, +8 f_08, +0xc inicio, vptr +0x10, membros proprios a partir de +0x14.
#pragma once
#include "bot.h"

// [OK] no ESF o jogador em voo/investida usa movetype 11 (cmp [pev+0x108],0xb nos combos; swoop.cpp grava 11) -- o ESF renumerou BOUNCEMISSILE para 16 (ver UTIL_PrintEntity); 11 e o modo de voo
#define MOVETYPE_ESF_FLY 11

class CAscendComboEntry : public CBaseBotComboEntry
{
public:
    CAscendComboEntry(CBot *pBot);
    void  Think(void);
    void  Activate(void);
    float GetDelay(void);
    float m_flDuration;     // +0x14 [OK] 1.5s; apos Activate vira o instante limite
};

class CPowerupComboEntry : public CBaseBotComboEntry
{
public:
    CPowerupComboEntry(CBot *pBot);
    void  Think(void);
    float GetDelay(void);
};

class CFallDownComboEntry : public CBaseBotComboEntry
{
public:
    CFallDownComboEntry(CBot *pBot);
    void  Think(void);
    void  Activate(void);
    float GetDelay(void);
    float m_flDuration;     // +0x14 [OK] 1.5s; apos Activate vira o instante limite
};

class CStartSwoopComboEntry : public CBaseBotComboEntry
{
public:
    CStartSwoopComboEntry(CBot *pBot, bool bChain, int iDir);
    void  Think(void);
    void  Activate(void);
    float GetDelay(void);
    char  m_bChain;         // +0x14 [OK]
    float m_flEndTime;      // +0x18 [OK] instante em que a investida pode terminar
    int   m_iDir;           // +0x1c [OK] flags de direcao (2,4,8,0x10,0x80,0x100 etc.)
};

class CSwoopAWhileComboEntry : public CBaseBotComboEntry
{
public:
    CSwoopAWhileComboEntry(CBot *pBot, float flDuration);
    void  Think(void);
    void  Activate(void);
    float GetDelay(void);
    float m_flDuration;     // +0x14 [OK] vira o instante limite no Activate
};

class CSwoopCloseToEnemyComboEntry : public CBaseBotComboEntry
{
public:
    CSwoopCloseToEnemyComboEntry(CBot *pBot);
    void  Think(void);
    float GetDelay(void);
};

class CChargeGenBallComboEntry : public CBaseBotComboEntry
{
public:
    CChargeGenBallComboEntry(CBot *pBot);
    void  Think(void);
    float GetDelay(void);
};

class CAvoidAttackWhileSwoopComboEntry : public CBaseBotComboEntry
{
public:
    CAvoidAttackWhileSwoopComboEntry(CBot *pBot);
    void  Think(void);
    float GetDelay(void);
};

class CCheckFOVForAimComboEntry : public CBaseBotComboEntry
{
public:
    CCheckFOVForAimComboEntry(CBot *pBot);
    void  Think(void);
    void  Activate(void);
    float GetDelay(void);
    float m_flDuration;     // +0x14 [OK] 0.25s; apos Activate vira o instante limite
};

class CTeleportComboEntry : public CBaseBotComboEntry
{
public:
    CTeleportComboEntry(CBot *pBot, float flDuration, int iDir, bool bAim, bool bNeedNoEnemy, bool bStopIfEnemyFlies);
    void  Think(void);
    void  Activate(void);
    float m_flDuration;     // +0x14 [OK] vira o instante limite no Activate
    int   m_iDir;           // +0x18 [OK] direcao passada a SetMoveDir
    char  m_bAim;           // +0x1c [OK] mira no inimigo
    char  m_bDoneIfNoEnemy; // +0x1d [OK] sem inimigo = termina  [?] nome
    char  m_bStopIfEnemyFlies; // +0x1e [OK] termina se o inimigo estiver voando [?] nome
};
