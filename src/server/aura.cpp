// aura.cpp -- CAura 7/7. RECUPERADO de decomp_raw/CAura. [OK] = conferido.
// A aura e uma entidade MOVETYPE_FOLLOW presa ao jogador (aiment), com modelo "models/aura.mdl" em kRenderTransAdd.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "animation.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "player_esf_manual.h"
#include "esf_classes.h"
#include "aura.h"
#define AP(p,type,off) (*(type *)((char *)(p) + (off)))
extern void UTIL_Model_AuraBend(int iPlayer);

void CAura::Spawn(void)
{
    Precache();                                         // [OK] slot 1
    SetTouch(NULL);                                     // [OK] +0x14/+0x18 = 0
    SET_MODEL(ENT(pev), "models/aura.mdl");
    pev->solid = SOLID_NOT;                             // [OK] +0x10c
    pev->rendermode = 5;                                // [OK] kRenderTransAdd
    pev->renderamt = 25;                                // [OK]
    pev->takedamage = DAMAGE_NO;                        // [OK] +0x16c
    pev->sequence = 0; pev->gaitsequence = 0; pev->frame = 0;   // [OK] memset(pev+0x128, 0, 12)
    ResetSequenceInfo();
}

void CAura::Precache(void)
{
    PRECACHE_MODEL("models/aura.mdl");
    PRECACHE_MODEL("models/aurabend.mdl");
    PRECACHE_MODEL("sprites/aura.spr");
    PRECACHE_SOUND("weapons/aura.wav");
    PRECACHE_SOUND("weapons/swoop.wav");
    *(short *)((char *)this + 0x2ac) = PRECACHE_MODEL("sprites/auratrail.spr");   // [OK] +0x2ac
}

void CAura::SetColor(void)
{
    pev->skin = Player()->m_pClass->GetAuraSkin();      // [OK] cada classe escolhe a skin da aura
    pev->rendercolor = Vector(5, 5, 5);                 // [OK] +0x150..0x158
}

CAura *CAura::Create(CBasePlayer *pPlayer)
{
    CAura *p = GetClassPtr((CAura *)NULL);
    p->Spawn();                                         // [OK] vtable slot 0
    UTIL_SetOrigin(p->pev, pPlayer->pev->origin);
    AP(p, CBasePlayer *, 0x2a8) = pPlayer;
    p->pev->owner = pPlayer->pev->pContainingEntity;    // [OK] +0x198
    p->SetThink(&CAura::RemoveThink);                   // [OK]
    p->pev->nextthink = gpGlobals->time + 0.5;
    p->pev->aiment = pPlayer->pev->pContainingEntity;   // [OK] +0x194
    p->pev->movetype = MOVETYPE_FOLLOW;                 // [OK] 12 (+0x108)
    p->SetColor();
    p->pev->renderfx = 19;                              // [OK] kRenderFxNoDissipation
    pPlayer->pev->rendermode = 2;                       // [OK] o jogador fica em kRenderTransAlpha ...
    pPlayer->pev->renderamt = 255;                      //      ... totalmente opaco, para a aura somar por cima
    EMIT_SOUND_DYN(ENT(pPlayer->pev), CHAN_BODY, AP(pPlayer, int, 0x508) ? "weapons/swoop.wav" : "weapons/aura.wav", 1.0, 0.8, 0, 100);   // [OK] +0x508 = swoop
    UTIL_Model_AuraBend(ENTINDEX(p->pev->owner));       // [OK]
    return p;
}

void CAura::Destroy(void)
{
    EMIT_SOUND_DYN(ENT(Player()->pev), CHAN_BODY, "common/null.wav", 1.0, 0.8, 0, 100);   // corta o som da aura
    UTIL_Model_RemoveAll(ENTINDEX(pev->pContainingEntity));
    UTIL_Remove(this);
    if (!Player()->f_350)                               // [OK] +0x350
        Player()->pev->rendermode = 0;                  // [OK] volta ao normal
}

void CAura::RemoveThink(void)
{
    CBaseEntity *pOwner = pev->owner ? CBaseEntity::Instance(pev->owner) : NULL;
    if (!pOwner)
        Destroy();
    else if (!AP(pOwner, int, 0x10c))                   // [?] dono morto/desconectado
        Destroy();
    if (AP(Player(), int, 0x320))                       // [?] flag: aura acompanha a mira do jogador
        pev->angles = Player()->pev->v_angle;           // [OK] +0x50 <- +0x74
    pev->nextthink = gpGlobals->time + 0.5;             // [OK]
}

int CAura::TakeDamage(entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType)
{
    return Player()->TakeDamage(pevInflictor, pevAttacker, flDamage, bitsDamageType);   // [OK] repassa o dano ao jogador
}
