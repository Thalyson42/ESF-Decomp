// magicattack.cpp -- CMagicAttack (10/10), CBeamAttack (2), CGuidedAttack (5/5). RECUPERADO À MÃO.
// Fonte: decomp_raw/CMagicAttack, CBeamAttack, CGuidedAttack. [OK] conferido; [?] incerto.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "explodingattack.h"
#include "player.h"
#include "magicattack.h"

void CMagicAttack::Precache(void) { }                         // [OK] 7 bytes: ret

void CMagicAttack::Spawn(void)
{
    Precache();                                               // [OK] slot 1
    pev->gravity    = 0.000001f;                              // [OK] 9.99999997e-07: quase sem gravidade (+0x11c)
    pev->globalname = MAKE_STRING("wav");                     // [?] string_t constante (+4); o endereço aponta para "wav"
    pev->rendermode = kRenderTransAdd;                        // [OK] 5 (+0x148)
    pev->renderamt  = 254;                                    // [OK] (+0x14c)
    pev->effects   |= EF_DIMLIGHT;                            // [OK] bit 4 (+0x118)
}

void CMagicAttack::SetDamage(int iDamage)
{
    if (iDamage > 9999) iDamage = 9999;                       // [OK] teto
    pev->dmg = (float)iDamage;                                // [OK] +0x1e0
}

void CMagicAttack::Remove(void)
{
    EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "common/null.wav", 1.0, 0.8, 0, 100);   // [OK] cala o canal 1
    UTIL_Remove(this);
}

// Animação do sprite: avança o frame e volta a 0 ao passar do último
void CMagicAttack::AnimateSprite(void)
{
    int frames = MODEL_FRAMES(pev->modelindex) - 1;           // [OK] +0xb4
    if (frames > 0)
    {
        pev->frame += 1;                                      // [OK] +0x130
        if ((float)frames < pev->frame) pev->frame = 0;
    }
}

// Rastro de bolhas quando o ataque está debaixo d'água (waterlevel == 3)
void CMagicAttack::DrawBubbles(void)
{
    if (pev->waterlevel == 3)                                 // [OK] +0x1c0
    {
        Vector vecStart = pev->origin - pev->velocity * 0.1f; // [OK]
        UTIL_BubbleTrail(vecStart, pev->origin, 4);
    }
}

void CMagicAttack::NormalThink(void)
{
    if (IsInWorld())                                          // [OK] slot 37
    {
        DrawBubbles();
        AnimateSprite();
        pev->nextthink = gpGlobals->time + 0.4f;              // [OK]
    }
    else
        Remove();                                             // [OK] slot 125
}

// O jogador bloqueia o ataque se estiver em guarda (+0x32c) e virado (±45°) para ele
BOOL CMagicAttack::BlocksAttack(CBasePlayer *pPlayer)
{
    if (!pPlayer->m_fBlocking) return FALSE;                  // [OK]
    int playerYaw = ((int)pPlayer->pev->v_angle.y + 360) % 360;   // [OK] pev+0x78
    int attackYaw = ((int)pev->angles.y + 540) % 360;             // [OK] pev+0x54, +180° (de frente)
    return playerYaw < attackYaw + 45 && playerYaw > attackYaw - 45;
}

// ---------------- CBeamAttack ----------------
void CBeamAttack::Remove(void)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgKillTrail);                    // [OK] tira o rastro do cliente
        WRITE_LONG(ENTINDEX(edict()));
    MESSAGE_END();
    EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "weapons/beamhead.wav", 0, 0, SND_STOP, 100);   // [OK] flags=32: para o som
    CMagicAttack::Remove();
}

void CBeamAttack::AddEntEntTrail(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, Vector vecOffset)
{
    // [OK] envia ao cliente um "rastro entre entidades" (nomes dos parâmetros sem confirmação [?])
    MESSAGE_BEGIN(MSG_ALL, gmsgEntEntTrail);
        WRITE_LONG(a1);
        WRITE_LONG(ENTINDEX(edict()));
        WRITE_BYTE(a2);
        WRITE_SHORT(a3); WRITE_SHORT(a4); WRITE_SHORT(a5); WRITE_SHORT(a6); WRITE_SHORT(a7);
        WRITE_BYTE((int)(a8 * 0.1));
        WRITE_BYTE(a9);
        WRITE_COORD(vecOffset.x); WRITE_COORD(vecOffset.y); WRITE_COORD(vecOffset.z);
    MESSAGE_END();
}

// ---------------- CGuidedAttack ----------------
void CGuidedAttack::PowerStruggleThink(void)
{
    pev->nextthink = gpGlobals->time + 0.2f;                  // [OK] (a CExplodingAttack usa 0.5)
}

void CGuidedAttack::Release(void)
{
    CExplodingAttack::Release();                              // [OK]
    m_fReleased = 1;                                          // [OK] +0x2dc
    f_2c8 = 1;                                                // +0x2c8 [?]
}

// Quando o feixe guiado bate em algo que não é o dono: explode em jogadores/máquinas, senão "gruda"
void CGuidedAttack::StopTouch(CBaseEntity *pOther)
{
    CBaseEntity *pOwner = pev->owner ? CBaseEntity::Instance(pev->owner) : NULL;   // pvPrivateData do dono (edict+0x80)
    if (pOwner == pOther) return;                             // [OK] ignora o dono
    if (pOther->Classify() == 1 || pOther->IsPlayer())        // [OK] slots 8 e 38
    {
        ExplodeTouch(pOther);
        return;
    }
    pev->velocity = g_vecZero;                                // [OK] para
    m_fStuck = 1;                                             // [OK] +0x2cc: habilita o beam jump
    SetThink(NULL);                                           // [OK] (+0xc/+0x10 = 0)
}

// ======================================================================
// SwatAway: o jogador rebate o ataque com a guarda. iDir != 0 -> desvio aleatório para um dos lados
// (som "weapons/reflect.wav", animação 7/8); iDir == 0 -> segue reto (animação 9). vtable slot 124 (0x1f8).
// ======================================================================
void CMagicAttack::SwatAway(CBasePlayer *pPlayer, int iDir)
{
    UTIL_MakeVectors(pPlayer->pev->v_angle);                  // [OK] +0x74
    Vector vecDir;
    int iAnim;

    if (iDir)
    {
        float r = RANDOM_FLOAT(-1.0f, 1.0f);                  // [OK]
        vecDir = (gpGlobals->v_forward + gpGlobals->v_right * -r).Normalize();   // [OK] lado aleatório
        EMIT_SOUND_DYN(ENT(pPlayer->pev), CHAN_WEAPON, "weapons/reflect.wav", 1.0, 0.8, 0, 100);   // [OK]
        iAnim = (r < 0) ? 7 : 8;                              // [?] a comparação no decompile perdeu o valor de r
    }
    else
    {
        vecDir = gpGlobals->v_forward;                        // [OK]
        iAnim = 9;
    }
    pPlayer->SetAnimation(iAnim);                             // [OK]

    Vector vecGun = pPlayer->GetGunPosition();                // [?] vtable slot 120 (0x1e0), retorno por ponteiro
    vecGun = vecGun + gpGlobals->v_forward * (pev->fuser1 + 10.0f);   // [?] pev+0xe8: raio do ataque
    UTIL_SetOrigin(pev, vecGun);                              // [OK]

    pev->owner = pPlayer->pev->pContainingEntity;             // [OK] agora o dono é quem rebateu
    SetThink(&CMagicAttack::NormalThink);                     // [OK]
    pev->nextthink = gpGlobals->time + 0.5f;                  // [OK]
    pPlayer->f_784 = 1;                         // [?] player+0x784 := 1
    pev->velocity = vecDir * m_flSpeed;                       // [OK] m_flSpeed = float em +0x2a8
    pev->angles = UTIL_VecToAngles(pev->velocity);            // [OK]
}

// ======================================================================
// CGuidedAttack::ShootGuidedMagic -- cria o feixe guiado. (1182 B)
// ======================================================================
CGuidedAttack *CGuidedAttack::ShootGuidedMagic(entvars_t *pevShooter, Vector vecOrigin, Vector vecDir, int iDamage,
                                               char *szClassname, float flScale, int iExplosionType,
                                               short s1, short s2, short s3, short s4, short s5,
                                               int iRadiusMult, float flTurnRate, int iTrail1, int iTrail2)
{
    CGuidedAttack *pAttack = GetClassPtr((CGuidedAttack *)NULL);   // [OK]
    pAttack->Spawn();                                         // [OK] slot 0
    pAttack->pev->movetype = MOVETYPE_FLY;                    // [OK] 5
    pAttack->pev->solid = SOLID_TRIGGER;                      // [OK] 1
    SET_MODEL(ENT(pAttack->pev), "sprites/null.spr");         // [OK]

    if (iDamage > 9999) iDamage = 9999;                       // [OK]
    pAttack->pev->dmg = (float)iDamage;

    float flSize = 50.0f * flScale * 0.25f;                   // [OK]
    Vector vecStep = vecDir.Normalize() * flSize;
    TraceResult tr;
    UTIL_TraceLine(vecOrigin, vecOrigin + vecStep, ignore_monsters, ENT(pevShooter), &tr);
    vecOrigin = vecOrigin + vecStep * tr.flFraction;          // [OK] não nasce dentro de parede
    UTIL_SetOrigin(pAttack->pev, vecOrigin);
    UTIL_SetSize(pAttack->pev, Vector(-flSize, -flSize, -flSize), Vector(flSize, flSize, flSize));   // [OK]

    pAttack->pev->velocity = vecDir;                          // [OK] vecDir já traz a velocidade
    pAttack->m_flSpeed = vecDir.Length();                     // [OK] +0x2a8
    pAttack->pev->angles = UTIL_VecToAngles(vecDir);          // [OK]
    pAttack->pev->owner = ENT(pevShooter);                    // [OK]
    pAttack->pev->classname = MAKE_STRING(szClassname);       // [OK] a4 - pStringBase
    pAttack->m_fVaporized = 0;                                // [OK] +0x2c4
    pAttack->m_fRemoveOnVaporize = 0;                         // [OK] +0x2c8
    pAttack->m_fReleased = 0;                                 // [OK] +0x2dc
    pAttack->m_fStuck = 0;                                    // [OK] +0x2cc
    pAttack->SetTouch(&CExplodingAttack::ExplodeTouch);       // [OK]

    // trilha entre o atirador e o ataque. Ordem dos argumentos reconstruída da pilha [?]
    pAttack->AddEntEntTrail(ENTINDEX(ENT(pevShooter)), (int)(50.0f * flScale), s1, s5, s4, s3, s2, iTrail1, iTrail2, vecOrigin);
    pAttack->SetThink(&CGuidedAttack::FollowThink);           // [OK]
    pAttack->m_iRadiusMult = iRadiusMult;                     // [OK] +0x2d0
    pAttack->m_iExplosionType = iExplosionType;               // [OK] +0x2d4
    pAttack->m_flTurnRate = flTurnRate;                       // [OK] +0x2e0
    EMIT_SOUND_DYN(ENT(pAttack->pev), CHAN_WEAPON, "weapons/beamhead.wav", 1.0, 0.8, 0, 100);   // [OK]
    pAttack->pev->nextthink = gpGlobals->time;                // [OK]
    return pAttack;
}

// ======================================================================
// CGuidedAttack::FollowThink -- o feixe curva em direção ao ponto que o dono está mirando. (1240 B)
// ======================================================================
void CGuidedAttack::FollowThink(void)
{
    if (pev->owner)
    {
        CBasePlayer *pPlayer = (CBasePlayer *)CBaseEntity::Instance(pev->owner);   // [OK]
        UTIL_MakeVectors(pPlayer->pev->v_angle);
        Vector vecStart = pPlayer->pev->origin + pPlayer->pev->view_ofs;           // [OK] +0x174
        Vector vecEnd   = vecStart + gpGlobals->v_forward * 8192;                  // [OK]
        TraceResult tr;
        UTIL_TraceLine(vecStart, vecEnd, dont_ignore_monsters, pev->owner, &tr);   // [OK] arg=0
        Vector vecToAim = tr.vecEndPos - pev->origin;                               // [OK]

        if (m_flSpeed * 0.05f < vecToAim.Length())                                  // [OK] já chegou? então não corrige
        {
            Vector vecCur = pev->velocity.Normalize() * (1.0f - m_flTurnRate) * m_flSpeed;   // [OK]
            Vector vecNew = vecToAim.Normalize() * m_flSpeed * m_flTurnRate;                 // [OK]
            pev->velocity = vecCur + vecNew;
            pev->angles = UTIL_VecToAngles(pev->velocity);                          // [OK]
        }
    }
    else
        SetThink(&CMagicAttack::NormalThink);                 // [OK] dono sumiu: vira ataque comum

    DrawBubbles();                                            // [OK]
    if (IsInWorld())                                          // [OK] slot 37
        pev->nextthink = gpGlobals->time + 0.05f;             // [OK]
    else
        Vaporize();                                           // [OK]
}
