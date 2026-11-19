// blob.cpp -- CBlob (10 funcoes). RECUPERADO de decomp_raw/CBlob.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "explodingattack.h"
#include "blob.h"

extern int gmsgBlobStart, gmsgBlobUpdate, gmsgBlobKill;

void CBlob::Spawn(void)
{
    Precache();                                    // [OK] vtable slot 1
    SET_MODEL(ENT(pev), "sprites/null.spr");
    *((int *)pev + 82) = 5;                        // [?] pev+0x148 = 5 (campo sem nome)
    pev->movetype = MOVETYPE_NONE;                 // [OK] +0x108 = 0
    pev->solid = SOLID_TRIGGER;                    // [OK] +0x10c = 1
    UTIL_SetSize(pev, Vector(-50, -50, -50), Vector(50, 50, 50));   // [OK]
}

CBlob *CBlob::CreateBlob(CBasePlayer *pPlayer, Vector vecPos)
{
    CBlob *p = GetClassPtr((CBlob *)NULL);         // [OK]
    p->Spawn();                                    // [OK] vtable slot 0
    p->pev->velocity = Vector(0, 0, 0);
    p->pev->origin = vecPos;
    p->pev->classname = MAKE_STRING("blob");       // [?] endereco 0x5a1c34 (nome adivinhado)
    p->m_iSize = 50;                               // [OK]
    p->pev->dmg = 2.0;                             // [OK] +0x1e0: "carga" inicial
    p->pev->owner = pPlayer->edict();              // [OK] +0x198
    p->SetThink(&CBlob::BlobThink);                // [OK]
    p->SetTouch(&CBlob::BlobTouch);                // [OK]
    p->pev->nextthink = gpGlobals->time;           // [OK]
    p->m_flLastGrow = gpGlobals->time;             // [OK]
    UTIL_SetOrigin(p->pev, p->pev->origin);
    p->CreateExplosion();                          // [OK]
    return p;
}

void CBlob::CreateExplosion(void)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgBlobStart);         // [OK] tipo 2
        WRITE_BYTE(1);                             // [OK] 1 = blob (o escudo manda 0)
        WRITE_COORD(pev->origin.x);
        WRITE_COORD(pev->origin.y);
        WRITE_COORD(pev->origin.z);
        WRITE_SHORT(ENTINDEX(ENT(pev)));
        WRITE_SHORT(m_iSize);
    MESSAGE_END();
}

void CBlob::UpdateExplosion(void)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgBlobUpdate);
        WRITE_SHORT(m_iSize);
        WRITE_SHORT(ENTINDEX(ENT(pev)));
    MESSAGE_END();
}

void CBlob::SizeInc(int iInc)
{
    BOOL fShrunk = FALSE;
    if (iInc < 0)
    {
        if (m_iSize <= 0)
        {
            Remove();                              // [OK] encolheu ate sumir
            return;
        }
        m_iSize += iInc;
        fShrunk = TRUE;
    }
    else if (m_iSize != 200)
        m_iSize += iInc;
    if (m_iSize > 200)
        m_iSize = 200;                             // [OK]
    if (pev->dmg > 20.0)
    {
        Remove();                                  // [OK] carga acima de 20 estoura
        return;
    }
    m_flLastGrow = gpGlobals->time;
    if (!fShrunk)
        pev->dmg += 2.0;                           // [OK]
    UpdateExplosion();
    UTIL_SetSize(pev, Vector(-m_iSize, -m_iSize, -m_iSize), Vector(m_iSize, m_iSize, m_iSize));
}

void CBlob::BlobThink(void)
{
    if (gpGlobals->time - 7.0 <= m_flLastGrow)     // [OK] ainda nao passou 7 s
    {
        RadiusDamage(pev->origin, pev, VARS(pev->owner), pev->dmg * 0.5, m_iSize, 0, 0x4000000);   // [OK] sem knockback
        pev->nextthink = gpGlobals->time + 0.25;   // [OK]
    }
    else
        Remove();
}

void CBlob::BlobTouch(CBaseEntity *pOther)
{
    if (pOther->Classify() != 1)                   // [OK] so ataques de ki
        return;
    CExplodingAttack *pAtk = (CExplodingAttack *)pOther;
    if (pAtk->m_fInStruggle || pAtk->m_fInBlockStruggle || pAtk->m_fStuck)   // [OK] +0x2ac/+0x2b0/+0x2cc
        return;
    const char *szName = STRING(pAtk->pev->classname);
    if (!strcmp(szName, "kiblast"))
        SizeInc(25);                               // [OK]
    else if (strcmp(szName, "scattershot") && strcmp(szName, "rock"))
    {
        pev->dmg += pAtk->pev->dmg / 1.5;          // [OK]
        m_iSize = (int)(m_iSize + pAtk->GetExplosionRadius() * 0.5);   // [OK] vtable +0x204
        Remove();                                  // [OK] explode com o tamanho somado
    }
    pAtk->Vaporize();                              // [OK]
}

void CBlob::Remove(void)
{
    m_iSize = (int)(m_iSize + m_iSize * 0.85);     // [OK] explosao final 85% maior
    RadiusDamage(pev->origin, pev, VARS(pev->owner), 2.5 * pev->dmg, m_iSize, 0, 0x800000);   // [OK]
    MESSAGE_BEGIN(MSG_ALL, gmsgBlobKill);
        WRITE_SHORT(ENTINDEX(ENT(pev)));
        WRITE_SHORT(m_iSize);
    MESSAGE_END();
    if (!pev->owner)
        return;                                    // [OK] o decompilado sai aqui, sem UTIL_Remove
    CBaseEntity *pOwner = CBaseEntity::Instance(pev->owner);
    char *pPlayer = (char *)pOwner;
    for (int i = 0; i < 2; i++)
    {
        *(Vector *)(pPlayer + 0x6a4 + i * 12) = Vector(0, 0, 0);   // [?] jogador +0x6a4: 2 posicoes de blob
        *(float *)(pPlayer + 0x590 + i * 4) = -1.0;                // [?] jogador +0x590: 2 tempos/ids de blob
    }
    UTIL_Remove(this);
}
