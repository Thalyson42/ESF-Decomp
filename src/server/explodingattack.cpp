// explodingattack.cpp -- CExplodingAttack: 9 de 13 funções (as 4 grandes estão pendentes). RECUPERADO À MÃO.
// Fonte: decomp_raw/CExplodingAttack/*.c. [OK] conferido; [?] incerto.
// Pendentes: BlockStruggleThink(1326 B) DrawExplosionFX(1487 B) Explode(1641 B) [+ CMagicAttack::SwatAway 817 B]
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "explodingattack.h"
#include "powerstruggle.h"

int g_sRockGibs;

void CExplodingAttack::Precache(void)
{
    PRECACHE_SOUND("weapons/explosion.wav");                  // [OK]
    g_sRockGibs = PRECACHE_MODEL("models/rockgibs.mdl");      // [OK]
}

void CExplodingAttack::Spawn(void)
{
    Precache();                                               // [OK] slot 1
    m_fInStruggle = 0;  m_fInBlockStruggle = 0;
    m_fRemoveOnVaporize = 1;                                  // +0x2c8
    m_fVaporized = 0;
    m_fStuck = 0;
    f_2b4 = 0;
    m_pStruggle = NULL;
    CMagicAttack::Spawn();                                    // [OK]
}

float CExplodingAttack::GetExplosionRadius(void)
{
    float r = (float)m_iRadiusMult * pev->dmg;                // [OK]
    return r < 4000.0f ? r : 4000.0f;                         // [OK] teto
}

// Vaporizado por um ataque muito mais forte (razão < 0.2): some, ou é removido se m_fRemoveOnVaporize
void CExplodingAttack::Vaporize(void)
{
    if (!m_fRemoveOnVaporize)
    {
        m_fVaporized = 1;
        memset(&m_pfnThink, 0, 16);                           // [OK] zera think e touch (+0xc..+0x1b)
        pev->effects |= EF_NODRAW;                            // [OK] 128
    }
    else
        Remove();                                             // [OK] slot 125
}

void CExplodingAttack::SwatAway(CBasePlayer *pPlayer, int iDir)
{
    Release();                                                // [OK] slot 128
    CMagicAttack::SwatAway(pPlayer, iDir);                    // [OK]
}

// Regras de colisão. Ordem das verificações = ordem do decompilado.
void CExplodingAttack::ExplodeTouch(CBaseEntity *pOther)
{
    if (pOther->Classify() == 16) return;                     // [OK] classe 16 é ignorada [?] qual

    // em disputa, qualquer coisa que não seja ataque "magic_attack"/classe 15 detona o feixe
    if (m_fInStruggle && strcmp(STRING(pev->classname), "magic_attack") && pOther->Classify() != 15)
    {
        Explode();
        return;
    }

    CBaseEntity *pMyOwner    = pev->owner       ? CBaseEntity::Instance(pev->owner)       : NULL;
    CBaseEntity *pOtherOwner = pOther->pev->owner ? CBaseEntity::Instance(pOther->pev->owner) : NULL;
    if (pMyOwner == (CBaseEntity *)pOther->pev) return;       // [OK] bateu no próprio dono (comparação como no original)
    if (pOtherOwner == pMyOwner && pMyOwner) return;          // [OK] ataques do mesmo dono não colidem
    if (pOther == m_pBlocker && m_fInBlockStruggle) return;   // [OK] o jogador que está bloqueando
    if (!strcmp(STRING(pOther->pev->classname), "rock")) return;

    // ki blasts / scatter shots não colidem entre si
    if (!strcmp(STRING(pOther->pev->classname), "kiblast") || !strcmp(STRING(pOther->pev->classname), "scattershot"))
        if (!strcmp(STRING(pev->classname), "kiblast") || !strcmp(STRING(pev->classname), "scattershot"))
            return;

    if (pOther->Classify() == ESF_CLASS_KIATTACK)             // ---- outro ataque ----
    {
        CExplodingAttack *pAtk = (CExplodingAttack *)pOther;
        if (m_fInStruggle) return;
        if (m_fInBlockStruggle) return;
        if (pAtk->m_fStuck || m_fStuck) return;
        if (pAtk->pev->dmg / pev->dmg < 0.2f)                 // [OK] o outro é <20% de mim: ele vaporiza
        {
            if (!pAtk->m_fInStruggle && !pAtk->m_fInBlockStruggle)
                pAtk->Vaporize();
            return;
        }
        if (pev->dmg / pAtk->pev->dmg < 0.2f)                 // [OK] eu sou <20% dele: eu vaporizo
        {
            Vaporize();
            return;
        }
        if (strcmp(STRING(pAtk->pev->classname), "scattershot") &&
            strcmp(STRING(pev->classname), "scattershot") &&
            !pAtk->m_fInBlockStruggle)
            StartPowerStruggle(pAtk);                         // [OK] forças parecidas: disputa de feixes
        return;
    }

    // ---- não é ataque ----
    if (m_fInBlockStruggle) return;
    if (pOther->IsPlayer() && !m_fInStruggle)                 // [OK] slot 38
    {
        CBasePlayer *pPlayer = (CBasePlayer *)pOther;
        if (pPlayer->f_4c4)                                   // player+0x4c4 [?] (ver StopBeamJump)
            Vaporize();
        CBaseEntity *pOwner = pev->owner ? CBaseEntity::Instance(pev->owner) : CBaseEntity::Instance(INDEXENT(0));
        if (BlocksAttack(pPlayer) && !pPlayer->m_fBlockStruggling && pOwner && pOwner->pev->movetype != 15)
        {
            pPlayer->GetPowerLevel();                         // [OK] chamado, resultado não usado
            if (pev->dmg >= 0)
            {
                // ---- começa o "block struggle": o jogador segura o ataque com a guarda ----
                m_fInBlockStruggle = 1;                       // +0x2b0
                m_pBlocker = pPlayer;                         // +0x2bc
                pPlayer->pev->movetype = 15;                  // [OK] movetype 15 = bloqueando
                pPlayer->m_fBlockStruggling = 1;              // player+0x358
                pPlayer->f_730 = 0;
                pPlayer->m_pBlockAttack = this;               // player+0x780
                f_2d8 = 0;
                SetThink(&CExplodingAttack::BlockStruggleThink);
                pev->velocity = pev->velocity * 0.1f;         // [OK] desacelera a 10%
                pev->nextthink = gpGlobals->time + 0.1f;
                MESSAGE_BEGIN(MSG_ALL, gmsgBlockStruggle);    // [OK]
                    WRITE_SHORT(ENTINDEX(edict()));
                    WRITE_SHORT(ENTINDEX(pPlayer->edict()));
                MESSAGE_END();
                MESSAGE_BEGIN(MSG_SPEC, SVC_DIRECTOR);        // [OK] evento do director (HLTV)
                    WRITE_BYTE(9); WRITE_BYTE(DRC_CMD_EVENT);
                    WRITE_SHORT(ENTINDEX(edict()));
                    WRITE_SHORT(ENTINDEX(pPlayer->edict()));
                    WRITE_LONG(6);
                MESSAGE_END();
                return;
            }
            SwatAway(pPlayer, 1);                             // [OK] slot 124: ataque com dmg negativo é rebatido
            return;
        }
    }
    Explode();                                                // [OK] slot 126
}
