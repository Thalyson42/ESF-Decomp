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

#define PLI(off) (*(int *)((char *)m_pPlayer + (off)))   // campo sem nome do CBasePlayer, por offset

int CSwoop::CanSwoop(double_tap_s *pDT, int iDir)   // 0x123e90 [OK] (x87 lido do asm)
{
    if ((!PLI(0x37c) || (f_04 && iDir != m_iType))
        && pDT->f_0c != 0 && pDT->f_00 != 0.0f && pDT->f_04 != 0.0f
        && !(gpGlobals->time - pDT->f_08 < 0.05))
        return 1;
    return 0;
}

int CSwoop::CanUseDirections(void)             // 0x123f20 [OK] campos do jogador conferidos no asm, nomes [?]
{
    if (!PLI(0x364) && !PLI(0x330) && !PLI(0x334) && !PLI(0x33c) && m_pPlayer->CanFly()   // CanFly = vfunc +0x8c
        && !PLI(0x328) && !PLI(0x340) && !PLI(0x770) && !PLI(0x6bc) && !PLI(0x3a8) && !PLI(0x32c))
        return 1;
    return 0;
}

void CSwoop::HandleSwoop(void)                 // 0x123ff0 [OK] x87 lido do asm
{
    if (m_flStartTime + 2.85 < gpGlobals->time) {      // duracao maxima do swoop
        StopSwoop();
        return;
    }
    float flRamp = 0;
    if (m_flStartTime + 0.75 > gpGlobals->time)        // fase inicial de impulso: 1 -> 0 em 0.75s
        flRamp = 1.0 - (gpGlobals->time - m_flStartTime) / 0.75;
    float flSpeed = GetSwoopSpeed();
    float flBoost = GetSwoopBoostSpeed();
    float flResult = SwoopSlowdown() * (flRamp * flBoost + flSpeed);
    m_flSpeed = flResult;                              // +0x14
    m_pPlayer->pev->maxspeed = flResult;               // pev+0x28c
}

#define PL_BUTTON (m_pPlayer->pev->button)

int CSwoop::IsHolding(int iDir)                // 0x1245d0 [OK] (tabela de salto lida do binario)
{
    switch ((unsigned)iDir) {
    case 0: if (m_iNullKeyset & 0x02) return 0; return PL_BUTTON & 0x02;
    case 1: if (m_iNullKeyset & 0x04) return 0; return PL_BUTTON & 0x04;
    case 2: if (m_iNullKeyset & 0x80) return 0; return (PL_BUTTON & 0x280) != 0;
    case 3: if (m_iNullKeyset & 0x100) return 0; return (PL_BUTTON & 0x500) != 0;
    case 4: if (m_iNullKeyset & 0x08) return 0; return PL_BUTTON & 0x08;
    case 5: if (m_iNullKeyset & 0x10) return 0; return PL_BUTTON & 0x10;
    }
    return 0;
}

void CSwoop::ManageNullKeyset(void)            // 0x124490 [OK] solta da lista de teclas anuladas as que ja foram soltas
{
    for (int i = 0; i <= 5; i++) {
        if (i == 2 || i == 3)                  // esquerda/direita tratadas abaixo (bits 0x80/0x100 <-> botoes 0x200/0x400)
            continue;
        int iFlags = DirectionsToFlags(i);
        if ((iFlags & m_iNullKeyset) && !(iFlags & PL_BUTTON))
            RemoveFromNullKeyset(DirectionsToFlags(i));
    }
    if ((m_iNullKeyset & 0x80) && !(PL_BUTTON & 0x200))
        m_iNullKeyset &= ~0x80;
    if ((m_iNullKeyset & 0x100) && !(PL_BUTTON & 0x400))
        m_iNullKeyset &= ~0x100;
}

Vector CSwoop::GetCurrentDirection(void)       // 0x124390 [OK] (tabela lida do binario)
{
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    if (f_04 && (unsigned)m_iType <= 5) {
        switch (m_iType) {
        case 0: return gpGlobals->v_up;
        case 1: return -gpGlobals->v_up;
        case 2: return -gpGlobals->v_right;
        case 3: return gpGlobals->v_right;
        case 5: return -gpGlobals->v_forward;
        }
    }
    return gpGlobals->v_forward;               // tipo 4 e padrao
}
