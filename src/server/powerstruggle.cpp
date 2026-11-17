// powerstruggle.cpp -- CPowerStruggle (7/7) + partes da CExplodingAttack. RECUPERADO À MÃO.
// Fonte: decomp_raw/CPowerStruggle/*.c, decomp_raw/CExplodingAttack/*.c. [OK] conferido; [?] incerto.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "powerstruggle.h"
#include "explodingattack.h"

extern cvar_t multipleps;      // [OK] cvar "multipleps": permite mais de 2 feixes na mesma disputa

// Evento do director (HLTV) anunciando a disputa: MSG_SPEC, SVC_DIRECTOR (0x33)
static void PS_DirectorEvent(CExplodingAttack *a, CExplodingAttack *b)
{
    MESSAGE_BEGIN(MSG_SPEC, SVC_DIRECTOR);          // [OK] 9, 0x33
        WRITE_BYTE(9);                              // tamanho
        WRITE_BYTE(DRC_CMD_EVENT);                  // 3
        WRITE_SHORT(ENTINDEX(a->pev->owner));       // pev+0x198
        WRITE_SHORT(ENTINDEX(b->edict()));          // pev+0x208
        WRITE_LONG(6);                              // flags [?]
    MESSAGE_END();
}

CPowerStruggle *CPowerStruggle::CreatePowerStruggle(CExplodingAttack *a, CExplodingAttack *b)
{
    CPowerStruggle *ps = GetClassPtr((CPowerStruggle *)NULL);     // [OK] cria a entidade
    ps->m_pAttacks = NULL;
    ps->m_iNumAttacks = 0;
    ps->AddAttack(a);
    ps->AddAttack(b);
    ps->m_flStalemateTime = 0;
    SetThink(&CPowerStruggle::PSThink);              // [OK] (campos +0xc/+0x10)
    ps->pev->nextthink = gpGlobals->time;
    PS_DirectorEvent(a, b);                           // [OK]
    return ps;
}

void CPowerStruggle::AddAttack(CExplodingAttack *pAttack)
{
    m_iNumAttacks++;
    PSNode *n = new PSNode;                           // [OK] 8 bytes
    n->pAttack = pAttack;
    n->pNext = m_pAttacks;                            // [OK] insere na frente
    m_pAttacks = n;
    PS_DirectorEvent(pAttack, pAttack);               // [?] o decompilado usa pAttack->owner e pAttack->edict
    pAttack->m_fInStruggle = 1;                       // +0x2ac
    pAttack->m_pStruggle = this;                      // +0x2c0
    pAttack->SetThink(&CExplodingAttack::PowerStruggleThink);   // [OK]
    pAttack->pev->nextthink = gpGlobals->time;
}

BOOL CPowerStruggle::IsFull(void)
{
    return m_iNumAttacks > 1 && multipleps.value == 0;   // [OK] só 2 feixes, a menos que multipleps != 0
}

BOOL CPowerStruggle::InStruggle(entvars_t *pevAttack)
{
    for (PSNode *n = m_pAttacks; n; n = n->pNext)
        if (n->pAttack->pev == pevAttack) return TRUE;   // [OK]
    return FALSE;
}

CExplodingAttack *CPowerStruggle::GetStrongestAttack(void)
{
    CExplodingAttack *best = NULL;
    float bestRatio = -1.0f;
    for (PSNode *n = m_pAttacks; n; n = n->pNext)
        if (n->pAttack->m_flStruggleRatio > bestRatio)    // [OK] +0x2b8
        {
            bestRatio = n->pAttack->m_flStruggleRatio;
            best = n->pAttack;
        }
    return best;
}

void CPowerStruggle::Remove(void)
{
    CExplodingAttack *strongest = GetStrongestAttack();
    while (m_pAttacks)
    {
        CExplodingAttack *a = m_pAttacks->pAttack;
        if (!a->m_fVaporized)                                    // [?] flag do ataque (+0x2c4)
        {
            a->m_fInStruggle = 0;
            if (a->m_flStruggleRatio < 0)                 // [OK] perdeu a disputa
                a->pev->owner = strongest->pev->owner;    // [OK] o vencedor passa a ser o dono
            a->Explode();                                 // [OK] slot 126
        }
        PSNode *next = m_pAttacks->pNext;
        delete m_pAttacks;
        m_pAttacks = next;
    }
    CMagicAttack::Remove();                               // [OK]
}

// Física da disputa, a cada 0.2 s: soma vetorial das forças (pev->dmg) na direção de cada feixe.
void CPowerStruggle::PSThink(void)
{
    Vector sum = g_vecZero;      // soma de dmg_i * forward_i
    float  totalDmg = 0;         // soma de dmg_i  (guardado como int no original) [OK]
    float  speedSum = 0;         // soma de f_2a8 (velocidade base de cada feixe) [OK]
    int    count = 0;

    if (m_pAttacks)
    {
        for (PSNode *n = m_pAttacks; n; n = n->pNext)
        {
            CExplodingAttack *a = n->pAttack;
            UTIL_MakeAimVectors(a->pev->angles);                        // [OK] pev+0x50
            sum = sum + gpGlobals->v_forward * a->pev->dmg;             // [OK] força = pev->dmg
            totalDmg += a->pev->dmg;
            speedSum += a->m_flSpeed;                                   // +0x2a8
            count++;
        }
        float frac  = sum.Length() / totalDmg;                          // fração da força resultante
        float speed = frac * speedSum / count;                          // [OK] velocidade resultante
        Vector dir = (sum.Length() == 0) ? Vector(0, 0, 1) : sum.Normalize();
        Vector vel = dir * speed;

        for (PSNode *n = m_pAttacks; n; n = n->pNext)
        {
            CExplodingAttack *a = n->pAttack;
            a->pev->velocity = vel;                                     // [OK] pev+0x20
            UTIL_MakeAimVectors(a->pev->angles);
            Vector vdir = (vel.Length() == 0) ? Vector(0, 0, 1) : vel.Normalize();
            float r = frac;
            if (acos(DotProduct(vdir, gpGlobals->v_forward)) > M_PI / 2)  // [OK] se anda contra a própria direção
                r = -r;
            a->m_flStruggleRatio = r;                                   // [OK] +0x2b8, assinado
        }
        if (vel.Length() < 5.0f)                                        // [OK] empate
        {
            m_flStalemateTime += 0.2f;
            if (m_flStalemateTime > 5.0f)                               // [OK] 5 s de empate
            {
                Remove();      // [OK] (o decompilado chama o virtual slot 125 = Remove) encerra a disputa
                return;
            }
        }
        else
            m_flStalemateTime = 0;
    }
    pev->nextthink = gpGlobals->time + 0.2f;                            // [OK]
}

// ---- CExplodingAttack ----
void CExplodingAttack::StartPowerStruggle(CExplodingAttack *pOther)
{
    if (!pOther->m_fInStruggle)
        CPowerStruggle::CreatePowerStruggle(this, pOther);        // [OK] nenhum estava em disputa
    else if (pOther->m_pStruggle)
    {
        if (pOther->m_pStruggle->IsFull()) return;                // [OK]
        pOther->m_pStruggle->AddAttack(this);
    }
    pev->nextthink = gpGlobals->time;                             // [OK]
}


void CExplodingAttack::PowerStruggleThink(void)
{
    pev->nextthink = gpGlobals->time + 0.5f;                      // [OK] só aguarda; o CPowerStruggle manda
}

void CExplodingAttack::Release(void)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgDetachTrail);                      // [OK] tira o rastro do feixe
        WRITE_LONG(ENTINDEX(edict()));
    MESSAGE_END();
    SetThink(&CMagicAttack::NormalThink);                         // [OK]
    pev->nextthink = gpGlobals->time + 0.5f;
}
