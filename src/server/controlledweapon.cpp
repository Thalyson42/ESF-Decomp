// controlledweapon.cpp -- CControlledBeam, RECUPERAÇÃO COMPLETA (30 de 30 funções; ver [?] nas partes incertas).
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
    InitChargeSprite();                       // [OK] vtable slot 89 (+0x16c)
    m_fBeamJumpFlying = 0;                    // +0x208
    m_fBeamJumping    = 0;                    // +0x204
    m_iAttackState    = 0;                    // +0xc4
    return DefaultDeploy(/* &this+0xf4 */ m_szWeaponName);   // [?] só o 1º argumento é visível no decompilado
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

// =====================================================================
// Campos usados abaixo (offsets do .so), nomes deduzidos:
//   +0xd8 m_iCharge        +0xdc m_iMaxCharge     +0xe0 m_iBeamSpeed
//   +0xe4 m_iKiCost        +0xe8 m_iDmgPerCharge  +0xf0 m_flChargeSpeedMult
//   jogador: +0x754 m_flSpeedMult  +0x334 m_fCharging  +0x33c m_fKiControl(?)
//            +0x354/0x35c/0x36c (PowerStruggle: ver StopAiming)
// =====================================================================

// Estado 0 -> 1 (carregando) -> 2 (disparado, feixe controlável)
void CControlledBeam::Charge(void)
{
    if (m_iAttackState == 2)
        StopAiming();                                           // [OK]
    if (m_iAttackState != 1)
    {
        m_pPlayer->m_flSpeedMult = m_flChargeSpeedMult;         // [OK] +0xf0 -> player+0x754 (ex.: 0.5)
        m_iAttackState = 1;
        m_pPlayer->m_fCharging = 1;                             // player+0x334
        m_iCharge = 0;
        EmitChargeSound();                                      // [OK] slot 87 (+0x164)
    }
    if (m_iCharge >= m_iMaxCharge)                              // [OK] carga cheia: nada a fazer
        return;
    if (!m_pPlayer->UseKi(m_iKiCost))                           // [OK] sem ki -> dispara o que tiver
    {
        Shoot();                                                // slot 94 (+0x180)
        return;
    }
    if (m_iCharge == m_iMaxCharge / 3)
        EnableChargeSprite();                                   // [OK] slot 90: esfera aparece com 1/3 da carga
    if (m_iCharge > m_iMaxCharge / 3)
        GrowChargeSprite();                                     // slot 92
    m_iCharge++;
    m_pPlayer->DrawChargeBar(m_iCharge * 100 / m_iMaxCharge);   // [OK] barra de carga em %
}

// Chamada quando o botão é solto / acaba o ki -> cria o feixe
void CControlledBeam::Shoot(void)
{
    m_pPlayer->DrawChargeBar(0);
    SilenceWeaponSounds();                                      // canal 1 mudo
    m_pPlayer->m_fCharging = 0;

    if (m_iCharge < m_iMaxCharge / 3)                           // [OK] carga mínima = 1/3: senão cancela
    {
        m_iAttackState = 0;
        m_pPlayer->m_flSpeedMult = 1.0f;
        SilenceVoice();                                         // canal 2 mudo
        return;
    }

    m_iAttackState = 2;
    if (!(m_pPlayer->pev->flags & FL_ONGROUND))                 // [OK] +421&2 = FL_ONGROUND
        m_pPlayer->StartFly();
    m_pPlayer->m_fKiControl = 1;                                // player+0x33c [?]
    DisableChargeSprite();                                      // slot 91
    EmitShootSound();                                           // slot 88
    EmitControlSound();                                         // slot 86

    UTIL_MakeVectors(m_pPlayer->pev->v_angle);                  // [OK] pev+116
    Vector vecSrc = m_pPlayer->GetGunPosition();                // [OK] virtual jogador +0x1e0
    TraceResult tr;
    UTIL_TraceLine(vecSrc, vecSrc + gpGlobals->v_forward * 10, ignore_monsters,
                   m_pPlayer->edict(), &tr);
    vecSrc = vecSrc + gpGlobals->v_forward * 10 * tr.flFraction * 0.9f;   // [OK] recua 10% se bater em parede
    Vector vecVel = gpGlobals->v_forward * (float)m_iBeamSpeed;           // [OK] +0xe0 = velocidade

    m_pPlayer->m_flSpeedMult = 0;
    CreateBeam(vecSrc, vecVel, (float)m_iCharge / (float)m_iMaxCharge);   // [OK] slot 85, 3º arg = razão de carga
    UTIL_Model_FixAngles(ENTINDEX(m_pPlayer->edict()));
}

void CControlledBeam::CreateBeam(Vector vecOrigin, Vector vecDir, float flRatio)
{
    GetPowerRatio();                                            // [OK] (valor descartado)
    int dmg = (int)(flRatio * (float)(m_iDmgPerCharge * m_iCharge));   // [OK] +0xe8 * +0xd8 * razão
    // [?] a ordem exata dos argumentos de ShootGuidedMagic segue a pilha do decompilado:
    m_pBeam = CGuidedAttack::ShootGuidedMagic(m_pPlayer->pev, vecOrigin, vecDir, dmg,
                  m_szWeaponName /*+0xf4*/, /*flRatio*/ flRatio, /*+0x1fc*/ f_1fc,
                  m_usTrailSprite, m_usSpriteAStart, m_usSpriteBStart,
                  m_usSpriteA, m_usSpriteB, /*+0xec*/ f_0ec, /*+0x1f4*/ f_1f4, /*+0x1f8*/ f_1f8, 2);
}

// Solta o feixe: para de mirar e deixa o feixe seguir sozinho
void CControlledBeam::ReleaseAttack(void)
{
    StopAiming();
    if (!m_pBeam) return;
    if (!m_pBeam->f_2c4)
    {
        if (!m_pBeam->f_2dc)
            m_pBeam->vfunc_200();                               // [?]
    }
    if (m_pBeam->f_2c4)
        m_pBeam->vfunc_1fc();                                   // [?]
    m_pBeam = NULL;                                             // [OK]
}

void CControlledBeam::StopAiming(void)
{
    MESSAGE_BEGIN(MSG_ONE, gmsgPowerStruggle, NULL, m_pPlayer->edict());   // [OK] canal de HUD
        WRITE_CHAR(127);                                        // [OK] valor 127 = "limpar"
    MESSAGE_END();
    m_pPlayer->m_fInPowerStruggle = 0;  m_pPlayer->m_pPowerStruggle = 0;  m_pPlayer->m_fInBlockStruggle = 0;    // player+852/876/860: campos de PowerStruggle
    if (!m_pPlayer->f_770 && !m_pPlayer->f_37c)
        m_pPlayer->m_flSpeedMult = 1.0f;                        // [OK]
    else
    {
        m_pPlayer->pev->sequence = 0;                           // pev+296
        m_pPlayer->f_778 = 0;                                   // player+1912
        m_pPlayer->ResetSequenceInfo();
    }
    m_pPlayer->m_fKiControl = 0;                                // player+828
    if (m_fBeamJumpFlying)                                      // +0x208
    {
        StopBeamJump();
        m_pPlayer->StopFly();
    }
    if (m_fBeamJumping)                                         // +0x204
        DisableBeamJump();
    m_iAttackState = 0;
    SilenceBodySounds();
    if (!m_pPlayer->f_6c8)
        UTIL_Model_RemoveAll(ENTINDEX(m_pPlayer->edict()));
}

BOOL CControlledBeam::CheckWallJump(void)
{
    // [OK] se o jogador entrou em estado especial (player+0x6c8), cancela a carga e devolve TRUE
    if (m_pPlayer->f_6c8_wall)
    {
        m_pPlayer->m_fCharging = 0;
        m_iAttackState = 0;
        m_iCharge = 0;
        DisableChargeSprite();
        SilenceWeaponSounds(); SilenceVoice(); SilenceBodySounds();
        m_pPlayer->DrawChargeBar(0);
        return TRUE;
    }
    return FALSE;
}

void CControlledBeam::StartBeamJump(void)
{
    m_iSavedMoveType = m_pPlayer->pev->movetype;                // [OK] guarda o movetype (+0x200)
    m_pBeam->f_c = 0;  m_pBeam->f_10 = 0;                       // [?] zera o think/nextthink do feixe
    m_pPlayer->pev->movetype = 15;                              // [OK] MOVETYPE_FLY? (15 = MOVETYPE_... conferir)
    m_pPlayer->f_754_ = 5.0f;                                   // player+0x754 [?]
    Vector d = m_pPlayer->pev->origin - m_pBeam->pev->origin;   // [OK] do feixe para o jogador
    float len = d.Length();
    Vector dir = (len == 0) ? Vector(0, 0, 1) : d * (1.0f / len);       // [OK] normaliza; (0,0,1) se zero
    m_pPlayer->pev->velocity = dir * m_pPlayer->GetMaxSpeed();           // [OK] pev+648? ver nota
    m_fBeamJumpFlying = 1;
    Vector ang = UTIL_VecToAngles(-d);                          // [OK] olha na direção contrária
    UTIL_Model_FixAngles(ENTINDEX(m_pPlayer->edict()));
}

void CControlledBeam::UpdateBeamJumpStatus(void)
{
    if (!CanBeamJump()) return;                                 // [OK] slot 95
    if (m_pPlayer->pev->button & IN_JUMP)                       // [OK] pev+0x180 & 2
    {
        if (!m_fBeamJumping)
            EnableBeamJump();
        if (m_fBeamJumpFlying)
        {
            if (UTIL_WeaponTimeBase() > m_flTimeWeaponIdle &&           // [OK] +0xa4 = m_flTimeWeaponIdle (save-table)
                !m_pPlayer->UseKi((int)(m_iKiCost * 0.33)))               // [OK] 33% do ki por tick
                DisableBeamJump();                                        // sem ki: para
        }
        else if (m_pBeam->f_2cc_flag)                           // beam+0x2cc(716) [?]
            StartBeamJump();
    }
    else if (m_fBeamJumping)
        DisableBeamJump();                                      // [OK] soltou o pulo
}

// =====================================================================
// Os 4 "ticks" da arma. Campos do feixe (CExplodingAttack): +0x2ac m_fInStruggle, +0x2b0 m_fInBlockStruggle [?],
// +0x2b8 m_flStruggleRatio, +0x2c0 m_pStruggle, +0x2c4/+0x2dc = flags de "acabou" [?]; pev->dmg = força.
// Jogador: m_fInPowerStruggle(+0x354), m_fInBlockStruggle(+0x35c), m_pPowerStruggle(+0x36c) [nomes deduzidos].
// =====================================================================
static void SendStruggleRatio(CBasePlayer *pPlayer, CExplodingAttack *pBeam)
{
    MESSAGE_BEGIN(MSG_ONE, gmsgPowerStruggle, NULL, pPlayer->pev->pContainingEntity);   // [OK]
        WRITE_CHAR((int)(pBeam->m_flStruggleRatio * 100.0f));    // [OK] -100..100 (%): quem está ganhando
    MESSAGE_END();
}

void CControlledBeam::PrimaryAttack(void)
{
    float tNext = UTIL_WeaponTimeBase() + 0.2f;
    m_flNextPrimaryAttack = tNext;                                         // [OK] +0x9c

    if (m_iAttackState == 2 && m_pBeam)
    {
        if (!m_pBeam->f_2c4 && !m_pBeam->f_2dc)                            // feixe ainda vivo
        {
            if (m_pBeam->m_fInBlockStruggle || m_pBeam->m_fInStruggle)
            {
                // [OK] segurando o botão durante uma disputa: gasta 25% do ki e soma força ao feixe
                if (m_pPlayer->UseKi((int)(m_iKiCost * 0.25)))
                {
                    int dmg = (int)(GetPowerRatio() * (float)m_iDmgPerCharge + m_pBeam->pev->dmg);
                    if (dmg > 9999) dmg = 9999;                            // [OK] teto
                    m_pBeam->pev->dmg = (float)dmg;
                }
                if (m_pBeam->m_fInBlockStruggle)
                    m_pPlayer->m_fInBlockStruggle = 1;
                else
                {
                    m_pPlayer->m_fInPowerStruggle = 1;
                    m_pPlayer->m_pPowerStruggle = m_pBeam->m_pStruggle;
                }
            }
            else
            {
                WeaponIdle();                                              // [OK] vtable slot 80
                m_flNextPrimaryAttack = tNext;
                return;
            }
            SendStruggleRatio(m_pPlayer, m_pBeam);                         // [OK]
            return;
        }
        // feixe acabou: encerra a mira e solta a referência
        StopAiming();
        if (m_pBeam->f_2c4) m_pBeam->vfunc_508();                          // [?] virtual do feixe (slot 125)
        m_pBeam = NULL;
        return;
    }
    Charge();                                                              // [OK] estado 0/1: carrega
    m_flNextSecondaryAttack = m_flNextPrimaryAttack;                       // [OK]
}

void CControlledBeam::SecondaryAttack(void)
{
    // [OK] botão secundário solta o feixe, exceto durante uma disputa
    if (m_pBeam && m_iAttackState == 2 && !m_pBeam->m_fInStruggle && !m_pBeam->m_fInBlockStruggle)
        ReleaseAttack();
    float t = UTIL_WeaponTimeBase() + 0.2f;
    m_flNextSecondaryAttack = t;
    m_flNextPrimaryAttack = t;
}

void CControlledBeam::Holster(int skiplocal)
{
    if (m_iAttackState == 2)
        ReleaseAttack();                                                   // [OK]
    else if (m_iAttackState == 1)
    {
        m_pPlayer->m_flSpeedMult = 1.0f;                                   // [OK]
        m_pPlayer->m_fCharging = 0;
        DisableChargeSprite();                                             // slot 91
        SilenceWeaponSounds(); SilenceVoice(); SilenceBodySounds();        // canais 1, 2, 4
        m_pPlayer->DrawChargeBar(0);
    }
    RemoveChargeSprite();                                                  // [OK] slot 93, sempre
}

void CControlledBeam::WeaponIdle(void)
{
    if (m_iAttackState == 1 && !CheckWallJump())
        Shoot();                                                           // [OK] soltou o botão carregando -> dispara

    if (m_iAttackState == 2)
    {
        if (!m_pBeam)
            StopAiming();                                                  // [OK] sem feixe
        else if (m_pBeam->f_2c4 || m_pBeam->f_2dc)
        {
            StopAiming();                                                  // [OK] feixe acabou
            if (m_pBeam->f_2c4) m_pBeam->vfunc_508();                      // [?]
            m_pBeam = NULL;
        }
        else if (m_pBeam->m_fInStruggle || m_pBeam->m_fInBlockStruggle)
        {
            if (m_pBeam->m_fInStruggle)
            {
                m_pPlayer->m_fInPowerStruggle = 1;
                m_pPlayer->m_pPowerStruggle = m_pBeam->m_pStruggle;
            }
            else
                m_pPlayer->m_fInBlockStruggle = 1;
            if (UTIL_WeaponTimeBase() > m_flTimeWeaponIdle)                // [OK] +0xa4
                SendStruggleRatio(m_pPlayer, m_pBeam);
        }
        else
        {
            // sem disputa: zera os indicadores e trata o beam jump
            m_pPlayer->m_fInPowerStruggle = 0;
            m_pPlayer->m_pPowerStruggle = 0;
            m_pPlayer->m_fInBlockStruggle = 0;
            UpdateBeamJumpStatus();                                        // [OK]
            if (m_pPlayer->f_37c)                                          // player+0x37c [?]
                m_pBeam->vfunc_520();                                      // [?]
        }
    }
    if (UTIL_WeaponTimeBase() > m_flTimeWeaponIdle)                        // [OK] reagenda o idle em +0.2 s
        m_flTimeWeaponIdle = UTIL_WeaponTimeBase() + 0.2f;
}
