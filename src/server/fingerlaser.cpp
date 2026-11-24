// fingerlaser.cpp -- CFingerLaser 8/8 (Holster herdado: CBasePlayerItem::Holster zera +0xbc/+0xc0 do pev). [OK] = conferido.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "effects.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "player_esf_manual.h"
#include "esf_extras.h"
#include "fingerlaser.h"

void CFingerLaser::Spawn(void)
{
    Precache();
    m_iId = 14;
    m_iDefaultAmmo = 0;
    m_iClip = -1;
    m_fHand = 0;
    FallInit();
}
void CFingerLaser::Precache(void)
{
    PRECACHE_SOUND("weapons/fingerlaser.wav");
    PRECACHE_MODEL("sprites/fingerlaserbeam.spr");
}
int CFingerLaser::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki"; p->iMaxAmmo1 = -1; p->pszAmmo2 = NULL; p->iMaxAmmo2 = -1; p->iMaxClip = -1;
    p->iSlot = 3; p->iPosition = 4;
    m_iId = p->iId = 14;
    p->iFlags = 0; p->iWeight = 15;
    return 1;
}
BOOL CFingerLaser::Deploy(void) { return DefaultDeploy("fingerlaser", "", 0, ""); }
void CFingerLaser::EmitShootSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/fingerlaser.wav", 1.0, 0.8, 0, 100);
}

CBeam *CFingerLaser::MakeBeam(Vector vecEnd)
{
    CBeam *pBeam = CBeam::BeamCreate("sprites/fingerlaserbeam.spr", 3);       // [OK] largura 3
    pBeam->PointEntInit(vecEnd, ENTINDEX(ENT(m_pPlayer->pev)));
    pBeam->SetStartAttachment(1);                                              // [OK] skin = (skin & 0xfff) | 1<<12
    pBeam->pev->renderamt = 255;                                               // [OK] +0x14c
    pBeam->pev->rendercolor = Vector(255, 255, 255);                           // [OK] +0x150..0x158
    pBeam->SetThink(&CBaseEntity::SUB_Remove);                                 // [OK]
    pBeam->pev->nextthink = gpGlobals->time + 0.75;                            // [OK]
    return pBeam;
}

// fator de dano contra jogadores em estado 3/4/5 (defendendo/preso): 0; em qualquer outro estado != 0: 0.5   [OK]
static float FingerLaserFactor(CBaseEntity *pHit)
{
    float f = 1.0f;
    if (pHit && pHit->IsPlayer() && ((CBasePlayer *)pHit)->f_3e4)
    {
        int s = ((CBasePlayer *)pHit)->f_3e4;
        f = (s == 3 || s == 4 || s == 5) ? 0.0f : 0.5f;
    }
    return f;
}

void CFingerLaser::PrimaryAttack(void)
{
    if (!m_pPlayer->UseKi(150)) return;                 // [OK]
    m_pPlayer->SetAnimation((PLAYER_ANIM)(m_fHand ? 5 : 6));   // [OK]
    m_fHand ^= 1;
    EmitShootSound();
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector vecDir = gpGlobals->v_forward;
    Vector vecStart = m_pPlayer->GetGunPosition();
    Vector vecEnd = vecStart + vecDir * 8192;           // [OK]
    TraceResult tr;
    UTIL_TraceLine(vecStart, vecEnd, ignore_monsters, ENT(m_pPlayer->pev), &tr);
    vecEnd = tr.vecEndPos;                              // ponto final = 1o obstaculo solido
    MakeBeam(vecEnd);
    edict_t *pIgnore = ENT(m_pPlayer->pev);
    do                                                  // [OK] atravessa todos os alvos ate chegar ao fim
    {
        UTIL_TraceLine(vecStart, vecEnd, dont_ignore_monsters, pIgnore, &tr);
        CBaseEntity *pHit = CBaseEntity::Instance(tr.pHit);
        float f = FingerLaserFactor(pHit);
        if (pHit && (pHit->pev->owner ? CBaseEntity::Instance(pHit->pev->owner) : NULL) != m_pPlayer)
            pHit->TakeDamage(m_pPlayer->pev, m_pPlayer->pev, GetPowerRatio() * 25.0 * f, 0x800000);   // [?] bits (g_800000)
        pIgnore = pHit ? pHit->edict() : pIgnore;
        vecStart = tr.vecEndPos;
    } while (tr.flFraction < 1.0f);
    m_flNextSecondaryAttack = m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 3.0;   // [OK]
}

void CFingerLaser::SecondaryAttack(void)
{
    if (!m_pPlayer->UseKi(200)) return;                 // [OK]
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector vecDir = gpGlobals->v_forward;
    Vector vecStart = m_pPlayer->GetGunPosition();
    Vector vecEnd = vecStart + vecDir * 8192;
    TraceResult tr;
    edict_t *pIgnore = ENT(m_pPlayer->pev);
    CBaseEntity *pHit;
    do                                                  // [OK] ignora projeteis do proprio jogador
    {
        UTIL_TraceLine(vecStart, vecEnd, dont_ignore_monsters, pIgnore, &tr);
        vecStart = tr.vecEndPos;
        pHit = tr.pHit ? CBaseEntity::Instance(tr.pHit) : NULL;
        pIgnore = tr.pHit;
    } while (pHit && pHit->pev->owner && CBaseEntity::Instance(pHit->pev->owner) == m_pPlayer);
    m_pPlayer->SetAnimation((PLAYER_ANIM)(m_fHand ? 5 : 6));
    m_fHand ^= 1;
    EmitShootSound();
    MakeBeam(tr.vecEndPos);
    float f = 1.0f;
    if (tr.flFraction < 1.0f && tr.pHit)
        f = FingerLaserFactor(pHit);
    int iDmg = (int)(GetPowerRatio() * 15.0 * f);       // [?] o fator de potencia perdeu-se no x87
    ::RadiusDamage(tr.vecEndPos, m_pPlayer->pev, m_pPlayer->pev, (float)iDmg, (float)(iDmg * 2), CLASS_NONE, 0x800000);   // [OK]
    MESSAGE_BEGIN(MSG_ALL, gmsgExplosion);              // [OK] modo 2 = MSG_ALL
    WRITE_COORD(tr.vecEndPos.x); WRITE_COORD(tr.vecEndPos.y); WRITE_COORD(tr.vecEndPos.z);
    WRITE_LONG((int)(iDmg * 2.5));
    WRITE_BYTE(3);
    MESSAGE_END();
    m_flNextSecondaryAttack = m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.3;   // [OK]
}
