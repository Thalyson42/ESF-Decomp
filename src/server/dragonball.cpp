// dragonball.cpp -- CDragonBall 11/11. RECUPERADO de decomp_raw/CDragonBall. [OK] = conferido no binario.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "weapons.h"
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

// ===== CCariedDragonBall 10/10 =====
extern int gmsgWeaponUpdate;                            // [?] nome da msg (usada no Holster)
const char *dragonball_pmodels[7] = {                    // [OK] tabela em 0x1ba110
    "models/p_db1.mdl", "models/p_db2.mdl", "models/p_db3.mdl", "models/p_db4.mdl",
    "models/p_db5.mdl", "models/p_db6.mdl", "models/p_db7.mdl" };

void CCariedDragonBall::Spawn(void)
{
    Precache();                                         // [OK] vtable slot 1
    m_iId = 26;                                         // [OK]
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    FallInit();
}

void CCariedDragonBall::Precache(void)
{
    PRECACHE_MODEL("models/p_db1.mdl");
    PRECACHE_MODEL("models/p_db2.mdl");
    PRECACHE_MODEL("models/p_db3.mdl");
    PRECACHE_MODEL("models/p_db4.mdl");
    PRECACHE_MODEL("models/p_db5.mdl");
    PRECACHE_MODEL("models/p_db6.mdl");
    PRECACHE_MODEL("models/p_db7.mdl");
}

int CCariedDragonBall::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2 = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip = -1;
    p->iSlot = 7;                                       // [OK]
    p->iPosition = 0;
    m_iId = p->iId = 26;
    p->iFlags = 0;
    p->iWeight = 100;
    return 1;
}

BOOL CCariedDragonBall::CanDeploy(void)
{
    return (unsigned)(PF(m_pPlayer, int, 0x760) - 1) <= 6;   // [OK] so com esfera 1..7 carregada
}

BOOL CCariedDragonBall::Deploy(void)
{
    // [OK] modelo de terceira pessoa depende do numero da esfera
    m_pPlayer->pev->weaponmodel = MAKE_STRING(dragonball_pmodels[PF(m_pPlayer, int, 0x760) - 1]);
    m_flNextPrimaryAttack = m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 0.75;   // [OK] +0x9c/+0xa0
    return DefaultDeploy("dragonball", "", 0, "");
}

void CCariedDragonBall::Holster(int skiplocal)
{
    MESSAGE_BEGIN(MSG_ONE, gmsgWeaponUpdate, NULL, m_pPlayer->pev);   // [?] nome da msg
        WRITE_CHAR(-m_iId);                             // [OK] remove a arma do HUD
    MESSAGE_END();
    DropBall();                                         // [OK]
    m_pPlayer->pev->weaponmodel = 0;
    PF(m_pPlayer, int, 0x6c0) = 0;
    m_pPlayer->m_flNextAttack = UTIL_WeaponTimeBase() + 0.5;   // [OK] player+0x264
    SetThink(&CBasePlayerItem::DestroyItem);            // [OK] a arma some apos 0.1 s
    pev->nextthink = gpGlobals->time + 0.1;
}

void CCariedDragonBall::DropBall(void)
{
    if (!PF(m_pPlayer, int, 0x760))
        return;
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector vecSrc = m_pPlayer->GetGunPosition();        // [OK] vtable +0x1e0
    Vector vecVel = gpGlobals->v_forward * 200 + m_pPlayer->pev->velocity;   // [OK]
    CDragonBall::ThrowDragonBall(m_pPlayer->pev, vecSrc, vecVel, PF(m_pPlayer, int, 0x760));
    PF(m_pPlayer, int, 0x760) = 0;
}

void CCariedDragonBall::PrimaryAttack(void)
{
    if (!PF(m_pPlayer, int, 0x760))
        return;
    if (PF(m_pPlayer, float, 0x6c0) >= gpGlobals->time)   // [OK] espera 1 s apos pegar
        return;
    m_pPlayer->SetAnimation((PLAYER_ANIM)5);
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector vecVel = gpGlobals->v_forward * 1000;
    Vector vecSrc = m_pPlayer->GetGunPosition();
    CDragonBall::ThrowDragonBall(m_pPlayer->pev, vecSrc, vecVel, PF(m_pPlayer, int, 0x760));
    PF(m_pPlayer, int, 0x760) = 0;
    RetireWeapon();                                     // [?] vtable +0x14c
}

void CCariedDragonBall::SecondaryAttack(void)
{
    if (!PF(m_pPlayer, int, 0x760))
        return;
    if (PF(m_pPlayer, float, 0x6c0) >= gpGlobals->time)
        return;
    m_pPlayer->SetAnimation((PLAYER_ANIM)6);
    DropBall();
    RetireWeapon();                                     // [?]
}
