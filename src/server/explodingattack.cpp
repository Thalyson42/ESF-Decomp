// explodingattack.cpp -- CExplodingAttack: 13 de 13 funções. RECUPERADO À MÃO.
// Fonte: decomp_raw/CExplodingAttack/*.c. [OK] conferido; [?] incerto.

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

// ======================================================================
// Explode: detona o ataque -- empurra jogadores, causa dano em área, remove/esconde, desenha efeitos.
// ======================================================================
void CExplodingAttack::Explode(void)
{
    if (!pev->solid) return;                                  // [OK] já explodiu (pev+0x10c é zerado no fim)
    if (m_fInStruggle && m_pStruggle)                         // [OK] em power struggle: quem manda é a disputa
    {
        m_pStruggle->Remove();                                // [OK] slot 125 do CPowerStruggle
        return;
    }

    Vector vecCenter = pev->origin;
    if (m_fInBlockStruggle)                                   // [OK] estava sendo segurado por um jogador em guarda
    {
        CBasePlayer *pBlocker = (CBasePlayer *)m_pBlocker;
        vecCenter = pBlocker->pev->origin;                    // a explosão acontece em cima do jogador
        m_fInBlockStruggle = 0;
        pBlocker->pev->movetype = pBlocker->m_fFlying ? 14 : MOVETYPE_WALK;   // [OK] devolve o movetype (14 = voo)
        MESSAGE_BEGIN(MSG_ONE, gmsgPowerStruggle, NULL, pBlocker->pev->pContainingEntity);
            WRITE_CHAR(127);                                  // [OK] limpa o HUD
        MESSAGE_END();
        pBlocker->m_fBlockStruggling = 0;
    }

    float flRadius = GetExplosionRadius();                    // [OK] slot 127 (o decompilado perdeu o retorno x87)
    entvars_t *pevAttacker = pev->owner ? VARS(pev->owner) : NULL;

    // ---- onda de choque nos jogadores (só se o ataque for forte: dmg >= 15) ----
    CBaseEntity *pEnt = NULL;
    while ((pEnt = UTIL_FindEntityInSphere(pEnt, vecCenter, flRadius)) != NULL)
    {
        if (!pEnt->IsPlayer() || pev->dmg < 15.0f) continue;
        CBasePlayer *p = (CBasePlayer *)pEnt;
        CBaseEntity *pAttacker = CBaseEntity::Instance(pevAttacker ? pevAttacker->pContainingEntity : INDEXENT(0));
        if (g_pGameRules->FPlayerCanTakeDamage(p, pAttacker) &&     // [OK] gamerules slot 14 (o decompilado passa só 1 arg visível)
            !p->f_4c4 && p->IsAlive() &&                          // [OK] slot 33 = IsAlive
            p->f_3e4 != 4 && p->f_3e4 != 5 &&                     // player+0x3e4 [?] (estados 4/5 ficam imunes)
            !p->m_fInPowerStruggle && !p->m_fBlockStruggling && !p->m_fInBlockStruggle && !p->f_368)
        {
            float dist = (p->pev->origin - vecCenter).Length();
            int saved = p->f_33c; p->f_33c = 0;               // +0x33c [?]
            if (p->f_6c8) p->RemoveWallJump();                // [OK]
            if (flRadius * 0.5f > dist && p->m_fTurbo) p->StopSwoop();     // perto: para o swoop
            if (flRadius * 0.25f > dist && p->m_fFlying) p->StopFly();     // muito perto: derruba do voo
            p->f_33c = saved;
            float falloff = (flRadius - dist) / flRadius;     // [OK] 1 no centro, 0 na borda
            float force   = (int)(pev->dmg * 3.0f) + 300;     // [OK]
            Vector dir = (vecCenter - p->pev->origin);
            dir = (dir.Length() == 0) ? Vector(0, 0, 1) : dir.Normalize();
            p->pev->velocity = p->pev->velocity - dir * force * falloff;   // [OK] empurra para longe do centro
        }
    }

    RadiusDamage(vecCenter, pev, pevAttacker, pev->dmg, flRadius, 0, DMG_MORTAR);   // [OK] 0x800000

    if (m_fRemoveOnVaporize)
        Remove();                                             // [OK] slot 125
    else
    {
        m_fVaporized = 1;
        memset(&m_pfnThink, 0, 16);                           // [OK] think + touch
        pev->effects |= EF_NODRAW;
    }
    DrawExplosionFX((int)flRadius, vecCenter);                // [OK] slot 129
    pev->solid = SOLID_NOT;                                   // [OK] pev+0x10c = 0
}

// ======================================================================
void CExplodingAttack::DrawExplosionFX(int iRadius, Vector vecPos)
{
    Vector dir = pev->velocity;
    dir = (dir.Length() == 0) ? Vector(0, 0, 1) : dir.Normalize();      // [OK] direção do voo
    Vector vecStart = vecPos + dir * -20.0f;                  // [OK]
    Vector vecEnd   = vecStart + dir * (float)iRadius + dir * 30.0f;
    TraceResult tr;
    UTIL_TraceLine(vecStart, vecEnd, ignore_monsters, edict(), &tr);
    Vector vecHit = (tr.flFraction >= 1.0f) ? vecPos : tr.vecEndPos;    // [OK] sem superfície: explode no centro

    UTIL_ScreenShake(vecHit, 12.0f, 100.0f, 5.0f, (float)iRadius);       // [OK]

    MESSAGE_BEGIN(MSG_ALL, gmsgExplosion);                    // [OK] efeito principal no cliente
        WRITE_COORD(vecHit.x); WRITE_COORD(vecHit.y); WRITE_COORD(vecHit.z);
        WRITE_LONG(iRadius);
        WRITE_BYTE(m_iExplosionType);                         // +0x2d4
    MESSAGE_END();
    MESSAGE_BEGIN(MSG_ALL, gmsgAddEffect);                    // [OK]
        WRITE_BYTE(2);
        WRITE_SHORT(ENTINDEX(edict()));
        WRITE_COORD(vecHit.x); WRITE_COORD(vecHit.y); WRITE_COORD(vecHit.z);
        WRITE_SHORT(iRadius);
    MESSAGE_END();

    if (tr.flFraction < 1.0f)                                 // [OK] bateu numa superfície: pedras + marca
    {
        MESSAGE_BEGIN(MSG_ALL, SVC_TEMPENTITY);
            WRITE_BYTE(TE_BREAKMODEL);                        // 108
            WRITE_COORD(vecHit.x); WRITE_COORD(vecHit.y); WRITE_COORD(vecHit.z);
            WRITE_COORD(50); WRITE_COORD(50); WRITE_COORD(50);                       // tamanho
            WRITE_COORD(tr.vecPlaneNormal.x * 200); WRITE_COORD(tr.vecPlaneNormal.y * 200); WRITE_COORD(tr.vecPlaneNormal.z * 200);
            WRITE_BYTE(30);                                   // velocidade aleatória
            WRITE_SHORT(g_sRockGibs);
            WRITE_BYTE(20);                                   // quantidade
            WRITE_BYTE(50);                                   // vida (x0.1 s)
            WRITE_BYTE(0);
        MESSAGE_END();
    }
    UTIL_DecalTrace(&tr, RANDOM_FLOAT(0, 1) < 0.5f ? 11 : 12);     // [OK] duas marcas de queimado
}

// ======================================================================
// Block struggle: o jogador (m_pBlocker) segura o ataque com a guarda. A cada 0.2 s compara a "força de
// bloqueio" do jogador (player+0x730) com pev->dmg do ataque.
// ======================================================================
void CExplodingAttack::BlockStruggleThink(void)
{
    CBasePlayer *p = (CBasePlayer *)m_pBlocker;
    if (!BlocksAttack(p))                                     // [OK] o jogador desviou o olhar/abaixou a guarda
    {
        Explode();                                            // [OK] slot 126
        return;
    }

    float flBlock = (float)(int)p->f_730;                     // [OK] força de bloqueio (+0x730) [?] nome
    if (flBlock > pev->dmg)                                   // [OK] o jogador é mais forte: rebate o ataque
    {
        m_fInBlockStruggle = 0;
        p->m_fBlockStruggling = 0;
        MESSAGE_BEGIN(MSG_ONE, gmsgPowerStruggle, NULL, p->pev->pContainingEntity);
            WRITE_CHAR(127);                                  // limpa o HUD
        MESSAGE_END();
        p->pev->movetype = p->m_fFlying ? 14 : MOVETYPE_WALK;
        f_2b4 = 0;
        f_2d8 = 0;
        SwatAway(p, 0);                                       // [OK] slot 124: manda o ataque embora
        SetTouch(&CExplodingAttack::ExplodeTouch);            // [OK] volta a explodir ao tocar
        return;
    }

    int iBlock = (int)p->f_730;
    // razão assinada da disputa: >0 o atacante vence, <0 o jogador vence
    if (pev->dmg > (float)iBlock)
    {
        if (pev->dmg != 0) m_flStruggleRatio = (pev->dmg - iBlock) / pev->dmg;     // [OK]
    }
    else if (!iBlock)
        m_flStruggleRatio = 0;
    else
        m_flStruggleRatio = -((float)iBlock - pev->dmg) / (float)iBlock;           // [OK]

    UTIL_MakeAimVectors(pev->angles);
    float flSpeed = (float)p->GetMaxSpeed();                  // [OK]
    if (iBlock)
    {
        pev->velocity = gpGlobals->v_forward * flSpeed * 0.2f * pev->dmg / (float)iBlock;   // [OK] mais lento quanto mais forte o jogador
        if (pev->velocity.Length() > flSpeed)
            pev->velocity = gpGlobals->v_forward * flSpeed;                                 // [OK] limite = velocidade do jogador
    }
    else
        pev->velocity = gpGlobals->v_forward * flSpeed * 0.2f;                              // [OK]

    MESSAGE_BEGIN(MSG_ONE, gmsgPowerStruggle, NULL, p->pev->pContainingEntity);
        WRITE_CHAR((int)(-m_flStruggleRatio * 100.0f));       // [OK] sinal invertido: visão do jogador
    MESSAGE_END();
    p->pev->velocity = pev->velocity;                         // [?] o jogador é empurrado junto (campo exato do pev não confirmado)

    if (f_2b4 && m_flStruggleRatio > 0)                       // [?] f_2b4: o ataque está "machucando" o jogador
    {
        f_2d8 += m_flStruggleRatio * pev->dmg * 0.1f;         // [OK] dano acumulado
        int iDmg = (int)f_2d8;
        if (iDmg > 3)
        {
            p->TakeDamage(pev, pev->owner ? VARS(pev->owner) : NULL, (float)iDmg, DMG_MORTAR);   // [OK] vtable +0x34
            f_2d8 -= (float)iDmg;
        }
    }
    pev->nextthink = gpGlobals->time + 0.2f;                  // [OK]
}
