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

int CPlayerMelee::CanSwitch(void) { return (double)m_iStruggleTies < melee_maxextanges + 12; }    // [?] constante global desconhecida

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
        pAnim->m_iGroundFlag == (m_pAttacker->pev->flags & FL_ONGROUND))    // [OK] 0x200 = no chão
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
        if ((m_iThrowState == THROW_ROLL && (m_pAttacker->pev->flags & FL_ONGROUND)) ||
            (m_iThrowState == THROW_RECOVER && m_fAirRecover == 0))      // [OK] +0x64 e +0x34 [?]
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
        m_flPrepunchStart = 0;
        m_Mode = MELEE_NONE;
        RemoveAllAnims();
        EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_BODY, "common/null.wav", 1.0, 0.8, 0, 100);   // [OK] corta o som do prepunch
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

void CPlayerMelee::StartPrePunchAttack(void)                  // this = melee do atacante (SetMode(1))
{
    UTIL_Model_Connect(ENTINDEX(ENT(m_pAttacker->pev)), ENTINDEX(ENT(m_pDefender->pev)), 9);   // [?] argumentos extras
    m_pDefenderMelee->SetAtkBehindAndBlocking();
    AddAnimation(true, gpGlobals->time, 1, "ref_autopunch");                                   // [OK] anim do atacante
    const char *szDef = m_pDefenderMelee->f_0d8 ? "ref_autopunch_hit_back"
                      : m_pDefenderMelee->f_0d4 ? "ref_autopunch_block"
                      :                           "ref_autopunch_hit";                         // [OK] anim do defensor
    m_pDefenderMelee->AddAnimation(true, gpGlobals->time, 1, szDef);

    m_flPrepunchStart = gpGlobals->time;
    m_flLastPunch = 0;
    m_iPunchCount = 0;
    m_fStunned = 0;
    m_pDefenderMelee->f_0d0 = 0;
    m_pDefenderMelee->m_flStunEnd = 0;
    m_pDefenderMelee->m_flTotalStun = 0;
    m_pDefenderMelee->m_fStunned = 0;

    if (m_vecDir[0] == 0 && m_vecDir[1] == 0 && m_vecDir[2] == 0)           // sem direção: usa a mira do atacante
    {
        UTIL_MakeVectors(m_pAttacker->pev->v_angle);
        m_vecDir[0] = gpGlobals->v_forward.x; m_vecDir[1] = gpGlobals->v_forward.y; m_vecDir[2] = gpGlobals->v_forward.z;
    }
    for (int i = 0; i < 3; i++) m_pDefenderMelee->m_vecDir[i] = m_vecDir[i];   // [OK]
    Vector vecDir(m_vecDir[0], m_vecDir[1], m_vecDir[2]);
    Vector vecPos = m_pDefender->pev->origin - vecDir * 11.0f;              // [OK] atacante nasce 11 u atrás do defensor
    UTIL_SetOrigin(m_pAttacker->pev, vecPos);
    Vector vecAng = UTIL_VecToAngles(vecDir);                               // [?]
    UTIL_Model_MeleeStruggle_Anglefix(ENTINDEX(ENT(m_pAttacker->pev)), vecAng);   // [?]
    EMIT_SOUND_DYN(GetSoundEdict(), CHAN_BODY, "weapons/prepunch1.wav", 1.0, 0.8, 0, 100);   // [OK]
}

void CPlayerMelee::HandlePrepunchDefend(void)                 // this = melee do defensor
{
    entvars_t *pevDef = m_pAttacker->pev;                     // [OK] aqui m_pAttacker é o próprio defensor
    if (!f_0d0)
    {
        Vector vecDir(m_vecDir[0], m_vecDir[1], m_vecDir[2]);
        Vector vecEnd = pevDef->origin + vecDir * 5.5f;       // [OK]
        TraceResult tr;
        UTIL_TraceHull(pevDef->origin, vecEnd, ignore_monsters, head_hull /*1*/, ENT(pevDef), &tr);   // [OK] hull 1
        if (tr.flFraction < 1.0f)                             // bateu numa parede: o defensor para de ser arrastado
        {
            f_0d0 = 1;
            pevDef->vuser4 = Vector(0, 0, 0);
            Vector vecAngles = UTIL_VecToAngles(tr.vecPlaneNormal);    // [?] normal da parede
            if (fabs(vecAngles.x) <= 45)                               // [?]
            {
                vecAngles.z = -vecAngles.z;
                UTIL_VecToAngles(vecAngles);
                UTIL_Model_MeleeStruggle_Anglefix(ENTINDEX(ENT(m_pAttackerOther->pev)), vecAngles);   // [?]
            }
            if (!f_0d4 && !f_0d8)
                AddAnimation(true, gpGlobals->time, 1, "wall_autopunched");   // [OK]
        }
        else
            pevDef->vuser4 = vecDir.Normalize() * melee_prepunch_driftspeed->value;   // [OK] continua sendo empurrado
    }
    else
        pevDef->vuser4 = Vector(0, 0, 0);
    CheckStunTime();
}

// ======================================================================
// Lote 7: ataque carregado (charge) e combos do atacante
// ======================================================================
int CPlayerMelee::SetDirections(void)                         // lê os botões do atacante e atualiza o golpe atual; 1 = terminou
{
    int iFlags = 0;
    SetMovementFlags(iFlags);
    melee_move_s *cur = m_pAttackerMoves;
    if (cur)
    {
        if (!iFlags)
        {
            if (SetAttackFlags(iFlags))
                ResetDirection(iFlags, cur);
            else
            {
                LetGoDirection(cur);
                return 1;
            }
        }
        else
        {
            if (SetAttackFlags(iFlags))
            {
                if (cur->m_fReleased || cur->m_iDirection != iFlags)
                {
                    if (IsDirectionless(cur->m_iDirection) && !IsDirectionless(iFlags))
                        SetDirection(cur, iFlags);                      // [OK] o golpe ganha direção
                    else if (!ResetDirection(iFlags, cur) && CanLetGo(cur))
                    {
                        int r = LetGoDirection(cur);
                        if (r) return r;
                        AddDirection(iFlags);                           // [OK] encadeia o próximo
                        return r;
                    }
                }
            }
            else
            {
                LetGoDirection(cur);
                return 1;
            }
        }
        return HoldDirection(cur);
    }
    else if (SetAttackFlags(iFlags))
    {
        AddDirection(iFlags);
        return 0;
    }
    return 1;
}

int CPlayerMelee::CanRetaliate(void)
{
    int iFlags = 0;
    melee_move_s *cur = GetCurrentDirection();
    SetAttackFlags(iFlags);
    if (!f_0ec)
    {
        if (!cur) return 0;
        if (!cur->m_fReleased) return 0;                        // [OK] +0x10
        if (!(iFlags & 1) && !(iFlags & 0x800)) return 0;       // [OK] precisa estar apertando ataque
        if (GetMoveCount() != m_pAttackerOtherMelee->GetMoveCount()) return 0;   // [OK] mesmo nº de golpes
    }
    return 1;
}

void CPlayerMelee::HandleChargeAttack(void)
{
    if (m_fDelayEndBlock)                                       // [OK] +0x108
    {
        if (HandleDelayedBlock(m_pAttackerMoves, m_pDefenderMelee->m_pDefenderMoves))
            ExecuteCombo();
        return;
    }
    if (!SetDirections()) return;
    if (SetDelayEndBlock(m_pAttackerMoves, m_pDefenderMelee->m_pDefenderMoves)) return;
    ExecuteCombo();
}

void CPlayerMelee::StartChargedAttack(void)
{
    if (!f_0f4)
    {
        UTIL_Model_Connect(ENTINDEX(ENT(m_pAttacker->pev)), ENTINDEX(ENT(m_pDefender->pev)), 11);   // [?]
        Vector vecBack(-m_vecDir[0], -m_vecDir[1], -m_vecDir[2]);
        Vector vecAng = UTIL_VecToAngles(vecBack);
        UTIL_Model_MeleeStruggle_Anglefix(ENTINDEX(ENT(m_pAttacker->pev)), vecAng);   // [?]
    }
    if (!f_0ec)
    {
        DelAllDirections();
        m_pDefenderMelee->DelAllDirections();
        SendPredictVars(m_pDefenderMelee->GetStunTime());       // [?]
    }
    CPlayerMelee *d = m_pDefenderMelee;
    if (!d->m_fStunActive)
        d->AddAnimation(true, gpGlobals->time, 1, "ref_stance");              // [OK]
    else if (d->f_0d8)
        d->AddAnimation(true, gpGlobals->time, 2, "ref_autopunch_spin", "ref_stun");   // [OK] gira e fica atordoado
    else
        d->AddAnimation(true, gpGlobals->time, 1, "ref_stun");
    AddAnimation(true, gpGlobals->time, 1, "ref_stance");
}

void CPlayerMelee::StartChargedAttackRetaliate(void)          // defensor revida: os papéis se invertem
{
    DelAllDirectionsAttacker();
    SetDefender(m_pAttackerOther);                              // [OK]
    float flStun = GetStunTime();
    float flRatio = PredictBlockRatio(m_pDefenderMelee->m_pExeHead, m_pDefenderMoves, flStun);   // [?] sobrecarga (exe, move, float)
    m_pDefenderMelee->SetActiveStunTime(flRatio);
    SetActiveStunTime(0);
    MeleeHudDisable();
    SendPredictVars(flRatio);
}

void CPlayerMelee::StopChargedAttack(void)
{
    if (m_Mode == MELEE_CHARGE_ATTACK)
    {
        m_Mode = MELEE_NONE;
        RemoveAllAnims();
        MeleeHudDisable();
        f_0f0 = 0;
        m_pDefenderMelee->StopChargedAttack();
    }
    else if (m_Mode == MELEE_CHARGE_DEFEND)
    {
        m_Mode = MELEE_NONE;
        RemoveAllAnims();
        m_flTotalStun = m_pAttackerOtherMelee->TotalCmbTime();    // [OK] stun total = tempo do combo do atacante
    }
}

// ======================================================================
// Lote 8: agarrar e arremessar (grab / swing / throw)
// ======================================================================
void CPlayerMelee::SetGrabbedOrigin(void)                     // o defensor fica preso na mão do atacante
{
    Vector vecPos(0, 0, 0);
    CanThrow(80, vecPos);                                     // [OK] preenche o ponto a 80 u à frente
    m_pDefender->pev->origin = vecPos;
    UTIL_SetOrigin(m_pDefender->pev, vecPos);
}

void CPlayerMelee::StartGrabbedAttack(void)
{
    UTIL_Model_RemoveAll(ENTINDEX(ENT(m_pAttacker->pev)));
    UTIL_Model_Grab(ENTINDEX(ENT(m_pAttacker->pev)), ENTINDEX(ENT(m_pDefender->pev)));   // [?] 2º argumento
    m_pDefenderMelee->RemoveAllAnims();
    RemoveAllAnims();
    m_pAttacker->pev->origin = m_pDefender->pev->origin;      // [OK]
    UTIL_SetOrigin(m_pAttacker->pev, m_pAttacker->pev->origin);
    m_pAttacker->pev->solid = SOLID_SLIDEBOX;                 // [OK] 3
    m_pDefender->pev->solid = SOLID_NOT;                      // [OK] o agarrado não colide
    AddAnimation(true, gpGlobals->time, 2, "ref_start_throw", "ref_swinger_slow");     // [OK]
    m_pDefenderMelee->AddAnimation(true, gpGlobals->time, 2, "ref_start_swung", "ref_swung");
    f_09c = 0;                                                // carga do agarrão 0..100
    m_flGrabFullTime = 0;
    m_flGrabLastTick = gpGlobals->time;
    m_pDefenderMelee->m_flGrabLastTick = gpGlobals->time;
    m_fGrabFull = 0;
    m_fGrabSpinSound = 0;
}

void CPlayerMelee::StopGrabbedAttack(void)
{
    if (m_Mode == MELEE_GRAB_ATTACK)
    {
        m_pAttacker->DrawChargeBar(0);
        m_Mode = MELEE_NONE;
        f_09c = 0;
        m_flGrabFullTime = 0;
        m_fGrabFull = 0;
        RemoveAllAnims();
        if (m_fGrabSpinSound)
        {
            m_fGrabSpinSound = 0;
            EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_WEAPON, "weapons/spin.wav", 0, 0, SND_STOP, 100);   // [OK] 32
        }
        m_pDefenderMelee->StopGrabbedAttack();
    }
    else if (m_Mode == MELEE_GRAB_DEFEND)
    {
        m_Mode = MELEE_NONE;
        m_flTotalStun = 0;
        RemoveAllAnims();
        if (m_fStruggleBar) RemoveStruggleBar();
    }
}

void CPlayerMelee::HandleGrabAttack(void)
{
    int iFail = 0;
    float flRatio = f_09c / 100.0f;
    int bWeak = flRatio < 0.333333f;                          // [OK] primeiro terço da barra = agarrão "fraco"
    SetGrabbedOrigin();

    if (m_pAttacker->pev->button & 0x800)                     // [OK] segurando o ataque alternativo
    {
        float dt = gpGlobals->time - m_flGrabLastTick;
        m_flGrabLastTick = gpGlobals->time;
        if (!m_fGrabFull)
        {
            float flCostMult = m_pAttacker->m_pClass->GetKiCostMult();       // [?] vtable da classe +0x40
            int iKi = (int)((1.0f / flCostMult) * dt * (bWeak ? 150.0f : 100.0f));   // [OK] custo de ki por segundo
            if (!m_pAttacker->UseKi(iKi))
                iFail = 1;
            else
            {
                float flAdd;
                if (bWeak)
                {
                    flAdd = 15.0f;
                    CBasePlayer *pDef = m_pDefender;
                    if ((pDef->pev->button & 1) || (pDef->pev->button & 0x800))   // [OK] o defensor resiste apertando ataque
                    {
                        float flDefMult = pDef->m_pClass->GetKiCostMult();
                        if (pDef->UseKi((int)((1.0f / flDefMult) * 75.0f * dt)))   // [OK] gastando ki ele atrapalha o agarrão
                        {
                            float f = m_pDefenderMelee->f_0d8 ? 0.8f : 0.6f;
                            float flPR = GetPowerRatio(m_pAttacker);
                            f -= ((flPR - 1.25f) / 1.25f) * 0.1f;
                            flAdd *= f;
                        }
                    }
                    flAdd *= dt;
                }
                else
                    flAdd = dt * 40.0f;                       // [OK] depois do primeiro terço enche rápido
                f_09c += flAdd;
                if (f_09c > 100.0f) f_09c = 100.0f;
            }
        }
        if (f_09c == 100.0f && !m_fGrabFull)
        {
            m_fGrabFull = 1;
            m_flGrabFullTime = gpGlobals->time;
        }
        if (!bWeak && !m_fGrabSpinSound)
        {
            m_fGrabSpinSound = 1;
            EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_WEAPON, "weapons/spin.wav", 1.0, 0.8, 0, 100);   // [OK]
        }
        if (m_fGrabFull && m_flGrabFullTime + 2.5f < gpGlobals->time)    // [OK] não pode segurar cheio por mais de 2,5 s
            iFail = 1;
        if (!iFail)
        {
            m_pAttacker->DrawChargeBar((int)(flRatio * 100.0f));
            return;
        }
    }

    // soltou o botão (ou falhou): arremessa se der, senão só solta
    Vector vecDir;
    if (!CanThrow(80, vecDir) || bWeak)
    {
        StopMelee(1);
        return;
    }
    StopMelee(0);
    Throw(m_pDefender, (int)(flRatio * 500.0f + 1000.0f), 1.5f * flRatio, vecDir);   // [OK] velocidade 1000..1500
}

// ======================================================================
// Lote 9: arremesso (CanThrow, Throw, direção e atividade)
// ======================================================================
int CPlayerMelee::GetThrowDirection(int bAllowVertical)       // [OK] escolhe a direção do arremesso pela velocidade do atacante
{
    UTIL_MakeVectors(m_pAttacker->pev->v_angle);
    Vector vecTbl[6] = {
        Vector(0, 0, 1),                                      // 0 cima
        Vector(0, 0, -1),                                     // 1 baixo
        -gpGlobals->v_right,                                  // 2 esquerda
        gpGlobals->v_right,                                   // 3 direita
        gpGlobals->v_forward,                                 // 4 frente
        -gpGlobals->v_forward                                 // 5 trás
    };
    float flBest = 0;
    int iBest = 0;                                            // [?] o original devolve lixo se nenhuma passar de 0
    for (int i = bAllowVertical ? 0 : 2; i <= 5; i++)         // sem vertical: só os 4 horizontais
    {
        float d = DotProduct(vecTbl[i], m_pAttacker->pev->velocity);
        if (d > flBest) { flBest = d; iBest = i; }
    }
    return iBest;
}

int CPlayerMelee::GetThrowActivity(void)                      // [OK] números lidos das jump-tables em 0x100d80 e 0x100e20
{
    static const int s_Tbl1[6] = { 110, 111, 114, 115, 112, 113 };   // cima, baixo, esq, dir, frente, trás
    static const int s_Tbl2[4] = { 118, 119, 116, 117 };             // (rolando, no chão) esq, dir, frente, trás
    if (m_iThrowState == THROW_TOSS || m_iThrowState == THROW_WALLSTICK ||
        (m_iThrowState == THROW_ROLL && !(m_pAttacker->pev->flags & FL_ONGROUND)))
    {
        int d = GetThrowDirection(1);
        return d <= 5 ? s_Tbl1[d] : 0;
    }
    if (m_iThrowState == THROW_ROLL)                          // rolando no chão
    {
        int d = GetThrowDirection(0) - 2;
        return (d >= 0 && d <= 3) ? s_Tbl2[d] : 0;
    }
    if (m_iThrowState == THROW_LAY)           return m_flLayTime == 0 ? 122 : 121;   // [OK]
    if (m_iThrowState == THROW_LANDRECOVER)   return 123;
    if (m_iThrowState == THROW_RECOVER)       return 120;
    return 0;
}

int CPlayerMelee::CanThrow(int iDist, Vector &vecOut)         // [OK] testa se há espaço 'iDist' unidades à frente do atacante
{
    UTIL_MakeVectors(m_pAttacker->pev->v_angle);
    Vector vecStart = m_pAttacker->pev->origin;
    Vector vecEnd = vecStart + gpGlobals->v_forward * (float)iDist;
    TraceResult tr;
    UTIL_TraceHull(vecStart, vecEnd, dont_ignore_monsters, head_hull /*1*/, ENT(m_pAttacker->pev), &tr);
    vecOut = tr.vecEndPos;
    if (tr.flFraction >= 1.0f) return 1;

    // bateu em algo: recua o atacante para caber o resto da distância
    CBaseEntity *pHit = CBaseEntity::Instance(tr.pHit);
    Vector vecBack;
    if (pHit && pHit->pev->solid == SOLID_BSP)                // [OK] parede: recua pela normal
        vecBack = vecStart + tr.vecPlaneNormal * ((float)iDist * (1.0f - tr.flFraction));
    else                                                      // outro jogador/objeto: recua para trás
        vecBack = vecStart - gpGlobals->v_forward * ((float)iDist * (1.0f - tr.flFraction));
    UTIL_TraceHull(vecStart, vecBack, dont_ignore_monsters, head_hull, ENT(m_pAttacker->pev), &tr);
    if (tr.flFraction < 1.0f) return 0;                       // sem espaço nem recuando
    m_pAttacker->pev->origin = tr.vecEndPos;
    UTIL_SetOrigin(m_pAttacker->pev, m_pAttacker->pev->origin);
    return 1;
}

void CPlayerMelee::Throw(CBasePlayer *pTarget, int iSpeed, float flArg, Vector vecDir)
{
    AddAnimation(false, gpGlobals->time, 1, "ref_swinger_letgo");
    EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_WEAPON, "weapons/throw.wav", 1.0, 0.8, 0, 100);
    EMIT_SOUND_DYN(ENT(pTarget->pev), CHAN_WEAPON, "weapons/swoophit.wav", 1.0, 0.8, 0, 100);
    if (m_pAttacker->m_pActiveItem)                           // [OK] +0x3c8: trava a arma por 0,9 s
    {
        float f = gpGlobals->time + 0.9f;
        ((CBasePlayerWeapon *)m_pAttacker->m_pActiveItem)->m_flNextPrimaryAttack = f;
        ((CBasePlayerWeapon *)m_pAttacker->m_pActiveItem)->m_flNextSecondaryAttack = f;
    }
    // [OK] a direção usada é v_forward do último MakeVectors (o vecDir recebido é ignorado pelo original)
    pTarget->m_Melee.StartToss(m_pAttacker, 1, gpGlobals->v_forward, (float)iSpeed, (float)(iSpeed / 2), (float)(iSpeed / 5), flArg);
    f_10c = 1;
    m_pIgnoreDamageFrom = NULL;                               // +0x120 := 0
    f_0b4 = gpGlobals->time + 1.0f;
}

// ======================================================================
// Lote 10: o voo do arremessado (toss)
// ======================================================================
void CPlayerMelee::ApplyVelocity(void)
{
    m_pAttacker->pev->vuser4 = Vector(m_vecTossDir[0], m_vecTossDir[1], m_vecTossDir[2]) * m_flTossSpeed;   // [OK] +0x288
}

// this = melee de quem é arremessado; pThrower = quem arremessou; flSpeed = velocidade inicial; flMin = piso; flDecel = desaceleração/s; flTime = duração
void CPlayerMelee::StartToss(CBasePlayer *pThrower, int iType, Vector vecDir, float flSpeed, float flMin, float flDecel, float flTime)
{
    if (!pThrower) return;
    if (!m_pAttacker->IsAlive()) return;                      // [OK] vtable +0x8c

    if (m_fTossing)
    {
        StopThrow(1);
        f_000 = f_000 + 1;                                    // [?] contador de arremessos encadeados
    }
    else
        f_000 = 1;

    // o arremessado perde todos os estados de movimento especiais [OK]
    if (m_pAttacker->f_508) m_pAttacker->StopSwoop();
    if (m_pAttacker->f_770) m_pAttacker->Descend(true);
    if (m_pAttacker->f_330) m_pAttacker->StopPowerUp();
    if (m_pAttacker->m_fFlying) m_pAttacker->StopFly();
    if (m_pAttacker->f_324) m_pAttacker->StopTurbo();
    if (m_pAttacker->f_6c8) m_pAttacker->RemoveWallJump();
    if (m_pAttacker)
    {
        CBasePlayerItem *pItem = m_pAttacker->m_pActiveItem;
        if (pItem && pItem->vf_158())                         // [?] vtable +0x158: provavelmente "CanHolster"
        {
            pItem->vf_104(0);                                 // [?] vtable +0x104
            pItem->vf_fc();                                   // [?] vtable +0xfc: provavelmente Holster
        }
    }

    m_pThrower = pThrower;
    m_iTossType = iType;
    m_fTossing = 1;
    m_iThrowState = THROW_TOSS;
    m_vecTossAux[0] = m_vecTossAux[1] = m_vecTossAux[2] = 0;
    m_flGrabLastTick = gpGlobals->time;                       // [?] +0xb0
    m_flTossStartSpeed = flSpeed;
    m_flTossSpeed = flSpeed;
    m_flTossMinSpeed = flMin;
    m_flTossDecel = flDecel;
    m_flTossEndTime = flTime + gpGlobals->time;
    m_pAttacker->f_37c = 1;
    m_pAttacker->pev->movetype = 2;                           // [OK] valor literal
    m_pAttacker->pev->gravity = 1.0f;                         // [OK] +0x11c
    Vector v = vecDir.Normalize();
    m_vecTossDir[0] = v.x; m_vecTossDir[1] = v.y; m_vecTossDir[2] = v.z;
    ApplyVelocity();
    RemoveAllAnims();
}

void CPlayerMelee::HandleToss(void)
{
    if (DeaccelerateToss()) { StopThrow(); return; }          // [OK] velocidade caiu até o piso
    if (HandleRecover()) return;
    if (CheckForObsticales()) return;
    ApplyVelocity();
    // a barra do HUD mostra o quanto da velocidade já foi perdida (negativo = lado do defensor)
    UpdateStruggleBar((int)-(((m_flTossSpeed - m_flTossMinSpeed) / (m_flTossStartSpeed - m_flTossMinSpeed)) * 100.0f));   // [OK]
}

int CPlayerMelee::DeaccelerateToss(void)                      // [OK] a velocidade cai com o tempo; 1 = chegou no piso
{
    float dt = gpGlobals->time - m_flGrabLastTick;            // +0xb0: último tick (a0[44])
    m_flGrabLastTick = gpGlobals->time;
    m_flTossSpeed -= dt * m_flTossDecel;
    if (m_flTossSpeed < 0) m_flTossSpeed = 0;
    return m_flTossSpeed < m_flTossMinSpeed;
}

// ======================================================================
// Lote 11: recuperação do arremessado (air/ground recover) e rolagem
// ======================================================================
int CPlayerMelee::HandleRecover(void)                         // 1 = o jogador acabou de se recuperar
{
    if (m_iThrowState != THROW_RECOVER)
    {
        // depois do tempo mínimo, apertar ataque/pulo/alt gasta ki e recupera (mais barato no chão)
        if (m_flTossEndTime < gpGlobals->time &&
            ((m_pAttacker->pev->button & IN_ATTACK) || (m_pAttacker->pev->button & (IN_JUMP | 0x800))))   // 2050
        {
            int iKi = (m_pAttacker->pev->flags & FL_ONGROUND) ? 60 : 150;   // [OK]
            if (m_pAttacker->UseKi(iKi))
            {
                Recover();
                return 1;
            }
        }
    }
    else if (m_fAirRecover)                                   // [OK] recuperação no ar continua freando
    {
        DeaccelerateToss();
        ApplyVelocity();
    }
    return 0;
}

void CPlayerMelee::Recover(void)
{
    if (m_iThrowState == THROW_TOSS)                          // recuperou ainda voando
    {
        m_fAirRecover = 1;
        m_flTossSpeed *= 0.5f;                                // [OK] perde metade da velocidade
        m_flTossDecel += m_flTossDecel;                       // [OK] e freia o dobro
        m_flGrabLastTick = gpGlobals->time;
        EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_WEAPON, "weapons/airrecover.wav", 1.0, 0.8, 0, 100);
    }
    else
    {
        m_fAirRecover = 0;
        EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_WEAPON, "weapons/groundrecover.wav", 1.0, 0.8, 0, 100);
    }
    m_iThrowState = THROW_RECOVER;                            // [OK] 6
}

void CPlayerMelee::StartRoll(void)
{
    m_pAttacker->pev->movetype = 4;                           // [OK] MOVETYPE_STEP
    m_pAttacker->pev->friction = 0.3f;                        // [OK] +0x120
    m_pAttacker->pev->gravity = 0.75f;                        // [OK] +0x11c
    m_pAttacker->m_flSpeedMult = 0;                           // +0x754: o jogador não anda enquanto rola
    m_iThrowState = THROW_ROLL;
    f_030 = 0;
    f_000 = 1;
}

void CPlayerMelee::HandleRoll(void)
{
    CheckCreater();
    if (m_pAttacker->pev->velocity.Length() < 10.0f && (m_pAttacker->pev->flags & FL_ONGROUND))   // [OK] parou de rolar
    {
        StartLay();
        return;
    }
    HandleRecover();
}

// ======================================================================
// Lote 12: fim do arremesso, deitar, cratera
// ======================================================================
void CPlayerMelee::StopThrow(int bQuiet)
{
    if (m_iThrowState == THROW_LAY || m_iThrowState == THROW_LANDRECOVER)
        UTIL_Model_RemoveAll(ENTINDEX(ENT(m_pAttacker->pev)));            // [OK]
    int bMayFly = 1;
    if (m_iThrowState == THROW_WALLSTICK)
        bMayFly = 0;
    else if (!bQuiet)
    {
        m_pAttacker->m_Swoop.AddAllToNullKeyset();                         // [OK] CSwoop em +0x504
        m_pAttacker->m_Swoop.ResetAllDT();
    }
    if (f_03c && !bQuiet)                                                  // [?] f_03c: o arremessado ainda tem dono do dano
    {
        f_10c = 1;
        m_pIgnoreDamageFrom = m_pThrower;                                  // [OK] +0x120 := +0x68
        f_0b4 = gpGlobals->time + 1.0f;
    }
    RemoveStruggleBar();
    RemoveAllAnims();
    m_pThrower = NULL;
    m_iTossType = 0;
    m_fTossing = 0;
    m_fAirRecover = 0;
    f_03c = 0;
    m_pAttacker->f_37c = 0;
    m_iThrowState = THROW_NONE;
    m_flTossStartSpeed = 0; m_flTossSpeed = 0; m_flTossMinSpeed = 0; m_flTossDecel = 0; m_flTossEndTime = 0;
    m_flWallStickStart = 0;
    f_000 = 0;
    f_024 = gpGlobals->time;                                               // +0x24 [?] hora do fim
    m_vecWallNormal[0] = m_vecWallNormal[1] = m_vecWallNormal[2] = 0;
    m_pAttacker->m_flSpeedMult = 1.0f;                                     // [OK] devolve a velocidade
    m_pAttacker->pev->friction = 1.0f;
    m_pAttacker->pev->gravity = 1.0f;
    if (!bMayFly || (m_pAttacker->pev->flags & FL_ONGROUND))
        m_pAttacker->pev->movetype = MOVETYPE_WALK;                        // [OK] 3
    else
        m_pAttacker->StartFly();                                           // [OK] voltou ao ar: volta a voar
    m_pAttacker->pev->vuser4 = Vector(0, 0, 0);
}

void CPlayerMelee::StartLay(void)                             // caiu e parou: fica deitado 1,25 s
{
    m_pAttacker->pev->movetype = MOVETYPE_NONE;
    m_pAttacker->m_flSpeedMult = 0;
    m_pAttacker->pev->friction = 1.0f;
    m_pAttacker->pev->gravity = 1.0f;
    m_pAttacker->pev->velocity = Vector(0, 0, 0);
    m_flLayTime = gpGlobals->time;                            // [OK] HandleLay usa +1,25 s
    m_iThrowState = THROW_LAY;
    Vector vecAng(0, m_pAttacker->pev->angles.y, m_pAttacker->pev->angles.z);   // [OK] zera o pitch
    UTIL_Model_FixAngles(ENTINDEX(ENT(m_pAttacker->pev)), vecAng);             // [?]
}

void CPlayerMelee::CheckCreater(void)                         // faz a cratera uma vez por contato com o chão
{
    if (m_pAttacker->pev->flags & FL_ONGROUND)
    {
        if (!f_030) { f_030 = 1; MakeCreater(); return; }
    }
    else if (!f_030) return;
    if (!(m_pAttacker->pev->flags & FL_ONGROUND)) f_030 = 0;               // [OK] rearma ao sair do chão
}

void CPlayerMelee::MakeCreater(void)
{
    Vector vecDir;
    if (m_iThrowState == THROW_TOSS)
        vecDir = Vector(m_vecTossDir[0], m_vecTossDir[1], m_vecTossDir[2]);
    else
        vecDir = (m_pAttacker->pev->velocity.Normalize() + Vector(0, 0, -1)).Normalize();   // [OK] velocidade + para baixo
    TraceResult tr;
    UTIL_TraceLine(m_pAttacker->pev->origin, m_pAttacker->pev->origin + vecDir * 128.0f, ignore_monsters, ENT(m_pAttacker->pev), &tr);
    if (tr.flFraction == 1.0f) return;
    CBaseEntity *pHit = CBaseEntity::Instance(tr.pHit);
    if (!pHit || pHit->pev->solid != SOLID_BSP) return;       // [OK] só em parede/chão do mapa
    UTIL_DecalTrace(&tr, 36);                                 // [OK] decal 36 (cratera) [?] índice
}

// ======================================================================
// Lote 13: colisão do arremessado (parede / outro jogador) e wall-stick
// ======================================================================
int CPlayerMelee::CheckForObsticales(void)                    // 1 = bateu em algo e o estado mudou
{
    Vector vecDir(m_vecTossDir[0], m_vecTossDir[1], m_vecTossDir[2]);
    Vector vecStart = m_pAttacker->pev->origin;
    TraceResult tr;
    UTIL_TraceHull(vecStart, vecStart + vecDir * 32.0f, dont_ignore_monsters, head_hull, ENT(m_pAttacker->pev), &tr);   // [OK] 32 u à frente
    if (tr.flFraction >= 1.0f) return 0;

    CBaseEntity *pHit = CBaseEntity::Instance(tr.pHit);
    if (pHit && pHit->pev->solid == SOLID_BSP)                // [OK] parede ou chão do mapa
    {
        Vector vecAngles = UTIL_VecToAngles(vecDir * 32.0f);
        float flPitch = vecAngles.x;
        Vector vecNormal = -tr.vecPlaneNormal;
        float flDot = DotProduct(vecNormal, vecDir);          // 1 = bateu de frente
        if (flPitch < -180.0f) flPitch += 360.0f;
        else if (flPitch > 180.0f) flPitch -= 360.0f;

        if (!m_iTossType)
        {
            StopThrow();
        }
        else
        {
            RemoveStruggleBar();
            if (flDot > 0.8f && flPitch < 115.0f && flPitch > 65.0f)       // [OK] caiu de cabeça no chão
            {
                MakeCreater();
                EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_WEAPON, "weapons/wallhit.wav", 1.0, 0.8, 0, 100);
                if (InflictWallhitDmg(1))
                {
                    if ((m_pAttacker->pev->button & IN_JUMP) && m_pAttacker->UseKi(100))   // [OK] pulo + 100 de ki: amortece
                        StartLandRecover();
                    else
                        StartLay();
                    return 1;
                }
            }
            if (flDot > 0.7f && flPitch < 45.0f && flPitch > -45.0f)       // [OK] bateu de frente na parede
            {
                MakeCreater();
                EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_WEAPON, "weapons/wallhit.wav", 1.0, 0.8, 0, 100);
                EmitExplosionRocks(tr.vecEndPos, vecNormal * 125.0f, 50.0f, 20, 20);   // [OK]
                if (InflictWallhitDmg(1))
                {
                    StartWallStick(tr.vecEndPos, vecNormal);          // [OK] gruda na parede
                    return 1;
                }
            }
            if (InflictWallhitDmg(0))
                StartRoll();                                          // [OK] bateu de raspão: rola
        }
        return 1;
    }
    else if (pHit && pHit->IsPlayer() && pHit->IsAlive() && pHit != m_pThrower && !((CBasePlayer *)pHit)->f_3a8 &&
             m_pThrower->CanMelee((CBasePlayer *)pHit))       // [OK] bateu em outro jogador: ele também é arremessado
    {
        EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_WEAPON, "weapons/wallhit.wav", 1.0, 0.8, 0, 100);
        ((CBasePlayer *)pHit)->m_Melee.StartToss(m_pThrower, 1, vecDir,
                                                 1.15f * m_flTossSpeed, m_flTossMinSpeed, 0.85f * m_flTossDecel, 1.5f);   // [OK]
    }
    return 0;
}

void CPlayerMelee::StartWallStick(Vector vecPos, Vector vecNormal)
{
    m_pAttacker->pev->movetype = MOVETYPE_NONE;
    m_pAttacker->pev->gravity = 1.0e-7f;                      // [OK] +0x11c
    m_pAttacker->m_flSpeedMult = 0;
    m_iThrowState = THROW_WALLSTICK;
    m_vecWallNormal[0] = vecNormal.x; m_vecWallNormal[1] = vecNormal.y; m_vecWallNormal[2] = vecNormal.z;
    m_flWallStickStart = gpGlobals->time;
    UTIL_SetOrigin(m_pAttacker->pev, vecPos);
    m_pAttacker->pev->velocity = Vector(0, 0, 0);
    AddAnimationAFix(vecNormal, true, gpGlobals->time, "wall_collide");
    AddToCurAnim(true, "wall_idle");
}

void CPlayerMelee::HandleWallStick(void)
{
    m_pAttacker->pev->velocity = Vector(0, 0, 0);
    m_pAttacker->pev->movetype = MOVETYPE_NONE;
    if (gpGlobals->time - melee_wallstick_mintime->value < m_flWallStickStart) return;     // [OK] tempo mínimo grudado

    if ((m_pAttacker->pev->button & IN_JUMP) && m_pAttacker->UseKi(100))                   // [OK] pulo + 100 de ki: se solta da parede
    {
        Vector vecNormal(m_vecWallNormal[0], m_vecWallNormal[1], m_vecWallNormal[2]);
        StopThrow();
        UTIL_MakeVectors(vecNormal);                                                       // [?] o original passa a normal como "ângulos"
        Vector vecDir = vecNormal * 0.65f + gpGlobals->v_up * 0.35f;                       // [OK] impulso para fora e para cima
        m_pAttacker->pev->velocity = vecDir * 1200.0f;                                     // [OK]
        SetAnimPriority(ANIM_LOW, AddAnimationAFix(vecNormal, false, gpGlobals->time, "wall_recover"));   // [OK] prioridade 3
        EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_BODY, "weapons/jump.wav", 1.0, 0.8, 0, 100);
        return;
    }
    if (m_flWallStickStart + melee_wallstick_maxtime->value >= gpGlobals->time) return;    // [OK] ainda pode ficar

    StartRoll();                                                                           // [OK] tempo esgotado: despenca rolando
    m_flTossEndTime = gpGlobals->time - m_flWallStickStart + m_flTossEndTime;
    m_pAttacker->pev->velocity = Vector(m_vecWallNormal[0], m_vecWallNormal[1], m_vecWallNormal[2]) * 100.0f;
    m_vecWallNormal[0] = m_vecWallNormal[1] = m_vecWallNormal[2] = 0;
    m_flWallStickStart = 0;
    UTIL_Model_RemoveAll(ENTINDEX(ENT(m_pAttacker->pev)));
    RemoveAllAnims();
    f_024 = gpGlobals->time;
}

// ======================================================================
// Lote 14: efeitos e dano da colisão, pouso com recuperação
// ======================================================================
void CPlayerMelee::EmitExplosionRocks(Vector vecPos, Vector vecVel, float flSize, int iRandom, int iCount)
{
    MESSAGE_BEGIN(MSG_PVS, SVC_TEMPENTITY, vecPos);           // [?] origem do PVS (o decompilado perde o ponteiro)
        WRITE_BYTE(TE_BREAKMODEL);                            // [OK] 108
        WRITE_COORD(vecPos.x); WRITE_COORD(vecPos.y); WRITE_COORD(vecPos.z);
        WRITE_COORD(flSize);  WRITE_COORD(flSize);  WRITE_COORD(flSize);
        WRITE_COORD(vecVel.x); WRITE_COORD(vecVel.y); WRITE_COORD(vecVel.z);
        WRITE_BYTE(iRandom);
        WRITE_SHORT(g_sRockGibs);                             // [OK] modelo das pedras
        WRITE_BYTE(iCount);
        WRITE_BYTE(50);                                       // vida: 5 s
        WRITE_BYTE(0);
    MESSAGE_END();
}

int CPlayerMelee::InflictWallhitDmg(int bHalf)                // dano da batida: cresce com a velocidade; devolve 1 se a vítima sobreviveu
{
    CBasePlayer *p = m_pAttacker;
    float flDmg = (float)(int)((m_flTossSpeed / 1000.0f + 1.0f) * 7.0f);   // [OK]
    if (bHalf) flDmg *= 0.5f;
    p->TakeDamage(m_pThrower->pev, m_pThrower->pev, flDmg, 0);             // [?] tipo de dano perdido no decompilado
    return p->IsAlive() ? 1 : 0;
}

void CPlayerMelee::StartLandRecover(void)                     // pousou amortecendo: fica agachado até o jogador fazer o dash
{
    m_pAttacker->pev->movetype = MOVETYPE_NONE;
    m_pAttacker->m_flSpeedMult = 0;
    m_pAttacker->pev->friction = 1.0f;
    m_pAttacker->pev->gravity = 1.0f;
    m_pAttacker->pev->velocity = Vector(0, 0, 0);
    m_flLandRecoverTime = gpGlobals->time;                    // [OK] HandleLandRecover usa +1 s
    m_iThrowState = THROW_LANDRECOVER;
    m_vecTossAux[0] = 0;                                      // [OK] guarda os ângulos do jogador com pitch zerado
    m_vecTossAux[1] = m_pAttacker->pev->angles.y;
    m_vecTossAux[2] = m_pAttacker->pev->angles.z;
    UTIL_Model_FixAngles(ENTINDEX(ENT(m_pAttacker->pev)), Vector(m_vecTossAux[0], m_vecTossAux[1], m_vecTossAux[2]));   // [?]
}

void CPlayerMelee::LandRecoverDash(void)                      // o jogador escolhe a direção do dash de saída com os botões
{
    UTIL_MakeVectors(Vector(m_vecTossAux[0], m_vecTossAux[1], m_vecTossAux[2]));
    int btn = m_pAttacker->pev->button;
    Vector vecDir(0, 0, 0);
    int iDir = 0, bUp = 0;
    if (btn & (IN_LEFT | IN_MOVELEFT))        { vecDir = -gpGlobals->v_right; iDir = 2; }   // 640
    else if (btn & (IN_RIGHT | IN_MOVERIGHT)) { vecDir = gpGlobals->v_right;  iDir = 3; }
    else if (btn & IN_FORWARD)                { vecDir = gpGlobals->v_forward; iDir = 4; }
    else if (btn & IN_BACK)                   { vecDir = -gpGlobals->v_forward; iDir = 5; }
    else if (btn & IN_JUMP)                   { vecDir = Vector(0, 0, 1); bUp = 1; iDir = 0; }
    else return;                                              // [OK] sem botão: continua agachado

    if (!bUp)
    {
        vecDir.z = 0;
        vecDir = vecDir.Normalize();
    }
    vecDir = vecDir * 900.0f;                                 // [OK]
    if (!bUp) vecDir.z += 500.0f;                             // [OK] dash horizontal ganha um pulinho
    m_pAttacker->pev->velocity = vecDir;
    m_pAttacker->StopFly();

    char szAnim[64];
    if (!bUp)
    {
        char szDir[32];
        GetThrowAnimDirection(0, iDir, szDir);
        sprintf(szAnim, "throw_recover_%s", szDir);
        if (!strcmp(szAnim, "throw_recover_front"))      strcpy(szAnim, "throw_recover_forward");    // [OK] ajustes de nome
        else if (!strcmp(szAnim, "throw_recover_back"))  strcpy(szAnim, "throw_recover_backward");
    }
    else
        strcpy(szAnim, "throw_recover_jump");

    UTIL_MakeVectors(Vector(m_vecTossAux[0], m_vecTossAux[1], m_vecTossAux[2]));
    AddAnimationAFix(gpGlobals->v_forward, false, gpGlobals->time, szAnim);
    m_vecTossAux[0] = m_vecTossAux[1] = m_vecTossAux[2] = 0;
    EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_BODY, "weapons/recoverjump.wav", 1.0, 0.8, 0, 100);
}

// ======================================================================
// Lote 15: struggle (disputa de setas entre dois jogadores)
// ======================================================================
void CPlayerMelee::UpdateStruggleBar(int iValue)
{
    if (m_flBarUpdate + 0.05f <= gpGlobals->time)             // [OK] no máx. 20 vezes por segundo
    {
        m_flBarUpdate = gpGlobals->time;
        m_fStruggleBar = 1;
        MESSAGE_BEGIN(MSG_ONE, gmsgPowerStruggle, NULL, ENT(m_pAttacker->pev));
            WRITE_CHAR(iValue);
        MESSAGE_END();
    }
}

void CPlayerMelee::RemoveStruggleBar(void)
{
    if (m_fStruggleBar)
    {
        MESSAGE_BEGIN(MSG_ONE, gmsgPowerStruggle, NULL, ENT(m_pAttacker->pev));
            WRITE_CHAR(127);                                  // [OK] limpa o HUD
        MESSAGE_END();
    }
    m_flBarUpdate = 0;
    m_fStruggleBar = 0;
}

void CPlayerMelee::StartStruggleAttack(void)
{
    UTIL_Model_MeleeStruggle(ENTINDEX(ENT(m_pAttacker->pev)), ENTINDEX(ENT(m_pDefender->pev)));   // [?] 2º argumento
    AddAnimation(true, gpGlobals->time, 1, "ref_grapple");
    m_pDefenderMelee->AddAnimation(true, gpGlobals->time, 1, "ref_grapple");
    UTIL_MakeVectors(m_pAttacker->pev->v_angle);
    m_vecDir[0] = gpGlobals->v_forward.x; m_vecDir[1] = gpGlobals->v_forward.y; m_vecDir[2] = gpGlobals->v_forward.z;
    for (int i = 0; i < 3; i++) m_pDefenderMelee->m_vecDir[i] = m_vecDir[i];          // [OK]
    m_flNextArrow = gpGlobals->time + melee_struggle_startdelay->value;               // [OK]
    Vector vecDir(m_vecDir[0], m_vecDir[1], m_vecDir[2]);
    Vector vecAng = UTIL_VecToAngles(-vecDir);
    UTIL_Model_MeleeStruggle_Anglefix(ENTINDEX(ENT(m_pAttacker->pev)), vecAng);       // [?]
    // afasta o atacante 11 u para trás se houver espaço
    Vector vecBack = m_pAttacker->pev->origin - vecDir * 11.0f;
    TraceResult tr;
    UTIL_TraceHull(m_pAttacker->pev->origin, vecBack, dont_ignore_monsters, head_hull, ENT(m_pAttacker->pev), &tr);
    if (tr.flFraction == 1.0f)
        UTIL_SetOrigin(m_pAttacker->pev, tr.vecEndPos);
    EMIT_SOUND_DYN(GetSoundEdict(), CHAN_BODY, "weapons/meleestruggleinit.wav", 1.0, 0.8, 0, 100);
    MeleeText(15, 0);
    m_pDefenderMelee->MeleeText(15, 0);
    m_iStruggleTies = 0;
    m_iStruggleArrows = 0;
    m_fStruggleEnding = 0; f_078 = 0; f_07c = 0;              // memset(+0x74, 0, 12)
    m_pDefenderMelee->m_iStruggleArrows = 0;
    m_pDefenderMelee->m_flNextArrow = 0;
    m_pDefenderMelee->f_078 = 0;
    m_pDefenderMelee->f_07c = 0;
}

int CPlayerMelee::ManageStruggleArrows(void)
{
    if (m_fIsAttacker && gpGlobals->time > m_flNextArrow)
    {
        if (m_fStruggleEnding)
            return CheckStruggleArrows();                     // [OK] acabaram as setas: decide quem ganhou
        m_iStruggleArrows++;
        if ((float)m_iStruggleArrows >= melee_struggle_maxarrows->value)
        {
            m_flNextArrow = gpGlobals->time + melee_struggle_enddelay->value;
            m_fStruggleEnding = 1;
        }
        else
            m_flNextArrow = gpGlobals->time + melee_struggle_arrowtime->value;
        f_078 = 1;                                            // suprime o HUD enquanto sorteia
        m_pDefenderMelee->f_078 = 1;
        AddDirection(DirectionsToFlags(RANDOM_LONG(0, 7)));                    // [OK] seta aleatória para cada um
        LetGoDirection(m_pAttackerMoves);
        m_pDefenderMelee->AddDirection(DirectionsToFlags(RANDOM_LONG(0, 7)));
        m_pDefenderMelee->LetGoDirection(m_pDefenderMelee->m_pAttackerMoves);
        f_078 = 0;
        m_pDefenderMelee->f_078 = 0;
    }
    f_078 = 0;
    f_07c = 1;
    SetBlockingDirections();
    f_07c = 0;
    return 0;
}

int CPlayerMelee::CheckStruggleArrows(void)                   // compara quanto cada um acertou das setas
{
    float f1 = PredictBlockRatio(m_pAttackerMoves, m_pDefenderMoves, 1.0f);              // [?] sobrecarga/argumentos extras
    float f2 = PredictBlockRatio(m_pDefenderMelee->m_pAttackerMoves, m_pDefenderMelee->m_pDefenderMoves, 1.0f);
    if (f1 == f2)                                             // empate
    {
        MeleeText(14, 0);
        m_pDefenderMelee->MeleeText(14, 0);
        m_iStruggleTies++;
        if ((float)m_iStruggleTies < melee_struggle_maxextanges->value)       // [OK] ainda pode haver rodada extra
        {
            MeleeHudDisable();
            m_pDefenderMelee->MeleeHudDisable();
            DelAllDirections();
            m_pDefenderMelee->DelAllDirections();
            RetryStruggleAttack();
            EMIT_SOUND_DYN(GetSoundEdict(), CHAN_BODY, "weapons/meleestruggletie.wav", 1.0, 0.8, 0, 100);
            return 0;
        }
        StopMelee(0);                                         // [?] argumento
        return 0;
    }
    if (f1 > f2)                                              // [?] sentido da comparação pelo decompilado
    {
        MeleeText(12, 0);                                     // atacante vence
        m_pDefenderMelee->MeleeText(13, 0);
        StopStruggleAttack();
        WinStruggle();
    }
    else
    {
        MeleeText(13, 0);                                     // defensor vence: papéis se invertem
        m_pDefenderMelee->MeleeText(12, 0);
        SimpleSwitch(m_pDefenderMelee, 0, 0);
        m_pDefenderMelee->WinStruggle();
    }
    return 0;
}

// ======================================================================
// Lote 16: struggle -- fim, repetição, burst e vitória
// ======================================================================
void CPlayerMelee::RetryStruggleAttack(void)                  // rodada extra depois de um empate
{
    m_flNextArrow = gpGlobals->time + melee_struggle_startdelay->value;
    m_iStruggleArrows = 0;
    m_fStruggleEnding = 0; f_078 = 0; f_07c = 0;              // memset(+0x74, 0, 12)
    m_pDefenderMelee->m_iStruggleArrows = 0;
    m_pDefenderMelee->m_flNextArrow = 0;
    m_pDefenderMelee->f_078 = 0;
    m_pDefenderMelee->f_07c = 0;
}

void CPlayerMelee::StartBurstStruggleAttack(void)             // struggle "burst" (o atacante prende o defensor por trás)
{
    UTIL_Model_Connect(ENTINDEX(ENT(m_pAttacker->pev)), ENTINDEX(ENT(m_pDefender->pev)), 9);   // [?] argumentos
    AddAnimation(true, gpGlobals->time, 1, "struggle_attack");                  // [OK]
    m_pDefenderMelee->AddAnimation(true, gpGlobals->time, 1, "struggle_defend");
    UTIL_MakeVectors(m_pAttacker->pev->v_angle);
    m_vecDir[0] = gpGlobals->v_forward.x; m_vecDir[1] = gpGlobals->v_forward.y; m_vecDir[2] = gpGlobals->v_forward.z;
    for (int i = 0; i < 3; i++) m_pDefenderMelee->m_vecDir[i] = m_vecDir[i];
    Vector vecBack(-m_vecDir[0], -m_vecDir[1], -m_vecDir[2]);
    Vector vecPos = m_pDefender->pev->origin + vecBack * 9.0f;                  // [OK] atacante nasce 9 u atrás do defensor
    UTIL_SetOrigin(m_pAttacker->pev, vecPos);
    Vector vecAng = UTIL_VecToAngles(vecBack);
    UTIL_Model_MeleeStruggle_Anglefix(ENTINDEX(ENT(m_pAttacker->pev)), vecAng); // [?]
}

void CPlayerMelee::StopStruggleAttack(void)
{
    if (m_Mode == MELEE_STRUGGLE_ATTACK || m_Mode == MELEE_STRUGGLE_DEFEND)
    {
        m_iStruggleArrows = 0; m_flNextArrow = 0; m_fStruggleEnding = 0; f_078 = 0; f_07c = 0;   // memset(+0x6c, 0, 20)
        DelAllDirections();
        RemoveAllAnims();
        m_pAttacker->pev->vuser4 = Vector(0, 0, 0);
        if (m_Mode == MELEE_STRUGGLE_ATTACK)
            m_pDefenderMelee->StopStruggleAttack();           // [OK] só o atacante encerra o par
    }
}

void CPlayerMelee::WinStruggle(void)                          // o vencedor ganha um combo-relâmpago de um golpe
{
    f_104 = 1;
    SetMode(MELEE_EXE_ATTACK);                                // [OK] 7
    UTIL_Model_RemoveAll(ENTINDEX(ENT(m_pAttacker->pev)));
    UTIL_Model_RemoveAll(ENTINDEX(ENT(m_pDefender->pev)));
    UTIL_Model_Connect(ENTINDEX(ENT(m_pAttacker->pev)), ENTINDEX(ENT(m_pDefender->pev)), 11);   // [?]
    Vector vecDir(m_vecDir[0], m_vecDir[1], m_vecDir[2]);
    Vector vecAng = UTIL_VecToAngles(f_140 ? vecDir : -vecDir);                 // [OK]
    UTIL_Model_MeleeStruggle_Anglefix(ENTINDEX(ENT(m_pAttacker->pev)), vecAng); // [?]
    m_pExeHead = NULL;                                        // zera a lista de combos
    m_pExeCur = NULL;
    melee_execution_s *p = AddExeMove(SetupCombo(1));
    p->f_54 = 2;                                              // [OK]
    int iFlags = RANDOM_LONG(0, 1) ? 0x880 : 0x801;           // [OK] golpe final: chute ou soco, sorteado
    char szAnim[64];
    GetAnimForMove(iFlags, 2, szAnim);                        // [OK] força 2 = forte
    melee_execution_s *q = AddExeMove(CreateExeMove(iFlags, 0, 0.35f, 1, (MELEE_COMBO_STATUS)0, MELEE_STRONG, szAnim));
    q->f_54 = 2;
    q->f_48 = 0;
    m_pExeCur = m_pExeHead;
    NewExeMovePost();
}

// ======================================================================
// Lote 17: knock pre-struggle e blowback (a "explosão" de um struggle)
// ======================================================================
void CPlayerMelee::StartKnockPreStruggle(void)
{
    EmitShockwave();
    int iDmg = (int)(GetPowerRatio(m_pAttacker) * 7.0f);                       // [OK]
    m_pAttacker->TakeDamage(m_pDefender->pev, m_pDefender->pev, (float)iDmg, 0);   // [?] tipo de dano
    if (!m_pAttacker->IsAlive()) return;                                        // [OK] vtable +0x8c

    UTIL_Model_Connect(ENTINDEX(ENT(m_pAttacker->pev)), ENTINDEX(ENT(m_pDefender->pev)), 11);   // [?]
    m_pDefenderMelee->AddAnimation(true, gpGlobals->time, 1, "blow_kick_front");   // [OK] o oponente chuta...
    AddAnimation(true, gpGlobals->time, 1, "hit_blow_back");                       // ...e este é jogado para trás
    f_0a8 = gpGlobals->time + 0.75f;                                               // [OK] fim do knock
    UTIL_MakeVectors(m_pAttacker->pev->v_angle);
    m_vecDir[0] = gpGlobals->v_forward.x; m_vecDir[1] = gpGlobals->v_forward.y; m_vecDir[2] = gpGlobals->v_forward.z;
    for (int i = 0; i < 3; i++) m_pDefenderMelee->m_vecDir[i] = m_vecDir[i];
    f_100 = 1;                                                                     // [?] struggle em andamento
    Vector vecBack(-m_vecDir[0], -m_vecDir[1], -m_vecDir[2]);
    Vector vecPos = m_pDefender->pev->origin + vecBack * 9.0f;                     // [OK] 9 u atrás do oponente
    UTIL_SetOrigin(m_pAttacker->pev, vecPos);
    Vector vecAng = UTIL_VecToAngles(vecBack);
    UTIL_Model_MeleeStruggle_Anglefix(ENTINDEX(ENT(m_pAttacker->pev)), vecAng);    // [?]
    MeleeText(15, 0);
    MeleeText(16, 0);
    m_pDefenderMelee->MeleeText(15, 0);
    m_pDefenderMelee->MeleeText(16, 0);
}

// Os dois estavam em struggle de poder: quem tem ki (35) empurra o outro; sem ki dos dois, ambos são arremessados.
void CPlayerMelee::BlowbackStruggle(Vector vecDir, float flA, float flB, CBasePlayer *pOther)
{
    CBasePlayer *pWinner, *pLoser;
    if (flB < flA && m_pAttacker->UseKi(35))                  // [OK] o dono deste melee vence
    {
        pWinner = m_pAttacker;
        pLoser = pOther;
    }
    else
    {
        if (!pOther->UseKi(35))                               // ninguém tem ki: os dois voam para lados opostos
        {
            StartToss(pOther, 0, -vecDir, 700.0f, 400.0f, 200.0f, 1.0f);                 // [OK]
            pOther->m_Melee.StartToss(m_pAttacker, 0, vecDir, 700.0f, 400.0f, 200.0f, 1.0f);
            return;
        }
        pWinner = pOther;                                     // [OK] o outro vence
        pLoser = m_pAttacker;
        vecDir = -vecDir;
    }
    if (f_080)                                                // [?] blowback forte
    {
        pWinner->m_Melee.Powerhit(0, pLoser, vecDir, 4, 7.7f, 1400.0f, 800.0f, 450.0f, 1.5f);   // [OK]
        return;
    }
    pWinner->m_Melee.Powerhit(0, pLoser, vecDir, 4, 7.7f, 900.0f, 500.0f, 300.0f, 1.5f);        // [OK]
    if (pLoser->IsAlive())                                    // o perdedor ainda devolve um golpe menor
        pLoser->m_Melee.Powerhit(0, pWinner, -vecDir, 4, 4.55f, 900.0f, 500.0f, 300.0f, 1.5f);  // [OK]
}

// ======================================================================
// Lote 18: Powerhit -- o golpe forte que arremessa o oponente
// ======================================================================
void CPlayerMelee::EmitShockwave(void)
{
    MESSAGE_BEGIN(MSG_PVS, gmsgMeleeFX, m_pAttacker->pev->origin);   // [OK]
        WRITE_BYTE(1);                                        // tipo de efeito: onda de choque
        WRITE_BYTE(ENTINDEX(ENT(m_pAttacker->pev)));
    MESSAGE_END();
    EmitClientSound(GetSoundEdict(), 1, 1);                   // [?] argumentos
}

// (bAnim, vítima, direção, tipo, multiplicador de dano, velocidade, piso, desaceleração, duração) -> 1 se o oponente bloqueou
int CPlayerMelee::Powerhit(int bAnim, CBasePlayer *pVictim, Vector vecDir, int iType,
                           float flDmgMult, float flSpeed, float flMin, float flDecel, float flTime)
{
    if (!m_pAttacker) return 0;
    int bBlocked = 0;
    CBasePlayerItem *pItem = m_pAttacker->m_pActiveItem;      // [OK] +0x3c8
    if (pItem && pItem->m_iId == 1 && pItem->m_flNextSecondaryAttack > gpGlobals->time)   // [?] +0x88 e +0xa0: arma ainda em recarga
        return 0;

    float flDmg = (float)(int)(GetPowerRatio(pVictim) * flDmgMult);
    if (iType != 4) flDmg = (float)((double)(int)(GetPowerRatio(pVictim) * flDmgMult) * 1.4);   // [OK] tipo 4 não ganha o bônus de 40%
    pVictim->TakeDamage(m_pAttacker->pev, m_pAttacker->pev, flDmg, 0);                         // [?] tipo de dano
    EmitShockwave();
    if (bAnim)
        SetPowerhitAnim(vecDir, iType);

    if (!pVictim->IsAlive())
        pVictim->pev->velocity = vecDir * flSpeed;            // [OK] morto: só é empurrado
    else if (!BlocksAttack(pVictim) || !pVictim->UseKi(75))   // [OK] defendendo custa 75 de ki
        pVictim->m_Melee.StartToss(m_pAttacker, 1, vecDir, flSpeed, flMin, flDecel, flTime);
    else
    {
        bBlocked = 1;                                         // bloqueou: a arma dele só volta em 0,8 s
        if (pVictim->m_pActiveItem)
        {
            float f = gpGlobals->time + 0.8f;
            pVictim->m_pActiveItem->m_flNextPrimaryAttack = f;
            pVictim->m_pActiveItem->m_flNextSecondaryAttack = f;
        }
    }
    if (!pItem) return bBlocked;
    float f = gpGlobals->time + (bBlocked ? 1.0f : 0.65f);    // [OK] recarga do atacante: 1 s se bloqueado, senão 0,65 s
    pItem->m_flNextPrimaryAttack = f;
    pItem->m_flNextSecondaryAttack = f;
    return bBlocked;
}

int CPlayerMelee::Powerhit(CBasePlayer *pVictim, Vector vecDir, int iType, float flDmgMult, float flSpeed, float flMin, float flDecel, float flTime)
{
    Powerhit(1, pVictim, vecDir, iType, flDmgMult, flSpeed, flMin, flDecel, flTime);   // [OK] versão com animação
    return 0;
}

int CPlayerMelee::Powerhit(CBasePlayer *pVictim, Vector vecDir, int iType)            // golpe "automático": sem números de balanço
{
    entvars_t *pev = m_pAttacker->pev;
    if (pev->flags & FL_ONGROUND)                             // [OK] atacante no chão: olha 16 u abaixo
    {
        TraceResult tr;
        UTIL_TraceHull(pev->origin, pev->origin + Vector(0, 0, -16), dont_ignore_monsters, head_hull, ENT(pev), &tr);
        if (tr.flFraction < 1.0f)
        {
            CBaseEntity *pHit = CBaseEntity::Instance(tr.pHit);
            if (pHit && pHit->IsPlayer())                     // [OK] há um jogador debaixo: arremessa mais forte
                return Powerhit(0, pVictim, vecDir, iType, 0.0f, 2000.0f, 650.0f, 500.0f, 1.2f);   // [?] o 5º float (dano) é 0
        }
        vecDir = Vector(0, 0, 1);                             // [OK] senão: para cima
        iType = 0;
    }
    return Powerhit(0, pVictim, vecDir, iType, 0.0f, 800.0f, 400.0f, 250.0f, 1.2f);
}

// ======================================================================
// Lote 19: StopMelee -- encerra qualquer fase do melee avançado
// ======================================================================
void CPlayerMelee::StopMelee(void) { StopMelee(1); }          // [OK]

// bToss: 1 = depois de separar os dois, arremessa um para cada lado (fim "normal"); 0 = só solta
void CPlayerMelee::StopMelee(int bToss)
{
    int iOldMode = m_Mode;
    switch (iOldMode)                                         // [OK] cada fase tem o seu Stop*
    {
    case MELEE_PREPUNCH_ATTACK: StopPrepunchAttack(); break;
    case MELEE_CHARGE_ATTACK:   StopChargedAttack();  break;
    case MELEE_GRAB_ATTACK:     StopGrabbedAttack();  break;
    case MELEE_EXE_ATTACK:      StopExeAttack();      break;
    case MELEE_STRUGGLE_ATTACK: StopStruggleAttack(); break;
    case MELEE_BURST_STRUGGLE_ATTACK:
        m_Mode = MELEE_STRUGGLE_ATTACK;
        StopStruggleAttack();
        break;
    default:
        if (!m_fInAdvMelee) return;                           // [OK] nada a encerrar
    }
    SetMode(MELEE_NONE);

    CPlayerMelee *pO = m_pDefenderMelee;
    if (!f_0f4 && !f_0ec)
    {
        DelAllDirections();
        MeleeHudDisable();
        pO->DelAllDirections();
        pO->MeleeHudDisable();
        PushAwayOtherPlayers();
    }
    else
    {
        DelAllDirectionsAttacker();
        pO->DelAllDirectionsDefender();
    }
    m_pAttacker->f_37c = 0;
    m_fInAdvMelee = 0;
    m_pDefender->f_37c = 0;
    pO->m_fInAdvMelee = 0;
    m_fIsAttacker = 0; m_fIsDefender = 0;
    pO->m_fIsAttacker = 0; pO->m_fIsDefender = 0;
    f_0f0 = 0; pO->f_0f0 = 0;
    f_104 = 0; pO->f_104 = 0;
    f_100 = 0;

    if (!f_0f4)
    {
        m_pAttacker->pev->solid = SOLID_SLIDEBOX;             // [OK] 3: volta a colidir
        m_pDefender->pev->solid = SOLID_SLIDEBOX;
        m_pAttacker->pev->movetype = MOVETYPE_WALK;
        m_pDefender->pev->movetype = MOVETYPE_WALK;
        f_0ec = 0; pO->f_0ec = 0;
        f_0d4 = 0; f_0d8 = 0; pO->f_0d4 = 0; pO->f_0d8 = 0;
        m_pAttacker->m_flSpeedMult = 1.0f;
        m_pDefender->m_flSpeedMult = 1.0f;
        m_pAttacker->pev->gravity = 1.0f;
        m_pDefender->pev->gravity = 1.0f;
        if (!(m_pAttacker->pev->flags & FL_ONGROUND)) { m_pAttacker->m_fFlying = 0; m_pAttacker->StartFly(); }   // [OK] no ar: volta a voar
        if (!(m_pDefender->pev->flags & FL_ONGROUND)) { m_pDefender->m_fFlying = 0; m_pDefender->StartFly(); }

        if (iOldMode != MELEE_GRAB_ATTACK || bToss)
        {
            // separa os dois jogadores a 68 u um do outro, ao longo do eixo da luta
            Vector vecBack(-m_vecDir[0], -m_vecDir[1], -m_vecDir[2]);
            CBasePlayer *pMoved, *pRef;
            if (f_140) { pMoved = m_pDefender; pRef = m_pAttacker; }       // [?] papéis de cada ponta
            else       { pMoved = m_pAttacker; pRef = m_pDefender; }
            Vector vecStart = (f_140 ? m_pDefender : m_pAttacker)->pev->origin;
            Vector vecEnd = vecStart + vecBack * 68.0f;
            TraceResult tr;
            UTIL_TraceHull(vecStart, vecEnd, ignore_monsters, head_hull, ENT(pRef->pev), &tr);
            UTIL_SetOrigin(pMoved->pev, tr.vecEndPos);
            if (tr.flFraction != 1.0f)                        // [OK] bateu na parede: empurra o outro para compensar
            {
                float flLeft = 1.0f - tr.flFraction;
                Vector vecComp = pRef->pev->origin - vecBack * (68.0f * flLeft);
                UTIL_TraceHull(vecStart, vecComp, ignore_monsters, head_hull, ENT(pMoved->pev), &tr);
                UTIL_SetOrigin(pRef->pev, tr.vecEndPos);
            }
        }
        if (iOldMode == MELEE_EXE_ATTACK)
            PushAfterDeath();

        Vector vecAxis = Vector(m_vecDir[0], m_vecDir[1], m_vecDir[2]).Normalize();
        m_vecDir[0] = m_vecDir[1] = m_vecDir[2] = 0;
        pO->m_vecDir[0] = pO->m_vecDir[1] = pO->m_vecDir[2] = 0;
        m_iStruggleTies = 0; pO->m_iStruggleTies = 0;
        m_flTotalStun = 0;   pO->m_flTotalStun = 0;
        m_flDelayTime = 0;   m_fDelayEndBlock = 0;
        pO->m_flDelayTime = 0; pO->m_fDelayEndBlock = 0;
        f_024 = gpGlobals->time;
        UTIL_Model_RemoveAll(ENTINDEX(ENT(m_pAttacker->pev)));
        UTIL_Model_RemoveAll(ENTINDEX(ENT(m_pDefender->pev)));

        if (bToss)                                            // [OK] separação final: cada um voa para um lado (600/300/350, 5 s)
        {
            f_03c = 1; pO->f_03c = 1;
            if (f_140)
            {
                StartToss(m_pDefender, 0, vecAxis, 600.0f, 300.0f, 350.0f, 5.0f);
                pO->StartToss(m_pAttacker, 0, -vecAxis, 600.0f, 300.0f, 350.0f, 5.0f);
            }
            else
            {
                StartToss(m_pDefender, 0, -vecAxis, 600.0f, 300.0f, 350.0f, 5.0f);
                pO->StartToss(m_pAttacker, 0, vecAxis, 600.0f, 300.0f, 350.0f, 5.0f);
            }
        }
        else
            m_pAttacker->StartFly();
        f_140 = 0;
        pO->f_140 = 0;
    }
    if (!m_pDefender->IsAlive())
        (*(void (**)(CPlayerMelee *))((char *)*(void ***)pO->m_pSkill + 8))(pO);     // [?] callback do skill (vtable +8): defensor morreu
    pO->SetAttackerOther(NULL);
    pO->SetDefender(NULL);
    SetAttackerOther(NULL);
    SetDefender(NULL);
}

// ======================================================================
// Lote 20: laço principal do melee (ManageMelee), empurrões, troca de papéis
// ======================================================================
void CPlayerMelee::ManageMelee(void)                          // chamado a cada frame pelo PreThink do jogador
{
    ManageInvulnerability();
    if (m_fIsAttacker && (!m_pDefender->IsAlive() || m_pDefender->pev->takedamage == 0))   // [?] pev+0x16c
    {
        if (!m_Mode || !m_fIsAttacker) return;
        StopMelee(0);                                         // [OK] o defensor morreu ou ficou invulnerável
        return;
    }
    switch (m_Mode)                                           // [OK] um Handle* por fase
    {
    case MELEE_PREPUNCH_ATTACK:           HandlePrepunchAttack();       break;
    case MELEE_PREPUNCH_DEFEND:           HandlePrepunchDefend();       break;
    case MELEE_CHARGE_ATTACK:             HandleChargeAttack();         break;
    case MELEE_CHARGE_DEFEND:             HandleChargeDefend();         break;
    case MELEE_GRAB_ATTACK:               HandleGrabAttack();           break;
    case MELEE_GRAB_DEFEND:               HandleGrabDefend();           break;
    case MELEE_EXE_ATTACK:                HandleExeAttack();            break;
    case MELEE_EXE_DEFEND:                HandleExeDefend();            break;
    case MELEE_STRUGGLE_ATTACK:           HandleStruggleAttack();       break;
    case MELEE_BURST_STRUGGLE_ATTACK:     HandleBurstStruggleAttack();  break;
    case MELEE_STRUGGLE_DEFEND:           HandleStruggleDefend();       break;
    case MELEE_KNOCK_PRESTRUGGLE_ATTACK:  HandleKnockPreStruggleAttack(); break;
    }
}

void CPlayerMelee::PushAfterDeath(void)                       // o defensor morto desliza 400 u/s para longe
{
    if (m_pDefender->IsAlive()) return;
    Vector vecDir(m_vecDir[0], m_vecDir[1], m_vecDir[2]);
    m_pDefender->pev->velocity = (f_140 ? -vecDir : vecDir) * 400.0f;     // [OK]
}

void CPlayerMelee::PushAwayOtherPlayers(void)                 // ao terminar a luta, afasta quem estiver por perto
{
    CBasePlayer *pCenter = m_pDefender ? m_pDefender : m_pAttacker;
    Vector vecCenter = pCenter->pev->origin;
    CBaseEntity *pEnt = NULL;
    while ((pEnt = UTIL_FindEntityInSphere(pEnt, vecCenter, 350.0f)) != NULL)     // [OK] raio 350
    {
        if (!pEnt->IsPlayer() || pEnt == m_pAttacker || pEnt == m_pDefender) continue;
        CBasePlayer *p = (CBasePlayer *)pEnt;
        if (p->f_330) p->StopPowerUp();
        // só empurra quem está "livre" (sem estados especiais, vivo e fora do tempo de proteção)
        if (!p->f_3e4 && !p->f_354 && !p->f_358 && !p->f_35c && !p->f_770 && !p->f_6bc && !p->f_350 &&
            p->IsAlive() && !p->f_4c4 && gpGlobals->time - nomeleehittime->value >= p->f_3a4)
        {
            if (p->m_fFlying) p->StopFly();
            if (p->m_fBlocking) p->StopBlock();
            Vector vecDist = p->pev->origin - vecCenter;
            if (vecDist.Length() < 87.0f)                     // [OK] colado: é arremessado
                p->m_Melee.StartToss(m_pAttacker, 0, vecDist.Normalize(), 1500.0f, 800.0f, 250.0f, 2.0f);
            else                                              // um pouco mais longe: só é empurrado
                p->pev->velocity = vecDist.Normalize() * 900.0f;
        }
    }
    MESSAGE_BEGIN(MSG_PVS, gmsgMeleeFX, m_pAttacker->pev->origin);
        WRITE_BYTE(3);                                        // [OK] efeito 3: clarão do fim da luta
        WRITE_BYTE(ENTINDEX(ENT(m_pAttacker->pev)));
    MESSAGE_END();
    EMIT_SOUND_DYN(ENT(m_pAttacker->pev), CHAN_WEAPON, "weapons/meleeflash.wav", 1.0, 0.8, 0, 100);
}

void CPlayerMelee::SimpleSwitch(CPlayerMelee *pOther) { SimpleSwitch(pOther, -1.0f, (ADV_MELEE_STATUS)0); }   // [OK]

void CPlayerMelee::SimpleSwitch(CPlayerMelee *pOther, float flStun, ADV_MELEE_STATUS iMode)   // troca atacante e defensor
{
    if (m_fIsAttacker)
    {
        m_iStruggleTies++;
        pOther->m_iStruggleTies++;
        f_0f4 = 1;
        pOther->f_0f4 = 1;                                    // [OK] marca "troca": StopMelee não separa os jogadores
        StopMelee(0);
        pOther->InitMelee(m_pAttacker);                       // [OK] o outro passa a atacar
        if (flStun != -1.0f) SetActiveStunTime(flStun);
        if (iMode) pOther->SetMode(iMode);
        f_0f4 = 0;
        pOther->f_0f4 = 0;
    }
    else if (pOther->m_fIsAttacker)
        pOther->SimpleSwitch(this, flStun, iMode);            // [?] o decompilado chama (this, this); aqui o par é invertido
}

// ---------------------------------------------------------------------------
// lote 21: InitMelee, ManageInvulnerability, Reset, SetMode
// ---------------------------------------------------------------------------

int CPlayerMelee::InitMelee(CBasePlayer *pDefenderPlr)   // this = atacante; pDefenderPlr = alvo
{
    SetDefender(pDefenderPlr);
    SetAttackerOther(NULL);
    m_pDefenderMelee->SetAttackerOther(m_pAttacker);      // [OK] o defensor passa a ter o atacante como "outro"
    m_pDefenderMelee->SetDefender(NULL);
    m_pAttacker->f_37c = 0;
    m_pDefender->f_37c = 0;

    if (!f_0f4)                                           // [OK] sem troca (SimpleSwitch): cancela tudo que o jogador faz
    {
        if (m_pAttacker->m_fFlying)   m_pAttacker->StopFly();
        if (m_pAttacker->m_fPoweredUp) m_pAttacker->StopTurbo();   // [?] nome do campo +0x324
        if (m_pDefender->f_330)       m_pDefender->StopPowerUp();
        if (m_pDefender->m_fFlying)   m_pDefender->StopFly();
        if (m_pDefender->m_fPoweredUp) m_pDefender->StopTurbo();
        if (m_pDefender->m_fTurbo)    m_pDefender->StopSwoop();
        if (m_pDefender->f_6c8)       m_pDefender->RemoveWallJump();
        m_pDefender->m_fBlocking = m_pDefender->m_fBlocking;       // [OK] (auto-atribuição no original)

        if (m_pDefender->f_968)                           // item ativo do defensor (vtable)
        {
            CBaseEntity *pItem = ((CBaseEntity*)m_pDefender->f_968)->vfunc_12c();   // [?] slot 0x12c
            if (pItem)
            {
                if (pItem->vfunc_item_28())               // [?] "está em uso"
                {
                    pItem->vfunc_104(0);
                    pItem->vfunc_fc();
                }
                else if (m_pDefender->f_33c)
                {
                    m_pDefender->f_37c = 1;
                    pItem->vfunc_item_18();
                }
            }
        }
        RemoveAllAnims();
        m_pDefenderMelee->RemoveAllAnims();
    }

    m_pAttacker->f_37c = 1;
    m_pDefender->f_37c = 1;
    m_fIsAttacker = 1;
    m_fIsDefender = 0;
    m_pDefenderMelee->m_fIsAttacker = 0;
    m_pDefenderMelee->m_fIsDefender = 1;
    m_fInAdvMelee = 1;
    m_pDefenderMelee->m_fInAdvMelee = 1;

    if (!f_0f4)
    {
        m_pAttacker->pev->solid = 0;                      // [OK] +0x10c (SOLID_NOT)
        f_140 = 0;
        m_pDefenderMelee->f_140 = 1;
        m_pAttacker->m_flSpeedMult = 1.0f;
        m_pDefender->m_flSpeedMult = 1.0f;
        m_pAttacker->pev->movetype = 15;                  // [OK] MOVETYPE_PUSH? +0x108 = 15 (valor literal)
        m_pDefender->pev->movetype = 15;
    }
    return 0;
}

int CPlayerMelee::ManageInvulnerability()
{
    if (m_pAttacker && f_10c)
    {
        if (f_0b4 < gpGlobals->time)                      // [OK] acabou o tempo de invulnerabilidade
        {
            f_10c = 0;
            m_pIgnoreDamageFrom = NULL;
            f_0b4 = 0;
        }
    }
    return 0;
}

int CPlayerMelee::Reset()
{
    RemoveAllAnims();
    f_000 = 0;
    m_flTossStartSpeed = 0; m_flTossSpeed = 0; m_flTossMinSpeed = 0;
    m_flTossDecel = 0; m_flTossEndTime = 0;
    f_024 = 0;
    m_flLayTime = 0;
    f_0a8 = 0;
    m_fTossing = 0; m_iTossType = 0; f_030 = 0; m_fAirRecover = 0; m_fStruggleBar = 0;
    f_0f8 = 0;
    f_03c = 0;
    m_vecTossDir[0] = m_vecTossDir[1] = m_vecTossDir[2] = 0;
    memset(&m_iThrowState, 0, 28);                        // +0x64..+0x80
    m_vecDir[0] = m_vecDir[1] = m_vecDir[2] = 0;
    m_Mode = (ADV_MELEE_STATUS)0;
    f_0d0 = 0; f_0d4 = 0; f_0d8 = 0;
    m_fIsAttacker = 0; m_fIsDefender = 0;
    m_fStunActive = 0; m_fGrabFull = 0; m_fGrabSpinSound = 0;
    f_0ec = 0; f_0f0 = 0; f_0f4 = 0;
    f_140 = 0;
    f_0fc = 0; f_100 = 0; f_104 = 0; m_fDelayEndBlock = 0; f_10c = 0;
    m_flStunEnd = 0; m_flPrepunchStart = 0; m_flLastPunch = 0;
    f_09c = 0; f_0a0 = 0; m_flGrabFullTime = 0;
    m_flWallStickStart = 0;
    memset(&m_flDelayTime, 0, 36);                        // +0xac..+0xd0
    m_vecWallNormal[0] = m_vecWallNormal[1] = m_vecWallNormal[2] = 0;
    m_pExeHead = NULL; m_pExeCur = NULL;
    m_pIgnoreDamageFrom = NULL;
    SetAttacker(NULL);
    SetAttackerOther(NULL);
    SetDefender(NULL);
    DelAllDirections();
    return 0;
}

int CPlayerMelee::SetMode(ADV_MELEE_STATUS m)
{
    m_Mode = m;
    m_pDefenderMelee->m_Mode = m;
    int r = 0;
    if (m == 0) return 0;
    if (m == 1)  { m_pDefenderMelee->m_Mode = (ADV_MELEE_STATUS)2;  r = StartPrePunchAttack(); }
    if (m == 3)  { m_pDefenderMelee->m_Mode = (ADV_MELEE_STATUS)4;  r = StartChargedAttack(); }
    if (m == 5)  { m_pDefenderMelee->m_Mode = (ADV_MELEE_STATUS)6;  r = StartGrabbedAttack(); }
    if (m == 7)  { m_pDefenderMelee->m_Mode = (ADV_MELEE_STATUS)8;  r = StartExeAttack(); }
    if (m == 9)  { m_pDefenderMelee->m_Mode = (ADV_MELEE_STATUS)11; r = StartStruggleAttack(); }
    if (m == 10) { m_pDefenderMelee->m_Mode = (ADV_MELEE_STATUS)11; r = StartBurstStruggleAttack(); }
    if (m == 12) { m_pDefenderMelee->m_Mode = (ADV_MELEE_STATUS)13; r = StartKnockPreStruggle(); }
    return r;
}

// ---------------------------------------------------------------------------
// lote 22: execução de combos (exe)
// ---------------------------------------------------------------------------

melee_execution_s *CPlayerMelee::SetupCombo(int iId)
{
    char szAnim[0x20];
    GetAnimForCombo(iId, szAnim);
    melee_execution_s *p = CreateExeMove(1, iId, 0, 0, (MELEE_COMBO_STATUS)0, (MELEE_STRENGTH)2, szAnim);   // [?] ordem dos args
    p->f_44 = 1;
    p->f_54 = 2;
    if (p->m_iId == 1)                                        // combo 1: 6 golpes + final
    {
        AddExeCombo(p, 2.0f, 0.075f, NULL);
        AddExeCombo(p, 2.0f, 0.275f, NULL);
        AddExeCombo(p, 2.0f, 0.475f, NULL);
        AddExeCombo(p, 2.0f, 0.65f, NULL);                    // [OK] 0x3f266666
        AddExeCombo(p, 2.0f, 0.85f, NULL);
        AddExeCombo(p, 1.0f, 1.05f, NULL);
        AddExeCombo(p, 1.0f, 1.35f, NULL);
    }
    else if (p->m_iId == 2)                                   // combo 2: 3 golpes + final
    {
        AddExeCombo(p, 2.0f, 0.45f, NULL);
        AddExeCombo(p, 3.0f, 0.65f, NULL);
        AddExeCombo(p, 4.0f, 1.2f, NULL);
        AddExeCombo(p, 4.0f, 1.4f, NULL);
    }
    else
    {
        ALERT(at_console, "Removing invalid combo move!\n");  // [OK]
        delete p;
        return NULL;
    }
    MeleeText(2, 0);
    return p;
}

int CPlayerMelee::StartExeAttack()
{
    if (f_104) { f_104 = 0; return 0; }                       // [OK] pula a cópia dos golpes
    CopyMoveToExe();
    NewExeMovePost();
    return 0;
}

int CPlayerMelee::CopyMoveToExe()       // converte a lista de golpes digitados em execuções "exe"
{
    f_0c0 = 0;
    f_0bc = 0;                                                // [OK] contador de golpes copiados
    m_pExeHead = NULL;
    m_pExeCur = NULL;
    if (!SetComboMoves()) return 0;
    melee_move_s *it = (melee_move_s *)GetCurrentDirection();
    if (!it) { StopMelee(); return 0; }
    while (it->m_pNext) it = it->m_pNext;                     // vai ao primeiro (lista ligada para trás)
    int iCount = 0;
    for (; it; it = it->m_pPrev)
    {
        if (IsDirectionless(it->m_iDirection)) continue;
        iCount++;                                             // [OK] a0[47]
        char szAnim[0x20];
        GetAnimForMove(it, szAnim);
        MELEE_STRENGTH s = (MELEE_STRENGTH)GetMeleeStrength(it);
        float flDelay = GetDamageDelay(it);
        AddExeMove(CreateExeMove(it->m_iDirection, it->f_14, flDelay, it->f_18, (MELEE_COMBO_STATUS)iCount, s, szAnim));   // [?] ordem dos args
    }
    return 0;
}

int CPlayerMelee::NewExeMovePost()
{
    if (!m_pExeCur)
        return CanSwitch() ? Switch() : StopMelee();          // [OK] acabaram os golpes
    m_pExeCur->f_54 = SetBlock(m_pExeCur);                    // [OK] +0x54
    SetBlockStun(m_pExeCur);
    AddAnimationExe(gpGlobals->time, m_pExeCur->m_szName);
    if (m_pExeCur->m_iStrength == 2)                          // golpe forte: borrão de movimento
    {
        int seq = m_pAttacker->LookupSequence(m_pExeCur->m_szName);   // [?]
        UTIL_Model_MotionBlur(ENTINDEX(ENT(m_pAttacker->pev)), seq);   // [?] args
    }
    return 0;
}

int CPlayerMelee::NextExeMove()
{
    if (!m_pExeCur) return NewExeMovePost();
    if (!m_pExeCur->f_40)                                     // golpe simples
    {
        EmitDamage();
        if (!m_fInAdvMelee) return 0;                         // [OK] luta acabou durante o dano
    }
    else
    {
        if (m_pExeCur->f_44)                                  // combo: dispara os hits restantes
        {
            for (int i = 0; i < m_pExeCur->m_iNumHits; i++)
            {
                EmitComboDamage((melee_combo_hit_s *)&m_pExeCur->m_Hit[i]);
                if (!m_fInAdvMelee) return 0;
            }
        }
    }
    if (m_pExeCur) m_pExeCur = (melee_execution_s *)GetNextExe();
    return NewExeMovePost();
}

int CPlayerMelee::HandleExeAttack()
{
    plrmelee_anim_s *pAnim = (plrmelee_anim_s *)GetCurrentAnim();
    if (!pAnim) { ALERT(at_console, "No pAnim!\n"); return StopMelee(); }
    if (!pAnim->m_fExeAnim) { ALERT(at_console, "Non execute anim!\n"); return StopMelee(); }

    melee_execution_s *e = m_pExeCur;
    if (!e->f_40 && !e->f_44)                                 // golpe simples: dano no atraso
    {
        if (e->f_34 + e->f_38 < gpGlobals->time)              // [OK] início + atraso
        {
            EmitDamage();
            if (!m_fInAdvMelee) return 0;
        }
    }
    if (m_pExeCur->f_44)                                      // combo: cada hit vence no seu prazo
    {
        for (int i = 0; i < m_pExeCur->m_iNumHits; i++)
        {
            melee_exe_hit_s *h = &m_pExeCur->m_Hit[i];
            if (!h->f_0c && h->m_fActive && h->m_flTime < gpGlobals->time)
                EmitComboDamage((melee_combo_hit_s *)h);
        }
    }
    return SetBlockingDirections();
}

int CPlayerMelee::StopExeAttack()
{
    if (m_Mode == 7)                                          // atacante
    {
        m_Mode = (ADV_MELEE_STATUS)0;
        if (f_0fc)
        {
            plrmelee_anim_s *a = (plrmelee_anim_s *)GetCurrentAnim();
            if (a) a->m_fExeAnim = 0;
        }
        else
            RemoveAllAnims();
        if (!m_pDefenderMelee->f_0ec) DelAllDirections();
        for (melee_execution_s *p = m_pExeHead; p; )
        {
            melee_execution_s *n = p->m_pNext;
            delete p;
            p = n;
        }
        m_pExeHead = NULL;
        m_pExeCur = NULL;
        return m_pDefenderMelee->StopExeAttack();
    }
    if (m_Mode == 8)                                          // defensor
    {
        m_Mode = (ADV_MELEE_STATUS)0;
        RemoveAllAnims();
        if (!f_0ec) DelAllDirections();
    }
    return 0;
}

// ---------------------------------------------------------------------------
// lote 23: dano dos golpes exe, tempos/danos por força, bloqueio
// ---------------------------------------------------------------------------

float CPlayerMelee::GetDamageDelay(melee_move_s *pMove)   // atraso até o dano, por tipo/força [OK]
{
    if (pMove->m_iDirection & 1)                          // soco
    {
        switch (GetMeleeStrength(pMove)) { case 0: return 0.10f; case 1: return 0.15f; case 2: return 0.25f; }
    }
    else if (pMove->m_iDirection & 0x800)                 // alt (chute): byte +5 & 8
    {
        switch (GetMeleeStrength(pMove)) { case 0: return 0.15f; case 1: return 0.25f; case 2: return 0.35f; }
    }
    return 0.0f;
}

float CPlayerMelee::GetDamage()                           // dano base do golpe exe atual [OK]
{
    if (m_pExeCur->f_20 & 1)
    {
        switch (m_pExeCur->m_iStrength) { case 0: return 3.0f; case 1: return 5.0f; case 2: return 7.0f; }
    }
    else if (m_pExeCur->f_20 & 0x800)
    {
        switch (m_pExeCur->m_iStrength) { case 0: return 4.0f; case 1: return 6.0f; case 2: return 8.0f; }
    }
    return 0.0f;
}

int CPlayerMelee::GetMoveStrength(melee_move_s *pMove)    // força por tempo de segurar
{
    if (!pMove) return 0;
    float t = GetCmbTime(pMove);
    float *pTbl = (float *)((void *(*)(void *))(*(void ***)m_pSkill)[3])(this);   // [?] vfunc +0xc
    if (t < pTbl[1]) return 0;
    pTbl = (float *)((void *(*)(void *))(*(void ***)m_pSkill)[3])(this);
    return t >= pTbl[2] ? 2 : 1;                          // [OK]
}

int CPlayerMelee::SetBlock(melee_execution_s *pExe)       // 1 = golpe bloqueado, 2 = não
{
    melee_move_s *it = m_pDefenderMelee->m_pDefenderMoves;
    if (!it || !pExe) return 2;
    while (it->m_pNext) it = it->m_pNext;                 // primeiro golpe do defensor
    int n = 2;
    if (pExe->f_30 > 1 && n <= pExe->f_30)                // avança conforme o nível do golpe
    {
        while (it)
        {
            it = it->m_pPrev;
            n++;
            if (!(n <= pExe->f_30 && it)) break;
        }
    }
    if (it && Block(pExe->f_20, it->m_iDirection))
    {
        if (pExe->f_54 == 1) return 1;
        f_0c0++;                                          // [OK] +0xc0: golpes bloqueados
        return 1;
    }
    return 2;
}

int CPlayerMelee::SetBlockStun(melee_execution_s *pExe)   // propaga o stun de bloqueio pelos golpes seguintes
{
    if (pExe->f_54 != 2 || pExe->f_3c || pExe->f_44) return 0;
    int iAmt = m_pDefenderMelee->GetBlockStunAmt((MELEE_STRENGTH)pExe->m_iStrength);
    if (!iAmt) return 0;
    for (melee_execution_s *p = pExe->m_pNext; p; p = p->m_pNext, iAmt--)
    {
        if (iAmt <= 0) return iAmt;
        if (!ContinueBlockStun(iAmt, (MELEE_STRENGTH)pExe->m_iStrength, (MELEE_STRENGTH)p->m_iStrength)) return 0;
        p->f_3c = 1;
    }
    return iAmt;
}

int CPlayerMelee::EmitComboDamage(melee_combo_hit_s *pHit)    // pHit aponta para melee_exe_hit_s
{
    melee_exe_hit_s *h = (melee_exe_hit_s *)pHit;
    if (!h || h->f_0c || !h->m_fActive) return 0;
    h->f_0c = 1;                                          // [OK] hit já disparado
    if (h->m_flValue != 0.0f)
    {
        float dmg = h->m_flValue * GetPowerRatio(m_pDefender);   // [?] o decompilado perde o produto
        if (dmg < 1.0f) dmg = 1.0f;
        if (dmg > 6.0f) dmg = 6.0f;
        m_pDefender->TakeDamage(m_pAttacker->pev, m_pAttacker->pev, dmg, 0x2000000);   // [OK] slot 13
        EmitExeSound(GetSoundEdict());
        MeleeText(3, (int)dmg);
    }
    if (h->m_pfnCallback) h->m_pfnCallback(m_pAttacker, m_pDefender);
    return 0;
}

int CPlayerMelee::EmitDamage()
{
    if (m_pExeCur->f_44) return 0;                        // golpes de combo usam EmitComboDamage
    int bSword = 0;
    if (!m_pExeCur->f_40)
    {
        if (!CanUseTrunksSword(m_pDefender))
        {
            if (m_pExeCur->f_54 == 2 || m_pExeCur->f_3c)  // acertou (não bloqueado)
            {
                float dmg = GetDamage() * GetPowerRatio(m_pDefender);   // [?]
                if (dmg < 1.0f) dmg = 1.0f;
                m_pDefender->TakeDamage(m_pAttacker->pev, m_pAttacker->pev, dmg, 0x2000000);
                if (m_pExeCur->f_3c && m_pExeCur->f_54 == 1)
                {
                    MeleeText(11, 0);
                    m_pDefenderMelee->MeleeText(11, 0);
                }
                MeleeText(3, (int)dmg);
            }
            else
                MeleeText(10, 0);                         // [OK] bloqueado
            EmitExeSound(GetSoundEdict());
        }
        else
            bSword = 1;                                   // espada do Trunks
        m_pExeCur->f_40 = 1;
    }
    if (!m_pDefender->IsAlive()) return 0;
    if (m_pExeCur->m_pNext) return 0;                     // só o último golpe arremessa
    if (m_pExeCur->f_54 != 2 && !m_pExeCur->f_3c) return 0;
    if (m_pExeCur->m_iStrength != 2) return 0;            // [OK] só golpe forte

    Vector vecDir(m_vecDir[0], m_vecDir[1], m_vecDir[2]);
    float flLen = vecDir.Length();
    Vector vecToss = flLen == 0 ? Vector(0, 0, 1) : vecDir * (1.0f / flLen);
    if (f_140) vecToss = -vecToss;
    if (m_pExeCur->f_20 & 8)       vecToss = Vector(0, 0, 1);       // [OK] golpe "frente": para cima
    else if (m_pExeCur->f_20 & 16) vecToss = Vector(0, 0, -1);      // "trás": para baixo
    else if (m_pExeCur->f_48)      { vecToss.z = 0; vecToss = vecToss.Normalize(); }

    if (m_pAttacker->f_968)                               // atrasa o próximo ataque do item
    {
        CBasePlayerItem *pItem = (CBasePlayerItem *)m_pAttacker->f_968;
        pItem->m_flNextPrimaryAttack = pItem->m_flNextSecondaryAttack = gpGlobals->time + 1.0f;
    }
    CBasePlayer *pVictim = m_pDefender;
    CPlayerMelee *pVictimMelee = m_pDefenderMelee;
    f_0f4 = 1;
    StopMelee(0);
    f_0f4 = 0;
    if (bSword)                                           // espada do Trunks: dano 999 + corte
    {
        pVictim->f_34c = 0;
        pVictim->f_73c = 0;
        pVictimMelee->f_10c = 0;
        pVictim->TakeDamage(m_pAttacker->pev, m_pAttacker->pev, 999.0f, 0x2001000);
        if (!pVictim->IsAlive())
        {
            EMIT_SOUND_DYN(ENT(pVictim->pev), CHAN_WEAPON, "weapons/swordkill.wav", 1.0, 0.8, 0, 100);
            MeleeText(4, 0);
            pVictim->pev->solid = SOLID_NOT;
            CBodySlice::SpawnBodySlices(pVictim->pev, 0);          // [?] 2º arg
            pVictim->pev->effects |= EF_NODRAW;
            pVictim->pev->velocity = Vector(0, 0, 0);
            pVictim->pev->movetype = 5;
            pVictim->pev->gravity = 0;
            return 0;
        }
    }
    pVictimMelee->StartToss(m_pAttacker, 1, vecToss, 1200.0f, 600.0f, 275.0f, 1.5f);   // [OK]
    return 0;
}

// ---------------------------------------------------------------------------
// lote 24: bloqueio, sons, combos digitados, Switch, MeleeFrameAdvance
// ---------------------------------------------------------------------------

int CPlayerMelee::DelAllDirections()
{
    DelAllDirectionsAttacker();
    DelAllDirectionsDefender();
    return 0;
}

int CPlayerMelee::Block(int iAttackDir, int iDefendDir)   // 1 = a defesa cobre o golpe
{
    int a = iAttackDir;
    if (a & 1)     a &= ~1;                                   // tira "ataque"
    if (a & 0x800) a &= ~0x800;                               // tira "alt"
    for (int i = 2; i <= 5; i++)                              // [?] o decompilado usa CSwoop::DirectionsToFlags (código idêntico)
    {
        if (!(DirectionsToFlags(i) & a) && (DirectionsToFlags(i) & iDefendDir))
            return 0;                                         // defesa em direção que o golpe não tem
    }
    return (a == iDefendDir || ((a & 0x198) && (a & iDefendDir))) ? 1 : 0;   // [OK] 0x198 = trás|esq|dir|frente
}

int CPlayerMelee::CanUseTrunksSword(CBasePlayer *pVictim)
{
    if (!m_pAttacker->m_pClass->vfunc_4c()) return 0;        // [?] "personagem tem espada" (vtable do CBaseClass +0x4c)
    melee_execution_s *e = m_pExeCur;
    if (e->m_pNext) return 0;                                 // só no último golpe
    if (e->f_54 != 2 && !e->f_3c) return 0;
    if (e->m_iStrength != 2) return 0;
    if (!(e->f_20 & 1)) return 0;                             // só soco forte
    float flMax = (float)pVictim->m_pClass->vfunc_10();       // [?] vida máxima
    return (pVictim->pev->health / flMax < 0.2f) ? 1 : 0;     // [OK] vítima abaixo de 20%
}

int CPlayerMelee::ContinueBlockStun(int &iAmt, MELEE_STRENGTH cur, MELEE_STRENGTH next)
{
    switch (next)
    {
    case 0: return 1;                                         // [OK]
    case 1:
        if (cur == 2) { if (iAmt == GetBlockStunAmt(MELEE_STRONG)) { iAmt = 0; return 1; } }
        else if (cur != 1) return 1;
        break;
    }
    iAmt = 0;                                                 // [?] cauda comum
    return 0;
}

int CPlayerMelee::EmitClientSound(edict_t *pent, int a, int b)
{
    PLAYBACK_EVENT_FULL(FEV_GLOBAL, pent, m_usMeleeSounds, 0, g_vecZero, g_vecZero, (float)a, (float)b, 0, 0, 0, 0);   // [OK]
    return 0;
}

int CPlayerMelee::EmitExeSound(edict_t *pent)
{
    melee_execution_s *e = m_pExeCur;
    if (e->f_54 == 1 && !e->f_3c)                             // golpe bloqueado
    {
        PLAYBACK_EVENT_FULL(FEV_GLOBAL, pent, m_usMeleeSounds, 0, g_vecZero, g_vecZero, 0, 0, 0, 0, 1, 0);   // [?] bparams
        return 0;
    }
    if (e->f_54 != 2 && !e->f_3c) return 0;
    if (m_pAttacker->m_pClass->vfunc_4c() && e->f_44)         // combo da espada
        PLAYBACK_EVENT_FULL(FEV_GLOBAL, pent, m_usMeleeSounds, 0, g_vecZero, g_vecZero, 0, 0, 0, 0, 0, 1);  // [?]
    else
        PLAYBACK_EVENT_FULL(FEV_GLOBAL, pent, m_usMeleeSounds, 0, g_vecZero, g_vecZero, 0, 0, e->f_20, e->m_iStrength, 0, 0);   // [OK] tipo+força
    return 0;
}

int CPlayerMelee::SetComboMoves()                             // marca nos golpes digitados os combos definidos em m_pMoveList
{
    melee_move_s *pFirst = (melee_move_s *)GetCurrentDirection();
    if (!pFirst) return 0;
    while (pFirst->m_pNext) pFirst = pFirst->m_pNext;         // o mais antigo
    struct melee_move_node { int m_iCount; int m_iType; struct { int flags; int value; } e[8]; melee_move_node *next; melee_move_node *prev; };   // [OK] ver AddMove
    int iList = m_pAttacker->m_pClass->vfunc_34();            // [?] índice da lista de combos do personagem
    for (melee_move_node *pNode = (melee_move_node *)m_pMoveList[iList]; pNode; pNode = pNode->next)
    {
        for (melee_move_s *m = pFirst; m; m = m->m_pPrev)
        {
            if (m->f_18) continue;                            // já faz parte de um combo
            int bMatch = 1;
            melee_move_s *n = m;
            for (int i = 0; i < pNode->m_iCount; i++)
            {
                if (n && !n->f_18 && pNode->e[i].flags == n->m_iDirection && pNode->e[i].value == GetMoveStrength(n))
                    n = n->m_pPrev;
                else { bMatch = 0; break; }
            }
            if (bMatch)
            {
                melee_move_s *w = m;
                for (int i = 0; i < pNode->m_iCount; i++)
                {
                    w->f_14 = pNode->m_iType;
                    w->f_18 = (i == 0) ? 1 : (i == pNode->m_iCount - 1 ? 3 : 2);   // início / meio / fim
                    w = w->m_pPrev;
                }
            }
        }
    }
    return 1;
}

int CPlayerMelee::Switch()                                    // fim dos golpes exe: o defensor passa a atacar
{
    CPlayerMelee *pD = m_pDefenderMelee;
    float flStun = -1.0f;
    int bFlag = pD->f_0f0;
    if (!pD->f_0f0 && !pD->f_0ec) return StopMelee();         // [OK]
    if (pD->f_0f0 && !pD->f_0ec)
        flStun = pD->GetStunTime() * GetBlockRatio(f_0c0, f_0bc);   // [?] o decompilado perde o produto
    SimpleSwitch(pD, flStun, (ADV_MELEE_STATUS)3);
    f_0ec = 0;
    pD->f_0ec = 0;
    if (!bFlag) return 0;
    if (pD->SetDelayEndBlock(pD->m_pAttackerMoves, m_pDefenderMoves)) return 1;
    return pD->ExecuteCombo();
}

CBasePlayer *CPlayerMelee::GetEnemyPrepunch(CBasePlayer *pPrefer)   // melhor alvo (mais à frente) num raio de 95
{
    CBaseEntity *pEnt = NULL;
    CBaseEntity *pBest = NULL;
    float flBest = 96.0f;
    while ((pEnt = UTIL_FindEntityInSphere(pEnt, m_pAttacker->pev->origin, 95.0f)) != NULL)
    {
        float flDist = (pEnt->pev->origin - m_pAttacker->pev->origin).Length();
        if (flDist < flBest && pEnt != (CBaseEntity *)m_pAttacker && pEnt->IsPlayer() && pEnt->IsAlive() && !((CBasePlayer *)pEnt)->f_4c4)
        {
            Vector vecDir = (pEnt->pev->origin - m_pAttacker->pev->origin).Normalize();
            UTIL_MakeVectors(m_pAttacker->pev->v_angle);      // [?] o decompilado chama CSwoop::GetCurrentDirection(&v, player+0x6bc)
            if (DotProduct(vecDir, gpGlobals->v_forward) > 0.7f)    // [OK] 0x3f333333
            {
                pBest = pEnt;
                flBest = flDist;
                if (pPrefer && pEnt == (CBaseEntity *)pPrefer) return (CBasePlayer *)pEnt;
            }
        }
    }
    return (CBasePlayer *)pBest;
}

int CPlayerMelee::MeleeFrameAdvance()                         // avança a animação do modelo "player" durante o melee
{
    int iOldSeq = m_pAttacker->pev->sequence;
    char szModel[64];
    strcpy(szModel, m_pAttacker->f_5a0);                      // [?] nome do modelo (+0x5a0)
    UTIL_SetPlayerModel(m_pAttacker, "player");
    plrmelee_anim_s *pAnim = (plrmelee_anim_s *)GetCurrentAnim();
    if (pAnim)
        m_pAttacker->pev->sequence = m_pAttacker->LookupSequence(pAnim->m_szName[pAnim->f_288]);
    void *pmodel = GET_MODEL_PTR(ENT(m_pAttacker->pev));
    GetSequenceInfo(pmodel, m_pAttacker->pev, &m_pAttacker->m_flFrameRate, &m_pAttacker->m_flGroundSpeed);
    m_pAttacker->StudioFrameAdvance(0);
    UTIL_SetPlayerModel(m_pAttacker, szModel);
    pmodel = GET_MODEL_PTR(ENT(m_pAttacker->pev));
    m_pAttacker->pev->sequence = iOldSeq;
    GetSequenceInfo(pmodel, m_pAttacker->pev, &m_pAttacker->m_flFrameRate, &m_pAttacker->m_flGroundSpeed);
    if (m_Mode == 7 && m_pAttacker->f_78)
        m_pAttacker->PlayAnimation();
    return 0;
}
