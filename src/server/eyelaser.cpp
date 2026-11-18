// eyelaser.cpp -- RECUPERADO de decomp_raw/CEyelaser (14 funcoes). [OK] valores do decompilado; [?] nomes.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "decals.h"
#include "eyelaser.h"


void CEyelaser::Spawn(void)
{
    Precache();                // [OK] vtable slot 1
    m_iId = 9;                 // [OK] +0x88
    m_iDefaultAmmo = 0;        // +0xc0
    m_iClip = -1;              // +0xb0
    m_pBeam1 = NULL;  m_pBeam2 = NULL;  m_fFiring = 0;  m_fSoundPlayed = 0;   // [OK] +0xc4,+0xc8,+0xcc,+0xd4
    FallInit();
}

void CEyelaser::Precache(void)
{
    PRECACHE_MODEL("sprites/eyelaser.spr");
    PRECACHE_SOUND("weapons/melt.wav");
    PRECACHE_SOUND("weapons/eyebeam_fire.wav");
}

int CEyelaser::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 4;
    p->iPosition = 2;
    m_iId = p->iId = 9;
    p->iWeight   = 20;
    p->iFlags    = 0;
    return 1;
}

BOOL CEyelaser::Deploy(void)
{
    m_pBeam1 = CreateLaser(2);                  // [OK]
    m_pBeam2 = CreateLaser(3);                  // [OK]
    m_pBeam1->SetStartAttachment(3);            // [OK] pev+0x128: (x & 0xfff) | 0x3000
    m_pBeam2->SetStartAttachment(2);            // [OK] (x & 0xfff) | 0x2000
    m_iShots = 0;                               // [OK] +0xd0
    return DefaultDeploy("eyelaser", "", 0, "");   // [?] so o 1o argumento aparece
}

void CEyelaser::Holster(int skiplocal)
{
    DestroyLaser(m_pBeam1);                     // [OK]
    DestroyLaser(m_pBeam2);
    m_fSoundPlayed = 0;                         // [OK] +0xd4
}

CBeam *CEyelaser::CreateLaser(int iAttachment)
{
    CBeam *pBeam = CBeam::BeamCreate("sprites/eyelaser.spr", 3);   // [OK] largura 3
    pBeam->pev->rendermode = 5;                 // [OK] +0x148
    pBeam->pev->renderamt = 255;                // [OK] +0x14c
    pBeam->SetEndEntity(ENTINDEX(m_pPlayer->edict()));
    pBeam->SetEndAttachment(iAttachment);       // [OK] skin = (skin & 0xfff) | (a & 15) << 12
    pBeam->SetStartEntity(ENTINDEX(m_pPlayer->edict()));
    SetRedEye(pBeam);                           // [OK]
    return pBeam;
}

void CEyelaser::DestroyLaser(CBeam *pBeam)
{
    if (pBeam)
        UTIL_Remove(pBeam);                     // [OK]
}

void CEyelaser::SetBeam(CBeam *pBeam)
{
    pBeam->pev->rendermode = (pBeam->pev->rendermode & 0xF0) | 1;   // [OK] BEAM_ENTPOINT
    pBeam->RelinkBeam();
}

void CEyelaser::SetRedEye(CBeam *pBeam)
{
    pBeam->pev->rendermode = (pBeam->pev->rendermode & 0xF0) | 2;   // [OK] BEAM_ENTS
    pBeam->RelinkBeam();
}

void CEyelaser::WeaponIdle(void)
{
    if (m_fFiring)
    {
        SetRedEye(m_pBeam1);                    // [OK]
        SetRedEye(m_pBeam2);
        m_fFiring = 0;
        m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + (m_iShots * 2) / 5.0;   // [OK]
        m_iShots = 0;
    }
    if (m_fSoundPlayed)
        m_fSoundPlayed = 0;                     // [OK]
}

void CEyelaser::SecondaryAttack(void)
{
    vf_148();                                   // [OK] vtable +0x148
}

void CEyelaser::PrimaryAttack(void)
{
    if (m_pPlayer->UseKi(50))                   // [OK] 50 de ki por tick
    {
        if (!m_fFiring)
        {
            SetBeam(m_pBeam1);                  // [OK]
            SetBeam(m_pBeam2);
            m_fFiring = 1;
        }
        if (!m_fSoundPlayed)
        {
            m_fSoundPlayed = 1;
            EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/eyebeam_fire.wav", 1.0, 0.8, 0, 100);
        }
        Vector vecStart1 = m_pBeam1->GetEndPos();   // [OK]
        Vector vecStart2 = m_pBeam2->GetEndPos();
        UTIL_MakeVectors(m_pPlayer->pev->v_angle);
        Vector gun = m_pPlayer->GetGunPosition();
        Vector vecEnd = gun + gpGlobals->v_forward * 8192;           // [OK]
        TraceResult tr;
        UTIL_TraceLine(gun, vecEnd, dont_ignore_monsters, ENT(m_pPlayer->pev), &tr);
        Vector vecOffset = gpGlobals->v_right * 2;                   // [OK] 2*right (v39[1] + v39[1])
        Vector vecTarget1 = tr.vecEndPos - vecOffset;                // [OK] os dois lasers convergem a 4 unidades
        Vector vecTarget2 = tr.vecEndPos + vecOffset;
        ShootLaser(m_pBeam1, vecStart1, vecTarget1);
        ShootLaser(m_pBeam2, vecStart2, vecTarget2);
        if (m_iShots > 4)
        {
            vf_148();                                                // [OK] limite de 5 disparos seguidos
            return;
        }
        m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.2;         // [OK]
        m_iShots++;
    }
    else if (m_fFiring)
    {
        SetRedEye(m_pBeam1);                                         // [OK] sem ki: apaga os lasers
        SetRedEye(m_pBeam2);
        m_fFiring = 0;
    }
}

void CEyelaser::ShootLaser(CBeam *pBeam, Vector vecStart, Vector vecTarget)
{
    Vector vecDiff = vecTarget - vecStart;
    Vector vecEnd = vecStart + vecDiff * 500;                        // [OK] literal: 500 * (alvo - inicio) [?] pode ser a direcao normalizada
    TraceResult tr;
    CBaseEntity *pEntity;
    do
    {
        UTIL_TraceLine(vecStart, vecEnd, dont_ignore_monsters, ENT(m_pPlayer->pev), &tr);   // [OK]
        vecStart = tr.vecEndPos;                                     // [OK]
        pEntity = CBaseEntity::Instance(tr.pHit);
    } while (pEntity && pEntity->pev->owner == ENT(m_pPlayer->pev) && tr.flFraction < 1.0);   // [?] ignora ataques do proprio dono
    pBeam->pev->origin = tr.vecEndPos;                               // [OK] +0x8..+0x10 do feixe
    MESSAGE_BEGIN(MSG_PVS, SVC_TEMPENTITY, tr.vecEndPos);            // [OK] tipo 4, id 23
        WRITE_BYTE(TE_SMOKE);                                        // [OK] 5
        WRITE_COORD(tr.vecEndPos.x);
        WRITE_COORD(tr.vecEndPos.y);
        WRITE_COORD(tr.vecEndPos.z);
        WRITE_SHORT(g_sModelIndexSmoke);
        WRITE_BYTE(2);                                               // [OK] escala
        WRITE_BYTE(5);                                               // [OK] framerate
    MESSAGE_END();
    UTIL_DecalTrace(&tr, DECAL_GUNSHOT1);                            // [OK] 0
    float flMult = 1.0f;
    if (pEntity && pEntity->IsPlayer() && ((CBasePlayer *)pEntity)->f_3e4)   // [OK] vtable[38]
    {
        int s = ((CBasePlayer *)pEntity)->f_3e4;
        flMult = (s == 3 || s == 4 || s == 5) ? 0.0f : 0.5f;         // [OK] defendendo = 0 dano; outros estados 0.5
    }
    if (pEntity)
    {
        float flRatio = GetPowerRatio();
        pEntity->TakeDamage(m_pPlayer->pev, m_pPlayer->pev, flRatio * 3.0 * (1.0 - tr.flFraction) * flMult, 0x800000);   // [OK] vtable[11]
        EMIT_SOUND_DYN(ENT(pEntity->pev), CHAN_WEAPON, "weapons/melt.wav", 1.0, 0.8, 0, 100);
    }
}
