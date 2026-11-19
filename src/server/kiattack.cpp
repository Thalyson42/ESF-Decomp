// kiattack.cpp -- RECUPERADO de decomp_raw/CKiAttack (5 funcoes). [OK] valores do decompilado; [?] nomes de campos.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "kiattack.h"

extern int gmsgFlare;
extern int gmsgExplosion;
class CBlob { public: static void CreateBlob(CBaseEntity *pOwner, Vector vecPos); };   // [?] assinatura (decomp_raw/CBlob)

// campos extras de CKiAttack para o tiro curvo [?] nomes
#define KI_CURVE(p)     (*(Vector *)((char *)(p) + 0x2dc))   // deslocamento lateral
#define KI_BASEVEL(p)   (*(Vector *)((char *)(p) + 0x2e8))   // velocidade base
#define KI_DECAY(p)     (*(Vector *)((char *)(p) + 0x2f4))   // quanto o deslocamento perde por segundo
#define KI_STARTTIME(p) (*(float *)((char *)(p) + 0x300))

float CKiAttack::GetExplosionRadius(void)
{
    return 80.0f;                                                      // [OK]
}

CKiAttack *CKiAttack::ShootKiAttack(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity, int iDamage,
                                    short sSpriteA, short sSpriteB, short sSpriteTrail)
{
    CKiAttack *p = GetClassPtr((CKiAttack *)NULL);                     // [OK]
    p->Spawn();                                                        // [OK] slot 0
    p->pev->movetype = MOVETYPE_FLY;                                   // [OK] 5
    p->pev->solid = SOLID_TRIGGER;                                     // [OK] 1
    SET_MODEL(ENT(p->pev), "sprites/null.spr");
    if (iDamage > 9999) iDamage = 9999;
    p->pev->dmg = (float)iDamage;                                      // [OK] +0x1e0
    UTIL_SetOrigin(p->pev, vecOrigin + vecVelocity.Normalize() * 8);   // [OK] 8.0 a frente
    float flRadius = 0.25f * 25.0f;                                    // [OK] 6.25
    UTIL_SetOrigin(p->pev, vecOrigin + vecVelocity.Normalize() * flRadius);   // [OK] (segunda chamada, mesmo padrao do ScatterShot)
    UTIL_SetSize(p->pev, Vector(-flRadius, -flRadius, -flRadius), Vector(flRadius, flRadius, flRadius));
    p->pev->velocity = vecVelocity;                                    // [OK]
    p->m_flSpeed = vecVelocity.Length();                               // [OK] +0x2a8
    p->pev->angles = UTIL_VecToAngles(vecVelocity);
    p->pev->classname = MAKE_STRING("kiblast");                        // [OK] string em 0x5a1008
    p->m_fVaporized = 0;                                               // [OK] +0x2c4
    p->m_fRemoveOnVaporize = 1;                                        // [OK] +0x2c8
    p->SetTouch(&CExplodingAttack::ExplodeTouch);                      // [OK]
    MESSAGE_BEGIN(MSG_ALL, gmsgFlare);                                 // [OK] tipo 2
        WRITE_LONG(ENTINDEX(ENT(p->pev)));
        WRITE_SHORT(sSpriteA);
        WRITE_SHORT(sSpriteB);
        WRITE_SHORT((int)(0.1 * 25.0));                                // [OK]
        WRITE_SHORT(sSpriteTrail);
        WRITE_SHORT(70);                                               // [OK]
        WRITE_COORD(vecOrigin.x);
        WRITE_COORD(vecOrigin.y);
        WRITE_COORD(vecOrigin.z);
    MESSAGE_END();
    p->SetThink(&CMagicAttack::NormalThink);                           // [OK]
    p->pev->nextthink = gpGlobals->time;                               // [OK] +0x104
    p->pev->owner = ENT(pevShooter);                                   // [?] nao visivel
    return p;
}

CKiAttack *CKiAttack::ShootCurvedKiAttack(entvars_t *pevShooter, Vector vecOrigin, Vector vecVelocity, int iDamage,
                                          short sSpriteA, short sSpriteB, short sSpriteTrail)
{
    CKiAttack *p = ShootKiAttack(pevShooter, vecOrigin, vecVelocity, iDamage, sSpriteA, sSpriteB, sSpriteTrail);   // [OK]
    float flAngle = RANDOM_FLOAT(10.0, 20.0) * 6.283185307179586 / 360.0;   // [OK] desvio de 10..20 graus
    float flAmp = cos(flAngle) * p->m_flSpeed;                         // [?] amplitude lateral (o decompilado calcula sin e cos; usa o produto com a velocidade)
    UTIL_MakeVectors(p->pev->angles);                                  // [OK]
    Vector vecCurve = gpGlobals->v_right * (flAmp * RANDOM_FLOAT(-1, 1)) + gpGlobals->v_up * (flAmp * RANDOM_FLOAT(-1, 1));   // [OK] sorteio lateral +-1
    KI_CURVE(p) = vecCurve;                                            // [OK] +0x2dc
    // distancia livre a frente (ate 4096) define em quanto tempo o desvio se anula
    TraceResult tr;
    UTIL_TraceLine(p->pev->origin, p->pev->origin + vecVelocity.Normalize() * 4096, ignore_monsters, NULL, &tr);   // [OK] 4096.0
    float flDist = (tr.vecEndPos - p->pev->origin).Length();
    float flTime = 0.5 * flDist / vecVelocity.Length();                // [OK] 0.5 * dist / velocidade
    KI_DECAY(p) = vecCurve * (1.0 / flTime);                           // [OK] +0x2f4
    p->SetThink(&CKiAttack::CurveThink);                               // [OK]
    p->pev->nextthink = gpGlobals->time;
    p->pev->velocity = vecVelocity + vecCurve;                         // [OK] velocidade inicial ja desviada
    KI_STARTTIME(p) = gpGlobals->time;                                 // [OK] +0x300
    KI_BASEVEL(p) = vecVelocity;                                       // [OK] +0x2e8
    return p;
}

void CKiAttack::CurveThink(void)
{
    float dt = gpGlobals->time - KI_STARTTIME(this);                   // [OK]
    pev->velocity = (KI_BASEVEL(this) + KI_CURVE(this)) - KI_DECAY(this) * dt;   // [OK] o desvio lateral diminui linearmente
    // [?] angulos recalculados a partir da velocidade (o decompilado le pev->velocity mas descarta o resultado)
    CMagicAttack::NormalThink();                                       // [OK]
    pev->nextthink = gpGlobals->time + 0.05;                           // [OK] 0.05
}

void CKiAttack::DrawExplosionFX(int iRadius, Vector vecPos)
{
    MESSAGE_BEGIN(MSG_ALL, gmsgExplosion);                             // [OK] tipo 2
        WRITE_COORD(vecPos.x);
        WRITE_COORD(vecPos.y);
        WRITE_COORD(vecPos.z);
        WRITE_LONG(iRadius);
        WRITE_BYTE(4);                                                 // [OK]
    MESSAGE_END();
    if (strcmp(STRING(pev->classname), "kiblast"))                     // [OK] so para kiblast
        return;
    if (!pev->owner)
        return;
    CBaseEntity *pEnt = NULL;
    while ((pEnt = UTIL_FindEntityInSphere(pEnt, vecPos, (float)iRadius)) != NULL)   // [OK]
    {
        if (pEnt->IsPlayer() && ((int *)pEnt)[0x4c4 / 4])             // [?] +0x4c4: jogador protegido/imune
            return;
    }
    // memoria das duas ultimas explosoes do dono: com duas a menos de 150 uma da outra e 1s de intervalo, cria uma "blob"
    CBaseEntity *pOwner = CBaseEntity::Instance(pev->owner);          // [OK]
    float *f = (float *)pOwner;                                        // [?] campos do jogador: [356],[357] = tempos; [425..427] e [428..430] = posicoes
    if (f[356] == -1.0f)
    {
        f[356] = gpGlobals->time;
        f[425] = vecPos.x;  f[426] = vecPos.y;  f[427] = vecPos.z;
    }
    else if (f[357] == -1.0f)
    {
        f[357] = gpGlobals->time;
        f[428] = vecPos.x;  f[429] = vecPos.y;  f[430] = vecPos.z;
    }
    else
    {
        f[356] = gpGlobals->time;                                      // [OK] as duas vagas cheias: recomeca na primeira
        f[425] = vecPos.x;  f[426] = vecPos.y;  f[427] = vecPos.z;
        f[357] = -1.0f;
    }
    if (f[356] == -1.0f || f[357] == -1.0f)
        return;
    if (1.0 > f[357] - f[356])                                         // [OK] menos de 1 segundo entre as duas
    {
        Vector d(f[425] - f[428], f[426] - f[429], f[427] - f[430]);
        if (d.Length() >= 150.0f)                                      // [OK] 150.0
            return;
        Vector mid((f[425] + f[428]) * 0.5, (f[426] + f[429]) * 0.5, (f[427] + f[430]) * 0.5);   // [OK] ponto medio
        CBlob::CreateBlob(pOwner, mid);                                // [OK]
        f[356] = -1.0f;                                                // [OK] limpa os dois tempos
        f[357] = -1.0f;
    }
}
