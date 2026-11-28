// modelbox.cpp -- CBaseEntity::SetModelCollisionBox (metodo do ESF, nao existe no SDK).
// Recuperado de decomp_raw/CBaseEntity/SetModelCollisionBox__11CBaseEntity.c.
// Usado por CEnvModel::Spawn. [OK] = conferido contra o decompilado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "studio.h"

void CBaseEntity::SetModelCollisionBox(void)
{
    studiohdr_t *pstudiohdr = (studiohdr_t *)GET_MODEL_PTR(ENT(pev));   // [OK] pfnGetModelPtr(pev->pContainingEntity)
    if (!pstudiohdr)
    {
        ALERT(at_console, "Unable to fetch model pointer!\n");           // [OK] nivel 1 = at_console
        return;
    }

    // [OK] hdr+0x64 = max do cabecalho do modelo; se os tres floats forem zero, usa a caixa da sequencia atual
    if (pstudiohdr->max[0] == 0.0f && pstudiohdr->max[1] == 0.0f && pstudiohdr->max[2] == 0.0f)
    {
        mstudioseqdesc_t *pseqdesc = (mstudioseqdesc_t *)((byte *)pstudiohdr + pstudiohdr->seqindex);   // [OK] hdr+0xa8
        pseqdesc += pev->sequence;                                                                      // [OK] 176 bytes por entrada, pev+0x128
        UTIL_SetSize(pev, pseqdesc->bbmin, pseqdesc->bbmax);                                            // [OK] seqdesc+96 / +108
    }
    else
    {
        UTIL_SetSize(pev, pstudiohdr->min, pstudiohdr->max);                                            // [OK] hdr+0x58 / +0x64
    }
}
