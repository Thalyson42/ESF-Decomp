// shenlong.cpp -- CShenlong 7/7. RECUPERADO de decomp_raw/CShenlong. [OK] = conferido, [?] = adivinhado.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "animation.h"
#include "effects.h"
#include "weapons.h"
#include "player.h"
#include "dragonball.h"
#include "shenlong.h"

void CShenlong::Spawn(void)
{
    Precache();                                          // [OK] vtable slot 1
    SET_MODEL(ENT(pev), "models/shenlong.mdl");
    pev->movetype = 13;
    pev->solid = SOLID_TRIGGER;                          // [OK] +0x10c = 1
    UTIL_SetSize(pev, Vector(-128, -128, 0), Vector(128, 128, 500));   // [OK]
    pev->sequence = 0; pev->frame = 0; pev->framerate = 0;   // [OK] memset(pev+0x128, 0, 12)
    ResetSequenceInfo();
    for (int i = 0; i <= 1; i++)
    {
        CSprite *pEye = CSprite::SpriteCreate("sprites/shens_eyes.spr", pev->origin, FALSE);
        m_pEyes[i] = pEye;
        pEye->pev->rendermode = kRenderTransAdd;         // [OK] 5
        pEye->pev->rendercolor = Vector(255, 255, 255);
        pEye->pev->renderamt = 0;
        pEye->pev->renderfx = 0;
        if (edict())
        {
            pEye->pev->skin = ENTINDEX(edict());         // [OK] segue o dragao
            pEye->pev->body = i + 1;                     // attachment
            pEye->pev->aiment = edict();
            pEye->pev->movetype = MOVETYPE_FOLLOW;       // [OK] 12
        }
        pEye->pev->renderamt = 0;
        pEye->TurnOff();
    }
}

void CShenlong::Precache(void)
{
    PRECACHE_MODEL("models/shenlong.mdl");
    PRECACHE_MODEL("sprites/shens_eyes.spr");
    PRECACHE_SOUND("dragon/makewish1.wav");
    PRECACHE_SOUND("dragon/grantwish.wav");
}

CShenlong *CShenlong::CreateShenlong(Vector vecOrigin, Vector vecDir, CDragonBall **ppBalls)
{
    CShenlong *pDragon = GetClassPtr((CShenlong *)NULL);
    pDragon->Spawn();
    for (int i = 0; i <= 6; i++)
        pDragon->m_pBalls[i] = ppBalls[i];               // [OK]
    UTIL_SetOrigin(pDragon->pev, vecOrigin);
    pDragon->pev->angles = UTIL_VecToAngles(vecDir);     // [OK]
    char szSound[64];
    sprintf(szSound, "dragon/makewish%d.wav", RANDOM_LONG(1, 1));
    EMIT_SOUND_DYN(ENT(pDragon->m_pBalls[0]->pev), CHAN_VOICE, szSound, 1.0, ATTN_NONE, 0, 100);   // [OK] canal 1
    pDragon->SetThink(&CShenlong::PissedThink);
    pDragon->pev->nextthink = gpGlobals->time + 15.0;    // [OK] se ninguem decidir em 15 s, o dragao se irrita
    return pDragon;
}

void CShenlong::PissedThink(void)
{
    pev->frame = 0;
    pev->sequence = LookupSequence("talk");
    pev->framerate = 0;
    ResetSequenceInfo();
    pev->nextthink = gpGlobals->time + 15.0;             // [OK] repete
}

void CShenlong::GrantWish(void)
{
    for (int i = 0; i <= 6; i++)
        if (m_pBalls[i])
            m_pBalls[i]->m_fStone = 1;                   // [OK] as esferas viram pedra (+0x64)
    SetThink(&CShenlong::WishGrantThink);
    pev->nextthink = gpGlobals->time;
    m_pEyes[0]->TurnOn();
    m_pEyes[1]->TurnOn();
    m_iAlpha = 0;
    m_fRising = 1;
    m_iPulses = 6;
}

void CShenlong::WishGrantThink(void)
{
    if (m_iPulses < 0)                                   // [OK] terminou de pulsar
    {
        EMIT_SOUND_DYN(ENT(m_pBalls[0]->pev), CHAN_VOICE, "dragon/grantwish.wav", 1.0, ATTN_NONE, 0, 100);
        for (int i = 0; i <= 6; i++)
            if (m_pBalls[i])
                m_pBalls[i]->Spread();                   // [OK] esferas voam
        UTIL_Remove(m_pEyes[0]);
        UTIL_Remove(m_pEyes[1]);
        pev->frame = 0;
        pev->sequence = LookupSequence("wish_granted");
        pev->framerate = 0;
        ResetSequenceInfo();
        SUB_StartFadeOut();
        return;
    }
    if (m_fRising)
    {
        m_iAlpha += 60;
        if (m_iAlpha > 255) { m_iAlpha = 255; m_fRising = 0; }
    }
    else
    {
        m_iAlpha -= 60;
        if (m_iAlpha < 0)                                // [?] comparacao vem de uma instrucao _ccall (limite -60?)
        {
            m_iAlpha = 0;
            m_iPulses--;
            m_fRising = 1;
        }
    }
    m_pEyes[0]->pev->renderamt = m_iAlpha;               // [OK]
    m_pEyes[1]->pev->renderamt = m_iAlpha;
    pev->nextthink = gpGlobals->time + 0.2;
}

void CShenlong::Touch(CBaseEntity *pOther)
{
    if (pOther->IsPlayer())
    {
        if (pOther->pev->origin.z <= pev->origin.z)      // [OK] so empurra quem esta acima da origem do dragao
            return;
        Vector vecDelta = pev->origin - pOther->pev->origin;
        vecDelta.z = 0;
        if (vecDelta.Length() <= 0)
        {
            pOther->pev->velocity.x = 250;               // [OK]
            pOther->pev->velocity.y = 0;
            return;
        }
        Vector vecDir = vecDelta.Normalize();
        pOther->pev->velocity.x = 250 * vecDir.x;        // [OK] velocidade horizontal de 250 u/s
        pOther->pev->velocity.y = 250 * vecDir.y;
    }
    else if (FStrEq(STRING(pOther->pev->classname), "magic_attack"))   // [OK] o dragao encara quem atacou
    {
        if (pOther->pev->owner)
        {
            CBaseEntity *pAttacker = CBaseEntity::Instance(pOther->pev->owner);
            pev->angles = UTIL_VecToAngles(pAttacker->pev->origin - pev->origin);
        }
        pev->frame = 0;
        pev->sequence = LookupSequence("lounge");
        pev->framerate = 0;
        ResetSequenceInfo();
    }
}
