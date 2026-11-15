// playermelee.cpp -- CPlayerMelee (sistema de melee avançado do ESF). RECUPERADO À MÃO (lote 1: funções pequenas).
// Fonte: decomp_raw/CPlayerMelee/*.c. [OK] conferido; [?] incerto.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "playermelee.h"

// ---------------- papéis na luta (atacante / defensor) ----------------
CBasePlayer *CPlayerMelee::GetAttacker(void)      { return m_pAttacker; }        // [OK]
CBasePlayer *CPlayerMelee::GetDefender(void)      { return m_pDefender; }        // [OK]
CBasePlayer *CPlayerMelee::GetAttackerOther(void) { return m_pAttackerOther; }   // [OK]
melee_move_s *CPlayerMelee::GetAttackerMoves(void) { return m_pAttackerMoves; }  // [OK]
melee_move_s *CPlayerMelee::GetDefenderMoves(void) { return m_pDefenderMoves; }  // [OK]
int CPlayerMelee::IsAttacker(void)      { return m_fIsAttacker; }                // [OK]
int CPlayerMelee::IsDefender(void)      { return m_fIsDefender; }                // [OK]
int CPlayerMelee::InAdvMeleeBattle(void){ return m_fInAdvMelee; }                // [OK]
int CPlayerMelee::InThrow(void)         { return m_iThrowState != 0; }           // [OK]

void CPlayerMelee::SetAttacker(CBasePlayer *p) { m_pAttacker = p; }              // [OK]

void CPlayerMelee::SetAttackerOther(CBasePlayer *p)
{
    m_pAttackerOther = p;
    m_pAttackerOtherMelee = p ? &p->m_Melee : NULL;           // [OK] p + 896
}

void CPlayerMelee::SetDefender(CBasePlayer *p)
{
    m_pDefender = p;
    m_pDefenderMelee = p ? &p->m_Melee : NULL;                // [OK]
}

CBasePlayer *CPlayerMelee::GetOrigDefender(void)
{
    if (m_fInAdvMelee)                                        // [OK] +0x144
    {
        if (f_140) return m_pAttacker;                        // [OK] +0x140
        else if (m_pDefender) return m_pDefender;
    }
    return NULL;                                              // [OK]
}

edict_t *CPlayerMelee::GetSoundEdict(void)
{
    CBasePlayer *p = GetOrigDefender();
    if (!p) p = m_pAttacker;
    return ENT(p->pev);                                       // [OK] pev->pContainingEntity
}

int CPlayerMelee::GetSkillValues(void)
{
    return g_pGameRules->m_pSkill->GetSkillValues();          // [?] objeto em gamerules+0x44, vfunc +0x108
}

// ---------------- listas de golpes ----------------
float CPlayerMelee::GetCmbTime(melee_move_s *pMove)
{
    return pMove ? pMove->m_flEnd - pMove->m_flStart : 0;     // [OK]
}

float CPlayerMelee::TotalCmbTime(void)
{
    float f = 0;
    for (melee_move_s *m = GetCurrentDirection(); m; m = m->m_pNext)   // [OK]
        f += GetCmbTime(m);
    return f;
}

float CPlayerMelee::TotalCmbTimeNC(void)                       // [OK] total sem o golpe atual
{
    float f = 0;
    melee_move_s *cur = GetCurrentDirection();
    if (!cur) return f;
    return TotalCmbTime() - GetCmbTime(cur);
}

melee_move_s *CPlayerMelee::GetCurrentDirection(void)
{
    return UseAttackerMoves() ? m_pAttackerMoves : m_pDefenderMoves;   // [OK]
}

int CPlayerMelee::UseAttackerMoves(void)
{
    if (f_07c) return 0;                                      // [OK] +0x7c
    if (f_078 || f_0ec) return 1;                             // [OK]
    if (!m_fIsAttacker) return 0;
    return m_pDefenderMelee->f_0ec ? 0 : 1;                   // [OK]
}

int CPlayerMelee::GetMoveCount(melee_move_s *pMove)
{
    int n = 0;
    for (; pMove; pMove = pMove->m_pNext)
        if (!IsDirectionless(pMove->m_iDirection)) n++;       // [OK]
    return n;
}
int CPlayerMelee::GetMoveCount(void) { return GetMoveCount(GetCurrentDirection()); }                      // [OK]
int CPlayerMelee::GetMoveCountFinishedOnly(void) { return GetMoveCountFinishedOnly(GetCurrentDirection()); }   // [OK]

int CPlayerMelee::IsDirectionless(int iFlags) { return (iFlags & 0x198) ? 0 : 1; }   // [OK] 408 = 0x198

void CPlayerMelee::SetDirection(melee_move_s *pMove, int iDir)
{
    if (!pMove) return;
    pMove->m_iDirection = iDir;                               // [OK]
    MeleeHudFlags(6, iDir);                                   // [OK]
}

int CPlayerMelee::MeleeHudFlags(int a, int iFlags) { return MeleeHud(a, FlagsToDirections(iFlags)); }   // [OK]
int CPlayerMelee::MeleeHudSwitchAtk(melee_move_s *pMove) { return MeleeHudFlags(6, pMove->m_iDirection); }   // [OK]

// ---------------- força / tempo do golpe ----------------
int CPlayerMelee::GetMeleeStrength(float flTime)              // [OK] tabela de tempos vem de m_pSkill
{
    float *pTbl = (float *)((void *(*)(void *))(*(void ***)m_pSkill)[3])(this);   // [?] vfunc +0xc
    return flTime < pTbl[1] ? MELEE_WEAK : (flTime < pTbl[2] ? MELEE_MEDIUM : MELEE_STRONG);
}

int CPlayerMelee::GetMeleeStrength(melee_move_s *pMove)
{
    if (!pMove) return 0;
    return GetMeleeStrength(GetCmbTime(pMove));               // [OK]
}

int CPlayerMelee::CanLetGo(melee_move_s *pMove)
{
    float *pTbl = (float *)((void *(*)(void *))(*(void ***)m_pSkill)[3])(this);   // [?]
    return GetCmbTime(pMove) >= pTbl[0];                      // [OK]
}

int CPlayerMelee::GetBlockStunAmt(MELEE_STRENGTH s)
{
    return s == MELEE_MEDIUM ? 1 : (s == MELEE_STRONG ? 2 : 0);   // [OK]
}

float CPlayerMelee::GetBlockRatio(int a, int b)
{
    float r = (float)a / (float)b;
    return r < 0.2 ? 0.2f : r;                                // [OK] mínimo 20%
}

float CPlayerMelee::GetPowerRatio(CBasePlayer *pOther)
{
    if (!pOther) return 1.0;                                  // [OK]
    float r = (float)m_pAttacker->GetPowerLevel() / (float)pOther->GetPowerLevel();
    return r <= 2.0 ? 0.5 : 2.0;                              // [OK] (sic: o decompilado devolve só 0.5 ou 2.0)
}

int CPlayerMelee::CanInflictDamage(CBasePlayer *pPlayer, int bitsDamage)
{
    if ((f_03c || f_10c) && pPlayer != m_pIgnoreDamageFrom && (bitsDamage & DMG_MORTAR))   // [OK] campos +0x3c, +0x10c, +0x120 (nomes [?])
        return 0;
    return 1;
}

int CPlayerMelee::CanSwitch(void) { return (double)f_0c4 < melee_maxextanges + 12; }    // [?] constante global desconhecida

int CPlayerMelee::SpecialLaserReduction(void)
{
    return m_iThrowState == 3 || m_iThrowState == 4 || m_iThrowState == 5;    // [OK]
}

// ---------------- stun ----------------
float CPlayerMelee::GetStunTime(void)
{
    if (m_fStunActive && !m_fStunned) return m_flStunEnd;     // [OK]
    return m_flTotalStun;
}
void CPlayerMelee::SetTotalStunTime(float f) { m_flTotalStun = f; }                    // [OK]

void CPlayerMelee::SetActiveStunTime(float f)
{
    if (f != 0)
    {
        m_flTotalStun = f;
        m_flStunEnd = f + gpGlobals->time;                    // [OK]
        m_fStunned = 1;
        m_fStunActive = 1;
    }
    else
    {
        m_flTotalStun = 0; m_flStunEnd = 0; m_fStunned = 0; m_fStunActive = 0;
    }
}

void CPlayerMelee::CheckStunTime(void)
{
    if (m_fStunned && m_flStunEnd < gpGlobals->time)          // [OK]
    {
        m_fStunned = 0; m_flStunEnd = 0; m_fStunActive = 0;
        if (m_fIsDefender)                                    // [?] +0x13c
            AddAnimation(true, gpGlobals->time, 1, "ref_stance");   // [OK]
    }
}

// ---------------- anotações de animação ----------------
void CPlayerMelee::SetAnimPriority(ANIM_PRIORITY p, plrmelee_anim_s *pAnim) { if (pAnim) pAnim->m_iPriority = p; }   // [OK]

void CPlayerMelee::AddToCurAnim(bool bFlag, char *szName)
{
    plrmelee_anim_s *p = GetCurrentAnim();
    if (!p || p->m_iNumNames > 15) return;                    // [OK] máx. 16 nomes
    strcpy(p->m_szName[p->m_iNumNames], szName);
    p->m_iFlag = bFlag;
    p->m_iNumNames++;
}
int CPlayerMelee::CanPlayAnimation(void) { return GetCurrentAnim() ? 1 : 0; }          // [OK]

void CPlayerMelee::GetAnimForCombo(int iCombo, char *szOut)
{
    strcpy(szOut, iCombo == 2 ? "combo_2" : "combo_1");       // [OK]
}
void CPlayerMelee::GetAnimForMove(melee_move_s *pMove, char *szOut)
{
    GetAnimForMove(pMove->m_iDirection, GetMeleeStrength(pMove), szOut);   // [OK]
}

// ---------------- combos "exe" ----------------
void CPlayerMelee::AddComboMoves(void)                        // [OK] monta os 9 combos padrão
{
    for (int i = 1; i <= 9; i++)
    {
        m_pMoveList[i] = NULL;
        AddMove(i, 1, 3, 0, 4, 0, 3, 0, 2);
        AddMove(i, 2, 4, 0, 4, 0, 5, 0, 6, 1, 10);
    }
}

struct melee_execution_s { char pad[0x358]; melee_execution_s *m_pNext; melee_execution_s *m_pPrev; };   // [OK] lista dupla

melee_execution_s *CPlayerMelee::AddExeMove(melee_execution_s *p)
{
    melee_execution_s *it = m_pExeHead;
    if (!it)
    {
        m_pExeHead = p;
        m_pExeCur = p;                                        // [OK] +0x17c
        return p;
    }
    while (it->m_pNext) it = it->m_pNext;
    it->m_pNext = p;
    p->m_pPrev = it;
    return p;
}

void CPlayerMelee::ExecuteCombo(void)
{
    m_fDelayEndBlock = 0;                                     // [OK] +0x108
    StopChargedAttack();
    SetMode(MELEE_EXE_ATTACK);                                // [OK] 7
}

void CPlayerMelee::StartExeAttack(void)
{
    if (f_104) { f_104 = 0; return; }                         // [OK]
    CopyMoveToExe();
    NewExeMovePost();
}

// ---------------- bloqueio ----------------
int CPlayerMelee::BlocksAttack(CBasePlayer *pPlayer)          // this = melee do atacante, pPlayer = quem pode estar bloqueando
{
    return pPlayer->m_fBlocking && pPlayer->m_Melee.GetEnemyPrepunch(m_pAttacker) ? 1 : 0;   // [OK] +0x32c e +0x380
}

void CPlayerMelee::HandleChargeDefend(void)    { CheckStunTime(); SetBlockingDirections(); }          // [OK]
int  CPlayerMelee::HandleStruggleAttack(void)      { return ManageStruggleArrows(); }                 // [OK]
int  CPlayerMelee::HandleStruggleDefend(void)      { return ManageStruggleArrows(); }                 // [OK]
int  CPlayerMelee::HandleBurstStruggleAttack(void) { return ManageStruggleArrows(); }                 // [OK]

void CPlayerMelee::HandleExeDefend(void)
{
    if (!f_0f0 && CanRetaliate() && CanSwitch())              // [OK]
    {
        if (!f_0ec) { f_0ec = 1; StartChargedAttackRetaliate(); }
        f_0f0 = SetDirections();
        return;
    }
    if (!f_0ec) SetBlockingDirections();
}

void CPlayerMelee::HandleLandRecover(void)
{
    if (m_flLandRecoverTime + 1.0 < gpGlobals->time) { m_flLandRecoverTime = 0; StopThrow(); }
    LandRecoverDash();
}

void CPlayerMelee::HandleLay(void)
{
    if (m_flLayTime + 1.25 < gpGlobals->time) m_flLayTime = 0;   // [OK]
}

void CPlayerMelee::HandleGrabDefend(void)
{
    float r = m_pAttackerOtherMelee->f_09c / 100.0f;         // [OK] +0x134 -> +0x9c
    if (r < 0.333333f) UpdateStruggleBar((int)(100.0f * -(3.0f * r)));   // [OK]
    else if (m_fStruggleBar) RemoveStruggleBar();
}

void CPlayerMelee::HandleKnockPreStruggleAttack(void)
{
    if (f_0a8 < gpGlobals->time) { SetMode(MELEE_PREPUNCH_ATTACK); MeleeText(0x11, 0); }   // [OK]
    m_pDefenderMelee->MeleeText(0x11, 0);                     // [OK]
}
