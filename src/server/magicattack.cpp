// magicattack.cpp -- CMagicAttack (9/10), CBeamAttack (2), CGuidedAttack (3 pequenas). RECUPERADO À MÃO.
// Fonte: decomp_raw/CMagicAttack, CBeamAttack, CGuidedAttack. [OK] conferido; [?] incerto.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
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
