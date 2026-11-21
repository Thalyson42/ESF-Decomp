// bot_simple.cpp -- CBot: funcoes pequenas. RECUPERADO de decomp_raw/CBot. Campos do CBot por offset (BOTF).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "esf_classes.h"
#include "bot.h"

extern BOOL EntIsInFieldOfView(CBaseEntity *pViewer, CBaseEntity *pTarget);   // [?]
extern int  UTIL_GetHeadingPercentage(CBasePlayer *pPlayer, CBasePlayer *pTarget);   // [?]
extern void WrapAngles(Vector &vecAngles);                                    // [?]
extern int  UTIL_EntDir(CBaseEntity *pEnt, Vector vecPos);                     // [?] direcao (codigo de SetMoveDir) para um ponto
extern void StartTurboFor(CBasePlayer *p);

int CBot::GetHealth(void) { return (int)pev->health; }                        // [OK]
int CBot::GetKi(void)     { return (int)pev->fuser4; }                        // [OK] ki = fuser4
void CBot::SetHealth(int iHealth) { pev->health = (float)iHealth; }
void CBot::SetKi(int iKi)         { pev->fuser4 = (float)iKi; }
BOOL CBot::IsNetClient(void) { return FALSE; }                                // [OK]
BOOL CBot::IsSuperBot(void)  { return BOTF(this, short, 0xba4) > 0; }        // [OK] (setg)

float CBot::GetDistance(Vector vecPos) { return (vecPos - pev->origin).Length(); }   // [OK]

BOOL CBot::EnemyIsInList(CBasePlayer *pPlayer)
{
    for (int i = 0; i < 4; i++)                                               // [OK] 4 entradas de 8 bytes a partir de +0xb48
        if (BOTF(this, CBasePlayer *, 0xb48 + 8 * i) == pPlayer)
            return TRUE;
    return FALSE;
}

BOOL CBot::EntIsInFOV(CBaseEntity *pEnt) { return EntIsInFieldOfView(this, pEnt); }   // [OK]
BOOL CBot::EntHeadsToBot(CBaseEntity *pEnt) { return (short)UTIL_GetHeadingPercentage(this, (CBasePlayer *)pEnt) > 64; }   // [OK] (a0, a1) como no decompilado

BOOL CBot::AttackIsBeam(bot_weapon_info_s *pAttack)
{
    return pAttack->iAttack == 10 ? 0 : pAttack->fBeam;                       // [OK] +0x47
}

BOOL CBot::BotCanAscend(void)
{
    // todas as condicoes devem valer [OK] (lidas do assembly)
    if (*((unsigned char *)pev + 0x1a7) & 4)
        return FALSE;
    if (pev->health < 5.0f)
        return FALSE;
    if (BOTF(this, int, 0x364) || BOTF(this, int, 0x334) || BOTF(this, int, 0x330) || BOTF(this, int, 0x324)
        || BOTF(this, int, 0x32c) || BOTF(this, int, 0x340) || BOTF(this, int, 0x770) || BOTF(this, int, 0x37c)
        || BOTF(this, int, 0x478) || BOTF(this, int, 0x6bc))
        return FALSE;
    if (!IsAlive())                                                           // [?] vtable +0x8c
        return FALSE;
    if (BOTF(this, int, 0x33c) && !BOTF(this, int, 0x354))
        return FALSE;
    if (BOTF(this, int, 0x350))
        return FALSE;
    if (pev->fuser4 < 100.0f)
        return FALSE;
    return (double)m_iPowerLevel >= (double)m_pClass->GetTransFormPowerLevel();   // [OK] PL >= PL de transformacao
}

void CBot::SetIdealAngles(Vector vecAngles) { BOTF(this, Vector, 0xc10) = vecAngles; }   // [OK]

void CBot::AimToVec(Vector vecTarget)
{
    BOTF(this, Vector, 0xc10) = GetAimAngles(vecTarget);                      // [OK]
}

Vector CBot::GetAimAngles(Vector vecTarget)
{
    Vector vecAng = UTIL_VecToAngles(vecTarget - pev->origin);                // [OK]
    WrapAngles(vecAng);
    return vecAng;
}

void CBot::SetSkill(unsigned char ucLevel, bot_skill_s *pSkill)
{
    BOTF(this, char, 0x9fc) = ucLevel;                                        // [OK]
    BOTF(this, bot_skill_s *, 0xa00) = pSkill;
}

void CBot::DeleteCombos(void)
{
    if (BOTF(this, CBotCombo *, 0x1070))
    {
        delete BOTF(this, CBotCombo *, 0x1070);                               // [OK] _._9CBotCombo(p, 3)
        BOTF(this, CBotCombo *, 0x1070) = NULL;
    }
}

void CBot::MakeCombo(EComboType type)
{
    DeleteCombos();                                                           // [OK] apaga o combo anterior
    MakeTask(12);
    BOTF(this, CBotCombo *, 0x1070) = new CBotCombo(this, type);              // [OK] __builtin_new(24)
}

CBasePlayer *CBot::GetBestEnemyFromList(void)
{
    ManageEnemyList();
    CBasePlayer *pBest = BOTF(this, CBasePlayer *, 0xb48);                    // [OK] primeiro da lista
    if (pBest)
    {
        AimAtEnemy(pBest);
        BOTF(this, float, 0xb40) = gpGlobals->time;
        return pBest;
    }
    return NULL;
}

void CBot::ResetMoveSpeed(void)
{
    BOTF(this, Vector, 0xd68) = g_vecZero;                                    // [OK] memset(+0x d68, 0, 12)
    pev->button &= ~0x8;                                                      // [OK]
    pev->button &= ~0x10;
    pev->button &= ~0x200;
    pev->button &= ~0x400;
    pev->button &= ~0x2;
    pev->button &= ~0x4;
}

void CBot::ToggleTurbo(short fOn)
{
    if (!fOn)
        StopTurbo();                                                          // [OK]
    else if (!BOTF(this, int, 0x324))
        StartTurbo();
}

int CBot::ClassifyAttack(const char *sz)
{
    if (!strcmp(sz, "kiblast") || !strcmp(sz, "scattershot") || !strcmp(sz, "renzoku"))
        return 1;
    if (!strcmp(sz, "blueattack") || !strcmp(sz, "burningattack") || !strcmp(sz, "greenattack")
        || !strcmp(sz, "purpleattack") || !strcmp(sz, "yellowattack"))
        return 2;
    if (!strcmp(sz, "masenko") || !strcmp(sz, "powerbeam"))
        return 3;
    if (!strcmp(sz, "kamehameha") || !strcmp(sz, "gallitgun") || !strcmp(sz, "mouthblast") || !strcmp(sz, "finalflash"))
        return 4;
    if (!strcmp(sz, "bigbang") || !strcmp(sz, "finishingbuster") || !strcmp(sz, "Spirit Bomb")
        || !strcmp(sz, "Special Beam Cannon") || !strcmp(sz, "Death Ball") || !strcmp(sz, "shieldattack")
        || !strcmp(sz, "Kame Torpedo") || !strcmp(sz, "Scattering Beam"))
        return 5;
    if (!strcmp(sz, "Destructo Disc") || !strcmp(sz, "Frieza Disc"))
        return 6;
    return !strcmp(sz, "rock") ? 7 : 8;                                       // [OK]
}

int CBot::TakeDamage(entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType)
{
    int iRet = CBasePlayer::TakeDamage(pevInflictor, pevAttacker, flDamage, bitsDamageType);
    if (iRet)
    {
        BOTF(this, int, 0xabc) = (int)flDamage;                               // [OK] ultimo dano recebido
        BOTF(this, float, 0xab8) = gpGlobals->time;                           // e quando
    }
    return iRet;
}

void CBot::Touch(CBaseEntity *pOther)
{
    BOTF(this, CBaseEntity *, 0xac0) = pOther;                                // [OK] ultimo tocado
    CBaseEntity::Touch(pOther);                                               // [?] chama m_pfnTouch se setado
}

void CBot::AddShootDelay(void)
{
    float *pSkill = BOTF(this, float *, 0xa00);
    BOTF(this, float, 0xb74) = gpGlobals->time + RANDOM_FLOAT(pSkill[0x28 / 4], pSkill[0x2c / 4]);   // [?] destino do resultado (o decompilador perdeu)
}

void CBot::SetSwoopButton(void)
{
    if (*(int *)((char *)pev + 0x108) != 11)                                  // [?] estado do jogador
        return;
    int iDir;
    switch (m_Swoop.m_iType)                                                  // [OK] tabela de saltos lida do binario
    {
    case 0:  iDir = 0x20; break;
    case 1:  iDir = 0x40; break;
    case 2:  iDir = 0x2;  break;
    case 3:  iDir = 0x4;  break;
    case 5:  iDir = 0x8;  break;
    default: iDir = 0x10; break;                                              // tipo 4 e invalidos
    }
    SetMoveDir(iDir);
}

void CBot::GoToAnPreviousLocation(void)
{
    // 5 posicoes recentes (16 bytes: pos + instante) a partir de +0x6d4; percorre do mais novo ao mais antigo [OK]
    for (int i = 4; i >= 0; i--)
    {
        char *pEntry = (char *)this + 0x6d4 + i * 16;
        if (gpGlobals->time - 15.0f < *(float *)(pEntry + 12) && CanReachPoint(*(Vector *)pEntry))
        {
            int iDir = UTIL_EntDir(this, *(Vector *)pEntry);                  // [?]
            ResetMoveSpeed();
            SetMoveDir(iDir);
        }
    }
}
