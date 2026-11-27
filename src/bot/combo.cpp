// combo.cpp -- sistema de combos dos bots (CBotCombo e CBaseBotComboEntry). RECUPERADO de decomp_raw/CBotCombo.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"
#include "esf_classes.h"
#include "bot.h"

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
