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
