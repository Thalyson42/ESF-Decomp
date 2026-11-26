// player_anim.cpp -- animação do CBasePlayer no ESF (corpo todo / pernas / gatilhos de animação). RECUPERADO À MÃO.
// Fonte: decomp_raw/CBasePlayer/{PlayAnimation,PlayFullBodyAnimation,GetLowerBodyAnimation,GetAuraDirection,CanPlayForwardWalk,
//        RemoveAnimationTriggers,StopAniTrigger}*.c
// pev->sequence = parte de cima, pev->gaitsequence = pernas. m_Activity(+0x174)/m_IdealActivity(+0x178) guardam a "atividade" atual.
// +0x778 = gatilho de animação pedido por código (StopAniTrigger(n)); +0x77c = tipo (1 chão / 2 voo) da última animação de corpo todo.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "esf_classes.h"
#include "aura.h"

#define PFI(off) (*(int *)((char *)this + (off)))
#define PFF(off) (*(float *)((char *)this + (off)))
#define P_ACTIVITY      PFI(0x174)      // [OK] atividade atual
#define P_IDEAL         PFI(0x178)      // [OK] atividade desejada
#define P_ANIMTRIGGER   PFI(0x778)      // [?] nome
#define P_FULLBODYTYPE  PFI(0x77c)      // [?] nome
#define P_IDLETIME      PFF(0x58c)      // [?] instante em que ficou parado (deep_idle após 5 s)

#define IN_RIGHTMOVE (IN_RIGHT | IN_MOVERIGHT)

BOOL CBasePlayer::CanPlayForwardWalk(void)
{
    UTIL_MakeVectors(pev->v_angle);
    return DotProduct(pev->velocity, gpGlobals->v_forward) > -1.0f;      // [OK]
}

// 1 = o jogador está "em movimento ativo" (aura anda junto); usado por PlayAnimation para o CAura.
int CBasePlayer::GetAuraDirection(void)
{
    float speed = sqrt(pev->velocity.x * pev->velocity.x + pev->velocity.y * pev->velocity.y);
    int btn = pev->button;
    int bSide = (btn & IN_RIGHTMOVE) != 0;
    int bFwd = btn & IN_FORWARD, bBack = btn & IN_BACK;
    if (*(int *)((char *)pev + 556)) return 0;                           // [?] pev+0x22c

    if (!m_fFlying) {
        if (PFI(0x508)) return 1;                                        // [?] +0x508 (m_fTurbo)
        if (pev->flags & FL_ONGROUND) {
            if (btn & IN_DUCK) return 0;
        } else {
            if (pev->waterlevel > 1) {
                if ((float)GetMaxSpeed() / 1.6 < speed) return 1;
            } else if (0.0f <= pev->velocity.z) return 1;
            return 0;
        }
    }
    // chão (sem agachar) ou voando
    if (!(btn & (IN_LEFT | IN_MOVELEFT)) && !bSide) {
        if ((bFwd || bBack) && m_flSpeedMult != 0.0f) return 1;
    } else if (bBack) {
        if ((bFwd || bBack) && m_flSpeedMult != 0.0f) return 1;
    }
    return 0;
}

// Sequência das pernas (gaitsequence).
int CBasePlayer::GetLowerBodyAnimation(void)
{
    float speed = sqrt(pev->velocity.x * pev->velocity.x + pev->velocity.y * pev->velocity.y);
    const char *pszName = NULL;
    int iSeq;

    if (m_fFlying) {
        pszName = (pev->button & IN_BACK) ? "fly_backward" : ((pev->button & IN_FORWARD) ? "fly_forward" : "fly_idle");
    } else if (pev->waterlevel > 1) {
        if ((float)GetMaxSpeed() / 1.6 >= speed)      { iSeq = LookupActivity(50); goto done; }
        else if (pev->button & IN_BACK)               pszName = "swim_backwards";
        else                                          { iSeq = LookupActivity(6); goto done; }
    } else if (!(pev->flags & FL_ONGROUND)) {
        if (pev->velocity.z < 0)                      pszName = "fly_fall";
        else if (PFI(0x778) == 2)                     { iSeq = LookupActivity(8); goto done; }
        else if (PFI(0x778) == 3)                     pszName = "back_flip";
        else {
            if (PFI(0x778) != 1) P_IDEAL = 7;
            iSeq = LookupActivity(7); goto done;
        }
    } else if ((float)GetMaxSpeed() / 1.3 < speed || (m_fPoweredUp && speed > 0)) {
        if (pev->button & IN_BACK)                    pszName = "run_backward";
        else if (m_fPoweredUp && (pev->button & (IN_FORWARD | IN_MOVELEFT | IN_MOVERIGHT))) pszName = "turbo_run";
        else                                          pszName = CanPlayForwardWalk() ? "run" : "run_backward";
    } else if (speed <= 0) {
        if (pev->sequence != LookupSequence("idle") && pev->sequence != LookupSequence("deep_idle"))
            P_IDLETIME = gpGlobals->time;
        pszName = (gpGlobals->time - 5.0f > P_IDLETIME) ? "deep_idle" : "idle";
    } else {
        pszName = (!(pev->button & IN_BACK) && CanPlayForwardWalk()) ? "walk2handed" : "walk_backward";
    }
    iSeq = LookupSequence(pszName);
done:
    return (iSeq == -1) ? 0 : iSeq;
}

// Apaga o gatilho de animação quando a atividade correspondente terminou (ou mudou).
void CBasePlayer::RemoveAnimationTriggers(void)
{
    int t = P_ANIMTRIGGER, act = P_ACTIVITY;
    BOOL bDone = m_fSequenceFinished;
    switch (t) {
    case 7: case 8: case 9:
        if (act != 81 + t) { P_ANIMTRIGGER = 0; PFI(0x784) = 0; return; }   // 88,89,90
        if (!bDone) return;
        P_ANIMTRIGGER = 0; PFI(0x784) = 0; return;
    case 5:  if (act == 28) { if (!bDone) return; } break;
    case 6:  if (act == 29) { if (!bDone) return; } break;
    case 10: if (act == 91) { if (!bDone) return; } break;
    case 1:  if (act == 7)  { if (!bDone) return; } break;
    case 3:  if (act == 0x55) { if (!bDone) return; } break;
    case 2:  if (act == 8)  { if (!bDone) return; } break;
    default: return;
    }
    P_ANIMTRIGGER = 0;
}

void CBasePlayer::StopAniTrigger(int iTrigger)
{
    if (P_ANIMTRIGGER != iTrigger) return;
    ResetSequenceInfo();
    P_ANIMTRIGGER = 0;
    PFI(0x784) = 0;
    PlayAnimation();
}

// Animações que ocupam o corpo inteiro (melee, transformação, block, carga, powerup...). Retorna 1 se tocou alguma.
int CBasePlayer::PlayFullBodyAnimation(void)
{
    char buf[64];
    int iSeq = 0, iType = 0;
    P_IDEAL = 0;
    buf[0] = 0;

    if (P_ANIMTRIGGER == 10) {
        P_IDEAL = 91;
        iSeq = LookupSequence("wrap");
    } else if (P_ANIMTRIGGER) {
        return 0;
    } else if (m_Melee.CanPlayAnimation()) {
        plrmelee_anim_s *pAnim = m_Melee.GetCurrentAnim();
        iSeq = LookupSequence(&pAnim->m_szName[pAnim->f_288][0]);
        if (iSeq == -1) iSeq = 0;
        if (!pAnim->m_fExpire) {
            pev->frame = 0.001f;
            m_fSequenceFinished = 0;
            pAnim->m_iGroundFlag = pev->flags & FL_ONGROUND;
            pAnim->m_fExpire = 1;
        }
        P_IDEAL = pAnim->m_iSeqType[pAnim->f_288];
        iType = 1;
        if ((iSeq == pev->sequence && m_fSequenceFinished) || pev->frame == 255.0f) {
            if (pAnim->m_fExeAnim) m_Melee.NextExeMove();
            else {
                int n = pAnim->f_288 + 1;
                if (n < pAnim->m_iNumNames) pAnim->f_288 = n;
                else if (!pAnim->m_iFlag && !*(int *)((char *)&m_Melee + 0x144)) m_Melee.RemoveAnim(pAnim);   // [?] +0x144 da CPlayerMelee
            }
        }
    } else if (f_770 && !f_33c) {                                        // transformando
        iType = 1;
        float flLeft = *(float *)&f_774 - gpGlobals->time;               // f_774 é float no binário
        const char *psz; int act;
        int st = f_580;
        if (st == 2)       { if (flLeft > 1.0f) goto normal; goto fin; }
        else if (st <= 2)  { if (st != 1) goto normal; goto fin; }
        else if (st != 3)  goto normal;
        else               { if (flLeft <= 1.0f) goto fin; psz = "change_long"; act = 126; goto set; }
    fin:    psz = "change_finish"; act = 124; goto set;
    normal: psz = "change_normal"; act = 125;
    set:    strcpy(buf, psz); P_IDEAL = act;
        iSeq = LookupSequence(buf);
    } else if (f_37c) {
        if (PFI(0x508)) m_Swoop.SetSwoopAnim(buf, P_IDEAL);             // [?] 0x508: estado do swoop
        else if (PFI(0x3a8)) m_Melee.SetThrowAnim(buf, (Activity &)P_IDEAL);
        iType = 1;
        iSeq = LookupSequence(buf);
    } else if (f_33c) {
        if (pev->movetype == 15) { P_IDEAL = 82; strcpy(buf, "ref_beam_push"); }
        else { P_IDEAL = 81; strcpy(buf, "ref_control_"); strcat(buf, (char *)this + 0x9ac); }
        iType = 1;
        iSeq = LookupSequence(buf);
    } else if (PFI(0x338) && m_flSpeedMult == 0.0f) {
        P_IDEAL = 80; strcpy(buf, "ref_charge2_"); strcat(buf, (char *)this + 0x9ac);
        iType = 1; iSeq = LookupSequence(buf);
    } else if (f_334 && m_flSpeedMult == 0.0f) {
        P_IDEAL = 80; strcpy(buf, "ref_charge_"); strcat(buf, (char *)this + 0x9ac);
        iType = 1; iSeq = LookupSequence(buf);
    } else if (m_fBlocking && !f_784) {
        P_IDEAL = 79;
        if (m_fFlying) { strcpy(buf, "fly_block"); iType = 2; }
        else           { strcpy(buf, "ref_block"); iType = 1; }
        iSeq = LookupSequence(buf);
    } else if (PFI(0x360)) {                                             // estrangulado (CBodyPartAttack)
        iSeq = LookupSequence("struggle");
        P_IDEAL = 92;
    } else if (f_330) {                                                  // carregando ki
        if ((P_ACTIVITY == 77 && m_fSequenceFinished) || P_ACTIVITY == 78) {
            P_IDEAL = 78;
            iSeq = LookupSequence(m_fFlying ? "fly_powerup_charge" : "ref_powerup_charge");
        } else {
            P_IDEAL = 77;
            iSeq = LookupSequence(m_fFlying ? "fly_powerup" : "ref_powerup");
        }
        iType = m_fFlying ? 2 : 1;
    }

    if (!P_IDEAL) return 0;
    if (P_ANIMTRIGGER) P_ANIMTRIGGER = 0;
    int iFrame = 0;
    if (P_ACTIVITY == P_IDEAL) {
        if (iType && iType == P_FULLBODYTYPE) return 1;
        if (CanFly()) {                                                  // [?] vfunc +0x8c
            iFrame = (int)pev->frame;
            pev->effects |= EF_NOINTERP;
        }
    }
    P_ACTIVITY = P_IDEAL;
    P_FULLBODYTYPE = iType;
    if (iSeq == -1) iSeq = 0;
    if (pev->sequence != iSeq) {
        pev->gaitsequence = 0;
        pev->sequence = iSeq;
        pev->frame = (float)iFrame;
        ResetSequenceInfo();
    }
    return 1;
}

// Chamado todo frame no lugar de SetAnimation(PLAYER_WALK).
void CBasePlayer::PlayAnimation(void)
{
    if (f_76c) ((CAura *)(size_t)f_76c)->pev->body = GetAuraDirection();   // [OK] aura->pev->body (+0x114)
    m_Melee.ManageList();
    if (!PlayFullBodyAnimation()) {
        int iFrame;
        int iUpper = GetUpperBodyAnimation(iFrame);
        int iLower = GetLowerBodyAnimation();
        if (iLower) pev->gaitsequence = iLower;
        if (pev->sequence != iUpper) {
            pev->frame = (float)iFrame;
            pev->sequence = iUpper;
            ResetSequenceInfo();
        }
    }
    RemoveAnimationTriggers();
}

// Sequência da parte de cima do corpo (pev->sequence) quando não há animação de corpo inteiro.
// Prefere "ref_aim_<arma>" (mira com a arma atual); sem ela, cai nas animações de movimento (voo, água, ar, chão).
// iFrame recebe o quadro inicial (preserva o quadro quando a atividade não mudou).
int CBasePlayer::GetUpperBodyAnimation(int &iFrame)
{
    float speed = sqrt(pev->velocity.x * pev->velocity.x + pev->velocity.y * pev->velocity.y);
    char buf[64];
    const char *pszSuffix = (char *)this + 0x9ac;      // [?] nome da arma/ataque atual (usado em ref_*_<nome>)
    int iSeq;
    int trig = P_ANIMTRIGGER;

    if (trig == 5)       { P_IDEAL = 28; strcpy(buf, "ref_shoot_");  strcat(buf, pszSuffix); iSeq = LookupSequence(buf); }
    else if (trig == 6)  { P_IDEAL = 29; strcpy(buf, "ref_shoot2_"); strcat(buf, pszSuffix); iSeq = LookupSequence(buf); }
    else if (PFI(0x338)) { P_IDEAL = 80; strcpy(buf, "ref2_charge_"); strcat(buf, pszSuffix); iSeq = LookupSequence(buf); }
    else if (f_334)      { P_IDEAL = 80; strcpy(buf, "ref_charge_");  strcat(buf, pszSuffix); iSeq = LookupSequence(buf); }
    else if (trig == 7)  { PFI(0x784) = 1; P_IDEAL = 88; iSeq = LookupSequence("ref_left_swataway"); }
    else if (trig == 8)  { PFI(0x784) = 1; P_IDEAL = 89; iSeq = LookupSequence("ref_right_swataway"); }
    else if (trig == 9)  { PFI(0x784) = 1; P_IDEAL = 90; iSeq = LookupSequence("ref_forward_swataway"); }
    else {
        P_IDEAL = 3;
        strcpy(buf, "ref_aim_"); strcat(buf, pszSuffix);
        iSeq = LookupSequence(buf);
        if (iSeq == -1) iSeq = 0;
        if (!iSeq) {                                           // sem animação de mira: movimento
            if (m_fFlying) {
                if (pev->button & IN_FORWARD)    { iSeq = LookupSequence("fly_forward");  P_IDEAL = 93; }
                else if (pev->button & IN_BACK)  { iSeq = LookupSequence("fly_backward"); P_IDEAL = 94; }
                else                             { iSeq = LookupSequence("fly_idle");     P_IDEAL = 5; }
            } else if (pev->waterlevel > 1) {
                if ((float)GetMaxSpeed() / 1.6 >= speed) { P_IDEAL = 50; iSeq = LookupActivity(50); }
                else {
                    P_IDEAL = 6;
                    iSeq = (pev->button & IN_BACK) ? LookupSequence("swim_backwards") : LookupActivity(6);
                }
            } else if (!(pev->flags & FL_ONGROUND)) {
                if (pev->velocity.z < 0) { P_IDEAL = 9; iSeq = LookupSequence("fly_fall"); }
                else if (P_ANIMTRIGGER != 1 && P_ANIMTRIGGER == 3) { P_IDEAL = 0x55; iSeq = LookupSequence("back_flip"); }
                else if (P_ANIMTRIGGER != 1 && P_ANIMTRIGGER == 2) { P_IDEAL = 8; iSeq = LookupActivity(8); }
                else { P_IDEAL = 7; iSeq = LookupActivity(7); }
            } else if ((float)GetMaxSpeed() / 1.3 < speed || (m_fPoweredUp && speed > 0)) {
                if (pev->button & IN_BACK) { iSeq = LookupSequence("run_backward"); P_IDEAL = 96; }
                else {
                    const char *psz;
                    if (m_fPoweredUp && (pev->button & (IN_FORWARD | IN_MOVELEFT | IN_MOVERIGHT))) psz = "turbo_run";
                    else psz = CanPlayForwardWalk() ? "run" : "run_backward";
                    iSeq = LookupSequence(psz);
                    P_IDEAL = 95;
                }
            } else if (speed > 0) {
                if (pev->button & IN_BACK) iSeq = LookupSequence("walk_backward");
                else iSeq = LookupSequence(CanPlayForwardWalk() ? "walk2handed" : "walk_backward");
                P_IDEAL = 3;
            } else {
                if (pev->sequence != LookupSequence("idle") && pev->sequence != LookupSequence("deep_idle"))
                    P_IDLETIME = gpGlobals->time;
                iSeq = LookupSequence((gpGlobals->time - 5.0f > P_IDLETIME) ? "deep_idle" : "idle");
            }
        }
    }
    iFrame = 0;
    if (P_ACTIVITY == P_IDEAL && P_FULLBODYTYPE != 1)
        iFrame = (int)pev->frame;
    P_ACTIVITY = P_IDEAL;
    P_FULLBODYTYPE = 1;
    return (iSeq == -1) ? 0 : iSeq;
}
