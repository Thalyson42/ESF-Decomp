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

struct melee_exe_hit_s {                         // [OK] 24 bytes x 32 em +0x58 (AddExeCombo/ResetComboArray)
    int   m_iIndex;                              // +0x00
    float m_flTime;                              // +0x04 prazo (agora + a3)
    float m_flValue;                             // +0x08
    int   f_0c;                                  // +0x0c
    int   m_fActive;                             // +0x10
    void (*m_pfnCallback)(CBasePlayer *, CBasePlayer *);   // +0x14 [OK] PFN(CBasePlayer*, CBasePlayer*)
};
struct melee_execution_s {                       // [OK] combo "exe" (0x360 bytes), criado por CreateExeMove
    char  m_szName[0x20];                        // +0x00
    int   f_20;                                  // +0x20
    int   m_iId;                                 // +0x24 (SetupCombo / AddCombo)
    int   m_iNumHits;                            // +0x28 até 32 [OK] AddExeCombo
    int   f_2c;
    int   f_30;                                  // +0x30
    float f_34;                                  // +0x34 [?]
    float f_38;                                  // +0x38
    int   f_3c, f_40, f_44;                      // +0x44 [?] "pular" em CanEXECombo
    int   f_48;                                  // +0x48 = 1 na criação
    int   m_iStatus;                             // +0x4c MELEE_COMBO_STATUS (1 = início de combo, 3 = pronto) [?]
    int   m_iStrength;                           // +0x50 MELEE_STRENGTH
    int   f_54;                                  // +0x54 1 = golpe bloqueado
    melee_exe_hit_s m_Hit[32];                   // +0x58
    melee_execution_s *m_pNext;                  // +0x358
    melee_execution_s *m_pPrev;                  // +0x35c
};

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

// ======================================================================
// Lote 2: HUD do melee e fila de animações
// ======================================================================
void CPlayerMelee::MeleeHud(int iCmd, int iArg)
{
    MESSAGE_BEGIN(MSG_ONE, gmsgMeleeAtkHud, NULL, ENT(m_pAttacker->pev));   // [OK]
        WRITE_BYTE(iCmd);
        WRITE_BYTE(iArg);
    MESSAGE_END();
}
void CPlayerMelee::MeleeHudRemove(int iCmd)
{
    MESSAGE_BEGIN(MSG_ONE, gmsgMeleeAtkHud, NULL, ENT(m_pAttacker->pev));   // [OK]
        WRITE_BYTE(iCmd);
    MESSAGE_END();
}
void CPlayerMelee::MeleeHudDisable(void)
{
    MESSAGE_BEGIN(MSG_ONE, gmsgMeleeAtkHud, NULL, ENT(m_pAttacker->pev));   // [OK]
        WRITE_BYTE(0);
    MESSAGE_END();
}
void CPlayerMelee::MeleeText(int iText, int iArg)
{
    MESSAGE_BEGIN(MSG_ONE, gmsgMeleeTxtHud, NULL, ENT(m_pAttacker->pev));   // [OK]
        WRITE_BYTE(iText);
        WRITE_BYTE(iArg);
    MESSAGE_END();
}

// a animação "atual" é a de maior prazo ainda válido; durante um combo exe vem do próprio combo
plrmelee_anim_s *CPlayerMelee::GetCurrentAnim(void)
{
    if (m_fInAdvMelee && m_Mode == MELEE_EXE_ATTACK)          // [OK] +0x144 e +0x11c == 7
        return GetCurrentExeAnim();
    float flBest = 0;
    plrmelee_anim_s *pBest = NULL;
    for (plrmelee_anim_s *p = m_pAnimList; p; p = p->m_pNext)
        if (p->m_flEndTime > flBest && p->m_flEndTime > gpGlobals->time)   // [?] o decompilado do fcom está ambíguo
        {
            flBest = p->m_flEndTime;
            pBest = p;
        }
    return pBest;
}

int CPlayerMelee::PlayMedPriorityAnim(void)                   // [OK] true se o jogador está "livre" para animação do melee
{
    CBasePlayer *p = m_pAttacker;
    return !p->m_fBlocking && !p->f_334 && !p->f_338 && !p->f_33c && !p->f_340 && !p->f_770 && !p->f_6bc;   // [OK] offsets 0x32c,0x334,0x338,0x33c,0x340,0x770,0x6bc
}

int CPlayerMelee::PlayLowPriorityAnim(void)
{
    plrmelee_anim_s *pAnim = GetCurrentAnim();
    if (PlayMedPriorityAnim() && !m_pAttacker->f_330 && !m_pAttacker->m_fFlying &&
        pAnim->m_iDuckFlag == (m_pAttacker->pev->flags & FL_DUCKING))    // [OK] 0x200
        return 1;
    return 0;
}

void CPlayerMelee::ManagePriority(void)
{
    if (!CanPlayAnimation()) return;
    plrmelee_anim_s *p = GetCurrentAnim();
    if (!p->m_fExpire) return;
    switch (p->m_iPriority)
    {
    case 2:
        if (PlayMedPriorityAnim()) return;
        if (m_pAttacker->f_330) return;                       // [OK]
        break;
    case 1:
        if (PlayMedPriorityAnim()) return;
        break;
    case 3:
        if (PlayLowPriorityAnim()) return;
        break;
    default:
        return;
    }
    RemoveAnim(p);                                            // [OK] a condição não vale mais
}

void CPlayerMelee::ManageList(void)
{
    if (!m_pAttacker) return;                                 // [OK] +0x124
    ManagePriority();
    plrmelee_anim_s *p = m_pAnimList;
    plrmelee_anim_s *pCur = GetCurrentAnim();
    if (m_fInAdvMelee) return;                                // [OK] +0x144
    while (p)
    {
        if (p != pCur && (p->m_flEndTime < gpGlobals->time || p->m_fExpire))
            p = RemoveAnim(p);                                // [OK] devolve o próximo
        else
            p = p->m_pNext;
    }
}

plrmelee_anim_s *CPlayerMelee::RemoveAnim(plrmelee_anim_s *pAnim)
{
    if (!pAnim) return NULL;
    if (pAnim->m_fModelAnim && m_pAttacker)
        UTIL_Model_RemoveAll(ENTINDEX(ENT(m_pAttacker->pev)));            // [OK]
    if (m_pAnimList == pAnim)
    {
        m_pAnimList = pAnim->m_pNext;
        delete pAnim;
        return m_pAnimList;
    }
    for (plrmelee_anim_s *it = m_pAnimList; it->m_pNext; it = it->m_pNext)
        if (it->m_pNext == pAnim)
        {
            plrmelee_anim_s *pDel = it->m_pNext;
            it->m_pNext = pDel->m_pNext;
            delete pDel;
            break;
        }
    return NULL;                                              // [OK] (como no original)
}

void CPlayerMelee::RemoveAnim(char *szName)
{
    if (!m_pAnimList) return;
    if (!strcmp(szName, m_pAnimList->m_szName[0]))
        RemoveAnim(m_pAnimList);
    else
    {
        plrmelee_anim_s *it = m_pAnimList;
        while (it->m_pNext && strcmp(it->m_szName[0], szName)) it = it->m_pNext;
        RemoveAnim(it);                                       // [OK]
    }
}

void CPlayerMelee::RemoveAllAnims(void)
{
    if (m_pAttacker && m_pAttacker->pev->deadflag == DEAD_DYING) return;   // [OK] +0x170 == 1: mantém a fila de quem está morrendo
    plrmelee_anim_s *p = m_pAnimList;
    while (p) p = RemoveAnim(p);
    m_pAnimList = NULL;
}

// ======================================================================
// Lote 2b: criação de animações
// ======================================================================
plrmelee_anim_s *CPlayerMelee::GetCurrentExeAnim(void)
{
    float flBest = -1.0f;
    plrmelee_anim_s *pBest = NULL;
    for (plrmelee_anim_s *p = m_pAnimList; p; p = p->m_pNext)
        if ((!pBest || flBest < p->m_flEndTime) && p->m_fExeAnim)       // [OK] a mais recente das de combo
        {
            flBest = p->m_flEndTime;
            pBest = p;
        }
    return pBest;
}

// AddAnimation(bool bFlag, float flEnd, int iNames, char *name1, name2, ...) -- enfileira uma animação composta por até 16 sequências
plrmelee_anim_s *CPlayerMelee::AddAnimation(bool bFlag, float flEndTime, int iNames, ...)
{
    plrmelee_anim_s *pCur = GetCurrentAnim();
    if (pCur && pCur->m_fModelAnim && m_pAttacker)
        UTIL_Model_RemoveAll(ENTINDEX(ENT(m_pAttacker->pev)));          // [OK]

    plrmelee_anim_s *p = new plrmelee_anim_s;                           // [OK] 680 bytes
    if (iNames > 16) iNames = 16;
    p->m_iPriority = 0;
    p->m_flEndTime = flEndTime;
    p->m_iFlag = bFlag;
    p->m_fExpire = 0;
    p->f_288 = 0;
    p->m_iNumNames = iNames;
    p->m_fExeAnim = 0;
    p->m_fModelAnim = 0;
    p->m_pNext = NULL;

    va_list ap; va_start(ap, iNames);
    int iToggle = 1;
    for (int i = 0; i < iNames; i++)
    {
        strcpy(p->m_szName[i], va_arg(ap, char *));
        if (i)
        {
            p->m_iSeqType[i] = iToggle ? 108 : 109;             // [OK] alterna
            iToggle ^= 1;
        }
        else if (*(int *)((char *)m_pAttacker + 0x178) == 107)   // [?] campo do jogador +0x178
            p->m_iSeqType[0] = 109;
        else
            p->m_iSeqType[0] = 107;
    }
    va_end(ap);

    if (m_pAttacker->LookupSequence(p->m_szName[0]) == -1 && !m_fInAdvMelee)   // [OK] sequência inexistente: descarta (fora de luta avançada)
    {
        delete p;
        return NULL;
    }
    if (m_pAnimList) p->m_pNext = m_pAnimList;                  // [OK] insere na cabeça
    m_pAnimList = p;
    ManageList();
    return p;
}

plrmelee_anim_s *CPlayerMelee::AddAnimationAFix(Vector vecDir, bool bFlag, float flEnd, const char *szName)
{
    plrmelee_anim_s *p = AddAnimation(bFlag, flEnd, 1, szName);         // [OK]
    if (p)
    {
        p->m_fModelAnim = 1;
        Vector vecAngles = UTIL_VecToAngles(vecDir);
        UTIL_Model_FixAngles(ENTINDEX(ENT(m_pAttacker->pev)), vecAngles);   // [?] argumentos extras perdidos no decompilado
    }
    return p;
}

plrmelee_anim_s *CPlayerMelee::AddAnimationExe(float flEnd, char *szName)
{
    plrmelee_anim_s *pCur = GetCurrentAnim();
    if (pCur && pCur->m_fExeAnim) RemoveAnim(pCur);                    // [OK] só uma animação de combo por vez
    plrmelee_anim_s *p = AddAnimation(false, flEnd, 1, szName);
    p->m_fExeAnim = 1;
    if (!m_pExeCur) return NULL;
    m_pExeCur->f_34 = flEnd;                                           // [?] exe+0x34
    if (!m_pDefenderMelee) return p;
    char sz[32];
    strcpy(sz, szName);
    strcat(sz, m_pExeCur->f_54 == 1 ? "_block" : "_hit");              // [OK] o defensor toca "<anim>_block" ou "<anim>_hit"
    m_pDefenderMelee->AddAnimation(true, gpGlobals->time, 1, sz);
    return p;
}

// ======================================================================
// Lote 3: combos ("exe") e listas de golpes
// ======================================================================
melee_execution_s *CPlayerMelee::CreateExeMove(int a, int b, float f, int c, MELEE_COMBO_STATUS status, MELEE_STRENGTH strength, char *szName)
{
    melee_execution_s *p = new melee_execution_s;             // [OK] 864 bytes
    p->f_40 = 0; p->f_44 = 0; p->f_3c = 0;
    p->f_48 = 1;
    p->f_20 = a;
    p->m_iId = b;
    p->f_38 = f;
    p->f_34 = 0;
    p->m_iNumHits = 0;
    p->f_30 = c;
    p->f_54 = 0;
    p->m_iStatus = status;
    p->m_iStrength = strength;
    strcpy(p->m_szName, szName);
    p->m_pNext = NULL;
    p->m_pPrev = NULL;
    ResetComboArray(p);
    return p;
}

void CPlayerMelee::ResetComboArray(melee_execution_s *p)
{
    for (int i = 0; i < 32; i++)                              // [OK]
    {
        p->m_Hit[i].m_iIndex = i;
        p->m_Hit[i].m_flTime = 0;
        p->m_Hit[i].m_flValue = 0;
        p->m_Hit[i].f_0c = 0;
        p->m_Hit[i].m_fActive = 0;
        p->m_Hit[i].m_pfnCallback = NULL;
    }
}

void CPlayerMelee::AddExeCombo(melee_execution_s *p, float flValue, float flDuration, void (*pfn)(CBasePlayer *, CBasePlayer *))
{
    if (p && p->m_iNumHits <= 31)                             // [OK] máx. 32
    {
        melee_exe_hit_s &h = p->m_Hit[p->m_iNumHits++];
        h.m_fActive = 1;
        h.m_flValue = flValue;
        h.m_flTime = flDuration + gpGlobals->time;
        h.m_pfnCallback = pfn;
    }
}

melee_execution_s *CPlayerMelee::AddCombo(melee_execution_s *pAfter, int iId)    // insere um combo novo logo depois de pAfter
{
    melee_execution_s *p = SetupCombo(iId);
    if (p && pAfter)
    {
        p->m_pNext = pAfter->m_pNext;                         // [OK] (o decompilado não religa o prev do seguinte)
        pAfter->m_pNext = p;
        p->m_pPrev = pAfter;
    }
    return p;
}

int CPlayerMelee::GetNextExe(void)
{
    if (m_pExeCur->m_iStatus == 3 && CanEXECombo(m_pExeCur))                     // [OK]
        AddCombo(m_pExeCur, m_pExeCur->m_iId);
    return (int)m_pExeCur->m_pNext;
}

int CPlayerMelee::CanEXECombo(melee_execution_s *p)           // percorre o histórico para trás; limita pela % de golpes bloqueados
{
    int iTotal = 0, iBlocked = 0;
    for (; p; p = p->m_pPrev)
    {
        if (p->f_44) p = p->m_pPrev;                          // [?] ignora o golpe marcado
        iTotal++;
        if (p->f_54 == 1) iBlocked++;
        if (p->m_iStatus == 1) break;                         // [OK] chegou no início do combo
    }
    float r = (float)iBlocked / (float)iTotal;                // [?] divisão inteira ou float
    return r <= melee_percentblocked->value;                  // [?] cvar em +0x0c
}

// AddMove(idx, tipo, n, valor1, dir1, valor2, dir2...) -- acrescenta um nó (80 bytes) à lista de golpes da direção idx
void CPlayerMelee::AddMove(int iIdx, int iType, int iCount, ...)
{
    if (iCount <= 0) return;
    struct melee_move_node { int m_iCount; int m_iType; int pad[2]; struct { int flags; int value; } e[8]; melee_move_node *next; melee_move_node *prev; };   // [OK] +0x08+8i flags, +0x0c+8i valor; +0x48 next; +0x4c prev
    melee_move_node *p = (melee_move_node *)new char[80];
    p->m_iCount = iCount;
    p->m_iType = iType;
    p->prev = NULL;
    p->next = NULL;
    va_list ap; va_start(ap, iCount);
    for (int i = 0; i < iCount; i++)
    {
        p->e[i].value = va_arg(ap, int);
        p->e[i].flags = DirectionsToFlags(va_arg(ap, int));   // [OK]
    }
    va_end(ap);
    melee_move_node *pHead = (melee_move_node *)m_pMoveList[iIdx];
    if (pHead)
    {
        pHead->next = p;                                      // [OK] (como no original: liga a cabeça existente ao novo)
        p->prev = pHead;
    }
    m_pMoveList[iIdx] = (melee_move_s *)p;
}

// ======================================================================
// Lote 4: entrada de direções (botões -> lista de golpes)
// ======================================================================
void CPlayerMelee::SetMovementFlags(int &iFlags)              // [OK] traduz os botões do atacante em flags de direção
{
    int btn = m_pAttacker->pev->button;
    int bLeft  = (btn & (IN_LEFT | IN_MOVELEFT)) != 0;        // 640 = 0x280
    int bRight = (btn & (IN_RIGHT | IN_MOVERIGHT)) != 0;      // 0x500
    int bBack  = btn & IN_BACK;
    int bFwd   = btn & IN_FORWARD;
    if (bLeft  && bFwd)  { iFlags |= 0x88;  return; }
    if (bLeft  && bBack) { iFlags |= 0x90;  return; }
    if (bRight && bFwd)  { iFlags |= 0x108; return; }
    if (bRight && bBack) { iFlags |= 0x110; return; }
    if (bLeft)  iFlags |= 0x80;
    else if (bRight) iFlags |= 0x100;
    else if (bBack)  iFlags |= 0x10;
    else if (bFwd)   iFlags |= 0x08;
}

int CPlayerMelee::SetAttackFlags(int &iFlags)
{
    int btn = m_pAttacker->pev->button;
    if (btn & 0x800) { iFlags |= 0x800; return 1; }           // [OK] IN_ALT1 (ataque secundário)
    if (btn & IN_ATTACK) { iFlags |= 1; return 1; }
    return 0;
}

int CPlayerMelee::CanAddDirection(void)
{
    int a, b;
    if (f_07c)
    {
        a = GetMoveCountFinishedOnly(m_pAttackerMoves);
        b = GetMoveCount(m_pDefenderMoves);
    }
    else
    {
        CPlayerMelee *pOther;
        if (!f_0ec && m_fIsDefender)
        {
            a = GetMoveCount(m_pDefenderMoves);
            pOther = m_pAttackerOtherMelee;                   // [OK] +0x134
        }
        else if (!m_fIsAttacker) return 1;
        else if (!m_pDefenderMelee) return 1;
        else if (m_pDefenderMelee->f_0ec)
        {
            a = GetMoveCount(m_pDefenderMoves);
            pOther = m_pDefenderMelee;
        }
        else return 1;
        b = GetMoveCountFinishedOnly(pOther->m_pAttackerMoves);
    }
    return a != b;                                            // [OK] só aceita direção nova quando as contagens divergem
}

void CPlayerMelee::AddDirection(int iFlags)
{
    if (!CanAddDirection()) return;
    melee_move_s *p = new melee_move_s;                       // [OK] 36 bytes
    p->m_iDirection = iFlags;
    p->m_flStart = gpGlobals->time;
    p->m_flEnd = gpGlobals->time;
    memset(&p->m_fReleased, 0, 20);                           // [OK]
    if (UseAttackerMoves())
    {
        p->m_iIndex = m_iAttackerMoveCount++;
        if (m_pAttackerMoves) { m_pAttackerMoves->m_pNext = p; p->m_pPrev = m_pAttackerMoves; }   // [?] ver nota do header
        m_pAttackerMoves = p;
    }
    else
    {
        p->m_iIndex = m_iDefenderMoveCount++;
        if (m_pDefenderMoves) { m_pDefenderMoves->m_pNext = p; p->m_pPrev = m_pDefenderMoves; }
        m_pDefenderMoves = p;
    }
    if (f_078) return;
    if (!UseAttackerMoves()) UpdateBlockClient(p);
    else                     MeleeHudFlags(1, iFlags);
}

int CPlayerMelee::LetGoDirection(melee_move_s *pMove)         // retorna 1 se o golpe foi cortado por falta de tempo
{
    int iCut = 0;
    if (!pMove || pMove->m_fReleased) return iCut;
    pMove->m_fReleased = 1;
    pMove->m_flEnd = gpGlobals->time;
    m_flDelayTime = gpGlobals->time;                          // [OK] +0xac
    if (!UseAttackerMoves()) return iCut;
    if (!f_078)
    {
        float flTotal = TotalCmbTime();
        float flStun = m_pDefenderMelee->GetStunTime();
        if (flTotal > flStun)                                 // [OK] passou do stun do defensor: corta o golpe
        {
            pMove->m_flEnd = flStun - TotalCmbTimeNC() + pMove->m_flStart;
            iCut = 1;
        }
        if (!iCut && flStun - flTotal < *(float *)((void *(*)(void *))(*(void ***)m_pSkill)[3])(this))   // [?] tabela de skill +0
            iCut = 1;
        MeleeHudFlags(5, pMove->m_iDirection, GetCmbTime(pMove));    // [?] 3º arg float
    }
    if (IsDirectionless(pMove->m_iDirection)) return iCut;
    if (f_0ec)       SendBlockFlash(m_pAttackerOther, pMove);
    else if (f_078)  SendBlockFlash(m_pAttacker, pMove);
    else             SendBlockFlash(m_pDefender, pMove);
    return iCut;
}

int CPlayerMelee::HoldDirection(melee_move_s *pMove)
{
    if (!pMove) return 0;
    pMove->m_flEnd = gpGlobals->time;                         // [OK]
    if (UseAttackerMoves())
    {
        float flTotal = TotalCmbTime();
        float flStun = m_pDefenderMelee->GetStunTime();
        int iFlags = 0;
        if (flTotal < flStun)                                 // [?] sentido da comparação pelo decompilado
        {
            LetGoDirection(pMove);
            return 1;
        }
        float *pSkill = (float *)((void *(*)(void *))(*(void ***)m_pSkill)[3])(this);
        if (GetCmbTime(pMove) > pSkill[3])                    // [OK] +12: tempo máximo de um golpe segurado
        {
            pMove->m_flEnd = pMove->m_flStart + pSkill[3];
            if (LetGoDirection(pMove)) return 1;
            SetAttackFlags(iFlags);
            SetMovementFlags(iFlags);
            AddDirection(iFlags);                             // [OK] encadeia o próximo golpe
        }
    }
    return 0;
}

int CPlayerMelee::ResetDirection(int iFlags, melee_move_s *pMove)   // alterna golpe/alt-golpe enquanto o botão ainda não foi solto
{
    if (!pMove->m_fReleased)
    {
        if (pMove->m_iDirection & 1)
        {
            if (iFlags & 0x800)
            {
                pMove->m_iDirection &= ~1;
                pMove->m_iDirection |= 0x800;
                MeleeHudSwitchAtk(pMove);
                return 1;
            }
        }
        else if ((pMove->m_iDirection & 0x800) && !(iFlags & 0x800) && (iFlags & 1))
        {
            pMove->m_iDirection &= ~0x800;
            pMove->m_iDirection |= 1;
            MeleeHudSwitchAtk(pMove);
            return 1;
        }
    }
    return 0;
}

void CPlayerMelee::SetBlockingDirections(void)
{
    int iFlags = 0;
    SetMovementFlags(iFlags);
    melee_move_s *cur = m_pDefenderMoves;
    if (!cur)
    {
        if (iFlags) AddDirection(iFlags);
    }
    else
    {
        if (!iFlags) LetGoDirection(cur);
        else if (!cur->m_fReleased && cur->m_iDirection == iFlags) HoldDirection(cur);
        else { LetGoDirection(cur); AddDirection(iFlags); }
    }
}

void CPlayerMelee::DelAllDirectionsAttacker(void)
{
    while (m_pAttackerMoves)
    {
        melee_move_s *p = m_pAttackerMoves;
        m_pAttackerMoves = p->m_pNext;
        delete p;
    }
    m_iAttackerMoveCount = 0;
    m_pAttackerMoves = NULL;
}

void CPlayerMelee::DelAllDirectionsDefender(void)             // [OK] espelho do atacante (+0x14c / +0xcc)
{
    while (m_pDefenderMoves)
    {
        melee_move_s *p = m_pDefenderMoves;
        m_pDefenderMoves = p->m_pNext;
        delete p;
    }
    m_iDefenderMoveCount = 0;
    m_pDefenderMoves = NULL;
}

melee_move_s *CPlayerMelee::RemoveDir(melee_move_s *pMove)    // remove o nó das listas do atacante e do defensor
{
    if (!pMove) return NULL;
    for (int i = 0; i <= 1; i++)
    {
        melee_move_s *it = i ? m_pAttackerMoves : m_pDefenderMoves;
        if (it == pMove)
        {
            if (i) m_pAttackerMoves = m_pAttackerMoves->m_pNext;
            else   m_pDefenderMoves = m_pDefenderMoves->m_pNext;
            delete pMove;
            return it;                                        // [OK] devolve o nó removido (como no original)
        }
        for (; it->m_pNext; it = it->m_pNext)
        {
            if (it->m_pNext == pMove)
            {
                melee_move_s *pNext = pMove->m_pNext;
                it->m_pNext = pNext;
                if (pNext) pNext->m_pPrev = it;
                delete pMove;
                return pNext;
            }
        }
    }
    return NULL;
}

// ======================================================================
// Lote 5: tabelas (switch) -- conferidas direto nas jump-tables do .so
// ======================================================================
int CPlayerMelee::DirectionsToFlags(int iDir)                 // [OK] jump-table em 0x1069f0
{
    if (iDir == 16) return 1;
    if (iDir == 17) return 0x800;
    int iFlags = (iDir <= 7) ? 1 : 0x800;                     // 0-7: ataque; 8-15: ataque alternativo
    switch (iDir & 7)
    {
    case 0: return iFlags | 0x08;                             // frente
    case 1: return iFlags | 0x88;                             // frente+esquerda
    case 2: return iFlags | 0x80;                             // esquerda
    case 3: return iFlags | 0x90;                             // trás+esquerda
    case 4: return iFlags | 0x10;                             // trás
    case 5: return iFlags | 0x110;                            // trás+direita
    case 6: return iFlags | 0x100;                            // direita
    case 7: return iFlags | 0x108;                            // frente+direita
    }
    return iFlags;                                            // (iDir > 15 e != 16/17)
}

int CPlayerMelee::FlagsToDirections(int iFlags)               // [OK] inverso do anterior
{
    int iBase = (iFlags & 0x800) ? 8 : 0;
    if (iFlags & 0x08)
        return (iFlags & 0x80) ? iBase + 1 : iBase + 7;       // [OK] sem esquerda assume direita
    if (iFlags & 0x10)
        return (iFlags & 0x80) ? iBase + 3 : !(iFlags & 0x100) ? iBase + 4 : iBase + 5;
    if (iFlags & 0x80)  return iBase + 2;
    if (iFlags & 0x100) return iBase + 6;
    return 16;
}

void CPlayerMelee::GetThrowAnimDirection(int iUnused, int iDir, char *szOut)   // [OK] jump-table em 0x100c20
{
    szOut[0] = 0;
    switch (iDir)
    {
    case 0: strcpy(szOut, "up");    break;
    case 1: strcpy(szOut, "down");  break;
    case 2: strcpy(szOut, "left");  break;
    case 3: strcpy(szOut, "right"); break;
    case 4:
        if ((m_iThrowState == THROW_ROLL && (m_pAttacker->pev->flags & FL_DUCKING)) ||
            (m_iThrowState == THROW_RECOVER && f_034 == 0))      // [OK] +0x64 e +0x34 [?]
            strcpy(szOut, "forward");
        else
            strcpy(szOut, "front");
        break;
    case 5: strcpy(szOut, "back");  break;
    }
}

void CPlayerMelee::GetThrowAnimDirection(int iDir, char *szOut)
{
    GetThrowAnimDirection(0, GetThrowDirection(iDir), szOut);  // [OK]
}

void CPlayerMelee::ManageToss(void)
{
    if (!m_fTossing) return;                                  // [OK] +0x28
    switch (m_iThrowState)                                    // [OK] jump-table em 0x101240
    {
    case THROW_TOSS:         HandleToss();        break;
    case THROW_ROLL:         HandleRoll();        break;
    case THROW_WALLSTICK:    HandleWallStick();   break;
    case THROW_LAY:          HandleLay();         break;
    case THROW_LANDRECOVER:  HandleLandRecover(); break;
    case THROW_RECOVER:      HandleRecover();     break;
    }
}

// ======================================================================
// Lote 6: prepunch (a sequência de socos automáticos antes do combo)
// ======================================================================
float CPlayerMelee::GetStunPerPunch(void)
{
    float *pSkill = (float *)((void *(*)(void *))(*(void ***)m_pSkill)[3])(this);   // [?] tabela de skill; +0x10 = stun por soco
    if (m_pDefenderMelee->f_0d8) return pSkill[4] * 1.2f;     // [OK]
    if (m_pDefenderMelee->f_0d4) return pSkill[4] * 0.65f;    // [OK]
    return pSkill[4];
}

float CPlayerMelee::GetDmgPerPunch(void)
{
    float f = m_pDefenderMelee->f_0d0 ? 2.0f : 1.0f;          // [OK]
    if (m_pDefenderMelee->f_0d4)      f *= 0.5f;
    else if (m_pDefenderMelee->f_0d8) f *= 1.2f;
    f *= GetPowerRatio(m_pDefender);                          // [?] o decompilado perde o valor retornado: o dano base vem do ratio de poder
    if (f < 1.0f) f = 1.0f;                                   // [OK] limites 1..5
    else if (f > 5.0f) f = 5.0f;
    return f;
}

void CPlayerMelee::StopPrepunchAttack(void)
{
    if (m_Mode == MELEE_PREPUNCH_ATTACK)
    {
        m_iPunchCount = 0;
        m_flStunEnd = 0;
        m_flTotalStun = 0;                                    // [OK] +0x8c
        f_090 = 0;
        m_Mode = MELEE_NONE;
        RemoveAllAnims();
        EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_ITEM, "common/null.wav", 1.0, 0.8, 0, 100);   // [OK] corta o som do prepunch
        m_vecDir[2] = 0;                                      // [OK] direção só no plano
        Vector v(m_vecDir[0], m_vecDir[1], 0);
        v = v.Normalize();
        m_vecDir[0] = v.x; m_vecDir[1] = v.y; m_vecDir[2] = v.z;
        for (int i = 0; i < 3; i++) m_pDefenderMelee->m_vecDir[i] = m_vecDir[i];   // [OK]
        m_pAttacker->pev->vuser4 = Vector(0, 0, 0);           // [OK] zera a deriva
        // o atacante termina 11 unidades à frente do defensor
        Vector vecEnd = m_pDefender->pev->origin + Vector(m_vecDir[0], m_vecDir[1], m_vecDir[2]) * 11.0f;
        m_pAttacker->pev->origin = vecEnd;
        UTIL_SetOrigin(m_pAttacker->pev, m_pAttacker->pev->origin);
        m_pDefenderMelee->StopPrepunchAttack();               // [OK] encerra o lado do defensor também
    }
    else if (m_Mode == MELEE_PREPUNCH_DEFEND)
    {
        m_Mode = MELEE_NONE;
        RemoveAllAnims();
        m_pAttacker->pev->vuser4 = Vector(0, 0, 0);
        if (!m_fStunned && m_flStunEnd != 0)                  // [OK] +0xdc, +0x88
        {
            SetActiveStunTime(m_flStunEnd);
            return;
        }
        if (m_fStunned) SetTotalStunTime(m_flStunEnd - gpGlobals->time);   // [OK]
    }
}

void CPlayerMelee::HandlePrepunchAttack(void)
{
    entvars_t *pevAtk = m_pAttacker->pev;
    Vector vecDrift;
    if (!m_pDefenderMelee->f_0d0)                             // [?] defensor "forte" não é arrastado
        vecDrift = Vector(m_vecDir[0], m_vecDir[1], m_vecDir[2]) * melee_prepunch_driftspeed->value;
    else
        vecDrift = Vector(0, 0, 0);
    pevAtk->vuser4 = vecDrift;                                // [OK] +0x288: deriva aplicada pelo PreThink

    float flCount = (float)m_iPunchCount;
    if ((pevAtk->button & IN_ATTACK) && flCount >= melee_prepunch_mincombo->value)     // soltou o combo
    {
        if (f_100) { StopMelee(1); return; }
        StopPrepunchAttack();
        SetMode(MELEE_CHARGE_ATTACK);                         // [OK] 3
        return;
    }
    if ((pevAtk->button & 0x800) && flCount >= melee_prepunch_mincombo->value)         // ataque alternativo
    {
        if (f_100) { StopMelee(1); return; }
        StopPrepunchAttack();
        if (m_pDefenderMelee->f_0d4 || m_iPunchCount > 6) SetMode(MELEE_CHARGE_ATTACK);
        else SetMode(MELEE_GRAB_ATTACK);                      // [OK] 5
        return;
    }

    float flDelay = f_100 ? melee_prepunch_delaystruggle->value : melee_prepunch_delay->value;
    if (m_flLastPunch + flDelay < gpGlobals->time)            // [OK] hora de dar mais um soco
    {
        m_flLastPunch = gpGlobals->time;
        m_iPunchCount++;
        MeleeText(m_iPunchCount, m_iPunchCount == 1 ? 0 : 1);        // [?] argumentos da HUD
        int iKi;
        if ((float)m_iPunchCount < melee_prepunch_maxstun->value)
        {
            m_pDefenderMelee->m_flStunEnd += GetStunPerPunch();       // [OK] acumula stun
            if (!m_pDefenderMelee->m_fStunActive) m_pDefenderMelee->m_fStunActive = 1;
            iKi = f_100 ? 22 : 15;                                    // [OK] custo de ki por soco
        }
        else                                                          // passou do limite: o stun começa a decair
        {
            CPlayerMelee *d = m_pDefenderMelee;
            if (!d->m_fStunned)
            {
                d->m_fStunned = 1;
                d->m_flTotalStun = d->m_flStunEnd;
                d->m_flStunEnd += gpGlobals->time;
            }
            d->m_flTotalStun -= GetStunPerPunch() * 0.5f;             // [?]
            d->m_flStunEnd   -= GetStunPerPunch() * 0.5f;             // [?]
            iKi = f_100 ? 37 : 25;
        }
        if (!m_pAttacker->UseKi(iKi))                                 // [OK] sem ki: o atacante é empurrado de volta
        {
            Vector vecBack = -Vector(m_vecDir[0], m_vecDir[1], m_vecDir[2]);
            StopMelee(0);
            m_pDefenderMelee->Powerhit(m_pAttacker, vecBack, 4);
            return;
        }
        float flDmg = GetDmgPerPunch();
        if (m_pDefenderMelee->f_0d4)                                  // [?] defensor em contra-ataque automático
        {
            if (!m_pDefender->UseKi(m_pDefenderMelee->f_0d0 ? 30 : 20))
            {
                m_pDefenderMelee->f_0d4 = 0;
                m_pDefender->TakeDamage(m_pAttacker->pev, m_pAttacker->pev, flDmg, DMG_PREVENT_PHYSICS_FORCE /*0x2000000 [?]*/);
                m_pDefenderMelee->AddAnimation(true, gpGlobals->time, 1, "ref_autopunch_hit");
            }
        }
        else
            m_pDefender->TakeDamage(m_pAttacker->pev, m_pAttacker->pev, flDmg, 0x2000000);       // [OK]

        if (m_pDefenderMelee->f_0d0)                                  // defensor forte: lança pedras da explosão
        {
            UTIL_MakeVectors(-Vector(m_vecDir[0], m_vecDir[1], m_vecDir[2]));
            float side = ((m_iPunchCount / 2) * 2 == m_iPunchCount) ? 1.0f : -1.0f;   // [?] alterna o lado a cada soco
            Vector vecPos = m_pDefender->pev->origin + gpGlobals->v_right * 2.5f * side;
            Vector vecVel = -Vector(m_vecDir[0], m_vecDir[1], m_vecDir[2]) * 75.0f;
            m_pDefenderMelee->EmitExplosionRocks(vecPos, vecVel, 5.0f, 10, 6);   // [OK] 5.0, 10, 6
        }
    }
    if (melee_prepunch_max->value == (float)m_iPunchCount && m_pAttacker->pev->deadflag == DEAD_NO)   // [OK] limite de socos
        StopMelee(1);
}
