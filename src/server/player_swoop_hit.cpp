// player_swoop_hit.cpp -- CBasePlayer::Swoop: o que acontece quando uma investida (swoop) com arma de melee alcança o inimigo.
// RECUPERADO À MÃO do assembly (decomp_raw/CBasePlayer/Swoop__11CBasePlayer.c estava ilegível nas comparações x87).
// Lê o inimigo (GetEnemyPrepunch), para a investida e decide: choque entre duas investidas (struggle), golpe forte (Powerhit)
// ou início de melee. Há duas variantes quase iguais conforme m_Melee.f_080 (+0x400): "A" e "B" abaixo.
// Campos do CSwoop dentro do jogador: +0x504 tipo, +0x508 ativa, +0x50c terminou.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "esf_classes.h"
#include "playermelee.h"
#include "swoop.h"

extern cvar_t melee_swoop_minstrugtime;                          // "am_swoop_minstrugtime" (padrão 0.35)
#define PEI(p, off) (*(int *)((char *)(p) + (off)))
#define SWOOP_ATTACK2 0x800                                      // IN_ATTACK2

void CBasePlayer::Swoop(void)
{
    if (!m_pActiveItem) return;
    if ((unsigned)(m_pActiveItem->m_iId - 1) > 1) return;        // só armas de id 1 e 2 (as de melee)

    const BOOL bVariantA = m_Melee.f_080 != 0;                   // [?] +0x400
    CBasePlayer *pEnemy = m_Melee.GetEnemyPrepunch(NULL);
    if (!pEnemy) return;
    if (!CanMelee(pEnemy)) return;
    if (!(pev->button & SWOOP_ATTACK2) && PEI(pEnemy, 0x3a8)) return;   // sem attack2, o alvo não pode estar com +0x3a8

    int bClash = 0;
    float flMyTime = m_Swoop.GetSwoopTime();
    Vector vecDir = m_Swoop.GetCurrentDirection();
    int iType = m_Swoop.m_iType;
    StopSwoop();

    // o inimigo também está investindo contra mim?
    if (pEnemy->m_Melee.GetEnemyPrepunch(this) == this && PEI(pEnemy, 0x508) && (bVariantA || PEI(pEnemy, 0x504) != 5)) {
        float flMin = melee_swoop_minstrugtime.value;
        if (flMyTime > flMin || PEI(this, 0x50c)) {
            float flEnemy = pEnemy->m_Swoop.GetSwoopTime();
            if (bVariantA ? (flEnemy > flMin && !PEI(pEnemy, 0x50c)) : (flEnemy > flMin || PEI(pEnemy, 0x50c)))
                bClash = 1;
        } else {
            float flEnemy = pEnemy->m_Swoop.GetSwoopTime();
            if (bVariantA ? (flEnemy > flMyTime && !PEI(pEnemy, 0x50c)) : (flEnemy > flMyTime || PEI(pEnemy, 0x50c))) {
                pEnemy->Swoop();                                  // o inimigo chegou primeiro: ele resolve
                return;
            }
        }
    }

    if (bClash) {
        float flEnemyTime = pEnemy->m_Swoop.GetSwoopTime();
        pEnemy->StopSwoop();
        int bMyAtk2 = (pev->button & SWOOP_ATTACK2) != 0;
        int bEnAtk2 = (pEnemy->pev->button & SWOOP_ATTACK2) != 0;
        if (bVariantA || (bMyAtk2 && bEnAtk2)) {                  // os dois seguram attack2: disputa de força
            m_Melee.BlowbackStruggle(vecDir, flMyTime, flEnemyTime, pEnemy);
            m_Melee.MeleeText(15, 0);
            m_Melee.MeleeText(16, 0);
            pEnemy->m_Melee.MeleeText(15, 0);
            pEnemy->m_Melee.MeleeText(16, 0);
        } else if (!bMyAtk2 && !bEnAtk2) {                        // nenhum: eu agarro o inimigo
            m_Melee.InitMelee(pEnemy);
            m_Melee.SetMode(MELEE_STRUGGLE_ATTACK);
        } else if (!bEnAtk2 && bMyAtk2) {                         // só eu: o inimigo é o atacante de knock
            pEnemy->m_Melee.InitMelee(this);
            pEnemy->m_Melee.SetMode(MELEE_KNOCK_PRESTRUGGLE_ATTACK);
        } else {                                                  // só o inimigo
            m_Melee.InitMelee(pEnemy);
            m_Melee.SetMode(MELEE_KNOCK_PRESTRUGGLE_ATTACK);
        }
        return;
    }

    if (bVariantA) {
        if (!(pev->button & SWOOP_ATTACK2)) return;
        if (!UseKi(35)) return;
        if (PEI(pEnemy, 0x380) > 1) return;                       // o alvo já está em melee
        m_Melee.SimpleMeleePowerhit(pEnemy, vecDir, iType);
    } else {
        if (iType == 5) return;
        if (!(pev->button & SWOOP_ATTACK2) && pEnemy->pev->movetype != 15) {   // sem attack2: começa um melee normal
            m_Melee.InitMelee(pEnemy);
            *(Vector *)((char *)this + 0x490) = vecDir;           // [?] direção do ataque (+0x490)
            m_Melee.SetMode(MELEE_PREPUNCH_ATTACK);
            return;
        }
        if (PEI(pEnemy, 0x380) > 1) return;
        if (!(pev->button & SWOOP_ATTACK2)) return;
        if (!UseKi(35)) return;
        m_Melee.Powerhit(pEnemy, vecDir, iType);
    }
}
