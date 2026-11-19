// telekinesis.cpp -- RECUPERADO de decomp_raw/CTelekinesis (12 funcoes). [OK] valores do decompilado; [?] nomes.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "telekinesis.h"

void CTelekinesis::Spawn(void)
{
    Precache();                    // [OK] vtable slot 1
    m_iId = 33;                    // [OK] +0x88
    m_iDefaultAmmo = 0;            // +0xc0
    m_iClip = -1;                  // +0xb0
    m_iMaxCharge = 9;              // [OK] +0xc8
    m_iKiCost = 2;                 // [OK] +0xd0
    f_0cc = 0;                     // [OK]
    strcpy(m_szWeaponName, "telekinesis");   // [OK] +0xd4
    FallInit();
}

void CTelekinesis::Precache(void)
{
    PRECACHE_MODEL("models/rocks.mdl");
    PRECACHE_SOUND("weapons/telekinesis_charge.wav");
    PRECACHE_SOUND("weapons/telekinesis_fire.wav");
    PRECACHE_SOUND("frieza/telekinesis.wav");
    PRECACHE_SOUND("frieza/telekinesis_charge.wav");
}

int CTelekinesis::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 6;
    p->iPosition = 4;
    m_iId = p->iId = 33;
    p->iWeight   = 15;
    p->iFlags    = 0;
    return 1;
}

BOOL CTelekinesis::Deploy(void)
{
    m_iRocks = 0;                            // [OK] +0x1ec
    m_flRange = 100.0f;                      // [OK] +0x1fc
    m_fActive = 0;                           // [OK] +0x204
    return CChargedAttack::Deploy();         // [OK]
}

void CTelekinesis::PrimaryAttack(void)
{
    if (m_pPlayer->f_334)
    {
        CChargedAttack::PrimaryAttack();     // [OK] ja carregando
        return;
    }
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector gun = m_pPlayer->GetGunPosition();
    m_fActive = 1;                           // [OK]
    TraceResult tr;
    UTIL_TraceLine(gun, gun + Vector(0, 0, -8096), ignore_monsters, ENT(m_pPlayer->pev), &tr);   // [OK] procura o chao (-8096)
    if (tr.flFraction < 1.0)
    {
        m_vecGround = tr.vecEndPos;          // [OK] +0x1f0
        float flHeight = gun.z - m_vecGround.z;
        int iMax = ((int)(flHeight * 3.0 / 20.0)) / 3 * 3 + 3;   // [OK] carga maxima cresce com a altura
        m_flRange = 100.0f;
        if (iMax <= 8)
            iMax = 9;                        // [?] minimo 9
        else if (iMax > 18)
        {
            m_flRange = (float)(flHeight * 3.0 / 3.6);   // [OK] muito alto: raio maior
            iMax = 18;                       // [OK] maximo 18
        }
        m_iMaxCharge = iMax;                 // [OK] +0xc8
    }
    CChargedAttack::PrimaryAttack();         // [OK]
}

void CTelekinesis::Shoot(void)
{
    CChargedAttack::Shoot();                 // [OK]
}

void CTelekinesis::GrowChargeSprite(void)
{
    if (!m_fActive)
        return;
    int iCharge = m_iCharge - m_iMaxCharge / 3;          // [OK]
    int iSpan = m_iMaxCharge * 2 / 3;
    int iWanted = iCharge * 6 / iSpan;                   // [OK] ate 6 pedras conforme a carga
    while (iWanted >= m_iRocks && m_iRocks <= 5)         // [OK] cria as que faltam
    {
        m_pRock[m_iRocks] = CRock::CreateRock(m_vecGround, m_pPlayer->pev, (float)(m_iRocks / 6.0), m_flRange);   // [OK]
        m_iRocks++;
    }
}

void CTelekinesis::DisableChargeSprite(void)
{
    for (int i = 0; i < m_iRocks; i++)
        m_pRock[i]->Vaporize();                          // [OK] cancela as pedras
    m_iRocks = 0;
    m_fActive = 0;
}

void CTelekinesis::EmitChargeSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/telekinesis_charge.wav", 1.0, 0.8, 0, 100);   // [OK]
    m_pPlayer->EmitClassSound("telekinesis_charge.wav");
}

void CTelekinesis::EmitShootSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/telekinesis_fire.wav", 1.0, 0.8, 0, 100);     // [OK]
    m_pPlayer->EmitClassSound("telekinesis.wav");
}

void CTelekinesis::ShootAttack(void)
{
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);           // [OK]
    if (!m_fActive)
        return;
    if (m_iRocks > 6)
        ALERT(at_console, "Invalid m_iRock: %d\n", m_iRocks);   // [OK]
    Vector vel = gpGlobals->v_forward * 1200;            // [OK] 1200.0
    for (int i = 0; i < m_iRocks; i++)
        m_pRock[i]->Shoot(vel);                          // [OK]
    m_iRocks = 0;
    m_fActive = 0;
}

// ======================================================================
// CRock -- pedra levantada pelo CTelekinesis (decomp_raw/CRock, 6 funcoes)
// ======================================================================
extern int g_sRockGibs;

void CRock::Spawn(void)
{
    Precache();                                                        // [OK] vtable slot 1
    m_fInStruggle = 0;                                                 // [OK] +0x2ac
    m_fInBlockStruggle = 0;                                            // +0x2b0
    m_fRemoveOnVaporize = 1;                                           // [OK] +0x2c8
    m_fVaporized = 0;                                                  // +0x2c4
    m_pStruggle = NULL;                                                // +0x2c0
    *(float *)((char *)this + 0x11c) = 1e-6f;                          // [OK] valor literal; campo nao identificado [?]
}

CRock *CRock::CreateRock(Vector vecPos, entvars_t *pevOwner, float flScale, float flRange)
{
    CRock *p = GetClassPtr((CRock *)NULL);                             // [OK]
    p->Spawn();                                                        // [OK] slot 0
    p->pev->movetype = MOVETYPE_FLY;                                   // [OK] 5
    p->pev->solid = SOLID_NOT;                                         // [OK] +0x10c = 0
    SET_MODEL(ENT(p->pev), "models/rocks.mdl");
    RANDOM_FLOAT(0.5, 1.5);                                            // [OK] resultado descartado no decompilado
    p->pev->scale = 0.5f;                                              // [OK] +0x144
    p->pev->body = RANDOM_LONG(0, 6);                                  // [OK] +0x114: um dos 7 modelos de pedra
    p->pev->classname = MAKE_STRING("rock");                           // [OK] string em 0x5a1349
    p->pev->dmg = 5.0f;                                                // [OK] +0x1e0
    p->m_iRadiusMult = 80;                                             // [OK] +0x2d0
    float flPhase = (float)(3.141592653589793 * flScale + 3.141592653589793 * flScale);   // [OK] 2*pi*escala: fase de cada pedra
    float flAng = flPhase + flPhase;
    UTIL_SetOrigin(p->pev, vecPos + Vector(sin(flAng) * 15.0, cos(flAng) * 15.0, 0));     // [OK] orbita de raio 15
    p->pev->velocity.x = cos(flAng) * 30.0;                            // [OK]
    p->pev->velocity.y = -sin(flAng) * 30.0;
    p->pev->velocity.z = flRange;                                      // [OK] sobe com a velocidade = raio
    *(float *)((char *)p + 0x2dc) = flPhase;                           // [OK] +0x2dc fase
    *(float *)((char *)p + 0x2e0) = gpGlobals->time;                   // [OK] +0x2e0 instante de criacao
    p->SetTouch(NULL);
    p->SetThink(&CRock::RotateThink);                                  // [OK]
    p->pev->owner = ENT(pevOwner);                                     // [?] nao visivel (RotateThink le pev->owner)
    return p;
}

void CRock::RotateThink(void)
{
    if (pev->owner)
    {
        entvars_t *pevOwner = VARS(pev->owner);
        if (pevOwner->origin.z + pevOwner->view_ofs.z + 5.0 < pev->origin.z)   // [OK] passou da altura da cabeca (+5): para de subir
            pev->velocity.z = 0;
        float flAng = (gpGlobals->time - *(float *)((char *)this + 0x2e0) + *(float *)((char *)this + 0x2dc)) * 2;   // [OK]
        pev->velocity.x = cos(flAng) * 30.0;                           // [OK] gira em circulo
        pev->velocity.y = -sin(flAng) * 30.0;
    }
    else
        SetThink(&CMagicAttack::NormalThink);                          // [?] sem dono: comportamento normal
    pev->nextthink = gpGlobals->time + 0.02;                           // [OK]
}

void CRock::Shoot(Vector vecVelocity)
{
    pev->velocity = vecVelocity;                                       // [OK]
    pev->solid = SOLID_TRIGGER;                                        // [OK] +0x10c = 1
    SetThink(&CMagicAttack::NormalThink);                              // [OK]
    SetTouch(&CRock::ExplodeTouch);                                    // [OK]
    pev->nextthink = gpGlobals->time + 0.1;                            // [OK]
}

void CRock::ExplodeTouch(CBaseEntity *pOther)
{
    if (pOther->Classify() == 16)                                      // [OK] vtable +0x28 / retorno 0x10
        return;
    CBaseEntity *pMyOwner    = pev->owner        ? CBaseEntity::Instance(pev->owner)        : NULL;
    CBaseEntity *pOtherOwner = pOther->pev->owner ? CBaseEntity::Instance(pOther->pev->owner) : NULL;
    if (pMyOwner == (CBaseEntity *)pOther->pev)                        // [OK] comparacao literal do original
        return;
    if (pOtherOwner == pMyOwner && pMyOwner)
        return;
    if (!pOther->IsPlayer() || !BlocksAttack(pOther) || ((CBasePlayer *)pOther)->m_fBlockStruggling)   // [OK] +0x358
    {
        Explode();                                                     // [OK] vtable +0x200
        return;
    }
    SwatAway((CBasePlayer *)pOther, 1);                                // [OK] vtable +0x1f8: o jogador defendeu e rebateu a pedra
    Explode();
}

void CRock::DrawExplosionFX(int iRadius, Vector vecPos)
{
    Vector vecDir = pev->velocity.Normalize();                         // [OK]
    Vector vecAhead = vecDir * (float)iRadius;
    vecPos = vecPos - vecDir * 20;                                     // [OK] recua 20.0
    Vector vecEnd = vecPos + vecAhead + vecDir * 30;                   // [OK] 30.0
    TraceResult tr;
    UTIL_TraceLine(vecPos, vecEnd, ignore_monsters, ENT(pev), &tr);
    if (tr.flFraction >= 1.0)
        return;                                                        // [OK] nada a frente: sem efeito
    MESSAGE_BEGIN(MSG_ALL, SVC_TEMPENTITY);                            // [OK] tipo 2, id 23
        WRITE_BYTE(TE_BREAKMODEL);                                     // [OK] 108
        WRITE_COORD(tr.vecEndPos.x);
        WRITE_COORD(tr.vecEndPos.y);
        WRITE_COORD(tr.vecEndPos.z);
        WRITE_COORD(50);  WRITE_COORD(50);  WRITE_COORD(50);           // [OK] tamanho 50
        WRITE_COORD(200 * tr.vecPlaneNormal.x);                        // [OK] velocidade = 200 * normal
        WRITE_COORD(200 * tr.vecPlaneNormal.y);
        WRITE_COORD(200 * tr.vecPlaneNormal.z);
        WRITE_BYTE(30);                                                // [OK] aleatoriedade
        WRITE_SHORT(g_sRockGibs);                                      // [OK]
        WRITE_BYTE(20);                                                // [OK] quantidade
        WRITE_BYTE(50);                                                // [OK] vida (5 s)
        WRITE_BYTE(0);
    MESSAGE_END();
}
