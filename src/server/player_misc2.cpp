// player_misc2.cpp -- Teleport, GetPotentialPL, CheckSubModelStatus, ForceCorrectModels do CBasePlayer. RECUPERADO À MÃO.
// vtable de CBaseClass: slot i em +4+4*i (ver player_class.cpp): +0x1c GetAscendedClass, +0x28 GetTransFormPowerLevel,
// +0x2c GetTransFromPLMultiplier, +0x3c GetModelName, +0x44 CanTeleportWhileCharging.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "esf_classes.h"

#define PFI(off) (*(int *)((char *)this + (off)))
#define PFF(off) (*(float *)((char *)this + (off)))
#define FL_ESF_HIDDEN 0x4000000                                   // pev+0x1a7 & 4
void UTIL_SetPlayerModel(CBasePlayer *pPlayer, const char *szModel);

// Teletransporte curto (150 de ki): 400 unidades na direção da velocidade (ou para cima se parado).
void CBasePlayer::Teleport(void)
{
    if (pev->flags & FL_ESF_HIDDEN) return;
    if (PFF(0x59c) + 0.2f > gpGlobals->time) return;              // [OK] espera 0.2 s entre teleportes
    if (PFI(0x364)) return;                                       // [?]
    if (f_328) return;                                            // observador
    if (!CanFly()) return;                                        // [?] vfunc +0x8c
    if (f_33c) return;
    if (f_334 && !m_pClass->CanTeleportWhileCharging()) return;   // [OK] vfunc +0x44
    if (PFI(0x340) || f_37c || m_fBlocking || f_6bc || f_330 || f_770) return;
    if (!UseKi(150)) return;

    EMIT_SOUND_DYN(edict(), CHAN_AUTO, "weapons/teleport.wav", 1.0f, 0.8f, 0, 100);
    AddClientAfterFX();
    Vector vecDir;
    float flLen = pev->velocity.Length();
    if (flLen == 0) vecDir = Vector(0, 0, 1);
    else            vecDir = pev->velocity * (1.0f / flLen);
    Vector vecEnd = pev->origin + vecDir * 400.0f;
    TraceResult tr;
    UTIL_TraceHull(pev->origin, vecEnd, dont_ignore_monsters, head_hull, edict(), &tr);
    UTIL_SetOrigin(pev, tr.vecEndPos);
    PFF(0x59c) = gpGlobals->time;                                 // [?] mesmo campo do cooldown
}

// PL que o jogador teria na forma mais alta (simula subir de forma até o PL deixar de passar o limite).
int CBasePlayer::GetPotentialPL(void)
{
    int iPL = m_iMaxPowerLevel;
    CBaseClass *pNext = m_pClass->GetAscendedClass();
    if (iPL > m_pClass->GetTransFormPowerLevel()) {
        if (!pNext) return iPL;
        int iLimit;
        do {
            iPL = (int)(pNext->GetTransFromPLMultiplier() * (double)iPL);
            iLimit = pNext->GetTransFormPowerLevel();
            CBaseClass *pOld = pNext;
            pNext = pNext->GetAscendedClass();
            delete pOld;
        } while (iPL > iLimit && pNext);
    }
    if (pNext) delete pNext;
    return iPL;
}

// Aplica o sub-modelo (pev->body): troca agendada (+0x598), e zera o corpo em estados especiais (+0x6a0 ligado).
void CBasePlayer::CheckSubModelStatus(void)
{
    if (PFF(0x598) != 0.0f) {
        if (!(PFF(0x598) > gpGlobals->time)) {
            PFI(0x588) = PFI(0x584);
            PFF(0x598) = 0.0f;
            PFI(0x584) = 0;
        }
    }
    if (PFI(0x6a0) && (f_330 || m_fBlocking || f_364 || f_770)) {
        pev->body = 0;
    } else if (pev->body != PFI(0x588)) {
        pev->body = PFI(0x588);
    }
}

// Modelos de forma (cell2, frieza2, ssjgoku...): se o jogador está com um deles, volta ao modelo da classe atual.
static const char *s_FormModels[18] = {
    "cell", "cell2", "evilbuu", "fatbuu", "frieza", "frieza2", "gohan", "goku", "krillin", "krillin2",
    "piccolo", "piccolo2", "ssjgohan", "ssjgoku", "ssjtrunks", "ssjvegeta", "trunks", "vegeta"
};

void CBasePlayer::ForceCorrectModels(void)
{
    char szModel[128];
    strncpy(szModel, (char *)this + 0x5a0, 128);                  // [?] nome do modelo atual
    if (!strcasecmp(szModel, "models/player.mdl")) return;
    if (!strcasecmp(szModel, "")) return;
    int bFound = 0;
    for (int i = 0; i <= 17; i++)                                 // tabela de 20 entradas, as 2 últimas vazias
        if (!strcasecmp(s_FormModels[i], szModel)) bFound = 1;
    if (!bFound || !m_pClass) return;
    char szNew[128];
    strcpy(szNew, m_pClass->GetModelName());
    UTIL_SetPlayerModel(this, szNew);
}

extern int gmsgAfterFX, gmsgTransformFX;

// Efeito de "imagem residual" no cliente na posição atual (usado pelo teleporte).
void CBasePlayer::AddClientAfterFX(void)
{
    MESSAGE_BEGIN(MSG_PVS, gmsgAfterFX, pev->origin);
        WRITE_BYTE(ENTINDEX(edict()));
        WRITE_COORD(pev->origin.x);
        WRITE_COORD(pev->origin.y);
        WRITE_COORD(pev->origin.z);
    MESSAGE_END();
}

// Efeito de transformação no cliente; flProgress = progresso (0..10) ou -1 para o efeito final (ver StartAscend).
void CBasePlayer::TransformFX(float flProgress)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgTransformFX, pev->origin);
        WRITE_BYTE(ENTINDEX(edict()));
        WRITE_COORD(flProgress);
    MESSAGE_END();
}
