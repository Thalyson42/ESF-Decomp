// chargedattack.cpp -- RECUPERADO de decomp_raw/CChargedAttack (15 funcoes; 7 sao stubs vazios).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "chargedattack.h"

// stubs vazios (7 bytes no binario: ret) [OK]
void CChargedAttack::EmitChargeSound(void)    {}
void CChargedAttack::EmitShootSound(void)     {}
void CChargedAttack::InitChargeSprite(void)   {}
void CChargedAttack::EnableChargeSprite(void) {}
void CChargedAttack::DisableChargeSprite(void){}
void CChargedAttack::GrowChargeSprite(void)   {}
void CChargedAttack::RemoveChargeSprite(void) {}
void CChargedAttack::ShootAttack(void)        {}

BOOL CChargedAttack::Deploy(void)
{
    InitChargeSprite();                                     // [OK] +0x168
    return DefaultDeploy(m_szWeaponName, "", 0, "");        // [?] so o 1o argumento aparece no decompilado
}

void CChargedAttack::Holster(int skiplocal)
{
    if (m_pPlayer->f_334)                                   // [OK] jogador carregando
    {
        m_pPlayer->m_flSpeedMult = 1.0f;                    // [OK] +0x754
        m_pPlayer->f_334 = 0;
        m_pPlayer->DrawChargeBar(0);
        DisableChargeSprite();                              // [OK] +0x170
        SilenceVoice();
        SilenceWeaponSounds();
    }
    m_pPlayer->StopAniTrigger(5);                           // [OK]
    m_pPlayer->StopAniTrigger(6);
    RemoveChargeSprite();                                   // [OK] +0x178
}

void CChargedAttack::Shoot(void)
{
    m_pPlayer->m_flSpeedMult = 1.0f;                        // [OK]
    m_pPlayer->f_334 = 0;
    m_pPlayer->DrawChargeBar(0);
    if (m_iCharge > m_iMaxCharge / 3)                       // [OK] carga minima = 1/3
    {
        m_pPlayer->SetAnimation((PLAYER_ANIM)5);
        EmitShootSound();                                   // +0x164
        ShootAttack();                                      // +0x17c
        DisableChargeSprite();                              // +0x170
        return;
    }
    SilenceVoice();
    SilenceWeaponSounds();
}

void CChargedAttack::WeaponIdle(void)
{
    if (m_pPlayer->f_334)
        Shoot();                                            // [OK] soltou o botao -> dispara (+0x15c)
}

void CChargedAttack::PrimaryAttack(void)
{
    if (!m_pPlayer->f_334)
    {
        m_pPlayer->f_334 = 1;                               // comeca a carregar
        m_pPlayer->StopAniTrigger(5);
        m_pPlayer->StopAniTrigger(6);
        m_iCharge = 0;
        EmitChargeSound();                                  // [OK] +0x160
    }
    else if (m_iCharge >= m_iMaxCharge)
    {
        // carga cheia: so reagenda
    }
    else if (!m_pPlayer->UseKi(m_iKiCost))
    {
        Shoot();                                            // sem ki: dispara o que ja tem
    }
    else
    {
        if (m_iCharge >= m_iMaxCharge / 3)
            EnableChargeSprite();                           // [?] chamada virtual unica (== e > 1/3); Enable chama Grow+TurnOn
        m_iCharge++;
        m_pPlayer->DrawChargeBar(m_iCharge * 100 / m_iMaxCharge);
    }
    m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.2;    // [OK]
}

void CChargedAttack::SilenceVoice(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "common/null.wav", 1.0, 0.8, 0, 100);   // [OK] canal 1
}

void CChargedAttack::SilenceWeaponSounds(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_VOICE, "common/null.wav", 1.0, 0.8, 0, 100);    // [OK] canal 2
}
