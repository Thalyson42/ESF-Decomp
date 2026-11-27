// bodyslice.cpp -- CBodySlice 2/2. RECUPERADO de decomp_raw/CBodySlice (FlyOffThink: asm conferido).
#define ESF_BODYSLICE_FULL   // evita a declaracao minima de player_esf_manual.h
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "animation.h"
#include "player.h"
#include "esf_classes.h"
#include "bodyslice.h"

// Arremessa a fatia: velocidade = r1*lado + r2*frente + r3*cima, com gravidade 5 (cai rapido)
void CBodySlice::FlyOffThink(void)
{
    pev->sequence = 0;                                       // [OK] zera +0x128/+0x12c/+0x130
    pev->gaitsequence = 0;
    pev->frame = 0;
    ((CBaseAnimating *)this)->ResetSequenceInfo();     // no ESF a CGib deriva de CBaseAnimating (no SDK, de CBaseEntity)
    pev->gravity = 5.0f;

    float r1 = RANDOM_FLOAT(0, 200);
    Vector vSide = r1 * m_vecSide;
    float r2 = RANDOM_FLOAT(-200, 200);
    Vector vForward = r2 * m_vecForward;
    Vector vSum = vSide + vForward;
    float r3 = RANDOM_FLOAT(0, 100);
    Vector vUp = r3 * m_vecUp;
    pev->velocity = vSum + vUp;

    LimitVelocity();
    SetThink(&CGib::WaitTillLand);
    pev->nextthink = gpGlobals->time;
}

// Cria uma fatia por parte do corpo da classe do jogador; bFlyOff = 0: ja sai voando; 1: fica tremendo 3s antes (animacao "shake")
void CBodySlice::SpawnBodySlices(entvars_t *pevVictim, bool bFlyOff)
{
    CBaseEntity *pEnt = CBaseEntity::Instance(pevVictim->pContainingEntity);
    if (!pEnt || !pEnt->IsPlayer())                          // vfunc +0xa0
        return;
    CBasePlayer *pPlayer = (CBasePlayer *)pEnt;

    for (int i = 0; i < pPlayer->m_pClass->GetNumBodySlices(); i++)    // class vfunc +0x48
    {
        CBodySlice *pSlice = GetClassPtr((CBodySlice *)NULL);
        pSlice->CGib::Spawn(UTIL_VarArgs("models/bodyparts/%s/slice.mdl", pPlayer->m_pClass->GetModelName()));
        pSlice->pev->body = i;

        UTIL_SetOrigin(pSlice->pev, pevVictim->origin + pevVictim->view_ofs);
        UTIL_MakeVectors(pPlayer->pev->v_angle);
        if (i & 1)
            pSlice->m_vecSide = gpGlobals->v_right;
        else
            pSlice->m_vecSide = -gpGlobals->v_right;
        pSlice->m_vecForward = gpGlobals->v_forward;
        pSlice->m_vecUp = gpGlobals->v_up;

        pSlice->pev->owner = pevVictim->pContainingEntity;
        pSlice->pev->angles = pevVictim->angles;

        if (bFlyOff)
        {
            pSlice->SetThink(&CBodySlice::FlyOffThink);
            pSlice->pev->nextthink = gpGlobals->time + 3.0;
            pSlice->pev->velocity = g_vecZero;
            pSlice->pev->gravity = 1e-6f;                    // flutua enquanto treme
            int iSeq = ((CBaseAnimating *)pSlice)->LookupSequence("shake");
            if (iSeq != -1)
            {
                pSlice->pev->gaitsequence = 0;
                pSlice->pev->sequence = iSeq;
                pSlice->pev->frame = 0;
                ((CBaseAnimating *)pSlice)->ResetSequenceInfo();
            }
        }
        else
        {
            pSlice->FlyOffThink();
        }
        pSlice->m_bloodColor = CBaseEntity::Instance(pevVictim->pContainingEntity)->BloodColor();   // vfunc +0x40 [?]
    }
}
