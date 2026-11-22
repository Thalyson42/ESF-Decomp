// animating_esf.cpp -- metodo ESF de CBaseAnimating. RECUPERADO de decomp_raw/CBaseAnimating/GetAnimTime.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "studio.h"

// Duracao (segundos) de uma sequencia: numframes / fps; 0 se a sequencia tem 1 quadro ou nao existe.
float CBaseAnimating::GetAnimTime(int iSequence)
{
    studiohdr_t *pstudiohdr = (studiohdr_t *)GET_MODEL_PTR(ENT(pev));
    if (pstudiohdr && iSequence < pstudiohdr->numseq)
    {
        mstudioseqdesc_t *pseqdesc = (mstudioseqdesc_t *)((byte *)pstudiohdr + pstudiohdr->seqindex) + iSequence;   // [OK] 176 bytes por entrada
        if (pseqdesc && pseqdesc->numframes > 1)
            return (float)((double)pseqdesc->numframes / pseqdesc->fps);
    }
    return 0.0f;
}
