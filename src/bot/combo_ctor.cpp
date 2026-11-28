// combo_ctor.cpp -- CBotCombo::CBotCombo(CBot*, EComboType): monta a fila de entradas para cada tipo de combo.
// RECUPERADO do asm (0x15c9e0, 33749 bytes, tabela de 38 casos). Cada Add() aqui e inline no original.
// Direcoes (mascara de SetMoveDir): 2/4 = esq/dir, 8/16 = frente/tras, 32/64 = cima/baixo.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
#include "esf_classes.h"
#include "bot.h"
#include "combo.h"

#define CT_ENEMY      (BOT_ENEMY(m_pBot))
#define CT_BOTEV      (((CBasePlayer *)m_pBot)->pev)
#define CT_KI         ((int)CT_BOTEV->fuser4)

static float ComboDistToEnemy(CBot *pBot)
{
    CBasePlayer *pEnemy = BOT_ENEMY(pBot);
    return (pEnemy->pev->origin - ((CBasePlayer *)pBot)->pev->origin).Length();
}

// par de investidas (sem e com encadeamento) na mesma direcao
static void AddSwoopPair(CBotCombo *pCombo, CBot *pBot, int iDir)
{
    pCombo->Add(new CStartSwoopComboEntry(pBot, false, iDir));
    pCombo->Add(new CStartSwoopComboEntry(pBot, true, iDir));
}

CBotCombo::CBotCombo(CBot *pBot, EComboType type)
{
    m_pHead = NULL;
    m_pTail = NULL;
    m_pCurrent = NULL;
    m_pBot = pBot;
    m_iStatus = 0;
    m_iSavedMode = 33;                      // [OK] +0x14 (modo de tarefa a restaurar; 33 = nenhum)

    switch ((int)type) {
    case 0:  AddSwoopPair(this, pBot, 2);    m_iSavedMode = 7; break;
    case 1:  AddSwoopPair(this, pBot, 4);    m_iSavedMode = 7; break;
    case 2:  AddSwoopPair(this, pBot, 0x10); m_iSavedMode = 7; break;
    case 3:  AddSwoopPair(this, pBot, 8);    m_iSavedMode = 7; break;
    case 4:  AddSwoopPair(this, pBot, 0x20); m_iSavedMode = 7; break;
    case 5:  AddSwoopPair(this, pBot, 0x40); m_iSavedMode = 7; break;

    case 6:                                 // teleportes + power up
    case 7:
        MakeRandomTeleports(TELE_RANDOM, TELE_FRONT, TELE_RANDOM);   // [OK] resultado ignorado
        Add(new CPowerupComboEntry(pBot));
        m_iSavedMode = (type == 6) ? 13 : 26;
        break;

    case 8:
        Add(new CFallDownComboEntry(pBot));
        m_iSavedMode = 0;
        break;

    case 9:
        Add(new CFallDownComboEntry(pBot));
        Add(new CAscendComboEntry(pBot));
        break;

    case 10: {                              // teleportes de aproximacao: n = (skill/100) * (agress/150), max 4, 150 ki cada
        short *pSkill = BOTF(pBot, short *, 0xa04);
        if (pSkill[0x26 / 2] == 0)
            break;
        short n = BOTF(pBot, short, 0xa18) / 150;
        n = (short)((pSkill[0x26 / 2] / 100) * n);
        if (n <= 0)
            break;
        while (n * 150 > CT_KI) {
            n--;
            if (n <= 0)
                break;
        }
        if (n <= 0)
            break;
        if (n > 4)
            n = 4;
        do {
            Add(new CTeleportComboEntry(pBot, 0.2f, 8, true, false, false));
            n--;
        } while (n != 0);
        break;
    }

    case 11: case 12: case 13: case 14: case 15:
    case 16: case 17: case 18: case 19: {   // teleporte curto numa direcao + virar para o inimigo + investida
        if (!CT_ENEMY)
            break;
        short sDir;
        switch ((int)type) {
        case 11: sDir = 10;   break;
        case 12: sDir = 12;   break;
        case 13: sDir = 8;    break;
        case 14: sDir = 2;    break;
        case 15: sDir = 4;    break;
        case 16: sDir = 0x20; break;
        case 17: sDir = 0x40; break;
        case 18: sDir = 0x12; break;
        default: sDir = 0x14; break;        // 19
        }
        Add(new CTeleportComboEntry(pBot, 0.2f, sDir, true, false, false));
        if (ComboDistToEnemy(pBot) < 350.0f)
            Add(new CTeleportComboEntry(pBot, 0.2f, sDir, true, false, false));
        Add(new CCheckFOVForAimComboEntry(pBot));
        AddSwoopPair(this, pBot, 0x10);
        break;
    }

    case 20: {                              // recua em teleportes: n = dist/400, max 4, 150 ki cada
        if (!CT_ENEMY)                      // [?] o original nao testa
            break;
        short n = (short)(ComboDistToEnemy(pBot) / 400.0f);
        while (n > 0 && n * 150 > CT_KI)
            n--;
        if (n <= 0)
            break;
        if (n > 4)
            n = 4;
        while (n != 0) {
            Add(new CTeleportComboEntry(pBot, 0.2f, 0x10, true, true, false));
            n--;
        }
        m_iSavedMode = 3;
        break;
    }

    case 21:
    case 24: {                              // teleportes laterais para tras (24 = mirando no inimigo)
        if (!CT_ENEMY)
            break;
        short n = (short)RANDOM_LONG(3, 4);
        while (n != 0 && n * 165 > CT_KI)
            n--;
        int iDir = BOTF(pBot, int, 0xff0) ? 4 : 2;
        iDir |= 0x10;
        bool bAim = (type == 24);
        Add(new CTeleportComboEntry(pBot, 0.35f, iDir, bAim, true, false));
        while (n != 1) {                    // [?] igual ao original (n==0 daria volta no short)
            Add(new CTeleportComboEntry(pBot, 0.2f, iDir, bAim, true, false));
            n--;
        }
        Add(new CCheckFOVForAimComboEntry(pBot));
        AddSwoopPair(this, pBot, 0x10);
        break;
    }

    case 22:
        if (!CT_ENEMY)
            break;
        Add(new CPowerupComboEntry(pBot));
        AddSwoopPair(this, pBot, 0x10);
        Add(new CSwoopCloseToEnemyComboEntry(pBot));
        Add(new CTeleportComboEntry(pBot, 0.3f, 0, true, true, false));
        Add(new CCheckFOVForAimComboEntry(pBot));
        AddSwoopPair(this, pBot, 0x10);
        break;

    case 23: {
        if (!CT_ENEMY)
            break;
        Add(new CPowerupComboEntry(pBot));
        int iDist = (int)ComboDistToEnemy(pBot);
        short n = (short)(iDist / 400);
        if (iDist - (iDist / 400) * 400 > 100)
            n++;
        short r = (short)RANDOM_LONG(0, 3);
        int iDir = 0;
        if (r == 0)       iDir = 2;
        else if (r == 1)  iDir = 4;
        if (r <= 1)
            n += (short)RANDOM_LONG(1, 2);
        iDir |= 0x10;
        Add(new CTeleportComboEntry(pBot, 0.35f, iDir, true, true, true));
        while (n != 1) {                    // [?] igual ao original
            Add(new CTeleportComboEntry(pBot, 0.2f, iDir, true, true, true));
            n--;
        }
        Add(new CCheckFOVForAimComboEntry(pBot));
        AddSwoopPair(this, pBot, 0x10);
        break;
    }

    case 25:
        Add(new CPowerupComboEntry(pBot));
        AddSwoopPair(this, pBot, 0x10);
        break;

    case 26:
        Add(new CPowerupComboEntry(pBot));
        m_iSavedMode = 13;
        break;

    case 27:
        Add(new CPowerupComboEntry(pBot));
        m_iSavedMode = 26;
        break;

    case 28:
        Add(new CChargeGenBallComboEntry(pBot));
        AddSwoopPair(this, pBot, 0x10);
        break;

    case 29: case 30: case 31: case 32:
    case 33: case 34: case 35: case 36: {   // investida lateral/vertical, depois evita ataques (29-32) ou investe um instante (33-36)
        int iDir = 0;
        bool bAvoid = false;
        switch ((int)type) {
        case 29: iDir = 2;    bAvoid = true; break;
        case 30: iDir = 4;    bAvoid = true; break;
        case 31: iDir = 0x20; bAvoid = true; break;
        case 32: iDir = 0x40; bAvoid = true; break;
        }
        AddSwoopPair(this, pBot, iDir);
        if (bAvoid)
            Add(new CAvoidAttackWhileSwoopComboEntry(pBot));
        else
            Add(new CSwoopAWhileComboEntry(pBot, 0.2f));
        AddSwoopPair(this, pBot, 0x10);
        break;
    }

    case 37:
        Add(new CTeleportComboEntry(pBot, 0.2f, 8, false, false, false));
        m_iSavedMode = 0;
        break;

    default:
        m_iStatus = 2;
        break;
    }
}
