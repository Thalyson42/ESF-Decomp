// player_misc.cpp -- métodos diversos do CBasePlayer no ESF: RemoveSpecialModes, RemoveAllWeapons, CanMelee, UpdateOldPositions.
// RECUPERADO À MÃO de decomp_raw/CBasePlayer/*.c; campos sem nome acessados por offset (PFI/PFF).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "client.h"
#include "esf_classes.h"
#include "aura.h"

extern int gmsgStopTransformFX, gmsgWeaponUpdate, gmsgCurWeapon;
extern cvar_t *nomeleehittime;
void UTIL_Model_RemoveAll(int iEnt);
#define PFI(off) (*(int *)((char *)this + (off)))
#define PFF(off) (*(float *)((char *)this + (off)))
#define PEI(p, off) (*(int *)((char *)(p) + (off)))
// FPlayerCanTakeDamage é virtual (vtable +0x40); ligação direta ao símbolo como em outros arquivos
extern BOOL GameRules_FPlayerCanTakeDamage(void *pRules, CBasePlayer *pPlayer, CBaseEntity *pAttacker) asm("FPlayerCanTakeDamage__10CGameRulesP11CBasePlayerP11CBaseEntity");

// Desliga tudo que o jogador estava fazendo (transformação, powerup, block, voo, turbo, swoop, melee, wall jump...)
// Usado ao morrer, virar espectador/observador e trocar de time.
void CBasePlayer::RemoveSpecialModes(void)
{
    if (PFI(0x344)) UTIL_ScreenFade(this, Vector(255, 255, 255), 0, 0, 255, 0);     // [?] +0x344: fade ativo
    if (f_770) {
        Descend(1);
        MESSAGE_BEGIN(MSG_ALL, gmsgStopTransformFX, pev->origin);
            WRITE_BYTE(ENTINDEX(edict()));
        MESSAGE_END();
        UTIL_Model_RemoveAll(ENTINDEX(edict()));
    }
    if (f_330) StopPowerUp();
    if (m_fBlocking) StopBlock();
    if (m_fFlying) StopFly();
    if (m_fPoweredUp) StopTurbo();
    PFI(0x348) = 0;                                               // [?] nome desconhecido
    if (PFI(0x508)) StopSwoop();
    if (f_76c) ((CAura *)(size_t)f_76c)->Destroy();              // [?] o binário chama Destroy sem testar nulo
    f_76c = 0;
    while (m_pClass->CanDescend()) Descend(1);                    // volta à forma base

    if (f_37c) {                                                  // estado "preso" (melee/throw/wall jump)
        if (PFI(0x3a8)) m_Melee.StopThrow();
        if (*(int *)((char *)&m_Melee + 0x144) && *(int *)((char *)&m_Melee + 0x138)) m_Melee.StopMelee(0);   // [?] campos +0x144/+0x138 da CPlayerMelee
        if (f_6c8) RemoveWallJump();
        f_37c = 0;
    }
    if (!*(int *)((char *)&m_Melee + 0x144)) m_Melee.Reset();
    if (pev->flags & FL_FROZEN) pev->flags &= ~FL_FROZEN;         // [OK] 0x1000

    for (int i = 0; i <= 1; i++) {                                // dois slots de vetor+tempo (+0x6a4 / +0x590)
        PFF(0x6a4 + 12 * i) = 0; PFF(0x6a8 + 12 * i) = 0; PFF(0x6ac + 12 * i) = 0;
        PFF(0x590 + 4 * i) = -1.0f;
    }
    f_6bc = 0;
    PFI(0x59c) = 0;
    f_378 = 0;
    PFI(0x598) = 0;
    PFI(0x584) = 0;
    f_580 = 0;
    PFI(0x6c0) = 0;
    f_34c = 0;
    if (f_350) {
        f_350 = 0;
        pev->rendermode = 0;                                      // [OK] pev+0x148
        pev->renderfx = 0;                                        // [OK] pev+0x15c
    }
}

// Versão ESF de RemoveAllItems: 10 slots de arma; iFlag != 0 também zera pev->weapons.
void CBasePlayer::RemoveAllWeapons(int iFlag)
{
    if (m_pActiveItem) {
        m_pActiveItem->Holster(0);                                // [?] vfunc +0x104
        m_pActiveItem = NULL;
    }
    m_pLastItem = NULL;                                           // +0x970
    for (int i = 0; i <= 9; i++) {
        m_pActiveItem = m_rgpPlayerItems[i];
        while (m_pActiveItem) {
            MESSAGE_BEGIN(MSG_ONE, gmsgWeaponUpdate, NULL, pev);
                WRITE_CHAR(-m_pActiveItem->m_iId);                // [OK] +0x88 (id negativo = remove)
            MESSAGE_END();
            CBasePlayerItem *pItem = m_pActiveItem;
            CBasePlayerItem *pNext = pItem->m_pNext;              // +0x84
            pItem->Drop();                                        // [?] vfunc +0x114 (Kill/Drop)
            m_pActiveItem = pNext;
        }
        m_rgpPlayerItems[i] = NULL;
    }
    m_pActiveItem = NULL;
    pev->viewmodel = 0;
    pev->weaponmodel = 0;
    if (iFlag) pev->weapons = 0;
    UpdateClientData_Hook();                                      // [?] vtable +0x204
    MESSAGE_BEGIN(MSG_ONE, gmsgCurWeapon, NULL, pev);
        WRITE_BYTE(0); WRITE_BYTE(0); WRITE_BYTE(0);
    MESSAGE_END();
}

// Este jogador pode atacar pOther em melee? (pOther em estado especial, ocupado ou protegido → não)
BOOL CBasePlayer::CanMelee(CBasePlayer *pOther)
{
    int st = PEI(pOther, 0x3e4);                                  // [?] estado dentro do CPlayerMelee do alvo
    if (st == 4 || st == 6 || st == 3 || st == 5) return FALSE;
    if (PEI(pOther, 0x354) || PEI(pOther, 0x358) || PEI(pOther, 0x35c) || PEI(pOther, 0x364) ||
        PEI(pOther, 0x770) || PEI(pOther, 0x6bc) || PEI(pOther, 0x350)) return FALSE;
    if (!pOther->CanFly()) return FALSE;                          // [?] vfunc +0x8c
    if (PEI(pOther, 0x4c4)) return FALSE;
    if (gpGlobals->time - nomeleehittime->value < *(float *)((char *)pOther + 0x3a4)) return FALSE;   // tempo mínimo entre hits
    return GameRules_FPlayerCanTakeDamage(g_pGameRules, this, pOther) ? TRUE : FALSE;
}

// Guarda a posição a cada 0.2 s quando o jogador andou mais de 200 unidades (histórico de 5 pontos em +0x6d4, 16 bytes cada).
void CBasePlayer::UpdateOldPositions(void)
{
    PFF(0x724) = gpGlobals->time + 0.2f;
    Vector cur = pev->origin;
    Vector last(PFF(0x6d4), PFF(0x6d8), PFF(0x6dc));
    if ((cur - last).Length() <= 200.0f) return;
    for (int i = 4; i >= 1; i--)                                  // desloca o histórico (o binário também copia o índice 0 de fora)
        memcpy((char *)this + 0x6d4 + 16 * i, (char *)this + 0x6d4 + 16 * (i - 1), 16);
    PFF(0x6d4) = cur.x; PFF(0x6d8) = cur.y; PFF(0x6dc) = cur.z;
    PFF(0x6e0) = gpGlobals->time;
}
