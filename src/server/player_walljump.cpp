// player_walljump.cpp -- wall jump (agarrar na parede e pular) do CBasePlayer. RECUPERADO À MÃO.
// Fonte: decomp_raw/CBasePlayer/{CheckWallJump,EnableWallJump,DisableWallJump,RemoveWallJump,ResetWallJumpVars,GetWallJumpAnim*}.c
// A parte de física está em pm_esf.cpp; aqui ficam o estado do jogador e as animações.
// Campos: pev->iuser3 (+0x24c) = encostado na parede (setado pelo pm); pev->vuser4 (+0x288) = normal da parede.
// +0x6c4 = em wall jump (flag), +0x6c8 = animação de agarrar ativa, +0x37c = estado "preso" (também usado por outras ações).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "esf_classes.h"

void UTIL_Model_RemoveAll(int iEnt);

// Nome da animação de "agarrar" (grabwall_*) conforme a direção da parede em relação ao jogador.
// Normaliza vecDir (z zerado) e compara com v_forward/v_right do jogador (distância <= 0.8 = mesma direção).
void CBasePlayer::GetWallJumpAnim(char *szPrefix, Vector vecDir, char *szOut)
{
    strcpy(szOut, szPrefix);
    UTIL_MakeVectors(pev->angles);
    Vector fwd = gpGlobals->v_forward, right = gpGlobals->v_right;
    Vector back = fwd * -1.0f, left = right * -1.0f;      // [?] 'back' é calculado no binário mas não é usado na comparação
    vecDir.z = 0; fwd.z = 0; back.z = 0; right.z = 0; left.z = 0;
    fwd = fwd.Normalize();  back = back.Normalize();
    right = right.Normalize(); left = left.Normalize();
    vecDir = vecDir.Normalize();

    const char *pszDir;
    if ((fwd - vecDir).Length() <= 0.8f)         pszDir = "back";
    else if ((right - vecDir).Length() <= 0.8f)  pszDir = "left";
    else if ((left - vecDir).Length() <= 0.8f)   pszDir = "right";
    else                                         pszDir = "forward";
    strcat(szOut, pszDir);
}

// grabwall_X -> walljump_X (animação do pulo); qualquer outro nome vira walljump_back.
void CBasePlayer::GetWallJumpAnim(char *szGrab, char *szOut)
{
    if (!strcmp(szGrab, "grabwall_forward"))      strcpy(szOut, "walljump_forward");
    else if (!strcmp(szGrab, "grabwall_left"))    strcpy(szOut, "walljump_left");
    else if (!strcmp(szGrab, "grabwall_right"))   strcpy(szOut, "walljump_right");
    else                                          strcpy(szOut, "walljump_back");
}

void CBasePlayer::ResetWallJumpVars(void)
{
    f_3cc = f_3d0 = f_3d4 = 0;           // [OK] direção salva do pulo
    f_3a0 = 0;
    f_6c8 = 0;
    f_37c = 0;
    m_flSpeedMult = 1.0f;
    pev->iuser3 = 0;
    pev->vuser4 = Vector(0, 0, 0);
    m_Swoop.ResetAllDT();
    m_Swoop.AddAllToNullKeyset();
}

void CBasePlayer::EnableWallJump(Vector vecWall)
{
    if (!f_364 && !f_334 && !f_330 && !m_fBlocking && !f_340 && !f_770 && !f_37c && !f_6bc &&
        CanFly() && !f_33c && !f_354)
    {
        if (m_fFlying) StopFly();
        UTIL_MakeVectors(pev->angles);
        f_6c8 = 1;
        f_37c = 1;
        m_flSpeedMult = 0;
        f_3cc = gpGlobals->v_forward.x;      // [OK] direção salva = v_forward atual (+0x3cc..)
        f_3d0 = gpGlobals->v_forward.y;
        f_3d4 = gpGlobals->v_forward.z;
        f_3a0 = gpGlobals->time;
        m_Swoop.ResetAllDT();
        m_Melee.RemoveAllAnims();

        char szAnim[64];
        GetWallJumpAnim("grabwall_", vecWall, szAnim);
        Vector ang = UTIL_VecToAngles(vecWall);          // usa o vetor original, não o normalizado
        if (!strcmp(szAnim, "grabwall_forward")) {
            ang.y += 180.0f; if (ang.y > 180.0f) ang.y -= 360.0f;
            ang.x = -ang.x;
        } else if (!strcmp(szAnim, "grabwall_left")) {
            ang.y += 90.0f;  if (ang.y > 180.0f) ang.y -= 360.0f;
        } else if (!strcmp(szAnim, "grabwall_right")) {
            ang.y -= 90.0f;  if (ang.y < -180.0f) ang.y += 360.0f;
        }
        Vector ang2(-ang.x, ang.y, ang.z);
        UTIL_MakeVectors(ang2);
        Vector vecDir = gpGlobals->v_forward;
        m_Melee.AddAnimationAFix(vecDir, true, gpGlobals->time, szAnim);   // [?] flag true = animação de entrada
        return;
    }
    float flSpeed = m_flSpeedMult;                       // condições falharam: limpa mas preserva a velocidade
    ResetWallJumpVars();
    m_flSpeedMult = flSpeed;
}

void CBasePlayer::DisableWallJump(void)
{
    if (m_Melee.CanPlayAnimation()) {
        char szAnim[64];
        GetWallJumpAnim((char *)m_Melee.GetCurrentAnim(), szAnim);   // GetCurrentAnim aponta para m_szName[0]
        Vector vecDir(f_3cc, f_3d0, f_3d4);
        plrmelee_anim_s *pAnim = m_Melee.AddAnimationAFix(vecDir, false, gpGlobals->time, szAnim);
        m_Melee.SetAnimPriority((ANIM_PRIORITY)3, pAnim);
    }
    EMIT_SOUND_DYN(edict(), CHAN_WEAPON /*4*/, "weapons/walljumps.wav", 1.0f, 0.8f, 0, 100);
    if (m_pActiveItem) {
        CBasePlayerWeapon *pWeapon = (CBasePlayerWeapon *)m_pActiveItem->GetWeaponPtr();   // [?] vfunc +300
        if (pWeapon) pWeapon->m_flNextPrimaryAttack = pWeapon->m_flNextSecondaryAttack = gpGlobals->time + 0.2f;
    }
    ResetWallJumpVars();
}

void CBasePlayer::RemoveWallJump(void)
{
    UTIL_Model_RemoveAll(ENTINDEX(edict()));
    m_Melee.RemoveAnim(m_Melee.GetCurrentAnim());
    ResetWallJumpVars();
}

// Chamado todo frame (PreThink): detecta o toque na parede (iuser3) e liga/desliga o estado.
void CBasePlayer::CheckWallJump(void)
{
    if ((pev->movetype == MOVETYPE_WALK || pev->movetype == 14) && pev->iuser3) {
        if (f_3a8) { pev->iuser3 = 0; return; }          // [?] +0x3a8: bloqueio (cooldown)
        if (!f_6c4) {
            f_6c4 = 1;
            EnableWallJump(pev->vuser4);
            if (!f_6c4) return;
        }
        if (pev->iuser3) return;
        f_6c4 = 0;
        if (f_6c8) DisableWallJump();
        return;
    }
    if (f_6c4) f_6c4 = 0;
    if (f_6c8) DisableWallJump();
}
