// controlledweapon.cpp -- CControlledBeam, RECUPERAÇÃO PARCIAL (14 de 30 funções).
// Fonte: decomp_raw/CControlledBeam/*.c. [OK] = conferido; [?] = nome/sentido incerto.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "controlledweapon.h"

// ---- virtuais vazios (a subclasse sobrescreve) -- [OK] 7 bytes: só "ret" ----
void CControlledBeam::EmitChargeSound(void)     { }
void CControlledBeam::EmitShootSound(void)      { }
void CControlledBeam::InitChargeSprite(void)    { }
void CControlledBeam::EnableChargeSprite(void)  { }
void CControlledBeam::DisableChargeSprite(void) { }
void CControlledBeam::GrowChargeSprite(void)    { }
void CControlledBeam::RemoveChargeSprite(void)  { }
BOOL CControlledBeam::CanBeamJump(void)         { return TRUE; }      // [OK]

void CControlledBeam::Precache(void)
{
    PRECACHE_SOUND("weapons/beamhead.wav");   // [OK]
    PRECACHE_SOUND("weapons/beamfire.wav");
}

// ---- cala um canal de áudio do jogador tocando "common/null.wav" ----
#define SILENCE(chan) EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), (chan), "common/null.wav", 1.0, 0.8, 0, 100)
void CControlledBeam::SilenceWeaponSounds(void) { SILENCE(CHAN_WEAPON); }   // [OK] canal 1
void CControlledBeam::SilenceVoice(void)        { SILENCE(CHAN_VOICE);  }   // [OK] canal 2
void CControlledBeam::SilenceBodySounds(void)   { SILENCE(CHAN_BODY);   }   // [OK] canal 4

void CControlledBeam::EmitControlSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev->pContainingEntity), CHAN_BODY,
                   "weapons/beamfire.wav", 1.0, 0.8, 0, 100);               // [OK] canal 4
}

BOOL CControlledBeam::Deploy(void)
{
    // [OK] chama o virtual do slot (vtable+0x16c)(this) -- provavelmente EmitDeploySound/Reset [?]
    m_fBeamJumpFlying = 0;                    // +0x208
    m_fBeamJumping    = 0;                    // +0x204
    m_iAttackState    = 0;                    // +0xc4
    return DefaultDeploy(/* viewmodel/string em +0xf4 */ m_szViewModel, m_szPlayerModel, 0 /*anim*/, "");
    // ^ [?] DefaultDeploy(this, &this->field_f4): só o 1º argumento foi visto no decompilado
}

BOOL CControlledBeam::CanHolster(void)
{
    // [OK] não pode guardar a arma enquanto estiver controlando um feixe ativo
    if (m_pBeam && m_iAttackState == 2 &&
        (f_beam_2ac(m_pBeam) || f_beam_2b0(m_pBeam)) && !f_beam_2dc(m_pBeam))
        return FALSE;
    return TRUE;
}

void CControlledBeam::EnableBeamJump(void)
{
    m_fBeamJumping = 1;                                   // [OK] +0x204
    m_pBeam->SetTouch(&CGuidedAttack::StopTouch);         // [OK] campos +0x14/+0x18 = ponteiro de método de touch
}

void CControlledBeam::StopBeamJump(void)
{
    // [OK] restaura o movetype do jogador, se não estiver em estado especial (+0x4c4)
    if (!m_pPlayer->f_4c4)
        m_pPlayer->pev->movetype = m_iSavedMoveType;
    m_fBeamJumpFlying = 0;
}

void CControlledBeam::DisableBeamJump(void)
{
    m_fBeamJumping = 0;
    if (!f_beam_2cc(m_pBeam))
    {
        m_pBeam->SetTouch(&CExplodingAttack::ExplodeTouch);          // [OK]
        UTIL_MakeVectors(m_pBeam->pev->angles);                      // [?] argumento: &pev->angles
        m_pBeam->pev->velocity = f_beam_2a8(m_pBeam) * gpGlobals->v_forward;  // [OK] velocidade * frente
        m_fBeamJumpFlying = 0;
    }
    else
        m_pBeam->vfunc_200();      // [?] virtual do feixe (vtable+0x200)
}

// ---------- PENDENTES (decompilado em decomp_raw/CControlledBeam/) ----------
// PrimaryAttack(735 B) SecondaryAttack(117) WeaponIdle(573) Holster(312) Charge(345)
// ReleaseAttack(141) StopAiming(437) Shoot(952) CreateBeam(253) StartBeamJump(488)
// UpdateBeamJumpStatus(258) CheckWallJump(290)
