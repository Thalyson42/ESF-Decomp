// collide_esf.cpp -- deteccao de colisao do ESF (usada pelos bots/melee). [OK] CheckForCollide
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "esf_util.h"

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

// ---- GetNearestCollision / GetFurthestCollision [OK] ----
// Varre 5 pitches x 5 yaws ao redor da entidade (angulos de pev->angles normalizados por WrapAngles). Para cada combinacao traca
// um hull (ignore_monsters, hull 1) de fDist para frente e de fDist para tras a partir da origem; entre os dois pontos de impacto
// fica com o mais perto (Nearest) ou o mais longe (Furthest) e, no fim, devolve o melhor de todos (ou g_vecZero se nada bateu).
// Os deslocamentos vem de duas tabelas de salto: pitch {0,-40,40,-89,89} (x e SUBSTITUIDO, nao somado) e yaw {-90,-45,0,45,90} (somado a y).

static const float g_CollidePitch[5] = { 0.0f, -40.0f, 40.0f, -89.0f, 89.0f };
static const float g_CollideYaw[5] = { -90.0f, -45.0f, 0.0f, 45.0f, 90.0f };

// Executa os dois traces de uma combinacao; devolve distancias e pontos de impacto (frente: 1, tras: 2).
static void CollideProbe(CBaseEntity *pEntity, float fDist, int iPitch, int iYaw,
                         float &d1, Vector &p1, float &frac1, float &d2, Vector &p2, float &frac2)
{
    Vector vecAngles = WrapAngles(pEntity->pev->angles);
    vecAngles.y = UTIL_WrapAngle(g_CollideYaw[iYaw] + vecAngles.y);
    vecAngles.x = UTIL_WrapAngle(g_CollidePitch[iPitch]);
    UTIL_MakeVectors(vecAngles);

    Vector vecOffset = gpGlobals->v_forward * fDist;
    Vector vecFront = pEntity->pev->origin + vecOffset;
    Vector vecBack = pEntity->pev->origin - gpGlobals->v_forward * fDist;

    TraceResult tr1, tr2;
    UTIL_TraceHull(pEntity->pev->origin, vecFront, ignore_monsters, head_hull, pEntity->pev->pContainingEntity, &tr1);
    UTIL_TraceHull(pEntity->pev->origin, vecBack, ignore_monsters, head_hull, pEntity->pev->pContainingEntity, &tr2);

    p1 = tr1.vecEndPos;  frac1 = tr1.flFraction;  d1 = (tr1.vecEndPos - pEntity->pev->origin).Length();
    p2 = tr2.vecEndPos;  frac2 = tr2.flFraction;  d2 = (tr2.vecEndPos - pEntity->pev->origin).Length();
}

Vector GetNearestCollision(CBaseEntity *pEntity, float fDist)
{
    Vector vecBest = g_vecZero;
    float fBest = 9999.9f;

    for (int iPitch = 0; iPitch < 5; iPitch++)
    {
        for (int iYaw = 0; iYaw < 5; iYaw++)
        {
            float d1, d2, frac1, frac2;
            Vector p1, p2;
            CollideProbe(pEntity, fDist, iPitch, iYaw, d1, p1, frac1, d2, p2, frac2);

            float fCandDist;
            Vector vecCand;
            if (d2 > d1 && frac1 < 1.0f)                   // frente bateu e e mais perto
            {
                fCandDist = d1;
                vecCand = p1;
            }
            else if (d2 < d1 && frac2 < 1.0f)              // tras bateu e e mais perto
            {
                fCandDist = d2;
                vecCand = p2;
            }
            else
                continue;                                  // empate ou sem impacto util

            if (fCandDist < fBest)
            {
                fBest = fCandDist;
                vecBest = vecCand;
            }
        }
    }
    return vecBest;
}

Vector GetFurthestCollision(CBaseEntity *pEntity, float fDist)
{
    Vector vecBest = g_vecZero;
    float fBest = 0.0f;

    for (int iPitch = 0; iPitch < 5; iPitch++)
    {
        for (int iYaw = 0; iYaw < 5; iYaw++)
        {
            float d1, d2, frac1, frac2;
            Vector p1, p2;
            CollideProbe(pEntity, fDist, iPitch, iYaw, d1, p1, frac1, d2, p2, frac2);

            float fCandDist;
            Vector vecCand;
            if (d2 < d1 && frac1 < 1.0f)                   // [OK] (sem teste de frac2 neste ramo, como no binario)
            {
                fCandDist = d1;
                vecCand = p1;
            }
            else
            {
                fCandDist = d2;
                vecCand = p2;
            }

            if (fCandDist > fBest)
            {
                fBest = fCandDist;
                vecBest = vecCand;
            }
        }
    }
    return vecBest;
}
