// kametorpedo.cpp -- RECUPERADO de decomp_raw/CKameTorpedo (13) e CKameTorpedoAttack (4). [OK] valores do decompilado; [?] nomes.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "kametorpedo.h"

extern int gmsgFlare;

void CKameTorpedo::Spawn(void)
{
    Precache();                    // [OK] vtable slot 1
    m_iId = 32;                    // [OK] +0x88
    m_iDefaultAmmo = 0;            // +0xc0
    m_iClip = -1;                  // +0xb0
    m_iMaxCharge = 21;             // [OK] +0xc8
    m_iKiCost = 20;                // [OK] +0xd0
    f_0cc = 0;                     // [OK]
    strcpy(m_szWeaponName, "kametorpedo");   // [OK] +0xd4
    FallInit();
}

void CKameTorpedo::Precache(void)
{
    m_usSpriteA     = PRECACHE_MODEL("sprites/kamehamehaa.spr");       // [OK] +0x1ec
    m_usSpriteB     = PRECACHE_MODEL("sprites/kamehamehab.spr");       // +0x1ee
    m_usSpriteTrail = PRECACHE_MODEL("sprites/kamehamehatrail.spr");   // +0x1f0
    PRECACHE_SOUND("weapons/kame_charge.wav");
}

int CKameTorpedo::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 6;
    p->iPosition = 2;
    m_iId = p->iId = 32;
    p->iWeight   = 5;
    p->iFlags    = 0;
    return 1;
}

BOOL CKameTorpedo::Deploy(void)
{
    m_fCanFire = 0;                          // [OK] +0x1f8
    m_iTorpedoes = 0;                        // [OK] +0x1f4
    return CChargedAttack::Deploy();         // [OK]
}

void CKameTorpedo::UpdateTorpedoList(void)
{
    for (int i = 0; i < m_iTorpedoes; )
    {
        if (m_pTorpedo[i]->m_fVaporized)                 // [OK] +0x2c4: o torpedo foi destruido
        {
            m_pTorpedo[i]->Remove();                     // [OK] vtable +0x1fc
            m_iTorpedoes--;
            m_pTorpedo[i] = m_pTorpedo[m_iTorpedoes];    // [OK] troca com o ultimo
        }
        else
            i++;
    }
}

void CKameTorpedo::Holster(int skiplocal)
{
    UpdateTorpedoList();
    for (int i = 0; i < m_iTorpedoes; i++)
        m_pTorpedo[i]->Fire(Vector(0, 0, 1000), 0);      // [OK] solta tudo para cima (0,0,1000), sem perseguir
    CChargedAttack::Holster(skiplocal);                  // [OK]
}

void CKameTorpedo::WeaponIdle(void)
{
    m_fCanFire = 1;                                      // [OK] +0x1f8: botao solto, pode disparar o secundario
    CChargedAttack::WeaponIdle();
}

void CKameTorpedo::PrimaryAttack(void)
{
    if (m_pPlayer->f_334)
    {
        CChargedAttack::PrimaryAttack();                 // [OK] ja carregando
        return;
    }
    UpdateTorpedoList();
    if (m_iTorpedoes > 5)
        return;                                          // [OK] limite de 6 torpedos
    m_fCanFire = 0;
    CChargedAttack::PrimaryAttack();
}

void CKameTorpedo::SecondaryAttack(void)
{
    if (m_fCanFire)
    {
        m_fCanFire = 0;
        UpdateTorpedoList();
        if (m_iTorpedoes > 0)
        {
            m_iTorpedoes--;
            m_pPlayer->SetAnimation((PLAYER_ANIM)6);
            UTIL_MakeVectors(m_pPlayer->pev->v_angle);
            Vector gun = m_pPlayer->GetGunPosition();
            Vector vecEnd = gun + gpGlobals->v_forward * 8192;               // [OK]
            TraceResult tr;
            UTIL_TraceLine(gun, vecEnd, dont_ignore_monsters, ENT(m_pPlayer->pev), &tr);
            CKameTorpedoAttack *pTorp = m_pTorpedo[m_iTorpedoes];            // [OK] o ultimo da lista
            Vector vecDir = (tr.vecEndPos - pTorp->pev->origin).Normalize();
            pTorp->Fire(vecDir * 1000, 1);                                   // [OK] 1000.0, com perseguicao
        }
    }
    m_flNextPrimaryAttack = m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 0.2;   // [OK]
}

void CKameTorpedo::EmitChargeSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/kame_charge.wav", 1.0, 0.8, 0, 100);   // [OK]
}

void CKameTorpedo::ShootAttack(void)
{
    m_pPlayer->SetAnimation((PLAYER_ANIM)5);
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector start = m_pPlayer->GetGunPosition() + gpGlobals->v_forward * 20;   // [OK] 20.0
    float flRatio = GetPowerRatio();
    int iDamage = (int)(flRatio * (m_iCharge * 3));                           // [OK]
    // [?] ordem dos argumentos extras (3 sprites, 5, escala = carga/21)
    m_pTorpedo[m_iTorpedoes] = CKameTorpedoAttack::DropTorpedo(m_pPlayer->pev, start, iDamage,
                                   m_usSpriteA, m_usSpriteB, m_usSpriteTrail, 5, (float)(m_iCharge / 21.0));
    m_iTorpedoes++;
}

// ======================================================================
// CKameTorpedoAttack
// ======================================================================
CKameTorpedoAttack *CKameTorpedoAttack::DropTorpedo(entvars_t *pevOwner, Vector vecOrigin, int iDamage,
        short sSpriteA, short sSpriteB, short sSpriteTrail, int iRadiusMult, float flScale)
{
    CKameTorpedoAttack *p = GetClassPtr((CKameTorpedoAttack *)NULL);   // [OK]
    p->Spawn();                                                        // [OK] slot 0
    p->m_fRemoveOnVaporize = 0;                                        // [OK] +0x2c8
    p->pev->movetype = MOVETYPE_FLY;                                   // [OK] 5
    p->pev->solid = SOLID_NOT;                                         // [OK] +0x10c = 0
    SET_MODEL(ENT(p->pev), "sprites/null.spr");
    p->m_iRadiusMult = iRadiusMult;                                    // [OK] +0x2d0
    p->m_iExplosionType = 0;                                           // [OK] +0x2d4
    p->m_flFieldOfView = 0.5f;                                         // [OK] +0x168: cone de visao do torpedo
    if (iDamage > 9999) iDamage = 9999;
    p->pev->dmg = (float)iDamage;                                      // [OK] +0x1e0
    p->pev->velocity = Vector(0, 0, 0);
    p->m_flSpeed = 1000.0f;                                            // [OK] +0x2a8 (padding_64[580] = 0x2a8)
    p->pev->angles = UTIL_VecToAngles(Vector(0, 0, 1));                // [OK] aponta para cima
    p->pev->classname = MAKE_STRING("Kame Torpedo");                   // [OK] string em 0x59f5c6
    float flRadius = flScale * 64.0 * 0.25;                            // [OK]
    UTIL_SetSize(p->pev, Vector(-flRadius, -flRadius, -flRadius), Vector(flRadius, flRadius, flRadius));
    UTIL_MakeVectors(pevOwner->angles);
    vecOrigin = vecOrigin + gpGlobals->v_forward * flRadius * 0;       // [?] deslocamento do decompilado nao totalmente reconstruido
    UTIL_SetOrigin(p->pev, vecOrigin);
    MESSAGE_BEGIN(MSG_ALL, gmsgFlare);                                 // [OK] tipo 2
        WRITE_LONG(ENTINDEX(ENT(p->pev)));
        WRITE_SHORT(sSpriteA);
        WRITE_SHORT(sSpriteB);
        WRITE_SHORT((int)(flScale * 64.0 * 0.1));                      // [OK]
        WRITE_SHORT(sSpriteTrail);
        WRITE_SHORT((int)(flScale * 80.0));                            // [OK]
        WRITE_COORD(vecOrigin.x);
        WRITE_COORD(vecOrigin.y);
        WRITE_COORD(vecOrigin.z);
    MESSAGE_END();
    p->pev->owner = ENT(pevOwner);                                     // [?] nao visivel
    p->SetThink(&CMagicAttack::NormalThink);                           // [OK]
    return p;
}

void CKameTorpedoAttack::Fire(Vector vecVelocity, int iChase)
{
    m_fRemoveOnVaporize = 1;                                           // [OK] +0x2c8
    pev->velocity = vecVelocity;                                       // [OK]
    pev->angles = UTIL_VecToAngles(vecVelocity);                       // [OK]
    if (iChase)
        SetThink(&CKameTorpedoAttack::ChaseThink);                     // [OK]
    pev->solid = SOLID_TRIGGER;                                        // [OK] +0x10c = 1
    SetTouch(&CExplodingAttack::ExplodeTouch);                         // [OK]
}

BOOL CKameTorpedoAttack::FInViewCone(CBaseEntity *pEntity)
{
    UTIL_MakeVectors(pev->angles);                                     // [OK]
    Vector vecDir = (pEntity->pev->origin - pev->origin).Normalize();  // [OK]
    return DotProduct(gpGlobals->v_forward, vecDir) > m_flFieldOfView; // [OK] +0x168
}

void CKameTorpedoAttack::ChaseThink(void)
{
    entvars_t *pevOwner = pev->owner ? VARS(pev->owner) : NULL;       // [OK] +0x198
    if (!Target())
    {
        if (!pevOwner)
        {
            SetThink(&CMagicAttack::NormalThink);                      // [OK]
            pev->nextthink = gpGlobals->time;
            return;
        }
        for (int i = 1; i <= gpGlobals->maxClients; i++)               // [OK] procura um alvo entre os jogadores
        {
            CBaseEntity *pPlayer = UTIL_PlayerByIndex(i);
            if (!pPlayer || !pPlayer->IsAlive())                       // [OK] vtable +0x8c
                continue;
            if (pPlayer->pev == pevOwner)
                continue;
            if (pPlayer->pev->team == pevOwner->team && g_pGameRules->IsTeamplay())   // [?] mesmo time: ignora
                continue;
            if (FInViewCone(pPlayer))                                  // [OK] vtable +0x118
                Target() = pPlayer;                                    // [?] sem break no decompilado: vale o ultimo
        }
    }
    else if (FInViewCone(Target()))
    {
        Vector vecDir = (Target()->pev->origin - pev->origin).Normalize();   // [OK]
        Vector vecWant = vecDir * m_flSpeed;
        pev->velocity = pev->velocity * 0.6 + vecWant * 0.4;           // [OK] 0.6 / 0.4: curva suave
        pev->velocity = pev->velocity.Normalize() * m_flSpeed;         // [OK] mantem a velocidade
        pev->angles = UTIL_VecToAngles(pev->velocity);
    }
    else
        Target() = NULL;                                               // [OK] perdeu o alvo
    DrawBubbles();                                                     // [OK]
    pev->nextthink = gpGlobals->time + 0.1;                            // [OK]
}
