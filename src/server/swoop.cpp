// swoop.cpp -- CSwoop recuperado (hl_i386.so, ESF 1.2.3). Funcoes pequenas lidas do decompilado/asm.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "esf_classes.h"
#include "swoop.h"

#define OWNER_CLASS(pl) (*(CBaseClass **)((char *)(pl) + 0x764))   // [OK] CBasePlayer::m_pClass

void CSwoop::Reset(void)                       // 0x123940 [OK]
{
    m_iNullKeyset = 0;
    m_flStartTime = 0;
    m_iType = -1;
    f_04 = 0;
    f_08 = 0;
    ResetAllDT();
    m_pPlayer = NULL;
}

void CSwoop::ResetDT(double_tap_s *pDT)        // 0x1239a0 [OK]
{
    memset(pDT, 0, sizeof(double_tap_s));
}

void CSwoop::ResetAllDT(void)                  // 0x1239d0 [OK]
{
    for (int i = 0; i <= 5; i++)
        ResetDT(&m_DT[i]);
}

void CSwoop::ResetAllDTExcept(int iExcept)     // 0x123a20 [OK]
{
    for (int i = 0; i <= 5; i++)
        if (i != iExcept)
            ResetDT(&m_DT[i]);
}

int CSwoop::GetSwoopStartKi(void)              // 0x123a70 [OK]
{
    return f_04 ? 30 : 20;
}

float CSwoop::GetSwoopSpeed(void)              // 0x123df0 [OK]
{
    return (float)(OWNER_CLASS(m_pPlayer)->GetStartSpeed() * 3.7);
}

float CSwoop::GetSwoopBoostSpeed(void)         // 0x123e40 [OK]
{
    return (float)(OWNER_CLASS(m_pPlayer)->GetStartSpeed() * 4.6);
}

float CSwoop::SwoopSlowdown(void)              // 0x123fc0 [OK]
{
    return m_iType == 5 ? 0.85f : 1.0f;
}

void CSwoop::AddToNullKeyset(int iFlags)       // 0x124550 [OK]
{
    m_iNullKeyset |= iFlags;
}

void CSwoop::RemoveFromNullKeyset(int iFlags)  // 0x124560 [OK]
{
    m_iNullKeyset &= ~iFlags;
}

void CSwoop::AddAllToNullKeyset(void)          // 0x124580 [OK]
{
    for (int i = 0; i <= 5; i++)
        AddToNullKeyset(DirectionsToFlags(i));
}

int CSwoop::DirectionsToFlags(int iDir)        // 0x1246d0 [OK] (tabela de salto lida do asm)
{
    switch ((unsigned)iDir) {
    case 0: return 2;
    case 1: return 4;
    case 2: return 0x80;
    case 3: return 0x100;
    case 4: return 8;
    case 5: return 0x10;
    }
    return 0;
}

float CSwoop::GetSwoopTime(void)               // 0x124750 [OK]
{
    return m_flStartTime == 0 ? 0 : gpGlobals->time - m_flStartTime;
}
