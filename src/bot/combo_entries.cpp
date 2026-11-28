// combo_entries.cpp -- entradas dos combos dos bots (CAscend/CPowerup/CFallDown...ComboEntry). RECUPERADO de decomp_raw.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
#include "esf_classes.h"
#include "player_esf_manual.h"
#include "combo.h"
#include "esf_util.h"

#define BPL(off)   BOTF(m_pBot, int, (off))      // campos do bot/jogador por offset
#define BPEV       (((CBasePlayer *)m_pBot)->pev)

// ---------------------------------------------------------------- CAscendComboEntry
CAscendComboEntry::CAscendComboEntry(CBot *pBot)        // 0x165c20 [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
    m_flDuration = 1.5f;
}
float CAscendComboEntry::GetDelay(void) { return 0.0f; }          // [OK]
void CAscendComboEntry::Activate(void)                              // 0x165c80 [OK]
{
    m_flActivateTime = gpGlobals->time;
    m_iStatus = 1;
    m_flDuration = m_flDuration + gpGlobals->time;                  // vira o instante limite
}
void CAscendComboEntry::Think(void)                                 // 0x15c530 [OK] sobe ate o limite se o bot puder
{
    if (BPL(0x324))                                                  // turbo ligado
        ((CBasePlayer *)m_pBot)->StopTurbo();
    if (!BPL(0x770) && m_flDuration >= gpGlobals->time) {
        if (m_pBot->BotCanAscend()) {
            ((CBasePlayer *)m_pBot)->StartAscend();
            return;
        }
    }
    m_iStatus = 2;
}

// ---------------------------------------------------------------- CPowerupComboEntry
CPowerupComboEntry::CPowerupComboEntry(CBot *pBot)      // 0x165b90 [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
}
float CPowerupComboEntry::GetDelay(void) { return 0.0f; }          // [OK]
void CPowerupComboEntry::Think(void)                                // 0x15c430 [OK] carrega ki (power up) ate o limite do nivel de agressividade
{
    if (m_pBot->BotCanPowerUp()) {
        if (!BPL(0x330) && RANDOM_LONG(0, 1))
            ((CBasePlayer *)m_pBot)->StartPowerUp();
        short sKiLimit = 990;
        if (BOT_ENEMY(m_pBot))
            m_pBot->AimAtEnemy(BOT_ENEMY(m_pBot));
        short sAggr = BOTF(m_pBot, short, 0xa18);                    // [?] agressividade
        if (sAggr > 59) {
            sKiLimit = 20;
            if (sAggr <= 99)
                sKiLimit = 100;
        }
        m_pBot->ResetMoveSpeed();
        if ((int)BPEV->fuser4 < sKiLimit)                            // pev+0x260 = ki
            return;                                                  // continua carregando
        ((CBasePlayer *)m_pBot)->StopPowerUp();
    }
    m_iStatus = 2;
}

// ---------------------------------------------------------------- CFallDownComboEntry
CFallDownComboEntry::CFallDownComboEntry(CBot *pBot)    // 0x165ab0 [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
    m_flDuration = 1.5f;
}
float CFallDownComboEntry::GetDelay(void) { return 0.0f; }         // [OK]
void CFallDownComboEntry::Activate(void)                            // 0x165b10 [OK]
{
    m_flActivateTime = gpGlobals->time;
    m_iStatus = 1;
    m_flDuration = m_flDuration + gpGlobals->time;
}
void CFallDownComboEntry::Think(void)                               // 0x15c3b0 [OK] desce ate tocar o chao (ou 1.5s)
{
    if (BPL(0x320))                                                  // voando
        ((CBasePlayer *)m_pBot)->StopFly();
    BOTF(m_pBot, char, 0xa10) = 0;
    BOTF(m_pBot, float, 0xa14) = 1.2f + gpGlobals->time;             // [?] proximo instante de reavaliar o voo
    if (m_flDuration >= gpGlobals->time && !(BPEV->flags & FL_ONGROUND))
        return;
    m_iStatus = 2;
}

// ---------------------------------------------------------------- CStartSwoopComboEntry
CStartSwoopComboEntry::CStartSwoopComboEntry(CBot *pBot, bool bChain, int iDir)   // [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
    m_bChain = bChain;
    m_iDir = iDir;
    BOTF(pBot, float, 0xbfc) = 1.0f;
}
float CStartSwoopComboEntry::GetDelay(void) { return 0.07f; }     // [OK]
void CStartSwoopComboEntry::Activate(void)                          // [OK]
{
    m_flActivateTime = gpGlobals->time;
    m_iStatus = 1;
    m_flEndTime = gpGlobals->time + (m_bChain ? 0.6f : 0.07f);
}
void CStartSwoopComboEntry::Think(void)                             // 0x15c1e0 [OK] (compares lidos do asm)
{
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    CBasePlayer *pPlayer = (CBasePlayer *)m_pBot;
    if (!pEnemy) { m_iStatus = 2; return; }
    m_pBot->ResetMoveSpeed();
    m_pBot->SetMoveDir(m_iDir);
    if (BPEV->movetype == MOVETYPE_ESF_FLY) {
        int iType;
        switch (m_iDir) {
        case 16: iType = 4; break;
        case 8:  iType = 5; break;
        case 32: iType = 0; break;
        case 64: iType = 1; break;
        case 2:  iType = 2; break;
        case 4:  iType = 3; break;
        default: iType = -1; break;
        }
        if (pPlayer->m_Swoop.m_iType == iType && pPlayer->m_Swoop.GetSwoopTime() > 0.2f) {
            m_iStatus = 2;
            return;
        }
    }
    m_pBot->AimAtEnemy(pEnemy);
    if (m_flEndTime > gpGlobals->time ||
        (!(pPlayer->m_Swoop.GetSwoopTime() > 0.2f) && BPEV->movetype == MOVETYPE_ESF_FLY)) {
        if (BOTF(m_pBot, short, 0xa18) > 159) {
            if (BPEV->movetype == MOVETYPE_ESF_FLY)
                return;
        } else
            return;
    }
    m_iStatus = 2;
}

// ---------------------------------------------------------------- CSwoopAWhileComboEntry
CSwoopAWhileComboEntry::CSwoopAWhileComboEntry(CBot *pBot, float flDuration)      // [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
    m_flDuration = flDuration;
}
float CSwoopAWhileComboEntry::GetDelay(void) { return 0.0f; }
void CSwoopAWhileComboEntry::Activate(void)
{
    m_flActivateTime = gpGlobals->time;
    m_iStatus = 1;
    m_flDuration = m_flDuration + gpGlobals->time;
}
void CSwoopAWhileComboEntry::Think(void)                            // [OK]
{
    if (BPEV->movetype == MOVETYPE_ESF_FLY) {
        m_pBot->SetSwoopButton();
        if (m_flDuration >= gpGlobals->time)
            return;
    }
    m_iStatus = 2;
}

// ---------------------------------------------------------------- CSwoopCloseToEnemyComboEntry
CSwoopCloseToEnemyComboEntry::CSwoopCloseToEnemyComboEntry(CBot *pBot)            // [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
}
float CSwoopCloseToEnemyComboEntry::GetDelay(void) { return 0.0f; }
void CSwoopCloseToEnemyComboEntry::Think(void)                      // 0x15c670 [OK] aproxima-se do inimigo em voo
{
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    if (pEnemy && BPEV->movetype == MOVETYPE_ESF_FLY) {
        float flLimit = (pEnemy->pev->movetype == MOVETYPE_ESF_FLY) ? 600.0f : 450.0f;
        Vector vDiff = pEnemy->pev->origin - BPEV->origin;
        if (vDiff.Length() <= flLimit) {
            m_iStatus = 2;
            if (BPL(0x320)) {
                ((CBasePlayer *)m_pBot)->StopFly();
                BOTF(m_pBot, char, 0xa10) = 0;
                BOTF(m_pBot, float, 0xa14) = gpGlobals->time + 0.5f;
            }
        } else {
            m_pBot->AimAtEnemy(pEnemy);
            if (pEnemy->pev->movetype == MOVETYPE_ESF_FLY) {
                float flYaw = BOTF(m_pBot, float, 0xc14);
                BOTF(m_pBot, float, 0xc14) = UTIL_WrapAngle(BPL(0xff0) ? flYaw - 30.0f : flYaw + 30.0f);
            }
            m_pBot->ResetMoveSpeed();
            m_pBot->SetMoveDir(16);
        }
    } else
        m_iStatus = 2;
}

// ---------------------------------------------------------------- CChargeGenBallComboEntry
CChargeGenBallComboEntry::CChargeGenBallComboEntry(CBot *pBot)    // [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
}
float CChargeGenBallComboEntry::GetDelay(void) { return 0.0f; }
void CChargeGenBallComboEntry::Think(void)                          // [OK] carrega a bola generica (weapon_genericbeam)
{
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    if (!pEnemy) { m_iStatus = 2; return; }
    if (BOTF(m_pBot, short, 0xa18) <= 99) {
        char *pWeapon = BOTF(m_pBot, char *, 0x968);
        if (pWeapon && *(int *)(pWeapon + 0x88) != 4)
            ((CBasePlayer *)m_pBot)->SelectItem("weapon_genericbeam");
        else if (BPL(0x6d0) > 59) {
            m_iStatus = 2;
            return;
        }
        m_pBot->AimAtEnemy(pEnemy);
        BPEV->button |= IN_ATTACK2;
        m_pBot->SetMoveDir(8);
    } else
        m_iStatus = 2;
}


// ---------------------------------------------------------------- CAvoidAttackWhileSwoopComboEntry
CAvoidAttackWhileSwoopComboEntry::CAvoidAttackWhileSwoopComboEntry(CBot *pBot)    // 0x165f00 [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
}
float CAvoidAttackWhileSwoopComboEntry::GetDelay(void) { return 0.0f; }
void CAvoidAttackWhileSwoopComboEntry::Think(void)                  // 0x15c850 [OK] continua enquanto houver ataque hostil na frente
{
    if (BPEV->movetype == MOVETYPE_ESF_FLY) {
        m_pBot->SetSwoopButton();
        CBaseEntity *pAttack = m_pBot->GetNearestHostileAttack(50.0f, 750.0f);
        if (pAttack && UTIL_GetHeadingPercentage((CBaseEntity *)m_pBot, pAttack) > 0x40)
            return;
    }
    m_iStatus = 2;
}

// ---------------------------------------------------------------- CCheckFOVForAimComboEntry
CCheckFOVForAimComboEntry::CCheckFOVForAimComboEntry(CBot *pBot)  // 0x165d00 [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
    m_flDuration = 0.25f;
}
float CCheckFOVForAimComboEntry::GetDelay(void) { return 0.0f; }
void CCheckFOVForAimComboEntry::Activate(void)                      // 0x165d60 [OK]
{
    m_flActivateTime = gpGlobals->time;
    m_iStatus = 1;
    m_flDuration = m_flDuration + gpGlobals->time;
}
void CCheckFOVForAimComboEntry::Think(void)                         // 0x15c5c0 [OK] mira ate o inimigo entrar no campo de visao
{
    CBaseEntity *pEnemy = BOT_ENEMY(m_pBot);
    if (pEnemy && BOTF(m_pBot, short, 0xa18) <= 99 && !(m_flDuration < gpGlobals->time)
        && !EntIsInFieldOfView((CBaseEntity *)m_pBot, pEnemy)) {
        if (EntIsInFieldOfView(pEnemy, (CBaseEntity *)m_pBot)) {
            m_iStatus = 2;
        } else {
            m_pBot->ResetMoveSpeed();
            m_pBot->AimAtEnemy((CBasePlayer *)pEnemy);
        }
        return;
    }
    m_iStatus = 2;
}

// ---------------------------------------------------------------- CTeleportComboEntry
CTeleportComboEntry::CTeleportComboEntry(CBot *pBot, float flDuration, int iDir, bool bAim, bool bNeedNoEnemy, bool bStopIfEnemyFlies)  // 0x1659d0 [OK]
{
    m_iStatus = 0;
    m_pBot = pBot;
    m_flDuration = flDuration;
    m_iDir = iDir;
    m_bAim = bAim;
    m_bDoneIfNoEnemy = bNeedNoEnemy;
    m_bStopIfEnemyFlies = bStopIfEnemyFlies;
}
void CTeleportComboEntry::Activate(void)                            // 0x165a30 [OK]
{
    m_flActivateTime = gpGlobals->time;
    m_iStatus = 1;
    m_flDuration = m_flDuration + gpGlobals->time;
}
void CTeleportComboEntry::Think(void)                               // 0x15c0c0 [OK] (compares lidos do asm)
{
    CBasePlayer *pEnemy = BOT_ENEMY(m_pBot);
    if (pEnemy || !m_bDoneIfNoEnemy) {
        if (m_flDuration <= gpGlobals->time || BOTF(m_pBot, short, 0xa18) > 159) {
            ((CBasePlayer *)m_pBot)->Teleport();
            m_iStatus = 2;
            return;
        }
        if (pEnemy) {
            if (m_bAim)
                m_pBot->AimAtEnemy(pEnemy);
            if (m_bStopIfEnemyFlies && BOT_ENEMY(m_pBot)->pev->movetype == MOVETYPE_ESF_FLY) {
                m_iStatus = 2;
                return;
            }
        }
        m_pBot->SetMoveDir(m_iDir);
        return;
    }
    m_iStatus = 2;
}
