// shieldattack.cpp -- RECUPERADO de decomp_raw/CShieldAttack (12 funcoes). [OK] valores do decompilado; [?] nomes.
// CShield e CShieldAtk estao em shield.cpp.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "shieldattack.h"

void CShieldAttack::Spawn(void)
{
    Precache();                // [OK] vtable slot 1
    m_iId = 28;                // [OK] +0x88
    m_iDefaultAmmo = 0;        // +0xc0
    m_iClip = -1;              // +0xb0
    m_pShield = NULL;  m_flStateTime = 0;  m_flCooldown = 0;  m_iDamage = 0;  m_iState = 0;   // [OK] memset(+0xc4, 0, 20)
    FallInit();
}

void CShieldAttack::Precache(void)
{
    PRECACHE_MODEL("sprites/shieldattack.spr");
    PRECACHE_SOUND("weapons/shield.wav");
    PRECACHE_SOUND("weapons/shieldha.wav");
    PRECACHE_SOUND("gohan/shield.wav");
    PRECACHE_SOUND("gohan/shield_charge.wav");
}

int CShieldAttack::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 4;
    p->iPosition = 7;
    m_iId = p->iId = 28;
    p->iWeight   = 20;
    p->iFlags    = 0;
    return 1;
}

BOOL CShieldAttack::Deploy(void)
{
    return DefaultDeploy("shieldattack", "", 0, "");   // [?] so o 1o argumento aparece
}

void CShieldAttack::RemoveShield(void)
{
    if (m_pShield)
        m_pShield->Remove();                 // [OK]
    m_pShield = NULL;
    m_pPlayer->f_6bc = 0;                    // [OK] +0x6bc: jogador sem escudo
}

void CShieldAttack::CreateShield(void)
{
    m_pShield = CShield::CreateShield(m_pPlayer);   // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/shield.wav", 1.0, 0.8, 0, 100);
    m_pPlayer->EmitClassSound("shield_charge.wav");
}

void CShieldAttack::ShootShield(void)
{
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector start = m_pPlayer->GetGunPosition();
    Vector vel = gpGlobals->v_forward * 900;                         // [OK] 900.0
    float flRatio = GetPowerRatio();
    CShieldAtk::ShootShield(m_pPlayer->pev, start, vel, (int)(flRatio * m_iDamage));   // [OK]
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/shieldha.wav", 1.0, 0.8, 0, 100);
    m_pPlayer->EmitClassSound("shield.wav");
}

void CShieldAttack::Holster(int skiplocal)
{
    if (m_iState <= 0)
        return;
    RemoveShield();                          // [OK]
    m_iState = 0;
    m_pPlayer->f_33c = 0;
    m_pPlayer->f_334 = 0;
    m_pPlayer->m_flSpeedMult = 1.0f;         // [OK] +0x754
    m_flStateTime = 0;  m_flCooldown = 0;  m_iDamage = 0;   // [OK] memset(+0xc8, 0, 12)
}

void CShieldAttack::PrimaryAttack(void)
{
    float flNext;
    if (m_iState > 1)
    {
        vf_148();                            // [OK] vtable +0x148
        flNext = UTIL_WeaponTimeBase();
    }
    else if (m_iState == 1)                  // escudo erguido: gasta 8 de ki por tick
    {
        if (m_pPlayer->UseKi(8))
            flNext = UTIL_WeaponTimeBase() + 0.2;
        else
        {
            RemoveShield();                  // [OK] acabou o ki
            m_pPlayer->f_334 = 0;
            m_pPlayer->m_flSpeedMult = 1.0f;
            m_iState = 0;
            flNext = UTIL_WeaponTimeBase();
        }
    }
    else
    {
        if (m_pPlayer->UseKi(8))             // [OK] 8 de ki para erguer o escudo
        {
            CreateShield();
            if (!(*((char *)m_pPlayer + 421) & 2))   // [?] +0x1a5 bit 2: ja esta voando
                m_pPlayer->StartFly();
            m_pPlayer->f_6bc = 1;            // [OK] +0x6bc
            m_pPlayer->f_334 = 1;
            m_pPlayer->m_flSpeedMult = 0;    // [OK]
            m_iDamage = 0;
            m_iState = 1;
        }
        flNext = UTIL_WeaponTimeBase() + 0.2;
    }
    m_flNextPrimaryAttack = m_flNextSecondaryAttack = flNext;   // [OK] +0x9c,+0xa0
}

void CShieldAttack::SecondaryAttack(void)
{
    if (m_iState != 1)
        vf_148();                            // [OK]
    float flNow = UTIL_WeaponTimeBase();
    m_iDamage = (int)m_pShield->pev->dmg;   // [OK] pev+0x1e0 do escudo: forca acumulada
    RemoveShield();
    if (m_iDamage && m_pPlayer->UseKi(40))   // [OK] 40 de ki para soltar o golpe
    {
        m_pPlayer->f_334 = 1;
        m_pPlayer->f_33c = 0;
        m_pPlayer->f_6bc = 1;
        m_flStateTime = UTIL_WeaponTimeBase() + 1.5;   // [OK] 1.5 s de carga
        m_iState = 2;
    }
    else
    {
        m_pPlayer->f_334 = 0;
        m_pPlayer->f_6bc = 0;
        m_pPlayer->m_flSpeedMult = 1.0f;
        m_iState = 0;
        m_flStateTime = 0;
    }
    m_flNextPrimaryAttack = m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 4.0;   // [OK]
}

void CShieldAttack::WeaponIdle(void)
{
    if (m_iState > 0 && m_pShield && m_pShield->m_fBroken)   // [OK] +0x6c escudo quebrado
    {
        RemoveShield();
        m_pPlayer->f_6bc = 0;
        m_iState = 0;
        m_pPlayer->f_33c = 0;
        m_pPlayer->f_334 = 0;
        m_pPlayer->m_flSpeedMult = 1.0f;
        m_flStateTime = 0;  m_flCooldown = 0;  m_iDamage = 0;
        m_flNextPrimaryAttack = m_flNextSecondaryAttack = UTIL_WeaponTimeBase() + 1.0;   // [OK]
        return;
    }
    if (m_iState == 1)
    {
        RemoveShield();
        m_pPlayer->m_flSpeedMult = 1.0f;
        m_pPlayer->f_334 = 0;
        m_iState = 0;
        m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 2.5;   // [OK]
        return;
    }
    if (m_iState == 2)
    {
        if (m_pPlayer->f_37c)                // [?] +0x37c
        {
            m_flStateTime = 0;  m_flCooldown = 0;  m_iDamage = 0;
            m_pPlayer->f_33c = 0;
            m_pPlayer->f_334 = 0;
            m_pPlayer->f_6bc = 0;
        }
        if (UTIL_WeaponTimeBase() < m_flStateTime)
            return;
        ShootShield();                       // [OK]
        m_pPlayer->f_33c = 1;
        m_pPlayer->f_334 = 0;
        m_iState = 3;
        m_flCooldown = UTIL_WeaponTimeBase() + 1.25;   // [OK] +0xcc
        return;
    }
    if (m_iState == 3)
    {
        if (UTIL_WeaponTimeBase() <= m_flCooldown)
            return;
        m_flCooldown = 0;                    // [OK]
        m_flStateTime = 0;
        m_pPlayer->f_33c = 0;
        m_pPlayer->f_334 = 0;
        m_pPlayer->f_6bc = 0;
        m_pPlayer->m_flSpeedMult = 1.0f;
        m_iState = 0;                        // [?] o decompilado nao zera aqui explicitamente
        return;
    }
    m_iState = 0;                            // [OK]
}
