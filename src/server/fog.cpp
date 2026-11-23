// fog.cpp -- CFog 2/2. RECUPERADO de decomp_raw/CFog. [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player_esf_manual.h"

void CFog::Spawn(void)
{
    // [OK] vazio (7 bytes: ret). O cliente le os valores pela mensagem de nevoa enviada em outro lugar.
}

void CFog::KeyValue(KeyValueData *pkvd)
{
    if (FStrEq(pkvd->szKeyName, "m_iColorR"))      m_iR = atoi(pkvd->szValue);          // [OK]
    else if (FStrEq(pkvd->szKeyName, "m_iColorG")) m_iG = atoi(pkvd->szValue);
    else if (FStrEq(pkvd->szKeyName, "m_iColorB")) m_iB = atoi(pkvd->szValue);
    else if (FStrEq(pkvd->szKeyName, "m_flNear"))  m_flNear = atof(pkvd->szValue);
    else if (FStrEq(pkvd->szKeyName, "m_flFar"))   m_flFar = atof(pkvd->szValue);
    else pkvd->fHandled = FALSE;                   // [OK] so o ramo "nao reconhecido" marca fHandled (as chaves reconhecidas nao marcam)
}
