// afterimage.cpp -- CAfterImage 2/2 e CDragonBallPoint 1/1. RECUPERADO de decomp_raw. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "afterimage.h"

void CAfterImage::Spawn(void)
{
    pev->renderfx = 21;                              // [OK] +0x15c
    pev->rendermode = kRenderTransTexture;           // [OK] +0x148 = 2
    pev->renderamt = 255;                            // [OK]
    pev->classname = MAKE_STRING("afterimage");      // [OK] string em 0x1a5100
    m_flSpawnTime = gpGlobals->time;
    SetThink(&CAfterImage::FadeOutThink);
    pev->nextthink = gpGlobals->time + 0.1;
}

void CAfterImage::FadeOutThink(void)
{
    float f = (gpGlobals->time - m_flSpawnTime) / 1.5;   // [OK] some em 1.5 s
    if (f > 0.0 && f < 1.0)
    {
        pev->renderamt = (1.0 - f) * 255.0;
        pev->nextthink = gpGlobals->time + 0.06;
    }
    else
        UTIL_Remove(this);
}

void CDragonBallPoint::Spawn(void)
{
    UTIL_SetOrigin(pev, pev->origin);                // [OK]
    pev->solid = SOLID_NOT;                          // [OK] +0x10c = 0
    pev->effects = EF_NODRAW;                        // [OK] +0x118 = 128
    pev->v_angle = g_vecZero;                        // [OK] entvars +0x74
}
