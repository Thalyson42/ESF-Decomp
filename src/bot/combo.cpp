// combo.cpp -- sistema de combos dos bots (CBotCombo e CBaseBotComboEntry). RECUPERADO de decomp_raw/CBotCombo.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
#include "esf_classes.h"
#include "bot.h"
#include "combo.h"

// remove e devolve a entrada da frente da fila; NULL se vazia   [OK] trecho repetido em Activate/ExcuteCombo/~CBotCombo
CBaseBotComboEntry *CBotCombo::PopFront(void)
{
    if (!m_pHead)
        return NULL;
    CBaseBotComboEntry *pEntry = (CBaseBotComboEntry *)m_pHead->pData;
    combo_node_s *pNode = m_pHead;
    if (pNode == m_pTail)
        m_pTail = pNode->pNext;
    m_pHead = m_pHead->pNext;
    if (m_pHead)
        m_pHead->pPrev = NULL;
    pNode->pNext = NULL;
    delete pNode;
    return pEntry;
}

void CBotCombo::Add(CBaseBotComboEntry *pEntry)
{
    combo_node_s *pNode = new combo_node_s;
    pNode->pData = pEntry;
    pNode->pNext = NULL;
    pNode->pPrev = m_pTail;
    if (m_pTail) m_pTail->pNext = pNode; else m_pHead = pNode;
    m_pTail = pNode;
}

CBotCombo::~CBotCombo()                        // 0x164dc0 [OK]
{
    while (m_pHead) {
        CBaseBotComboEntry *pEntry = PopFront();
        if (pEntry)
            delete pEntry;
    }
    m_pTail = NULL;
    m_pHead = NULL;
}

void CBotCombo::Activate(void)                 // 0x165950 [OK]
{
    m_iStatus = 1;
    m_pCurrent = PopFront();
    if (m_pCurrent)
        m_pCurrent->m_flStartTime = gpGlobals->time;
}

void CBotCombo::ExcuteCombo(void)              // 0x164e90 [OK]
{
    if (m_pCurrent) {
        if (m_pCurrent->m_iStatus == 0) {
            if (m_pCurrent->GetDelay() + m_pCurrent->m_flStartTime > gpGlobals->time) {
                m_pBot->ResetMoveSpeed();                  // ainda esperando o atraso da entrada
                return;
            }
            m_pCurrent->Activate();
        }
        m_pCurrent->Think();
        if (m_pCurrent->m_iStatus != 2)
            return;
        delete m_pCurrent;                                 // terminou: passa para a proxima
        m_pCurrent = NULL;
        if (m_pHead) {
            m_pCurrent = PopFront();
            if (m_pCurrent) {
                m_pCurrent->m_flStartTime = gpGlobals->time;
                return;
            }
        }
    }
    m_iStatus = 2;                                         // fila vazia: combo concluido
}

// 0x164fb0 [OK] monta uma sequencia de CTeleportComboEntry em direcoes aleatorias; retorna se montou ao menos uma.
// Mascara de direcao: 2/4 = esq/dir, 8/16 = frente/tras, 32/64 = cima/baixo (SetMoveDir). Cada passo tenta UM destino
// (oito combinacoes possiveis, +-45 graus em pitch e yaw a 400 unidades) e so entra na lista se o hull trace estiver livre.
bool CBotCombo::MakeRandomTeleports(ETeleDir eSide, ETeleDir eDepth, ETeleDir eHeight)
{
    CBaseEntity *pEnemy = BOT_ENEMY(m_pBot);
    if (!pEnemy)
        return false;
    entvars_t *pevBot = ((CBasePlayer *)m_pBot)->pev;

    float flDist = (pEnemy->pev->origin - pevBot->origin).Length();
    int iCount;
    if (eDepth == TELE_BACK)
        iCount = (int)(flDist / RANDOM_FLOAT(300.0f, 500.0f));      // recuando: um teleporte por ~300-500 u de distancia
    else
        iCount = RANDOM_LONG(3, 5);
    while (iCount * 150 > (int)pevBot->fuser4)                       // cada teleporte custa 150 de ki
        iCount--;
    if (iCount == 0)
        return false;

    Vector vecPos = pevBot->origin;
    short sMade = 0;
    for (int i = 0; i < iCount; i++) {
        int iMask;
        iMask  = (eSide   == TELE_RANDOM ? RANDOM_LONG(0, 1) : 0) || eSide == TELE_LEFT ? 2 : 4;
        iMask |= (eDepth  == TELE_RANDOM ? RANDOM_LONG(0, 1) : 0) || eDepth == TELE_FRONT ? 8 : 16;
        iMask |= (eHeight == TELE_RANDOM ? RANDOM_LONG(0, 1) : 0) || eHeight == TELE_DOWN ? 64 : 32;

        // angulo de visao + desvios de +-45 [OK]; frente(8) anda no sentido oposto (subtrai)
        Vector vecAngles = *(Vector *)((char *)pevBot + 0x74);       // pev->v_angle
        float flPitch, flYaw, flSign;
        if (iMask & 16) {                                            // "tras": soma
            flPitch = (iMask & 32) ? -45.0f : 45.0f;
            flYaw   = (iMask & 2)  ? 45.0f : -45.0f;
            flSign  = 1.0f;
        } else {                                                     // "frente": subtrai
            flPitch = (iMask & 32) ? 45.0f : -45.0f;
            flYaw   = (iMask & 2)  ? -45.0f : 45.0f;
            flSign  = -1.0f;
        }
        vecAngles.x = flPitch;
        vecAngles.y = UTIL_WrapAngle(vecAngles.y + flYaw);
        UTIL_MakeVectors(vecAngles);
        Vector vecEnd = vecPos + flSign * 400.0f * gpGlobals->v_forward;

        TraceResult tr;
        UTIL_TraceHull(vecPos, vecEnd, dont_ignore_monsters, head_hull, pevBot->pContainingEntity, &tr);
        if (tr.flFraction >= 1.0f) {
            Add(new CTeleportComboEntry(m_pBot, 0.4f, iMask, true, true, false));
            vecPos = tr.vecEndPos;
            sMade++;
        }
    }
    return sMade > 0;
}
