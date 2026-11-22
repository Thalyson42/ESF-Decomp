// candy.cpp -- doces do Buu (CCandy/CCookie/CChocolate/CDonut), feijao Sensu (CBean/CSensuBean), CCandyAttack e metodos
// de CBasePlayer relacionados (GiveBean/TakeBean/WaitToBecomeCandy/MakeCandy/BecomeCandy/ReleaseCandy).
// RECUPERADO de decomp_raw. [OK] = conferido; [?] = adivinhado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "esf_classes.h"
#include "candy.h"

extern int gmsgSensuBean, gmsgVGUIMenu;

// ---------------------------------------------------------------- CCandy
void CCandy::Spawn(void)
{
    Precache();                                                  // [OK] vtable slot 1
    pev->movetype = MOVETYPE_TOSS;                               // [OK] +0x108 = 5
    pev->solid = SOLID_TRIGGER;                                  // [OK] +0x10c = 1
    pev->classname = MAKE_STRING("candy");                       // [OK] string em 0x19a459
}

void CCandy::Precache(void)
{
    PRECACHE_MODEL("models/chocolate.mdl");
    PRECACHE_MODEL("models/cookie.mdl");
    PRECACHE_MODEL("models/donut.mdl");
    PRECACHE_SOUND("buu/candyeat.wav");
    PRECACHE_SOUND("fatbuu/candyeat.wav");
}

// So o Buu (Classify() == 1) pode comer o doce; o dono do doce nao o pega.
void CCandy::Touch(CBaseEntity *pOther)
{
    entvars_t *pevOwner = pev->owner ? VARS(pev->owner) : NULL;
    if (pevOwner == pOther->pev)
        return;
    if (!pOther->IsPlayer())
        return;
    CBasePlayer *pPlayer = (CBasePlayer *)pOther;
    if (pPlayer->m_pClass->Classify() != 1)
        return;
    GetStuff(pPlayer);                                           // [OK] vtable slot 56
    pPlayer->EmitClassSound("candyeat.wav");
    UTIL_Remove(this);
}

void CCandy::GetStuff(CBasePlayer *pPlayer) {}                   // [OK] corpo vazio

static void SetupCandy(CCandy *pCandy, Vector vecOrigin, entvars_t *pevOwner, const char *szModel)
{
    pCandy->Spawn();                                             // [OK] vtable slot 0
    pCandy->pev->owner = ENT(pevOwner);                          // [OK] +0x198
    SET_MODEL(ENT(pCandy->pev), szModel);
    UTIL_SetSize(pCandy->pev, Vector(-5, -5, 0), Vector(5, 5, 5));   // [OK]
    UTIL_SetOrigin(pCandy->pev, vecOrigin);
}

CCookie *CCookie::CreateCookie(Vector vecOrigin, entvars_t *pevOwner)
{
    CCookie *p = GetClassPtr((CCookie *)NULL);
    SetupCandy(p, vecOrigin, pevOwner, "models/cookie.mdl");
    return p;
}
void CCookie::GetStuff(CBasePlayer *pPlayer)
{
    pPlayer->pev->health = (float)pPlayer->f_24c;                // [OK] vida cheia (campo do jogador +0x24c = vida maxima)
}

CChocolate *CChocolate::CreateChocolate(Vector vecOrigin, entvars_t *pevOwner)
{
    CChocolate *p = GetClassPtr((CChocolate *)NULL);
    SetupCandy(p, vecOrigin, pevOwner, "models/chocolate.mdl");
    return p;
}
void CChocolate::GetStuff(CBasePlayer *pPlayer)
{
    pPlayer->pev->health = (float)(pPlayer->pev->health + 40.0);   // [OK] +40 de vida (limitado ao maximo) e +50000 de PL
    if ((double)pPlayer->f_24c < pPlayer->pev->health)
        pPlayer->pev->health = (float)pPlayer->f_24c;
    pPlayer->IncreasePL(50000);
}

CDonut *CDonut::CreateDonut(Vector vecOrigin, entvars_t *pevOwner)
{
    CDonut *p = GetClassPtr((CDonut *)NULL);
    SetupCandy(p, vecOrigin, pevOwner, "models/donut.mdl");
    return p;
}
void CDonut::GetStuff(CBasePlayer *pPlayer)
{
    pPlayer->IncreasePL(100000);                                 // [OK]
}

// ---------------------------------------------------------------- CBean
void CBean::Spawn(void)
{
    Precache();                                                  // [OK] vtable slot 1
    SET_MODEL(ENT(pev), "models/w_sensubean.mdl");
    UTIL_SetSize(pev, Vector(-8, -8, -8), Vector(8, 8, 8));      // [OK]
    pev->movetype = MOVETYPE_BOUNCE;                             // [OK] +0x108 = 10
    pev->solid = SOLID_TRIGGER;                                  // [OK] +0x10c = 1
}

void CBean::Precache(void)
{
    PRECACHE_MODEL("models/w_sensubean.mdl");
    PRECACHE_SOUND("weapons/sensu.wav");
}

void CBean::Touch(CBaseEntity *pOther)
{
    if (pOther->pev->pContainingEntity == pev->owner)            // [OK] o dono nao pega de volta logo apos arremessar
        return;
    if (pOther->IsPlayer() && ((CBasePlayer *)pOther)->GiveBean(1))
        UTIL_Remove(this);
    pev->owner = NULL;                                           // [OK] roda mesmo apos Remove (como no binario)
    pev->velocity = pev->velocity * 0.5;
}

CBean *CBean::ThrowBean(entvars_t *pevOwner, Vector vecStart, Vector vecVelocity)
{
    CBean *p = GetClassPtr((CBean *)NULL);
    p->Spawn();                                                  // [OK] vtable slot 0
    p->pev->owner = pevOwner->pContainingEntity;                 // [OK]
    UTIL_SetOrigin(p->pev, vecStart);
    p->pev->velocity = vecVelocity;
    p->pev->gravity = 0.5;                                       // [OK] +0x11c
    return p;
}

// ---------------------------------------------------------------- CSensuBean (arma)
void CSensuBean::Spawn(void)
{
    Precache();
    m_iId = 25;                                                  // [OK] +0x88
    m_iDefaultAmmo = 0;                                          // [OK] +0xc0
    m_iClip = -1;                                                // [OK] +0xb0
    FallInit();
}

void CSensuBean::Precache(void)
{
    UTIL_PrecacheOther("bean");
}

int CSensuBean::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2 = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip = -1;
    p->iSlot = 8;
    p->iPosition = 0;
    m_iId = p->iId = 25;
    p->iWeight = -1;
    p->iFlags = 0;
    return 1;
}

BOOL CSensuBean::Deploy(void)
{
    m_fPrimaryDone = 0;
    m_fSecondaryDone = 0;
    return DefaultDeploy("bean", "", 0, "");                     // [?] so o 1o argumento aparece
}

void CSensuBean::WeaponIdle(void)
{
    m_fPrimaryDone = 0;
    m_fSecondaryDone = 0;
}

// primario: come um feijao (restaura vida e ki)
void CSensuBean::PrimaryAttack(void)
{
    if (m_fPrimaryDone)
        return;
    if (m_pPlayer->TakeBean())
    {
        m_pPlayer->SetAnimation(PLAYER_ATTACK1);
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/sensu.wav", 1.0, 0.8, 0, 100);
    }
    m_fPrimaryDone = 1;
}

// secundario: arremessa um feijao
void CSensuBean::SecondaryAttack(void)
{
    if (m_fSecondaryDone)
        return;
    m_fSecondaryDone = 1;
    if (m_pPlayer->m_iSensuBeans <= 0)
        return;
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector vecVel = gpGlobals->v_forward * 500;
    m_pPlayer->SetAnimation((PLAYER_ANIM)6);                     // [?] animacao ESF de arremesso
    Vector vecGun = m_pPlayer->GetGunPosition();                 // [OK] vtable +0x1e0
    CBean::ThrowBean(m_pPlayer->pev, vecGun, vecVel);
    m_pPlayer->m_iSensuBeans--;
    MESSAGE_BEGIN(MSG_ONE, gmsgSensuBean, NULL, m_pPlayer->pev->pContainingEntity);
        WRITE_BYTE(m_pPlayer->m_iSensuBeans);
    MESSAGE_END();
}

// ---------------------------------------------------------------- CCandyAttack (arma)
void CCandyAttack::Spawn(void)
{
    Precache();
    m_iId = 20;
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    FallInit();
}

void CCandyAttack::Precache(void)
{
    PRECACHE_MODEL("sprites/candystart.spr");
    PRECACHE_MODEL("sprites/candytrail.spr");
    PRECACHE_SOUND("weapons/candyattack.wav");
}

int CCandyAttack::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2 = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip = -1;
    p->iSlot = 4;
    p->iPosition = 5;
    m_iId = p->iId = 20;
    p->iWeight = -1;
    p->iFlags = 0;
    return 1;
}

BOOL CCandyAttack::Deploy(void)
{
    m_pBeam = CBeam::BeamCreate("sprites/candytrail.spr", 10);   // [OK] largura 10
    m_pBeam->pev->rendermode = 5;
    m_pBeam->pev->renderamt = 255;
    m_pBeam->SetEndEntity(ENTINDEX(m_pPlayer->edict()));
    m_pBeam->SetEndAttachment(2);                                // [OK] skin |= 2 << 12
    m_pBeam->pev->origin = m_pPlayer->pev->origin;               // [OK]
    m_pBeam->pev->rendermode = (m_pBeam->pev->rendermode & 0xF0) | 1;   // [OK] BEAM_ENTPOINT
    m_pBeam->RelinkBeam();
    m_pBeam->pev->scale = 10;                                    // [OK] +0x134
    m_pBeam->pev->effects |= EF_NODRAW;                          // [OK] 128
    m_pSprite = CSprite::SpriteCreate("sprites/candystart.spr", m_pPlayer->pev->origin, TRUE);
    edict_t *pEnt = m_pPlayer->pev->pContainingEntity;
    if (pEnt)
    {
        m_pSprite->pev->skin = ENTINDEX(pEnt);                   // [OK] +0x110
        m_pSprite->pev->body = 2;                                // [OK] +0x114
        m_pSprite->pev->aiment = pEnt;                           // [OK] +0x194
        m_pSprite->pev->movetype = MOVETYPE_FOLLOW;              // [OK] 12
    }
    m_pSprite->pev->rendermode = 5;
    m_pSprite->pev->rendercolor.x = 255;
    m_pSprite->pev->rendercolor.y = 255;
    m_pSprite->pev->rendercolor.z = 255;
    m_pSprite->pev->renderamt = 254;
    m_pSprite->pev->renderfx = 19;
    m_pSprite->pev->framerate = 10.0;                            // [OK] +0x138
    m_pSprite->pev->scale = 0.2;                                 // [OK] +0x144
    m_pSprite->TurnOff();
    m_fSoundPlayed = 0;
    return DefaultDeploy("candyattack", "", 0, "");              // [?] so o 1o argumento aparece
}

void CCandyAttack::Holster(int skiplocal)
{
    UTIL_Remove(m_pBeam);
    UTIL_Remove(m_pSprite);
    if (m_fSoundPlayed)
    {
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "common/null.wav", 1.0, 0.8, 0, 100);   // [OK] corta o som em loop
        m_fSoundPlayed = 0;
    }
}

void CCandyAttack::WeaponIdle(void)
{
    m_pSprite->TurnOff();
    m_pBeam->pev->effects |= EF_NODRAW;
    if (m_fSoundPlayed)
    {
        m_fSoundPlayed = 0;
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "common/null.wav", 1.0, 0.8, 0, 100);
    }
}

// raio: gasta 15 de ki, tira vida do alvo na linha de 500 unidades; alvos defendendo/em struggle sofrem menos
void CCandyAttack::PrimaryAttack(void)
{
    if (!m_pPlayer->UseKi(15))
    {
        m_pSprite->TurnOff();
        m_pBeam->pev->effects |= EF_NODRAW;
        return;
    }
    if (!m_fSoundPlayed)
    {
        m_fSoundPlayed = 1;
        EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/candyattack.wav", 1.0, 0.8, 0, 100);
    }
    m_pPlayer->SetAnimation(PLAYER_ATTACK1);
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector vecDir = gpGlobals->v_forward;
    Vector vecStart = m_pPlayer->GetGunPosition();               // [OK] vtable +0x1e0
    Vector vecEnd = vecStart + vecDir * 500;
    TraceResult tr;
    UTIL_TraceLine(vecStart, vecEnd, dont_ignore_monsters, ENT(m_pPlayer->pev), &tr);
    edict_t *pHit = tr.pHit ? tr.pHit : INDEXENT(0);
    CBaseEntity *pTarget = pHit ? CBaseEntity::Instance(pHit) : NULL;
    float flMult = 1.0f;
    if (pTarget && pTarget->IsPlayer() && ((CBasePlayer *)pTarget)->f_3e4)
    {
        int s = ((CBasePlayer *)pTarget)->f_3e4;
        flMult = (s == 3 || s == 4 || s == 5) ? 0.5f : 0.25f;    // [?] estados de defesa/struggle
    }
    if (pTarget)
        pTarget->TakeDamage(m_pPlayer->pev, m_pPlayer->pev, GetPowerRatio() * 6.0 * flMult, 0x100000);   // [OK] vtable[11]
    m_pSprite->TurnOn();
    m_pBeam->pev->effects &= ~EF_NODRAW;                         // [OK] &= 127
    m_pBeam->pev->origin = tr.vecEndPos;
    m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.2;
}

void CCandyAttack::SecondaryAttack(void)
{
    WeaponIdle();                                                // [OK] vtable slot 80
}

// ---------------------------------------------------------------- CBasePlayer: feijoes e doces
BOOL CBasePlayer::GiveBean(int iAmount)
{
    if (m_iSensuBeans > 4)
        return 0;
    m_iSensuBeans += iAmount;
    if (m_iSensuBeans > 5)
        m_iSensuBeans = 5;                                       // [OK] maximo 5
    MESSAGE_BEGIN(MSG_ONE, gmsgSensuBean, NULL, pev->pContainingEntity);
        WRITE_BYTE(m_iSensuBeans);
    MESSAGE_END();
    return 1;
}

BOOL CBasePlayer::TakeBean(void)
{
    if (m_iSensuBeans > 0)
    {
        m_iSensuBeans--;
        MESSAGE_BEGIN(MSG_ONE, gmsgSensuBean, NULL, pev->pContainingEntity);
            WRITE_BYTE(m_iSensuBeans);
        MESSAGE_END();
        pev->fuser4 = 1000.0f;                                   // [OK] +0x260 = ki cheio
        SetPowerLevel(m_iMaxPowerLevel);                         // [OK] +0x748
        pev->health = (float)f_24c;                              // [OK] vida cheia
        return 1;
    }
    return 0;
}

// this = vitima: espera o Buu escolher o doce (menu VGUI 32)
void CBasePlayer::WaitToBecomeCandy(CBasePlayer *pBuu)
{
    if (pBuu->m_pCandyTarget)
        return;
    if (!m_fWaitingCandy)
    {
        MESSAGE_BEGIN(MSG_ONE, gmsgVGUIMenu, NULL, pBuu->pev->pContainingEntity);
            WRITE_BYTE(32);
        MESSAGE_END();
        pBuu->m_pCandyTarget = this;
        pBuu->m_flCandyTime = gpGlobals->time;
        pev->flags |= 16;                                        // [?] +0x1a5 |= 16 (preso/congelado)
        m_fWaitingCandy = 1;
    }
}

int CBasePlayer::MakeCandy(const char *szName)
{
    if (!m_pCandyTarget)
        return 0;
    if (!m_pCandyTarget->m_fWaitingCandy)
    {
        m_pCandyTarget = NULL;
        return 0;
    }
    int iRet = m_pCandyTarget->BecomeCandy(szName, this);
    if (!iRet)
        return iRet;
    m_pCandyTarget = NULL;
    return iRet;
}

void CBasePlayer::ReleaseCandy(void)
{
    pev->flags &= ~16;                                           // [OK]
    m_fWaitingCandy = 0;
}

// this = vitima transformada em doce por pBuu: "cookie", "chocolate" ou "donut"
int CBasePlayer::BecomeCandy(const char *szName, CBaseEntity *pBuu)
{
    Vector vecPos = GetGunPosition();                            // [?] vtable +0x1e0 (posicao onde o doce aparece)
    if (!strcmp(szName, "cookie"))
        CCookie::CreateCookie(vecPos, pev);
    else if (!strcmp(szName, "chocolate"))
        CChocolate::CreateChocolate(vecPos, pev);
    else if (!strcmp(szName, "donut"))
        CDonut::CreateDonut(vecPos, pev);
    else
        return 0;
    EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "weapons/candypop.wav", 1.0, 0.8, 0, 100);
    pev->effects |= EF_NODRAW;                                   // [OK] +0x118 |= 128
    TakeDamage(pBuu->pev, pBuu->pev, 900.0f, 0x1000);            // [OK] vtable[11]: mata a vitima
    pev->flags &= ~16;
    m_fWaitingCandy = 0;
    return 1;
}
