// pm_esf.cpp -- funcoes de movimento (pm_shared) EXCLUSIVAS do ESF: wall jump, PM_VecToAngles, PM_MakeJump, PM_RideBeam/PM_PlayerToss.
// RECUPERADO de decomp_raw/_funcoes_livres. `pmove` e o playermove_t* global. Offsets conferidos contra o playermove_t do SDK (32 bits):
//   velocity 0x5c, origin 0x38, forward 0x14, right 0x20, oldbuttons 0xc8, movetype 0xdc, onground 0xe0, waterlevel 0xe4, cmd.buttons 0x45476,
//   vuser4 0x240, iuser3 0x204, flDuckTime 0x8c (REUSADO pelo ESF como cronometro do wall jump [?]).
#include <math.h>
#include "extdll.h"
#include "util.h"
#include "const.h"
#include "pm_defs.h"
#include "pm_shared.h"
#include "pm_movevars.h"

extern playermove_t *pmove;
extern void PM_FlyMove(void);
extern void PM_FixupGravityVelocity(void);
extern void VectorNormalize(float *v);
#define PMB(off,type) (*(type *)((char *)pmove + (off)))
#define PM_WJ_TIMER   PMB(0x8c, float)        // [?] flDuckTime reutilizado
#define PM_WJ_STATE   PMB(0x204, int)         // [OK] iuser3: 1 = grudado na parede
#define PM_WJ_NORMAL(i) ((&PMB(0x240, float))[i])   // [OK] vuser4 = normal da parede
#define PM_BUTTONS    PMB(0x45476, unsigned short)  // [OK] cmd.buttons

// Angulos (pitch negado) a partir de um vetor. [OK]
void PM_VecToAngles(float *forward, float *angles)
{
    float yaw, pitch;
    if (forward[1] == 0 && forward[0] == 0)
    {
        yaw = 0;
        pitch = (forward[2] > 0) ? 90.0f : 270.0f;
    }
    else
    {
        if (forward[0] != 0)
            yaw = (float)(int)(atan2f(forward[1], forward[0]) * 180.0 / 3.141592653589793);
        else
            yaw = (forward[1] > 0) ? 90.0f : -90.0f;
        if (yaw < 0) yaw += 360.0f;
        float tmp = sqrt(forward[0] * forward[0] + forward[1] * forward[1]);
        pitch = (float)(int)(atan2f(forward[2], tmp) * 180.0 / 3.141592653589793);
        if (pitch < 0) pitch += 360.0f;
    }
    angles[0] = -pitch;                                  // [OK] diferente de VectorAngles do SDK: pitch negado
    angles[1] = yaw;
    angles[2] = 0;
}

// Forca extra do pulo: quanto mais cedo (timer alto), maior. [OK]
float PM_WalljumpExtra(void)
{
    return (1.0 - PM_WJ_TIMER / 1160.0) * 350.0;
}

void PM_WallJumpPush(void)
{
    float flPush = PM_WalljumpExtra() + 600.0;
    float flUp = flPush + flPush;                        // [OK] 2 * (extra + 600)
    if (flUp > 1400.0f) flUp = 1400.0f;                  // [OK]
    for (int i = 0; i < 3; i++)
        pmove->velocity[i] = flPush * PM_WJ_NORMAL(i);   // [OK] empurra na direcao da normal
    pmove->velocity[2] = flUp;
    if (PM_BUTTONS & 2)                                  // [OK] consome o pulo (IN_JUMP)
    {
        PM_BUTTONS &= ~2;
        pmove->oldbuttons |= 2;
    }
}

// Retorna 1 se o jogador esta grudado na parede (o movimento normal deve parar). [OK] estrutura; nomes `[?]`
int PM_WallJump(void)
{
    if (PM_BUTTONS & 2)                                  // IN_JUMP pressionado
    {
        if (!(pmove->oldbuttons & 2) && !PM_WJ_STATE && PM_WJ_TIMER == 0.0f)
        {
            if (pmove->waterlevel <= 1)
            {
                vec3_t dir, end;
                dir[0] = pmove->velocity[0]; dir[1] = pmove->velocity[1]; dir[2] = 0;
                VectorNormalize(dir);                    // [OK] por padrao: direcao horizontal atual
                if (PM_BUTTONS & 8)        { for (int i = 0; i < 3; i++) dir[i] = pmove->forward[i]; }    // IN_FORWARD
                else if (PM_BUTTONS & 16)  { for (int i = 0; i < 3; i++) dir[i] = -pmove->forward[i]; }   // IN_BACK
                else if (PM_BUTTONS & (256 | 1024)) { for (int i = 0; i < 3; i++) dir[i] = pmove->right[i]; }    // RIGHT|MOVERIGHT
                else if (PM_BUTTONS & (128 | 512))  { for (int i = 0; i < 3; i++) dir[i] = -pmove->right[i]; }   // LEFT|MOVELEFT
                else if (pmove->movetype == 14)
                    return 0;
                for (int i = 0; i < 3; i++)
                    end[i] = dir[i] * 64.0f + pmove->origin[i];       // [OK] sonda de 64 unidades
                pmtrace_t tr = pmove->PM_PlayerTrace(pmove->origin, end, PM_NORMAL, -1);
                if (tr.fraction != 1.0f && !tr.allsolid)
                {
                    vec3_t ang;
                    PM_VecToAngles(tr.plane.normal, ang);
                    int iPitch = (int)ang[0];
                    if (iPitch < -180) iPitch += 360;
                    if (iPitch < 0) iPitch = -iPitch;
                    if (iPitch <= 45 && !tr.ent)                      // [OK] parede quase vertical e do mundo
                    {
                        PM_WJ_TIMER = 1160.0f;                        // [OK]
                        pmove->velocity[0] = pmove->velocity[1] = pmove->velocity[2] = 0;
                        for (int i = 0; i < 3; i++) pmove->origin[i] = tr.endpos[i];         // [OK] cola na parede
                        for (int i = 0; i < 3; i++) PM_WJ_NORMAL(i) = tr.plane.normal[i];
                        PM_WJ_STATE = 1;
                        return 1;
                    }
                }
            }
        }
        else if (PM_WJ_TIMER > 0.0f && PM_WJ_STATE == 1)
        {
            pmove->velocity[0] = pmove->velocity[1] = pmove->velocity[2] = 0;   // [OK] mantem grudado
            return 1;
        }
    }
    else if (PM_WJ_STATE == 1)                           // soltou o pulo: salta da parede
    {
        PM_WallJumpPush();
        PM_WJ_TIMER = 0;
        PM_WJ_STATE = 0;
        for (int i = 0; i < 3; i++) PM_WJ_NORMAL(i) = 0;
    }
    return 0;
}

// [OK] multiplicador literal 0.0 no binario (fldz): efeito nulo, so zera onground e fixa vel.z = 1000
void PM_MakeJump(float flMult)
{
    pmove->onground = -1;
    vec3_t v;
    for (int i = 0; i < 3; i++) v[i] = pmove->velocity[i];
    VectorNormalize(v);
    pmove->velocity[0] += 0.0f * v[0];
    pmove->velocity[1] += 0.0f * v[1];
    pmove->velocity[2] = 1000.0f;
    PM_FixupGravityVelocity();
}

void PM_PlayerToss(void)
{
    for (int i = 0; i < 3; i++) pmove->velocity[i] = PM_WJ_NORMAL(i);   // [OK] velocity = vuser4 (aqui vuser4 = velocidade de tiro)
    PM_FlyMove();
}
void PM_RideBeam(void)
{
    for (int i = 0; i < 3; i++) pmove->velocity[i] = PM_WJ_NORMAL(i);   // [OK] idem (corpo identico ao de PM_PlayerToss)
    PM_FlyMove();
}
