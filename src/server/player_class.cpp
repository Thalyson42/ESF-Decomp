// player_class.cpp -- CBasePlayer::ChangeClass (troca de personagem: Goku, Vegeta...). RECUPERADO À MÃO.
// Fonte: decomp_raw/CBasePlayer/ChangeClass__11CBasePlayerPCc.c
// vtable de CBaseClass (slot i em +8+4*i): +0x14 GetStartPowerLevel, +0x10 GetStartHealth, +0xc GetStartSpeed,
// +0x28 GetTransFormPowerLevel, +0x2c GetTransFromPLMultiplier, +0x34 Classify.
// vtable de CGameRules: +0x20 IsTeamplay, +0xcc GetTeamIndex(nome), +0x100 IsValidClass(nome, jogador).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "client.h"
#include "esf_classes.h"

extern int gmsgScoreInfo, gmsgTransform;
// IsValidClass é virtual no original (vtable +0x100); ligação direta ao símbolo, como em bot_simple.cpp
extern BOOL GameRules_IsValidClass(void *pRules, const char *szClass, CBasePlayer *pPlayer) asm("IsValidClass__10CGameRulesPCcP11CBasePlayer");

void CBasePlayer::ChangeClass(const char *szClass)
{
    int iOldClassify = m_pClass->Classify();
    CBaseClass *pNew;

    if      (!strcmp(szClass, "goku"))    pNew = new CGoku(this);
    else if (!strcmp(szClass, "piccolo")) pNew = new CPiccolo(this);
    else if (!strcmp(szClass, "krillin")) pNew = new CKrillin(this);
    else if (!strcmp(szClass, "vegeta"))  pNew = new CVegeta(this);
    else if (!strcmp(szClass, "trunks"))  pNew = new CTrunks(this);
    else if (!strcmp(szClass, "frieza"))  pNew = new CFrieza(this);
    else if (!strcmp(szClass, "cell"))    pNew = new CCell(this);
    else if (!strcmp(szClass, "buu"))     pNew = new CBuu(this);
    else if (!strcmp(szClass, "gohan"))   pNew = new CGohan(this);
    else if (!strcmp(szClass, "randompc")) {
        char szName[32];
        do {
            strcpy(szName, CBaseClass::GetName(RANDOM_LONG(1, 9)));
        } while (!GameRules_IsValidClass(g_pGameRules, szName, this));
        ChangeClass(szName);
        return;
    }
    else return;

    if (g_pGameRules->IsTeamplay() && !pev->team) {
        ALERT(at_console, "Spectators have to pick a team first\n");
        delete pNew; return;
    }
    if (!GameRules_IsValidClass(g_pGameRules, szClass, this)) {
        ALERT(at_console, "Invalid class\n");
        delete pNew; return;
    }
    if (f_4c4 || f_364 || f_728) { delete pNew; return; }            // [?] estados que impedem a troca

    BOOL bWasSpectator = FALSE;
    if (pev->iuser1) { StopSpectator(); bWasSpectator = TRUE; }       // [OK] +0x244
    f_34c = 0;
    f_350 = 0;

    int iPL, iBasePL;
    if (iOldClassify && !bWasSpectator) {                             // trocando de personagem em jogo
        if (f_798 + 2.0f > gpGlobals->time) { delete pNew; return; }   // [OK] espera 2 s entre trocas
        iPL = m_iMaxPowerLevel;
        iBasePL = (int)((float)iPL / f_370);                          // PL sem o multiplicador de forma
        if (f_328) StopObserving();
        if (!CanFly()) { delete pNew; return; }                       // [?] vfunc +0x8c (vivo?)
        edict_t *pWorld = INDEXENT(0);
        entvars_t *pevWorld = pWorld ? &pWorld->v : NULL;
        TakeDamage(pevWorld, pevWorld, 900.0f, 0x1000);               // [OK] morte por troca de classe
    } else {
        iPL = pNew->GetStartPowerLevel();
        iBasePL = (int)((float)iPL / f_370);
    }

    int iOldStart = (int)((float)m_pClass->GetStartPowerLevel() / f_370);
    delete m_pClass;
    m_pClass = pNew;
    if (bWasSpectator) respawn(pev, 0);

    if (iBasePL) {
        float flRatio = (float)m_pClass->GetStartPowerLevel() / (double)iOldStart;
        if (flRatio > 0.75f) flRatio = 0.75f;
        float flKeep = (float)iBasePL * flRatio;
        if ((double)m_pClass->GetStartPowerLevel() > flKeep) iPL = m_pClass->GetStartPowerLevel();
        else                                                 iPL = (int)((float)iBasePL * flRatio);
    }
    SetPowerLevel(iPL);
    SetMaxPowerLevel(iPL);

    f_24c = m_pClass->GetStartHealth();
    SetMaxHealth(f_24c);
    f_74c = m_pClass->GetStartSpeed();
    pev->health = (float)m_pClass->GetStartHealth();
    pev->playerclass = m_pClass->Classify();                          // [OK] pev+0x20c
    m_pClass->SetModel();

    MESSAGE_BEGIN(MSG_ALL, gmsgScoreInfo);
        WRITE_BYTE(ENTINDEX(edict()));
        WRITE_SHORT((int)pev->frags);
        WRITE_SHORT(m_iDeaths);                                       // [OK] +0x984
        WRITE_SHORT(f_738);                                           // [?] +0x738
        WRITE_SHORT(pev->playerclass);
        WRITE_SHORT(g_pGameRules->GetTeamIndex(m_szTeamName) + 1);
    MESSAGE_END();
    if (f_328) StopObserving();

    MESSAGE_BEGIN(MSG_ONE, gmsgTransform, NULL, pev->pContainingEntity);
        WRITE_BYTE(0);
        WRITE_LONG(m_pClass->GetTransFormPowerLevel());
    MESSAGE_END();

    f_370 = m_pClass->GetTransFromPLMultiplier();                     // [OK] guarda o multiplicador da nova forma
    f_6cc = 0;
    f_798 = gpGlobals->time;
}
