// bot_simple.cpp -- CBot: funcoes pequenas. RECUPERADO de decomp_raw/CBot. Campos do CBot por offset (BOTF).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
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

// ---- CBot::BotThink e CheckNecessarilyThings ----
extern char *g_pBotManager;                                        // [?] &BotManager: +0xd38 msec, +0xd48 bots ativos, +0xd4b parados
extern void ESF_MakeWish(void *pGameRules, CBasePlayer *pPlayer, const char *szWish);   // [?] g_pGameRules->+0x44 -> vfunc +0x60 (desejo do Shenron)
#define BM_MSEC()   ((unsigned char)g_pBotManager[0xd38])          // [OK] (int)BotManager+3384 & 0xff

void CBot::BotThink(void)
{
    edict_t *pEdict = pev->pContainingEntity;                      // [OK] pev+0x208
    if (BOTF(this, char, 0x9e8))                                   // fase de entrada: escolhe time/classe
    {
        if (BOTF(this, float, 0x9e4) <= gpGlobals->time)
        {
            if (BOTF(this, int, 0x9ec) == 1)      LetBotJoinTeam();
            else if (BOTF(this, int, 0x9ec) == 2) LetBotPickAClass();
            BOTF(this, float, 0x9e4) = gpGlobals->time + 0.15f;
        }
        g_engfuncs.pfnRunPlayerMove(pEdict, pev->v_angle, (float)GetMaxSpeed(), 0, 0, (unsigned short)pev->button, 0, BM_MSEC());   // [?] args do ramo
        return;
    }

    if (pev->health < 1.0f || *(int *)((char *)pev + 0x170) || BOTF(this, int, 0x328))
    {
        if (RANDOM_LONG(1, 100) > 50)
            pev->button = 1;                                       // [OK] morto: clica para renascer
    }
    else if (BOTF(this, int, 0x348))
    {
        const char *szWish = NULL;
        switch (RANDOM_LONG(1, 3))
        {
        case 1: szWish = "immortality"; break;
        case 2: szWish = "strength";    break;
        case 3: szWish = "friendship";  break;
        }
        ESF_MakeWish(g_pGameRules, this, szWish);
    }
    else
    {
        CBaseEntity *pObj = BOTF(this, CBaseEntity *, 0x728);
        if (pObj && BOTF(pObj, int, 0x364))
            MakeCandy(pev->health < 80.0f ? "cookie" : pev->health < 120.0f ? "chocolate" : "donut");   // [OK]
        if (BOTF(this, float, 0xab4) < gpGlobals->time && BOTF(this, float, 0xab4) > 0.0f)
        {
            ToggleTurbo(0);
            BOTF(this, float, 0xab4) = 0;
        }
        BOTF(this, float, 0xd70) = (float)GetMaxSpeed();           // frente = velocidade maxima por padrao
        CheckNecessarilyThings();
        BotSense();
        CheckBotInternalStatus();
        CheckBotMiscThings();
        if (!BOTF(this, CBaseTask *, 0x1064))
            MakeTask(6);                                           // [OK] sem tarefa: movimento normal
        BotPerformTasks();
        BotAim();
        if (!g_pBotManager[0xd48])
            memset((char *)this + 0xd68, 0, 12);
        if (*(int *)((char *)pev + 0x108) == 11 && BOTF(this, float, 0xbfc) != 0.0f)
        {
            if (g_pBotManager[0xd48]) SetSwoopButton();
            else                      ResetMoveSpeed();
        }
        float flMax = (float)GetMaxSpeed();
        if (flMax < BOTF(this, float, 0xd68)) BOTF(this, float, 0xd68) = flMax;
        if (flMax < BOTF(this, float, 0xd70)) BOTF(this, float, 0xd70) = flMax;
        if (BOTF(this, float, 0xd70) > 0)      pev->button |= 0x8;
        else if (BOTF(this, float, 0xd70) < 0) pev->button |= 0x10;
        if (BOTF(this, float, 0xd68) > 0)      pev->button |= 0x400;
        else if (BOTF(this, float, 0xd68) < 0) pev->button |= 0x200;
        BOTF(this, float, 0xd84) = BOTF(this, float, 0xd70);
        pev->maxspeed = (float)GetMaxSpeed();
        g_engfuncs.pfnRunPlayerMove(pEdict, pev->v_angle, BOTF(this, float, 0xd70), BOTF(this, float, 0xd68),
                                    BOTF(this, float, 0xd6c), (unsigned short)pev->button, 0, BM_MSEC());
        BOTF(this, float, 0xd68) = 0;
        BOTF(this, float, 0xd6c) = 0;
        BOTF(this, int, 0xaa4) = 0;
        BOTF(this, int, 0xaa8) = 0;
        return;
    }
    g_engfuncs.pfnRunPlayerMove(pEdict, pev->v_angle, 0, 0, 0, (unsigned short)pev->button, 0, BM_MSEC());   // [OK]
}

// Decide a tarefa necessaria pelo estado do jogador (codigos de tarefa: ver ETaskId em tasks.h).
void CBot::CheckNecessarilyThings(void)
{
    CBaseTask *pTask = BOTF(this, CBaseTask *, 0x1064);
    int iCur = pTask ? pTask->TaskIdentify() : -1;
    int iNew = -1;
    if (BOTF(this, int, 0x32c) && (!pTask || iCur != 2))
        StopBlock();
    BOOL fFreeState = FALSE;                                       // vai para o bloco "L581a82" (sem estado de luta)
    if (BOTF(this, int, 0x344))
        iNew = 11;                                                 // cego
    else if (BOTF(this, int, 0x358))
        iNew = 2;                                                  // bloqueio
    else
    {
        BOOL fSkipWall = (pTask && iCur == 18);
        if (!fSkipWall && (BOTF(this, int, 0x6c8) || (BOTF(this, int, 0x37c) && BOTF(this, int, 0x3e4) == 3)))
            iNew = 18;                                             // wall jump
        else if (BOTF(this, int, 0x770))
            iNew = 10;                                             // ascender
        else if (g_pBotManager[0xd4b] || BOTF(this, int, 0x364))
            iNew = 20;                                             // parado: ocioso
        else if (!BOTF(this, int, 0x37c))
            fFreeState = TRUE;
        else
        {
            int iMelee = BOTF(this, int, 0x49c);
            int iSt = BOTF(this, int, 0x3e4);
            if (iSt == 4)                                          iNew = 20;
            else if (iMelee == 2)                                  iNew = 2;
            else if (iSt == 5)                                     iNew = 28;
            else if (iMelee == 6 || (iSt && iSt != 3))             iNew = 21;
            else if (iMelee == 1)                                  iNew = 8;
            else if ((unsigned)(iMelee - 3) > 1 && iMelee != 7 && iMelee != 8 && iMelee != 11 && iMelee != 9 && iMelee != 10)
            {
                if (*(int *)((char *)pev + 0x108) != 11)
                    fFreeState = TRUE;
                else if (pTask && iCur == 12)
                    fFreeState = TRUE;
                else
                    iNew = 7;                                      // swoop
            }
            else
            {
                if (pTask && iCur == 8)
                    return;
                iNew = 4;                                          // contra-melee
            }
        }
    }
    if (fFreeState)
    {
        if (BOTF(this, int, 0x354) || BOTF(this, int, 0x35c))
            iNew = 9;                                              // power struggle
        else
        {
            if (BOTF(this, int, 0x330) && (!pTask || (iCur != 0 && iCur != 12)))
                StopPowerUp();
            if (!BOTF(this, int, 0x33c))
                return;
            if (BOTF(this, int, 0x35c))
                return;
            CBasePlayerItem *pItem = BOTF(this, CBasePlayerItem *, 0x968);
            if (BOTF(pItem, int, 0x88) == 10)
                iNew = 14;
            else
            {
                if (!pTask) { MakeTask(15); return; }
                if (iCur == 15 || iCur == 22)
                    return;
                iNew = 15;
            }
        }
    }
    MakeTask(iNew);
}

// ---- CBot::CheckBotInternalStatus / CheckBotMiscThings ----
// A tarefa atual diz quais verificacoes valem (GetBotStatusChecks / GetBotMiscChecks); sem tarefa, todas valem.
#define SKILL_S(b, off) (*(short *)(BOTF(b, char *, 0xa04) + (off)))

void CBot::CheckBotInternalStatus(void)
{
    CBaseTask *pTask = BOTF(this, CBaseTask *, 0x1064);
    int iMask = pTask ? pTask->GetBotStatusChecks() : 0;
    BOOL fAll = !pTask;
    short sAggr = BOTF(this, short, 0xa18);                          // [?] agressividade/estado de vida do bot

    // 4: carregar poder (PowerUp)
    if (((iMask & 4) || fAll) && BotCanPowerUp())
    {
        int iKi = (int)pev->fuser4;
        if (iKi <= 999 && BOTF(this, float, 0xb10) <= gpGlobals->time && !BOTF(this, int, 0x330))
        {
            int iThr = 750;
            CBasePlayer *pEnemy = BOT_ENEMY(this);
            if (pEnemy && (pEnemy->pev->origin - pev->origin).Length() < 1250.0f)
            {
                int iLevel = *(int *)(BOTF(this, char *, 0xa04) + 0x34);
                if (iLevel == 1) iThr = 750; else if (iLevel == 0) iThr = 700; else if (iLevel == 2) iThr = 800;
            }
            if (BOTF(this, char, 0x9fc))
                iThr -= BOTF(this, char, 0x9fc) * 80;
            if (sAggr > 59)
            {
                iThr = 20;
                if (sAggr <= 99) iThr = 100;
            }
            if (iKi <= iThr)
            {
                if (iKi > 225 && sAggr > 59 && RANDOM_LONG(1, 100) <= SKILL_S(this, 0x26))
                {
                    MakeCombo((EComboType)37);
                    return;
                }
                if (!BotShouldFallDown())
                {
                    MakeTask(0);
                    StartPowerUp();
                    return;
                }
                MakeCombo((EComboType)8);
                return;
            }
        }
    }
    // 2: voar / pousar
    if ((iMask & 2) || fAll)
    {
        if (BOTF(this, float, 0xa14) < gpGlobals->time)
        {
            BOTF(this, char, 0xa10) = (RANDOM_LONG(1, 100) <= SKILL_S(this, 0x2c)) ? 1 : 0;
            BOTF(this, float, 0xa14) = RANDOM_FLOAT(15.0f, 30.0f) + gpGlobals->time;   // [?] RandomFloat perdido no decompilado
        }
        if (BOTF(this, int, 0x320))
        {
            if (!BOTF(this, char, 0xa10))
                StopFly();
        }
        else if (BOTF(this, char, 0xa10))
            StartFly();
    }
    // 8: ascender
    if (((iMask & 8) || fAll) && BOTF(this, float, 0xb18) <= gpGlobals->time && BotCanAscend())
    {
        BOTF(this, float, 0xb18) = gpGlobals->time + 0.5f;
        short sChance;
        if (!sAggr || BOTF(this, int, 0xa1c) == 3 || BOTF(this, int, 0xa1c) == 5) sChance = 100;
        else if (sAggr <= 20) sChance = 95;
        else sChance = ((unsigned short)(sAggr - 60) <= 39) ? 30 : 0;
        if (RANDOM_LONG(1, 100) <= sChance)
        {
            if (BotShouldFallDown())
            {
                MakeCombo((EComboType)9);
                return;
            }
            StartAscend();
        }
    }
    // 16: recuperar vida
    if (!((iMask & 16) || fAll))
        return;
    if (*(int *)((char *)pev + 0x20c) != 1)                          // [?] campo do pev
        return;
    if ((int)pev->health > 75)
        return;
    short sChance = 100;
    if (sAggr > 0)
        sChance = (short)(100 - sAggr / 1.5);
    if (RANDOM_LONG(1, 100) > (short)(sChance - (int)pev->health))
        return;
    MakeTask(0x11);
}

void CBot::CheckBotMiscThings(void)
{
    CBaseTask *pTask = BOTF(this, CBaseTask *, 0x1064);
    int iMask = pTask ? pTask->GetBotMiscChecks() : 0;
    BOOL fAll = !pTask;
    int iNew;
    if (((iMask & 2) || fAll) && g_pBotManager[0xd46])
    {
        CBasePlayer *pBest = GetBestEnemyFromList();
        BOT_ENEMY(this) = pBest;
        if (pBest)
        {
            MakeTask(5);                                             // [OK] tem inimigo: combate
            return;
        }
    }
    // conversa (chat do bot)
    if (((iMask & 4) || fAll) && g_pBotManager[0xd4d] && BOTF(this, float, 0xc48) < gpGlobals->time)
    {
        int iRoll = RANDOM_LONG(1, 100);
        if (BOTF(this, float, 0xd5c) < gpGlobals->time)
        {
            if (iRoll <= SKILL_S(this, 0x18))
                ChatClass.LetBotCheckForReply(this);
            BOTF(this, float, 0xd5c) = RANDOM_FLOAT(5.5f, 15.0f) + gpGlobals->time;   // [?]
        }
        if (BOTF(this, float, 0xd4c) < gpGlobals->time)
        {
            if (iRoll <= SKILL_S(this, 0x18))
                ChatClass.LetBotSaySomething(this);
            BOTF(this, float, 0xd4c) = RANDOM_FLOAT(15.0f, 40.0f) + gpGlobals->time;  // [?]
        }
    }
    if (((iMask & 16) || fAll) && CheckForHuntEnemy())
        iNew = 29;                                                   // cacar inimigo
    else
    {
        if (!(iMask & 32) && !fAll)
            return;
        if (BOTF(this, float, 0xaec) >= gpGlobals->time)
            return;
        if (BotShouldMakeKameTorps())
            iNew = 19;
        else
        {
            BOTF(this, float, 0xaec) = RANDOM_FLOAT(22.0f, 40.0f) + gpGlobals->time;  // [?]
            return;
        }
    }
    MakeTask(iNew);
}

// ---- mira do bot ----
// Aproxima o angulo atual (cur) do alvo pelo caminho mais curto, com passo limitado. [OK] casos lidos dos gotos do decompilado.
static float BotApproachAngle(float flCur, float flTarget, float flSpeed)
{
    float flDiff = fabs(flCur - flTarget);
    float flStep = flSpeed * *(float *)(g_pBotManager + 0xd40);      // [OK] BotManager+3392 (escala de tempo)
    if (flStep > flDiff)
        flStep = flDiff;
    BOOL fUp;                                                        // TRUE = soma o passo
    if (flTarget >= 0.0f)
    {
        if (flCur >= 0.0f)  fUp = (flCur <= flTarget);
        else                fUp = !(flCur + 180.0f <= flTarget);     // alvo do outro lado de +-180: gira para tras
    }
    else
    {
        if (flCur >= 0.0f)  fUp = (flCur - 180.0f > flTarget);
        else                fUp = (flCur <= flTarget);
    }
    float flNew = fUp ? flCur + flStep : flCur - flStep;
    if (flNew > 180.0f)  flNew -= 360.0f;
    if (flNew < -180.0f) flNew += 360.0f;
    return flNew;
}

void CBot::BotChangePitch(float flSpeed, float flTarget)
{
    pev->v_angle.x = BotApproachAngle(-pev->v_angle.x, flTarget, flSpeed);   // [OK] pitch usa o sinal invertido
}

void CBot::BotChangeYaw(float flSpeed, float flTarget)
{
    pev->v_angle.y = BotApproachAngle(pev->v_angle.y, flTarget, flSpeed);
}

void CBot::BotAim(void)
{
    if (BOTF(this, float, 0xc00) > gpGlobals->time)
        return;
    Vector vecIdeal = BOTF(this, Vector, 0xc10);
    WrapAngles(vecIdeal);
    if (vecIdeal.y > 180.0f) vecIdeal.y -= 360.0f;
    if (vecIdeal.x > 180.0f) vecIdeal.x -= 360.0f;
    if (BOTF(this, short, 0xba4) > 1)
    {
        WrapAngles(vecIdeal);                                        // modo rapido: mira instantanea
        pev->v_angle = vecIdeal;
    }
    else
    {
        float *pSkill = BOTF(this, float *, 0xa00);
        float flPitchSpeed = RANDOM_FLOAT(pSkill[2], pSkill[3]);     // [?] ordem das 4 sorteadas
        float flYawSpeed   = RANDOM_FLOAT(pSkill[4], pSkill[5]);
        float flPitchErr   = RANDOM_FLOAT(pSkill[6], pSkill[7]);
        float flYawErr     = RANDOM_FLOAT(pSkill[8], pSkill[9]);
        float flDeltaPitch = fabs(vecIdeal.x + pev->v_angle.x);
        float flDeltaYaw   = fabs(vecIdeal.y - pev->v_angle.y);
        float flNoiseP = 0, flNoiseY = 0;
        if (flPitchErr != 0.0f)
            flNoiseP = RANDOM_LONG(0, 1) ? flPitchErr / 100.0f * flDeltaPitch : -(flPitchErr / 100.0f * flDeltaPitch);   // erro proporcional ao giro
        if (flYawErr != 0.0f)
            flNoiseY = RANDOM_LONG(0, 1) ? flYawErr / 100.0f * flDeltaYaw : -(flYawErr / 100.0f * flDeltaYaw);
        float flRateP = (flDeltaPitch >= 1.0f) ? flDeltaPitch / 70.0f * flPitchSpeed : flPitchSpeed * 0.01f;   // [OK]
        float flRateY = (flDeltaYaw   >= 1.0f) ? flDeltaYaw   / 60.0f * flYawSpeed   : flYawSpeed   * 0.015f;
        vecIdeal.x = UTIL_WrapAngle(flNoiseP + vecIdeal.x);
        vecIdeal.y = UTIL_WrapAngle(flNoiseY + vecIdeal.y);
        BOTF(this, float, 0xc34) = BOTF(this, float, 0xc2c);         // guarda o erro anterior
        BOTF(this, float, 0xc30) = BOTF(this, float, 0xc28);
        BotChangePitch(flRateP, vecIdeal.x);
        BOTF(this, float, 0xc2c) = vecIdeal.x;
        BotChangeYaw(flRateY, vecIdeal.y);
        BOTF(this, float, 0xc28) = vecIdeal.y;
    }
    pev->angles.x = pev->v_angle.x / 3.0f;                           // [OK]
    pev->angles.y = pev->v_angle.y;
    pev->angles.z = 0;
    pev->v_angle.x = -pev->v_angle.x;
}

// ---------------------------------------------------------------------------
// CanAttackPlayer / IsValidEnemy
// ---------------------------------------------------------------------------
BOOL CBot::CanAttackPlayer(CBasePlayer *pPlayer)
{
    char *pSkill = BOTF(this, char *, 0xa04);                                 // [OK]
    if (!(pSkill[0x38] || !BOTF(pPlayer, int, 0x770)))                        // [OK]
        return FALSE;
    if (BOTF(pPlayer, int, 0x354) || BOTF(pPlayer, int, 0x358) ||             // [?] flags de estado do alvo
        BOTF(pPlayer, int, 0x35c) || BOTF(pPlayer, int, 0x350))
        return FALSE;
    if (!pPlayer->IsAlive())                                                  // [?] vtable +0x8c
        return FALSE;
    if (BOTF(pPlayer, int, 0x4c4))                                            // [?]
        return FALSE;
    // g_pGameRules->vtbl+0x44 (slot ~16): CanHavePlayerItem-like "FPlayerCanTakeDamage" [?]
    return g_pGameRules->FPlayerCanTakeDamage(this, pPlayer) ? TRUE : FALSE;
}

BOOL CBot::IsValidEnemy(CBasePlayer *pPlayer)
{
    if (!UTIL_IsValidPlayer(pPlayer, 1, 1))                                   // [OK]
        return FALSE;
    if (g_teamplay && pev->team == pPlayer->pev->team)                        // [OK] +0x1ac
        return FALSE;

    float dx = pPlayer->pev->origin.x - pev->origin.x;                        // [?] vfuncs +0xd0/+0x1e0 retornam posicao
    float dy = pPlayer->pev->origin.y - pev->origin.y;
    float flDist = sqrt(dx * dx + dy * dy);                                   // [OK] distancia 2D
    BOOL bNear = (flDist <= 2300.0f || BOT_FASTMODE(this) > 0);               // [OK]

    if (!EntIsInFieldOfView(this, pPlayer) && !bNear)
        return FALSE;

    if (!BOTF(this, char, 0xa20))                                             // [OK]
        return CanReachPoint(pPlayer->pev->origin) == 1;                      // [?] vtable +0xe4
    int idx = ENTINDEX(pPlayer->pev->pContainingEntity) - 1;                  // [OK]
    return ((1 << (idx & 31)) & BOTF(this, unsigned int, 0xaa4)) != 0;        // [OK]
}

// ---------------------------------------------------------------------------
// ManageEnemyList: 4 entradas de 8 bytes em +0xb44 {short prioridade; (pad); CBasePlayer* @+4}
// ---------------------------------------------------------------------------
int EnemyPriorityCmp(const void *a, const void *b)                            // [OK] 0x153ed0
{
    return *(const short *)b - *(const short *)a;                             // ordem decrescente
}

void CBot::ManageEnemyList(void)
{
    short *pList = &BOTF(this, short, 0xb44);                                 // [OK]
    #define ENT(i)  (*(CBasePlayer **)((char *)pList + 8 * (i) + 4))
    #define PRI(i)  (*(short *)((char *)pList + 8 * (i)))

    float flBest = 9999.9f;
    for (int n = 0; n < 4; n++)
    {
        BOOL bValid = IsValidEnemy(ENT(n));
        if (!bValid || !CanAttackPlayer(ENT(n)))
        {
            CBasePlayer *pNew = BotFindEnemy();
            if (pNew)
                ENT(n) = pNew;
            else if (!bValid)
            {
                if (UTIL_IsValidPlayer(ENT(n), 0, 1))
                    BOTF(this, CBasePlayer *, 0xb70) = ENT(n);                // [?] ultimo inimigo conhecido
                ENT(n) = NULL;
            }
        }
    }

    for (int n = 0; n < 4; n++)
    {
        CBasePlayer *pEnt = ENT(n);
        if (!pEnt)
        {
            PRI(n) = -100;                                                    // [OK] 0xff9c
            continue;
        }
        int iPri = 1;
        if (BOTF(pEnt, int, 0x770))
            iPri = 0;

        BOOL bBotLike = FALSE;
        if (!pEnt->IsNetClient())                                             // [?] vtable +0xa4
            bBotLike = (*((unsigned char *)pEnt->pev + 0x1a5) & 32) != 0;     // [?]
        if (bBotLike)
        {
            CBasePlayer *pTarget = BOTF(pEnt, CBasePlayer *, 0xb6c);          // inimigo do alvo
            if (pTarget != (CBasePlayer *)this && UTIL_IsValidPlayer(pTarget, 1, 1))
                iPri -= 2;
        }
        if (*(int *)((char *)pEnt->pev + 0x108) == 11)                        // [?]
            iPri += 2;
        if (BOTF(pEnt, int, 0x334) || BOTF(pEnt, int, 0x338))
            iPri += 2;
        if ((short)UTIL_GetHeadingPercentage(this, pEnt) > 64)
            iPri += 1;
        if (EntIsInFieldOfView(this, pEnt))
            iPri += 1;

        float flDist = (pEnt->pev->origin - pev->origin).Length();            // [OK]
        if (flDist < flBest)
        {
            float flDiff = flBest - flDist;
            iPri = (flDiff > 300.0f ? iPri + 1 : flDiff > 800.0f ? iPri + 2 : iPri + 3);   // [OK] literal do decompilado
            flBest = flDist;
        }
        if (flDist < 400.0f)
            iPri += 2;
        else if (flDist < 800.0f)
            iPri += 1;

        if (!CanAttackPlayer(pEnt))
            iPri -= 2;
        PRI(n) = (short)iPri;
    }
    qsort(pList, 4, 8, EnemyPriorityCmp);
    #undef ENT
    #undef PRI
}

// ---------------------------------------------------------------------------
// BotFindEnemy: pontua cada jogador da lista (+0xa24, contagem char em +0xaac)
// ---------------------------------------------------------------------------
CBasePlayer *CBot::BotFindEnemy(void)
{
    if (!*((char *)g_pBotManager + 0xd46))                                    // [OK] BotManager+3398
        return NULL;

    CBasePlayer *pBest = NULL;
    short sBest = -100;                                                       // [OK] 0xff9c
    BOT_ENEMY(this) = NULL;

    if (BOT_ENEMY_DELAY(this) <= gpGlobals->time)
    {
        float *pSkill = BOT_SKILL(this);
        BOT_ENEMY_DELAY(this) = RANDOM_FLOAT(pSkill[0x30 / 4], pSkill[0x34 / 4]) + gpGlobals->time;   // [?] resultado do RandomFloat perdido pelo decompilador
        if (!BOTF(this, char, 0xa20))
            MakePlayerList();

        if (BOTF(this, char, 0xaac))
        {
            float flNearest = 9000.0f;
            for (int idx = 0; idx < BOTF(this, char, 0xaac); idx++)
            {
                CBasePlayer *pPl = BOTF(this, CBasePlayer *, 0xa24 + idx * 4);   // [OK]
                short sScore = 1;
                if (EnemyIsInList(pPl))
                    continue;
                if (g_teamplay && pev->team == pPl->pev->team)
                    continue;

                float dx = pPl->pev->origin.x - pev->origin.x;                // [?] vfuncs +0xd0/+0x1e0
                float dy = pPl->pev->origin.y - pev->origin.y;
                BOOL bNear = (sqrt(dx * dx + dy * dy) <= 2300.0f || BOT_FASTMODE(this) > 0);   // [OK]
                BOOL bSeen = EntIsInFieldOfView(this, pPl);
                BOOL bSeesMe = EntIsInFieldOfView(pPl, this);
                float flDist = (pPl->pev->origin - pev->origin).Length();

                if (!bSeen && !bNear)
                    continue;

                if (flDist < flNearest) { flNearest = flDist; sScore += 2; }
                if (bSeen)   sScore += 2;
                if (bSeesMe) sScore += 2;
                CBasePlayer *pLast = BOTF(this, CBasePlayer *, 0xb70);        // [?] ultimo inimigo
                if (pLast && pPl == pLast)
                    sScore += (short)RANDOM_LONG(1, 4);
                if (!CanAttackPlayer(pPl))
                    sScore -= 3;
                if (BOTF(pPl, int, 0x770))
                    sScore -= (short)RANDOM_LONG(1, 2);
                if (DangerousPlForBot(pPl->m_iPowerLevel))                    // [OK] +0x744
                    if ((int)pev->health <= 29)                               // [OK] pev+0x160
                        sScore -= 1;

                for (int i = 1; i <= gpGlobals->maxClients; i++)              // outros bots que ja miram neste alvo
                {
                    CBasePlayer *pOther = (CBasePlayer *)UTIL_PlayerByIndex(i);
                    if (pOther == (CBasePlayer *)this)
                        continue;
                    if (!UTIL_IsValidPlayer(pOther, 1, 1))
                        continue;
                    BOOL bBotLike = FALSE;
                    if (!pOther->IsNetClient())                               // [?] vtable +0xa4
                        bBotLike = (*((unsigned char *)pOther->pev + 0x1a5) & 32) != 0;
                    if (!bBotLike || !pOther)
                        continue;
                    if (BOTF(pOther, CBasePlayer *, 0xb6c) == pPl)            // [OK] +2924
                    {
                        if (sScore <= 0)
                            break;
                        sScore--;
                    }
                }
                if (sScore > sBest)
                {
                    pBest = pPl;
                    sBest = sScore;
                }
            }
        }
    }
    if (!pBest)
        return NULL;
    BOTF(this, int, 0x1034) = 0;                                              // [?]
    BOTF(this, int, 0x1058) = 0;                                              // [?]
    return pBest;
}

// ---------------------------------------------------------------------------
// Waypoints: bot+0x1008 wp atual, +0x100c..+0x101c historico (5), +0x1004 instante,
// +0x1020 recarga de 10s, +0x1024 wp destino, +0xff8 posicao do wp atual, +0x102c distancia anterior
// ---------------------------------------------------------------------------
BOOL CBot::FindWaypoint(void)
{
    short iTeam = g_teamplay ? (short)pev->team : -1;                         // [OK]
    void *pPath = NULL;
    int iDummy = 0;
    float flDist[3] = { 9999.0f, 9999.0f, 9999.0f };
    int   iWP[3]    = { -1, -1, -1 };
    int  *pCur = &BOTF(this, int, 0x1008);                                    // 0x1008..0x101c = 6 ints

    for (;;)
    {
        int iNode = WaypointFindPath(&pPath, &iDummy, (short)pCur[0], iTeam);
        if (iNode == -1)
            break;
        if (iNode == pCur[0] || iNode == pCur[1] || iNode == pCur[2] ||
            iNode == pCur[3] || iNode == pCur[4] || iNode == pCur[5])
            continue;
        Vector vecWP(waypoints[iNode].x, waypoints[iNode].y, waypoints[iNode].z);
        float flD = (vecWP - pev->origin).Length();
        if (flD < flDist[0])      { flDist[2] = flDist[1]; iWP[2] = iWP[1]; flDist[1] = flDist[0]; iWP[1] = iWP[0]; flDist[0] = flD; iWP[0] = iNode; }
        else if (flD < flDist[1]) { flDist[2] = flDist[1]; iWP[2] = iWP[1]; flDist[1] = flD; iWP[1] = iNode; }
        else if (flD < flDist[2]) { flDist[2] = flD; iWP[2] = iNode; }
    }

    int iPick;
    if (RANDOM_LONG(1, 100) > 20 || BOTF(this, float, 0x1020) > gpGlobals->time)
        iPick = iWP[0];                                                       // [OK] o mais proximo
    else
    {
        BOTF(this, float, 0x1020) = gpGlobals->time + 10.0f;                  // [OK]
        if (iWP[2] != -1)      iPick = iWP[RANDOM_LONG(0, 2)];
        else if (iWP[1] != -1) iPick = iWP[RANDOM_LONG(0, 1)];
        else if (iWP[0] != -1) iPick = iWP[0];
        else return FALSE;
    }
    if (iPick == -1)
        return FALSE;

    pCur[5] = pCur[4]; pCur[4] = pCur[3]; pCur[3] = pCur[2]; pCur[2] = pCur[1]; pCur[1] = pCur[0];
    pCur[0] = iPick;
    BOTF(this, float, 0xff8) = waypoints[iPick].x;
    BOTF(this, float, 0xffc) = waypoints[iPick].y;
    BOTF(this, float, 0x1000) = waypoints[iPick].z;
    BOTF(this, float, 0x1004) = gpGlobals->time;
    return TRUE;                                                              // [?] valor de retorno em al nao decompilado com precisao
}

BOOL CBot::HeadToWaypoint(void)
{
    if (BOTF(this, int, 0x1008) == -1)
        return FALSE;
    short iTeam = g_teamplay ? (short)pev->team : -1;                         // [OK]
    BOOL bArrived = FALSE;
    Vector vecWP(BOTF(this, float, 0xff8), BOTF(this, float, 0xffc), BOTF(this, float, 0x1000));
    float flDist = (vecWP - pev->origin).Length();
    float flLast = BOTF(this, float, 0x102c);
    if (1.0f < flLast && flDist > flLast)                                     // [OK] esta se afastando
        bArrived = TRUE;
    if (flDist < 75.0f)
        bArrived = TRUE;
    BOTF(this, float, 0x102c) = flDist;

    if (bArrived)
    {
        BOTF(this, float, 0x102c) = 0;
        if (BOTF(this, int, 0x1024) != -1)
        {
            unsigned short iNext = (unsigned short)WaypointRouteFromTo((short)BOTF(this, int, 0x1008), (short)BOTF(this, int, 0x1024), iTeam);
            if (iNext != 0xffff)
            {
                BOTF(this, int, 0x1008) = iNext;
                BOTF(this, float, 0xff8) = waypoints[iNext].x;
                BOTF(this, float, 0xffc) = waypoints[iNext].y;
                BOTF(this, float, 0x1000) = waypoints[iNext].z;
                BOTF(this, float, 0x1004) = gpGlobals->time;
            }
        }
        else
        {
            int iter = 4;
            for (;;)
            {
                if (FindWaypoint())
                    break;
                if (iter)
                {
                    BOTF(this, int, 0x100c + iter * 4) = -1;          // 4108 + iter*4 [OK]
                    iter--;
                }
                else
                {
                    BOTF(this, int, 0x1008) = -1;
                    for (int i = 0; i <= 4; i++)
                        BOTF(this, int, 0x100c + i * 4) = -1;
                    return FALSE;
                }
            }
        }
    }

    Vector vecTarget(BOTF(this, float, 0xff8), BOTF(this, float, 0xffc), BOTF(this, float, 0x1000));
    Vector vecAngles = GetAimAngles(vecTarget);
    BOTF(this, Vector, 0xc10) = vecAngles;                                    // [OK] angulos ideais
    if ((15.0f < BOTF(this, float, 0xc28) && 15.0f < BOTF(this, float, 0xc30)) ||
        (15.0f < BOTF(this, float, 0xc2c) && 15.0f < BOTF(this, float, 0xc34)))
        ResetMoveSpeed();
    return TRUE;
}

// ---------------------------------------------------------------------------
// CheckStrafe: bot+0xd60 proximo instante, +0xd64 direcao (0 = esquerda, 1 = direita, 2 = nenhuma), +0xd68 movimento lateral
// ---------------------------------------------------------------------------
extern BOOL CheckForCollide(edict_t *pEdict, int iDir, float flDist);        // [?] funcao livre do ESF

void CBot::CheckStrafe(void)
{
    float flSpeed = (float)GetMaxSpeed();
    if (flSpeed == 0.0f)
        return;

    int &iStrafe = BOTF(this, int, 0xd64);
    float &flNext = BOTF(this, float, 0xd60);
    if (iStrafe == 0)      BOTF(this, float, 0xd68) = -flSpeed;               // [OK]
    else if (iStrafe == 1) BOTF(this, float, 0xd68) = flSpeed;

    if (flNext > gpGlobals->time)
        return;
    iStrafe = 2;
    flNext = gpGlobals->time + 0.8f;                                          // [OK]

    BOOL bA = CheckForCollide(pev->pContainingEntity, 2, 70.0f);              // [OK] 0x428c0000 = 70.0
    BOOL bB = CheckForCollide(pev->pContainingEntity, 4, 70.0f);
    if (bA && !bB)
    {
        iStrafe = 1;
        flNext = gpGlobals->time + RANDOM_FLOAT(0.3f, 0.7f);                  // [?] 0.3..0.7 ("333?" = 0.7f)
        return;
    }
    if (!bA && bB)
    {
        iStrafe = 0;
    }
    else
    {
        // livre dos dois lados (ou preso nos dois): desvia de companheiros de time proximos
        if (!g_teamplay)
            return;
        if (!BOTF(this, char, 0xa20))
            MakePlayerList();
        CBasePlayer *pNear = NULL;
        float flNearest = 400.0f;
        for (int i = 0; i < BOTF(this, char, 0xaac); i++)
        {
            CBasePlayer *pPl = BOTF(this, CBasePlayer *, 0xa24 + i * 4);
            if (pev->team != pPl->pev->team)
                continue;
            float flD = (pPl->pev->origin - pev->origin).Length();
            if (flD <= 400.0f && ((short)UTIL_GetHeadingPercentage(this, pPl) > 64 || EntIsInFieldOfView(this, pPl)))
                if (flD < flNearest) { flNearest = flD; pNear = pPl; }
        }
        if (!pNear)
            return;
        int iDir = UTIL_EntDir(this, pNear->pev->origin);
        if (!(iDir & 2) && ((iDir & 4) || RANDOM_LONG(0, 1)))
            iStrafe = 0;
        else
            iStrafe = 1;
    }
    flNext = gpGlobals->time + RANDOM_FLOAT(0.3f, 0.7f);                      // [?]
}

BOOL CBot::BotCanPowerUp(void)
{
    if (*((unsigned char *)pev + 0x1a7) & 4)                                  // [OK]
        return FALSE;
    static const int s_off[] = { 0x364, 0x330, 0x334, 0x33c };                // [?] flags de estado, todas devem ser 0
    for (int i = 0; i < 4; i++)
        if (BOTF(this, int, s_off[i]))
            return FALSE;
    if (!IsAlive())                                                           // [?] vtable +0x8c
        return FALSE;
    static const int s_off2[] = { 0x328, 0x340, 0x770, 0x37c, 0x478, 0x6bc };
    for (int i = 0; i < 6; i++)
        if (BOTF(this, int, s_off2[i]))
            return FALSE;
    return TRUE;
}

BOOL CBot::BotShouldFallDown(void)
{
    if ((unsigned short)(BOTF(this, unsigned short, 0xa18) - 60) > 98)        // [OK] estado fora de 60..158
        return FALSE;
    RANDOM_LONG(1, 100);                                                      // [OK] resultado descartado (chamada original mantida)
    if (RANDOM_LONG(1, 100) > BOTF(BOTF(this, char *, 0xa04), short, 0x2e))   // [?] tipo/offset de +0x2e
        return FALSE;
    CBasePlayer *pEnemy = BOT_ENEMY(this);
    int iMode = BOTF(this, int, 0xa1c);
    if ((iMode == 3 || iMode == 5) && pEnemy)
    {
        float flDist = (pEnemy->pev->origin - pev->origin).Length();
        if (!(flDist >= 1000.0f || pev->origin.z - 350.0 <= pEnemy->pev->origin.z))
            return FALSE;                                                     // inimigo perto e abaixo: nao cair
    }
    return CheckForCollide(pev->pContainingEntity, 64, 1200.0f) ? FALSE : TRUE;   // [OK]
}

extern CBaseEntity *UTIL_GetLastAttackFromPlayer(CBasePlayer *pPlayer);       // [OK] retorno tem pev em +0
extern Vector GetNearestCollision(CBaseEntity *pEnt, float flRange);          // [?] retorno por valor (Vector zero = nada)

// bBeam: TRUE = usar o ultimo ataque lancado contra o bot; FALSE = o proprio bot. [OK] retorna TRUE se achou colisao
BOOL CBot::BotCanBeamJump(short bBeam)
{
    CBaseEntity *pAttack = NULL;
    if (bBeam)
    {
        if (!BOTF(this, int, 0x33c))
            return FALSE;
        pAttack = UTIL_GetLastAttackFromPlayer(this);
        if (!pAttack)
            return FALSE;
    }
    Vector vecHit = GetNearestCollision(pAttack ? pAttack : (CBaseEntity *)this, 200.0f);   // [?] 200.0f constante lida da GOT
    if (vecHit == g_vecZero)
        return FALSE;
    BOTF(this, Vector, 0xb24) = vecHit;                                       // [OK]
    BOTF(this, Vector, 0xc10) = GetAimAngles(vecHit);                         // [OK]
    return TRUE;
}

BOOL CBot::BotShouldMakeKameTorps(void)
{
    if (!*((char *)g_pBotManager + 0xd47) || !*((char *)g_pBotManager + 0xd46))   // [OK] BotManager+3399/+3398
        return FALSE;
    if (!HasWeapons())
        return FALSE;
    RANDOM_LONG(1, 100);                                                      // [OK] resultado descartado
    if (RANDOM_LONG(1, 100) > BOTF(BOTF(this, char *, 0xa04), short, 0x10))   // [OK]
        return FALSE;
    void *pClass = BOTF(this, void *, 0x764);
    if ((*(int (**)(void *))(*(char **)pClass + 52))(pClass) != 2)            // [OK] vtable +0x34 da classe == 2
        return FALSE;

    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (!UTIL_IsValidPlayer(pPl, 1, 1))
            continue;
        float flDist = (pPl->pev->origin - pev->origin).Length();
        if (flDist > 5000.0f)                                                 // [OK]
            continue;
        if (g_teamplay && pev->team == pPl->pev->team && flDist < 2300.0f)    // [OK] mesmo time e perto: ignora
            continue;
        if (flDist < 2300.0f)
            return TRUE;                                                      // [OK]
    }

    if (g_teamplay)
    {
        if (!BOTF(this, char, 0xa20))
            MakePlayerList();
        for (int i = 0; i < BOTF(this, char, 0xaac); i++)
        {
            CBasePlayer *pMate = BOTF(this, CBasePlayer *, 0xa24 + i * 4);
            BOOL bBotLike = FALSE;
            if (!pMate->IsNetClient())                                        // [?] vtable +0xa4
                bBotLike = (*((unsigned char *)pMate->pev + 0x1a5) & 32) != 0;
            if (bBotLike && pev->team == pMate->pev->team && pMate &&
                UTIL_IsValidPlayer(BOTF(pMate, CBasePlayer *, 0xb6c), 1, 1))  // aliado com inimigo valido
                return TRUE;
        }
    }
    return FALSE;
}

extern Vector PredictEntityPos(CBaseEntity *pEnt, float flTime, short fFlag);   // [?] funcao livre; retorno por valor

void CBot::AimAtEnemy(CBasePlayer *pEnemy)
{
    float flDist = (pEnemy->pev->origin - pev->origin).Length();              // [OK]
    float flSpeed = pEnemy->pev->velocity.Length();                           // [OK] pev+0x20
    float flLead = 0.0f;
    if (flSpeed + 35.0f < flDist)                                             // [OK]
    {
        BOOL bIs11 = (*(int *)((char *)pev + 0x108) == 11);                   // [?] campo raw
        char cSkill = BOTF(this, char, 0x9fc);
        if (cSkill == 0)      flLead = bIs11 ? RANDOM_FLOAT(0.6f, 1.1f) : RANDOM_FLOAT(0.2f, 0.4f);   // [OK] constantes lidas da GOT
        else if (cSkill == 1) flLead = bIs11 ? RANDOM_FLOAT(0.4f, 0.8f) : RANDOM_FLOAT(0.1f, 0.2f);
    }
    Vector vecAim = pEnemy->pev->origin;
    if (flLead > 0.0f)
        vecAim = PredictEntityPos(pEnemy, flLead, 1);
    BOTF(this, Vector, 0xc10) = GetAimAngles(vecAim);                         // [OK]
}

// ---------------------------------------------------------------------------
// CheckForHuntEnemy: escolhe um jogador para cacar. Bot: +0x1034 alvo, +0x1024 wp destino, +0x1008 wp atual,
// +0x1038 ultima posicao conhecida (x,y,z,tempo), +0x1048 anterior, +0x105c ultima distancia, +0x1058 recarga.
// Jogador: historico de 5 posicoes {x,y,z,tempo} de 16 bytes em +0x6d4.
// ---------------------------------------------------------------------------
extern short WaypointFindNearest(Vector *pvecPos, edict_t *pEdict, float flRange, int iTeam);   // [?]

BOOL CBot::CheckForHuntEnemy(void)
{
    if (!BOTF(this, int, 0x320) || !*((char *)g_pBotManager + 0xd46) || BOTF(this, float, 0x1058) > gpGlobals->time)   // [?] 0x320 = vivo/ativo
        return FALSE;
    BOTF(this, float, 0x1058) = gpGlobals->time + 1.25f;                      // [OK]

    CBasePlayer *pTarget = NULL;
    Vector vecMe = pev->origin;
    unsigned short wpTarget = 0xffff;                                         // wp proximo do alvo
    unsigned short wpMe = 0xffff;                                             // wp proximo do bot
    unsigned short sBestIdx = 0xffff, sBestScore = 0;                         // melhor ponto do historico
    float flBest = 9999.9f, flBestTrail = 9999.9f;

    if (num_waypoints)
    {
        Vector v = pev->origin;
        wpMe = WaypointFindNearest(&v, pev->pContainingEntity, 1750.0f, g_teamplay ? pev->team : -1);   // [OK]
    }

    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        if (pPl == (CBasePlayer *)this)
            continue;
        if (!(UTIL_IsValidPlayer(pPl, 1, 1) && (!g_teamplay || pev->team != pPl->pev->team)))
            continue;
        float flDist = (pPl->pev->origin - pev->origin).Length();
        if (flDist > flBest)
            continue;

        if (wpMe != 0xffff)
        {
            Vector v = pPl->pev->origin;
            unsigned short wpPl = WaypointFindNearest(&v, pPl->pev->pContainingEntity, 750.0f, pev->team);
            if (wpPl != 0xffff && (unsigned short)WaypointRouteFromTo(wpMe, wpPl, pev->team) != 0xffff)
            {
                wpTarget = wpPl;                                              // alvo alcancavel por waypoints
                flBest = flDist;
                pTarget = pPl;
                continue;
            }
        }

        for (int k = 4; k >= 0; k--)                                          // historico de posicoes do alvo
        {
            float *pPos = &BOTF(pPl, float, 0x6d4 + k * 16);
            Vector vecTrail(pPos[0], pPos[1], pPos[2]);
            if (gpGlobals->time - 15.0f > pPos[3])
                continue;
            float flD = (vecTrail - vecMe).Length();
            if (flD > 6000.0f || flD < 300.0f)
                continue;
            unsigned short sScore = 1;
            if (flD < flBest)      { flBest = flD; sScore = 2; }
            if (flD < flBestTrail) { flBestTrail = flD; sScore += 1; }
            BOOL bSame = (pPos[0] == BOTF(this, float, 0x1048) && pPos[1] == BOTF(this, float, 0x104c) && pPos[2] == BOTF(this, float, 0x1050));
            if (!bSame && sScore >= sBestScore && CanReachPoint(vecTrail))    // [?] vtable +0xe4
            {
                sBestScore = sScore;
                sBestIdx = k;
                wpTarget = 0xffff;
                pTarget = pPl;
            }
        }
    }

    if (!pTarget)
        return FALSE;
    BOTF(this, CBasePlayer *, 0x1034) = pTarget;
    if (wpTarget != 0xffff)
    {
        BOTF(this, int, 0x1024) = wpTarget;
        BOTF(this, int, 0x1008) = wpMe;
    }
    else if (sBestIdx != 0xffff)
    {
        for (int j = 0; j < 4; j++)                                           // 0x1038.. -> 0x1048..
            BOTF(this, int, 0x1048 + j * 4) = BOTF(this, int, 0x1038 + j * 4);
        float *pPos = &BOTF(pTarget, float, 0x6d4 + sBestIdx * 16);
        for (int j = 0; j < 4; j++)
            BOTF(this, float, 0x1038 + j * 4) = pPos[j];
        BOTF(this, int, 0x105c) = 0;
        Vector vecLast(BOTF(this, float, 0x1038), BOTF(this, float, 0x103c), BOTF(this, float, 0x1040));
        BOTF(this, Vector, 0xc10) = GetAimAngles(vecLast);                    // [OK]
        ToggleTurbo(1);
    }
    return TRUE;                                                              // [?] valor de retorno nao decompilado com precisao
}

// ---------------------------------------------------------------------------
// BotCombatMovement: a cada ~1s testa 3 inclinacoes (0, -30, +30) x 5 guinadas (-90,-45,0,45,90) com
// UTIL_TraceHull de 10000 unidades e escolhe a direcao mais livre. +0xb64 proximo teste, +0xb68 mascara de direcao
// (2 esq, 4 dir, 8 tras, 0x10 frente, 0x20/0x40 pulo/abaixar [?]).
// Tabelas de salto: 0x171270 (guinada por j) e 0x171650 (mascara por j), lidas do assembly.
// ---------------------------------------------------------------------------
void CBot::BotCombatMovement(void)
{
    CBasePlayer *pEnemy = BOT_ENEMY(this);
    if (!pEnemy)
        return;
    if ((float)GetMaxSpeed() == 0.0f)                                         // [OK]
        return;
    if (!*((char *)g_pBotManager + 0xd48))                                    // [OK] BotManager+3400
        return;

    short &sDirMask = BOTF(this, short, 0xb68);
    float &flNext = BOTF(this, float, 0xb64);

    float flDist = (pEnemy->pev->origin - pev->origin).Length();              // [OK]
    if (BOTF(this, char, 0x9fc) > 2 && !EntIsInFieldOfView(this, pEnemy))     // [OK] nivel > 2 e inimigo fora do campo de visao
    {
        ResetMoveSpeed();
        sDirMask = 0;
    }

    float flBest = 0;
    int iBestI = 0, iBestJ = 0;
    BOOL bCanPitch = !BOTF(this, int, 0x320);                                 // [?]
    if (flNext < gpGlobals->time)
    {
        BOOL bClose = 1300.0f > flDist;                                       // [OK] RandomFloat(1300,1600) descartado no original
        RANDOM_FLOAT(1300.0f, 1600.0f);
        Vector vecOrigin = pev->origin;                                       // [?] vfunc +0xd0

        static const float s_flYaw[5] = { -90.0f, -45.0f, 0.0f, 45.0f, 90.0f };   // [OK] tabela de salto
        for (int i = 0; i <= 2; i++)
        {
            float flPitch;
            if (i == 0)       flPitch = 0;
            else if (i == 1) { if (!bCanPitch) continue; flPitch = -30.0f; }
            else              flPitch = 30.0f;

            for (int j = 0; j <= 4; j++)
            {
                Vector vecAng = pev->v_angle;
                vecAng.y = UTIL_WrapAngle(s_flYaw[j] + vecAng.y);             // [OK]
                vecAng.x = UTIL_WrapAngle(flPitch);
                UTIL_MakeVectors(vecAng);
                Vector vecEnd = bClose ? vecOrigin - gpGlobals->v_forward * 10000.0f
                                       : vecOrigin + gpGlobals->v_forward * 10000.0f;   // [?] o decompilado acumula no mesmo temporario
                TraceResult tr;
                UTIL_TraceHull(pev->origin + pev->view_ofs, vecEnd, ignore_monsters, 1, pev->pContainingEntity, &tr);   // [OK]
                float flFree = (pev->origin - tr.vecEndPos).Length();
                if (flFree > flBest)
                {
                    flBest = flFree;
                    iBestI = i;
                    iBestJ = j;
                }
            }
        }
        sDirMask = 0;
        flNext = gpGlobals->time + RANDOM_FLOAT(0.8f, 1.2f);                  // [?] resultado do RandomFloat perdido
        if (iBestI == 1)      sDirMask |= 0x20;
        else if (iBestI == 2) sDirMask |= 0x40;
        switch (iBestJ)                                                       // [OK] tabela de salto 0x171650
        {
        case 0: sDirMask |= 2; break;
        case 1: sDirMask |= 2; sDirMask |= bClose ? 8 : 0x10; break;
        case 2: sDirMask |= bClose ? 8 : 0x10; break;
        case 3: sDirMask |= 4; sDirMask |= bClose ? 8 : 0x10; break;
        case 4: sDirMask |= 4; break;
        }
    }
    ResetMoveSpeed();
    SetMoveDir(sDirMask);
    CheckStrafe();
}

// ---------------------------------------------------------------------------
// Lista de combos: +0xb8c -> { head, tail }, no = { dado, prox, ant }
// ---------------------------------------------------------------------------
struct combo_node_s { void *pData; combo_node_s *pNext; combo_node_s *pPrev; };
struct combo_list_s { combo_node_s *pHead; combo_node_s *pTail; };

void CBot::ClearMeleeComboList(void)
{
    combo_list_s *pList = BOTF(this, combo_list_s *, 0xb8c);
    if (!pList)
        return;
    while (pList->pHead && pList->pHead->pData)                               // [OK] remove cabeca ate esvaziar
    {
        combo_node_s *pNode = pList->pHead;
        void *pData = pNode->pData;
        if (pNode == pList->pTail)
            pList->pTail = pNode->pNext;
        pList->pHead = pNode->pNext;
        if (pList->pHead)
            pList->pHead->pPrev = NULL;
        pNode->pNext = NULL;
        delete pNode;
        delete (char *)pData;
    }
    combo_node_s *p = pList->pHead;                                           // sobras (dado nulo)
    while (p)
    {
        combo_node_s *pDel = p;
        p = p->pNext;
        pDel->pNext = NULL;
        pDel->pPrev = NULL;
        delete pDel;
    }
    pList->pTail = NULL;
    pList->pHead = NULL;
    delete pList;
    BOTF(this, combo_list_s *, 0xb8c) = NULL;
}

// Define quanto tempo carregar o combo (+0xb90) e quais botoes/direcoes usar (+0xb9c mascara, +0xb94/+0xb98 botao)
int CBot::SetComboChargeButton(MELEE_STRENGTH iStrength, int iButtons)
{
    CPlayerMelee *pMelee = (CPlayerMelee *)((char *)this + 0x380);            // [OK] a3 + 896
    float *pVals = (float *)pMelee->GetSkillValues();
    float r0 = RANDOM_FLOAT(pVals[0], pVals[1]);                              // [?] ordem dos argumentos do RandomFloat
    float r1 = RANDOM_FLOAT(pVals[1], pVals[2]);
    float r2 = RANDOM_FLOAT(pVals[2], pVals[3]);
    float flCharge = 0;
    if (iStrength == 0)      flCharge = r0;
    else if (iStrength == 1) flCharge = r1;
    else if (iStrength == 2) flCharge = r2;
    else flCharge = BOTF(this, float, 0xb90);                                 // sem mudanca
    BOTF(this, float, 0xb90) = flCharge + gpGlobals->time;
    BOTF(this, int, 0xb9c) = 0;
    BOTF(this, int, 0xb98) = BOTF(this, int, 0xb94);
    BOTF(this, float, 0xba0) = gpGlobals->time + 0.15f;                       // [OK]
    if (iButtons & 0x8)   { SetMoveDir(16); BOTF(this, int, 0xb9c) |= 0x8; }
    if (iButtons & 0x10)  { SetMoveDir(8);  BOTF(this, int, 0xb9c) |= 0x10; }
    if (iButtons & 0x200) { SetMoveDir(2);  BOTF(this, int, 0xb9c) |= 0x200; }
    if (iButtons & 0x400) { SetMoveDir(4);  BOTF(this, int, 0xb9c) |= 0x400; }
    if (iButtons & 0x1)   BOTF(this, int, 0xb94) = 1;
    if (iButtons & 0x800) BOTF(this, int, 0xb94) = 0x800;
    return iButtons;
}

extern BOOL IsNull(edict_t *pEnt);                                            // [?] funcao livre do ESF

// Ataque inimigo ("magic_attack") mais proximo dentro de [flMin, flMax], de frente, visivel e alcancavel
CBaseEntity *CBot::GetNearestHostileAttack(float flMinDist, float flMaxDist)
{
    CBaseEntity *pEnt = NULL;
    CBaseEntity *pBest = NULL;
    float flBest = 9999.9f;
    for (;;)
    {
        pEnt = UTIL_FindEntityByString(pEnt, "globalname", "magic_attack");   // [OK]
        if (!pEnt)
            break;
        if (IsNull(pEnt->edict()))
            continue;
        if (g_teamplay && pEnt->pev->owner && !IsNull(pEnt->pev->owner) &&
            pEnt->pev->owner->v.team == pev->team)                            // [OK] ataque do proprio time
            continue;
        float flDist = (pEnt->pev->origin - pev->origin).Length();
        if (flDist < flMinDist || flDist > flMaxDist)
            continue;
        if (flDist > flBest || (short)UTIL_GetHeadingPercentage(this, pEnt) <= 64 ||
            (BOTF(this, char, 0x9fc) && !EntIsInFieldOfView(this, pEnt)) ||
            !CanReachPoint(pEnt->pev->origin))                                // [?] vtable +0xe4
            continue;
        pBest = pEnt;
        flBest = flDist;
    }
    return pBest;
}

// ---------------------------------------------------------------------------
// CheckSBotStuff: "super bot". Tabela no BotManager: entrada (nivel-1)*16 a partir de +0x10c4 (4292):
//   +0 short regen de ki (0xffff = encher), +2 short regen de vida (0xffff = encher), +4 int power level, +8 int renderamt (-1 = pulsar)
// Bot: +0xba4 nivel, +0xbac proxima rodada, +0xbb0 short alfa, +0xbb2 short passo do pulso, +0x1060 flag de time.
// ---------------------------------------------------------------------------
void CBot::CheckSBotStuff(void)
{
    char *pEntry = (char *)g_pBotManager + 4292 + (BOTF(this, short, 0xba4) - 1) * 16;   // [OK]
    short &sAlpha = BOTF(this, short, 0xbb0);
    short &sStep = BOTF(this, short, 0xbb2);

    if (pev->renderfx != 19)
        pev->rendermode = 2;                                                  // [OK] pev+0x148
    if (*(int *)(pEntry + 8) == -1)
    {
        if (pev->renderfx != 19)                                              // pulso de transparencia
        {
            if (sAlpha <= 19)       sStep = 1;
            else if (sAlpha > 254)  sStep = -1;
            sAlpha += sStep * 3;
            if (sAlpha > 0xff)      sAlpha = 0xff;
            else if (sAlpha < 0)    sAlpha = 0;
            pev->renderamt = (float)sAlpha;                                   // [OK] pev+0x14c
        }
    }
    else if (pev->renderfx != 19)
        pev->renderamt = (float)*(int *)(pEntry + 8);

    if (BOTF(this, float, 0xbac) < gpGlobals->time)
    {
        BOTF(this, float, 0xbac) = gpGlobals->time + 1.0f;                    // [OK]
        int iPL = *(int *)(pEntry + 4);
        if (m_iPowerLevel < iPL)
        {
            SetPowerLevel(iPL);
            SetMaxPowerLevel(iPL);
        }
        int iKi = (int)pev->fuser4;                                           // [OK] ki
        if (iKi <= 999)
        {
            if (*(unsigned short *)pEntry == 0xffff)
                iKi = 1000;
            else
            {
                iKi += *(short *)pEntry;
                if (iKi > 1000) iKi = 1000;
            }
            pev->fuser4 = (float)iKi;
        }
        int iHealth = (int)pev->health;
        int iMax = BOTF(this, int, 0x24c);                                    // [?] vida maxima
        if (iHealth < iMax)
        {
            if (*(unsigned short *)(pEntry + 2) == 0xffff)
                pev->health = (float)iMax;
            else
            {
                iHealth = (int)((double)*(short *)(pEntry + 2) + pev->health);
                if (iHealth > iMax) iHealth = (short)iMax;
                pev->health = (float)iHealth;
            }
        }
    }

    if (pev->team != 2)                                                       // [OK] SBots ficam no time 2 (Good)
    {
        BOTF(this, short, 0x1060) = 2;
        g_pGameRules->ClientCommand(this, "jointeam");                        // [?] vfunc do gamerules (+0x60 do objeto em +0x44)
    }

    char szTag[32];
    sprintf(szTag, "[SBot%i]", BOTF(this, short, 0xba4));                     // [OK]
    char szName[32];
    memset(szName, 0, sizeof(szName));
    strncpy(szName, STRING(pev->netname), sizeof(szName) - 1);
    BOOL bHasTag = strstr(szName, szTag) != NULL;
    if (strncmp(szTag, STRING(pev->netname), 7) != 0 && !bHasTag)             // [OK] poe o prefixo no nome
    {
        char szNew[64];
        char *pInfo = g_engfuncs.pfnGetInfoKeyBuffer(pev->pContainingEntity);
        int iIdx = g_engfuncs.pfnIndexOfEdict(pev->pContainingEntity);
        sprintf(szNew, "%s%s", szTag, STRING(pev->netname));
        g_engfuncs.pfnSetClientKeyValue(iIdx, pInfo, "name", szNew);
    }
}

// ---------------------------------------------------------------------------
// Dragon Balls. Bot: +0xb30 esfera alvo, +0xb34 proxima checagem, +0x760 (carregando esfera), +0x1024 wp destino
// ---------------------------------------------------------------------------
extern Vector GatherDBPosForTeamGood, GatherDBPosForTeamEvil;                 // [OK] pontos de reuniao das esferas por time
extern BOOL UTIL_DBsAreGathered(void);                                        // [?]
extern BOOL UTIL_DBsAreActive(void);                                          // [?]

static Vector *GatherPosForTeam(CBot *pBot)
{
    return (pBot->pev->team == 1) ? &GatherDBPosForTeamGood : &GatherDBPosForTeamEvil;   // [OK] literal do original
}

void CBot::CheckDragonBalls(void)
{
    if (BOTF(this, float, 0xb34) <= gpGlobals->time)
    {
        BOTF(this, float, 0xb34) = gpGlobals->time + 0.75f;                   // [OK]
        if (UTIL_DBsAreGathered())
            SearchGatheredSpot();
        else if (BOTF(this, int, 0x760))
            SearchDBGatherSpot();
        else if (!BOT_ENEMY(this))
            SearchDragonBall();
    }
}

short CBot::SearchNearestWPForDBSpot(void)
{
    if (GatherDBPosForTeamGood == g_vecZero)
        return -1;
    if (GatherDBPosForTeamEvil == g_vecZero)
        return -1;
    Vector vecPos = *GatherPosForTeam(this);
    return WaypointFindNearest(&vecPos, pev->pContainingEntity, 1000.0f, pev->team);   // [OK]
}

BOOL CBot::SearchDBGatherSpot(void)
{
    if (GatherDBPosForTeamGood == g_vecZero)
        return FALSE;
    if (GatherDBPosForTeamEvil == g_vecZero || !BOTF(this, int, 0x760))
        return FALSE;
    if (CanReachPoint(*GatherPosForTeam(this)))                               // [?] vtable +0xe4
        return TRUE;
    short iWP = -1;
    if (num_waypoints)
        iWP = SearchNearestWPForDBSpot();
    if (iWP != -1)
    {
        Vector vecPos = pev->origin;
        short iMine = WaypointFindNearest(&vecPos, pev->pContainingEntity, 1750.0f, pev->team);
        if (iMine != -1 && (unsigned short)WaypointRouteFromTo(iMine, iWP, pev->team) != 0xffff)
        {
            BOTF(this, int, 0x1024) = iWP;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL CBot::SearchGatheredSpot(void)
{
    if (BOTF(this, char, 0xb39))                                              // [?]
        return FALSE;
    CBaseEntity *pBall = UTIL_FindEntityByClassname(NULL, "dragonball");
    if (IsNull(pBall->edict()))
        return FALSE;
    Vector vecBall = pBall->pev->origin;
    if (CanReachPoint(vecBall))
    {
        BOTF(this, CBaseEntity *, 0xb30) = pBall;
        return TRUE;
    }
    short iBall = -1;
    if (num_waypoints)
    {
        Vector v = vecBall;
        iBall = WaypointFindNearest(&v, pev->pContainingEntity, 1750.0f, pev->team);
    }
    if (iBall != -1)
    {
        Vector vecMe = pev->origin;
        short iMine = WaypointFindNearest(&vecMe, pev->pContainingEntity, 1750.0f, pev->team);
        if (iMine != -1 && (unsigned short)WaypointRouteFromTo(iMine, iBall, pev->team) != 0xffff)
        {
            BOTF(this, int, 0x1024) = iBall;
            BOTF(this, CBaseEntity *, 0xb30) = pBall;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL CBot::SearchDragonBall(void)
{
    if (!g_teamplay)
        return FALSE;
    if (CVAR_GET_FLOAT("mp_gamemode") != 2.0f)                                // [OK]
        return FALSE;
    if (BOTF(this, int, 0x760))
        return TRUE;
    if (UTIL_DBsAreGathered() || !UTIL_DBsAreActive())
        return FALSE;

    CBaseEntity *pEnt = NULL, *pBest = NULL;
    float flBest = 9999.9f;
    short iBestWP = -1, iBallWP = -1, iMyWP = -1;
    Vector vecGather = *GatherPosForTeam(this);
    if (num_waypoints)
    {
        Vector v = pev->origin;
        iMyWP = WaypointFindNearest(&v, pev->pContainingEntity, 1750.0f, pev->team);
    }
    for (;;)
    {
        pEnt = UTIL_FindEntityByClassname(pEnt, "dragonball");
        if (!pEnt)
            break;
        if (IsNull(pEnt->edict()))
            continue;
        float flDist = (pEnt->pev->origin - pev->origin).Length();
        if (flDist >= flBest)
            continue;
        if ((pEnt->pev->origin - vecGather).Length() < 1000.0f)               // [OK] esfera ja esta no ponto de reuniao
            continue;
        if (!CanReachPoint(pEnt->pev->origin))                                // [?] vtable +0xe4
        {
            if (iMyWP == -1)
                continue;
            Vector v = pEnt->pev->origin;
            iBallWP = WaypointFindNearest(&v, pEnt->pev->pContainingEntity, 750.0f, pev->team);
            if (iBallWP == -1 || (unsigned short)WaypointRouteFromTo(iMyWP, iBallWP, pev->team) == 0xffff)
                continue;
        }
        flBest = flDist;
        pBest = pEnt;
        if (iBallWP != -1)
            iBestWP = iBallWP;
        iBallWP = -1;
    }
    if (!pBest)
        return FALSE;
    BOTF(this, CBaseEntity *, 0xb30) = pBest;
    if (iBestWP == -1)
        BOTF(this, Vector, 0xc10) = GetAimAngles(pBest->pev->origin);         // [OK]
    else
        BOTF(this, int, 0x1024) = iBestWP;
    return TRUE;
}

// ---------------------------------------------------------------------------
// MakePlayerList: +0xa24 lista de ate 32 jogadores visiveis, +0xaac contagem, +0xaa4 mascara "alcancavel", +0xaa8 mascara "ja checado",
// +0xa20 lista valida. Se o jogador e bot, a lista dele e atualizada em espelho.
// ---------------------------------------------------------------------------
void CBot::MakePlayerList(void)
{
    int iMe = g_engfuncs.pfnIndexOfEdict(pev->pContainingEntity);
    for (int i = 0; i <= 31; i++)
        BOTF(this, CBasePlayer *, 0xa24 + i * 4) = NULL;
    BOTF(this, int, 0xaac) = 0;
    unsigned int uMyBit = 1u << ((iMe - 1) & 31);

    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        CBasePlayer *pPl = (CBasePlayer *)UTIL_PlayerByIndex(i);
        unsigned int uBit = 1u << ((i - 1) & 31);
        unsigned int &uChecked = BOTF(this, unsigned int, 0xaa8);
        unsigned int &uReach = BOTF(this, unsigned int, 0xaa4);
        if (uBit & uChecked)                                                  // ja calculado (por outro bot)
        {
            if (uBit & uReach)
            {
                BOTF(this, CBasePlayer *, 0xa24 + BOTF(this, int, 0xaac) * 4) = pPl;
                BOTF(this, int, 0xaac)++;
            }
            continue;
        }
        if ((CBasePlayer *)this == pPl || !UTIL_IsValidPlayer(pPl, 1, 1))
            continue;

        BOOL bBotLike = FALSE;
        if (!pPl->IsNetClient())                                              // [?] vtable +0xa4
            bBotLike = (*((unsigned char *)pPl->pev + 0x1a5) & 32) != 0;
        if (bBotLike && pPl)
            BOTF(pPl, unsigned int, 0xaa8) |= uMyBit;                         // espelha: o outro bot tambem ja checou este par
        uChecked |= uBit;
        if (CanReachPoint(pPl->pev->origin))                                  // [?] vtable +0xe4
        {
            BOTF(this, CBasePlayer *, 0xa24 + BOTF(this, int, 0xaac) * 4) = pPl;
            BOTF(this, int, 0xaac)++;
            uReach |= uBit;
            if (bBotLike)
                BOTF(pPl, unsigned int, 0xaa4) |= uMyBit;
        }
    }
    BOTF(this, char, 0xa20) = 1;
}

// SenseHit: quando o bot e atingido (+0xab8 = instante do golpe) preenche o danger_info_s
void CBot::SenseHit(danger_info_s &Danger)
{
    if (!(gpGlobals->time - 0.5f < BOTF(this, float, 0xab8)))                 // [OK] golpe nos ultimos 0.5s
        return;
    char *pSkill = BOTF(this, char *, 0xa04);
    Danger.m_iDanger = 175;                                                   // [OK] 0xaf
    int iLevel = BOTF(pSkill, int, 0x34);
    if (iLevel == 0)      Danger.m_iDanger = (short)(int)((float)Danger.m_iDanger * 0.85f);   // [OK]
    else if (iLevel == 2) Danger.m_iDanger = (short)(int)((float)Danger.m_iDanger * 1.25f);
    Danger.m_fl0  = (float)BOTF(pSkill, short, 0x26) * 1.75f;                 // [OK]
    Danger.m_fl4  = (float)BOTF(pSkill, short, 0x28) * 0.2f;
    Danger.m_fl8  = 0.01f;
    Danger.m_flC  = (float)BOTF(pSkill, short, 0x30) * 0.3f;
    Danger.m_fl10 = (float)BOTF(pSkill, short, 0x2e) * 0.3f;
    Danger.m_cFlags[0] = Danger.m_cFlags[1] = Danger.m_cFlags[2] = 0;
    BOTF(this, float, 0xab8) = 0;
}
