// dragonball.cpp -- CDragonBall 11/11. RECUPERADO de decomp_raw/CDragonBall. [OK] = conferido no binario.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "player_esf_manual.h"
#include "dragonball.h"

#define PF(p, type, off) (*(type *)((char *)(p) + (off)))   // campo ESF do jogador por offset

void CDragonBall::Spawn(void)
{
    Precache();                                   // [OK] vtable slot 1
    pev->movetype = MOVETYPE_BOUNCE;              // [OK] +0x108 = 10
    pev->solid = SOLID_TRIGGER;                   // [OK] +0x10c = 1
    pev->classname = MAKE_STRING("dragonball");   // [OK] string em 0x59000c
}

void CDragonBall::Precache(void)
{
    PRECACHE_MODEL("models/db1.mdl");
    PRECACHE_MODEL("models/db2.mdl");
    PRECACHE_MODEL("models/db3.mdl");
    PRECACHE_MODEL("models/db4.mdl");
    PRECACHE_MODEL("models/db5.mdl");
    PRECACHE_MODEL("models/db6.mdl");
    PRECACHE_MODEL("models/db7.mdl");
    m_iTrailSprite = PRECACHE_MODEL("sprites/dragonballtrail.spr");
    PRECACHE_SOUND("weapons/db_glowing.wav");
    PRECACHE_SOUND("weapons/db_flying.wav");
}

CDragonBall *CDragonBall::CreateDragonBall(Vector vecOrigin, int nr)
{
    if (nr < 1 || nr > 7)                         // [OK] (unsigned)(nr-1) > 6
    {
        ALERT(at_error, "Attempting to create Dragonball with invalid nr\n");
        return NULL;
    }
    CDragonBall *pBall = GetClassPtr((CDragonBall *)NULL);
    pBall->Spawn();
    char szModel[64];
    sprintf(szModel, "models/db%d.mdl", nr);
    SET_MODEL(ENT(pBall->pev), szModel);
    UTIL_SetSize(pBall->pev, Vector(-1, -1, 0), Vector(1, 1, 2));   // [OK]
    pBall->pev->owner = NULL;
    UTIL_SetOrigin(pBall->pev, vecOrigin);
    pBall->SetTouch(&CDragonBall::PickupTouch);
    pBall->m_iNumber = nr;
    if (!DROP_TO_FLOOR(ENT(pBall->pev)))
    {
        ALERT(at_console, "Item %s fell out of level at %f,%f,%f", STRING(pBall->pev->classname),
              pBall->pev->origin.x, pBall->pev->origin.y, pBall->pev->origin.z);
        UTIL_Remove(pBall);
        return NULL;
    }
    return pBall;
}

CDragonBall *CDragonBall::ThrowDragonBall(entvars_t *pevOwner, Vector vecOrigin, Vector vecVelocity, int nr)
{
    if (nr < 1 || nr > 7)
    {
        ALERT(at_error, "Attempting to create Dragonball with invalid nr\n");
        return NULL;
    }
    CDragonBall *pBall = GetClassPtr((CDragonBall *)NULL);
    pBall->Spawn();
    char szModel[64];
    sprintf(szModel, "models/db%d.mdl", nr);
    SET_MODEL(ENT(pBall->pev), szModel);
    UTIL_SetSize(pBall->pev, Vector(-1, -1, 0), Vector(1, 1, 2));
    pBall->pev->owner = ENT(pevOwner);
    UTIL_SetOrigin(pBall->pev, vecOrigin);
    pBall->pev->velocity = vecVelocity;
    pBall->m_iNumber = nr;
    pBall->m_flDropTime = gpGlobals->time;
    pBall->SetTouch(&CDragonBall::PickupTouch);
    g_pGameRules->DragonBallDrop(nr, pBall);      // [OK] gamerules vtable +0xf8
    return pBall;
}

void CDragonBall::PickupTouch(CBaseEntity *pOther)
{
    if (m_fStone)                                 // [OK]
        return;
    if (m_flDropTime + 0.5 < gpGlobals->time)     // [OK] depois de 0.5 s o dono antigo pode pegar de volta
        pev->owner = NULL;

    CBaseEntity *pMyOwner = pev->owner ? CBaseEntity::Instance(pev->owner) : NULL;
    CBaseEntity *pOtherOwner = pOther->pev->owner ? CBaseEntity::Instance(pOther->pev->owner) : NULL;
    if (pMyOwner == pOther)                       // [OK] quem arremessou nao pega na hora
        return;
    if (pOtherOwner == pMyOwner && pMyOwner)      // [OK]
        return;

    if (pOther->IsPlayer())
    {
        // [OK] o jogador so pega se nao estiver em nenhum estado especial: +0x364 candy, +0x760 ja carrega esfera,
        // +0x334/+0x33c/+0x330/+0x32c/+0x770 flags de estado (nomes [?]) e estiver vivo (IsAlive)
        if (!PF(pOther, int, 0x364) && !PF(pOther, int, 0x760) && !PF(pOther, int, 0x334) &&
            !PF(pOther, int, 0x33c) && !PF(pOther, int, 0x330) && !PF(pOther, int, 0x32c) &&
            !PF(pOther, int, 0x770) && pOther->IsAlive())
        {
            EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "common/null.wav", 1.0, 0.8, 0, 100);
            UTIL_Remove(this);
            PF(pOther, int, 0x760) = m_iNumber;                  // [OK] numero da esfera carregada
            PF(pOther, float, 0x6c0) = 1.0 + gpGlobals->time;    // [OK]
            ((CBasePlayer *)pOther)->GiveNamedItem("weapon_dragonball");
            ((CBasePlayer *)pOther)->SelectItem("weapon_dragonball");
            g_pGameRules->DragonBallPickUp(m_iNumber, ENTINDEX(pOther->pev->pContainingEntity));   // [OK] vtable +0xf4
            return;
        }
    }
    if (FStrEq(STRING(pOther->pev->classname), "dragonball"))   // [OK] esfera contra esfera: nada
        return;
    pev->velocity = pev->velocity * 0.5f;         // [OK] bate em outra coisa: perde metade da velocidade
}

void CDragonBall::Glow(void)
{
    pev->renderfx = 19;                           // [OK] kRenderFxGlowShell
    pev->rendercolor = Vector(255, 255, 0);       // [OK]
    if (m_iNumber == 1)
        EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "weapons/db_glowing.wav", 1.0, 0.8, 0, 100);
}

void CDragonBall::UnGlow(void)
{
    pev->renderfx = 0;
    EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "common/null.wav", 1.0, 0.8, 0, 100);   // [OK] corta o som do brilho
}

void CDragonBall::Spread(void)
{
    UnGlow();
    pev->skin = 1;                                // [OK] +0x110 = 1 (skin de pedra)
    EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "weapons/db_flying.wav", 1.0, 0.8, 0, 100);
    pev->movetype = MOVETYPE_TOSS;                // [OK] +0x108 = 6
    pev->velocity = Vector(0, 0, 1000);           // [OK] sobe antes de se espalhar
    m_flSpreadLtime = pev->ltime;                 // [OK]
    SetThink(&CDragonBall::SpreadThink);
    pev->nextthink = gpGlobals->time + 0.2;
}

void CDragonBall::SpreadThink(void)
{
    if (pev->ltime >= m_flSpreadLtime)            // [?] sentido da comparacao vem do x87; so repete o think
    {
        m_flSpreadLtime = pev->ltime;
        pev->nextthink = gpGlobals->time + 0.2;
        return;
    }
    pev->movetype = MOVETYPE_NOCLIP;              // [OK] +0x108 = 8
    pev->solid = SOLID_NOT;
    Vector vecDir(RANDOM_FLOAT(-1, 1), RANDOM_FLOAT(-1, 1), 0);
    pev->velocity = vecDir.Normalize() * 1500;    // [OK] direcao aleatoria horizontal, 1500 u/s
    MESSAGE_BEGIN(MSG_BROADCAST, SVC_TEMPENTITY);
        WRITE_BYTE(TE_BEAMFOLLOW);                // [OK] 22
        WRITE_SHORT(ENTINDEX(edict()));
        WRITE_SHORT(m_iTrailSprite);
        WRITE_BYTE(50);                           // vida
        WRITE_BYTE(5);                            // largura
        WRITE_BYTE(200); WRITE_BYTE(200); WRITE_BYTE(200);
        WRITE_BYTE(254);                          // brilho
    MESSAGE_END();
    SetThink(&CBaseEntity::SUB_Remove);
    pev->nextthink = gpGlobals->time + 30.0;      // [OK]
}

void CDragonBall::Stonify(void)
{
    pev->skin = 1;                                // [OK]
    SetThink(&CDragonBall::UnStoneThink);
    SetTouch(NULL);
    pev->nextthink = gpGlobals->time + dbrespawntime.value + 12;   // [OK]
}

void CDragonBall::UnStoneThink(void)
{
    pev->skin = 0;                                // [OK]
    SetTouch(&CDragonBall::PickupTouch);
    SetThink(NULL);
    pev->nextthink = 0;                           // [OK] +0x10c... zera think
}
