// collide_esf.cpp -- deteccao de colisao do ESF (usada pelos bots/melee). [OK] CheckForCollide @0x17d330
#include "extdll.h"
#include "util.h"
#include "cbase.h"

float UTIL_WrapAngle(float a);

// Direcao testada por cada bit de flags. O original e uma cadeia de ifs; aqui e uma tabela na MESMA ordem.
//   eixo: 0 = v_right, 1 = v_forward, 2 = v_up (de UTIL_MakeVectors)
//   pitch/yaw: se pitchSet, angles.x = pitch; yawAdd soma ao yaw (com UTIL_WrapAngle); sinal -1 recua em vez de avancar.
struct CollideDir { int mask; int axis; int sign; int pitchSet; float pitch; int yawAdd; };

static const CollideDir g_CollideDirs[] =
{
    { 0x2,     0, -1, 0,   0,  0 },    // esquerda
    { 0x4,     0, +1, 0,   0,  0 },    // direita
    { 0x8,     1, -1, 0,   0,  0 },    // tras
    { 0x10,    1, +1, 0,   0,  0 },    // frente
    { 0x20,    2, +1, 0,   0,  0 },    // cima
    { 0x40,    2, -1, 0,   0,  0 },    // baixo
    { 0x100,   1, +1, 1, -45,  0 },    // pitch -45 (olhando para cima), frente
    { 0x200,   1, +1, 1, +45,  0 },    // pitch +45, frente
    { 0x400,   1, +1, 1, -45, -45 },
    { 0x800,   1, +1, 1, -45, +45 },
    { 0x1000,  1, -1, 1, -45, -45 },
    { 0x2000,  1, -1, 1, -45, +45 },
    { 0x4000,  1, +1, 1, +45, -45 },
    { 0x8000,  1, +1, 1, +45, +45 },   // [OK] original testa (short)flags < 0
    { 0x10000, 1, -1, 1, +45, -45 },
    { 0x20000, 1, -1, 1, +45, +45 },
    { 0x40000, 1, -1, 0,   0, -45 },
    { 0x80000, 1, -1, 0,   0, +45 },
    { 0x80000, 1, +1, 0,   0, +45 },   // [OK] no binario ha DOIS testes seguidos de 0x80000 com +45 no yaw (copia/cola do original)
    { 0x80000, 1, +1, 0,   0, +45 },   // ... e um terceiro idêntico no fim, sem outro efeito
};

// true (1) se algum trace de hull de comprimento fDist a partir da origem de pEdict, nas direcoes pedidas em iFlags, bater em algo.
// iFlags == 128 testa todas as direcoes.
char CheckForCollide(edict_t *pEdict, int iFlags, float fDist)
{
    UTIL_MakeVectors(pEdict->v.v_angle);

    for (unsigned i = 0; i < sizeof(g_CollideDirs) / sizeof(g_CollideDirs[0]); i++)
    {
        const CollideDir &d = g_CollideDirs[i];
        if (!(iFlags & d.mask) && iFlags != 128)
            continue;

        Vector vecAxis;
        if (d.mask > 0x40)                                 // diagonais: refaz os vetores com angulos modificados
        {
            Vector vecAngles = pEdict->v.v_angle;
            if (d.pitchSet)
                vecAngles.x = d.pitch;
            if (d.yawAdd)
                vecAngles.y = UTIL_WrapAngle(vecAngles.y + d.yawAdd);
            UTIL_MakeVectors(vecAngles);
            vecAxis = gpGlobals->v_forward;
        }
        else
        {
            vecAxis = d.axis == 0 ? gpGlobals->v_right : (d.axis == 1 ? gpGlobals->v_forward : gpGlobals->v_up);
        }

        Vector vecStart = pEdict->v.origin;
        Vector vecEnd = d.sign > 0 ? vecStart + vecAxis * fDist : vecStart - vecAxis * fDist;

        TraceResult tr;
        UTIL_TraceHull(vecStart, vecEnd, dont_ignore_monsters, head_hull, pEdict, &tr);
        if (tr.flFraction < 1.0f)
            return 1;
    }
    return 0;
}
