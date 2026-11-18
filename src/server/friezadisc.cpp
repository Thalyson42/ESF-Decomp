// friezadisc.cpp -- RECUPERADO de decomp_raw/CFriezaDisc (19) e CFriezaDiscAttack (5). [OK] valores do decompilado; [?] nomes.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "effects.h"
#include "friezadisc.h"

void CFriezaDisc::Spawn(void)
{
    Precache();                    // [OK] vtable slot 1
    m_iId = 10;                    // [OK] +0x88
    m_iDefaultAmmo = 0;            // +0xc0
    m_iClip = -1;                  // +0xb0
    m_iMaxCharge = 30;             // [OK] +0xc8
    m_iKiCost = 25;                // [OK] +0xd0
    f_0cc = 0.5f;                  // [OK]
    strcpy(m_szWeaponName, "friezadisc");   // [OK] +0xd4
    FallInit();
}

void CFriezaDisc::Precache(void)
{
    PRECACHE_MODEL("models/w_friezadisc.mdl");
    PRECACHE_SOUND("weapons/rotating.wav");
    PRECACHE_SOUND("weapons/disc_fire.wav");
    PRECACHE_SOUND("weapons/miscdisc_charge.wav");
    PRECACHE_SOUND("weapons/disckill.wav");
}

int CFriezaDisc::GetItemInfo(ItemInfo *p)
{
    p->pszName   = STRING(pev->classname);
    p->pszAmmo1  = "ki";
    p->iMaxAmmo1 = -1;
    p->pszAmmo2  = NULL;
    p->iMaxAmmo2 = -1;
    p->iMaxClip  = -1;
    p->iSlot     = 4;
    p->iPosition = 1;
    m_iId = p->iId = 10;
    p->iWeight   = -1;
    p->iFlags    = 0;
    return 1;
}

BOOL CFriezaDisc::Deploy(void)
{
    m_iDiscState = 0;                        // [OK] +0x1d4
    m_pDisc = NULL;                          // [OK] +0x1d8
    return CChargedAttack::Deploy();         // [OK]
}

void CFriezaDisc::Release(void)
{
    if (!m_pDisc->m_fVaporizing)             // [OK] +0x2b0
    {
        m_pDisc->SetThink(&CMagicAttack::NormalThink);   // [OK] solta o disco: volta ao think normal
        m_pDisc->m_fReleased = 1;            // [OK] +0x2ac
    }
    else
        m_pDisc->Remove();                   // [OK] vtable +0x1fc
}

void CFriezaDisc::StopControl(void)
{
    m_pPlayer->f_33c = 0;                    // [OK] +0x33c
    m_pPlayer->m_flSpeedMult = 1.0f;         // [OK] +0x754
}

void CFriezaDisc::Holster(int skiplocal)
{
    if (m_iDiscState == 1 || m_iDiscState == 2)
        Release();
    if (m_iDiscState == 1)
        StopControl();
    if (m_iDiscState == 3 || (m_iDiscState == 0 && m_pDisc))
    {
        m_pDisc->Remove();                   // [OK]
        m_pPlayer->f_340 = 0;                // [OK] +0x340
        m_pPlayer->m_flSpeedMult = 1.0f;
    }
    CChargedAttack::Holster(skiplocal);      // [OK]
    m_pPlayer->f_340 = 0;                    // [?] o decompilado zera (+0x340) apos o Holster base (indice de uint*)
}

void CFriezaDisc::WeaponIdle(void)
{
    if (!m_iDiscState)
        CChargedAttack::WeaponIdle();        // [OK]
    HandleDiscStatus();                      // [OK]
}

void CFriezaDisc::PrimaryAttack(void)
{
    if (!m_iDiscState)
        CChargedAttack::PrimaryAttack();     // [OK]
    else if (m_iDiscState == 3)
    {
        EmitShootSound();                    // [OK] +0x164
        ShootAttack();                       // [OK] +0x17c
    }
    else
        HandleDiscStatus();
}

void CFriezaDisc::SecondaryAttack(void)
{
    if (m_iDiscState != 1)
    {
        HandleDiscStatus();
        return;
    }
    StopControl();
    m_pDisc->SetThink(&CFriezaDiscAttack::HomeThink);   // [OK] o disco volta ao dono
    m_iDiscState = 2;
    m_pPlayer->f_340 = 1;                    // [OK] +0x340
}

void CFriezaDisc::HandleDiscStatus(void)
{
    if (m_iDiscState == 2)                   // voltando
    {
        Vector gun = m_pPlayer->GetGunPosition();
        if ((m_pDisc->pev->origin - gun).Length() < 100.0)   // [OK] chegou perto
        {
            m_iDiscState = 3;
            m_pDisc->Returned();
            m_pPlayer->f_340 = 1;            // [OK] +0x340
            m_pPlayer->m_flSpeedMult = 0.5f; // [OK]
            return;
        }
        m_pPlayer->StopAniTrigger(5);
    }
    else if (m_iDiscState != 1)
        return;
    // estados 1 e 2: o disco foi destruido ou o jogador soltou o botao
    if (m_pDisc->m_fVaporizing)              // [OK] +0x2b0
    {
        m_pDisc->Remove();
        m_pDisc = NULL;
    }
    else if (m_pPlayer->f_37c)               // [?] +0x37c (botao/estado de soltar)
        Release();
    else
        return;
    StopControl();
    m_iDiscState = 0;
}

void CFriezaDisc::EnableChargeSprite(void)
{
    Vector gun = m_pPlayer->GetGunPosition();
    m_pDisc = CFriezaDiscAttack::ChargeFriezaDisc(m_pPlayer->pev, gun, (float)(m_iCharge * 0.5 / m_iMaxCharge));   // [OK]
}

void CFriezaDisc::GrowChargeSprite(void)
{
    m_pDisc->pev->scale = (float)(m_iCharge * 0.5 / m_iMaxCharge);   // [OK]
}

void CFriezaDisc::EmitChargeSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/miscdisc_charge.wav", 1.0, 0.8, 0, 100);   // [OK]
}

void CFriezaDisc::EmitShootSound(void)
{
    EMIT_SOUND_DYN(ENT(m_pPlayer->pev), CHAN_WEAPON, "weapons/disc_fire.wav", 1.0, 0.8, 0, 100);         // [OK]
}

void CFriezaDisc::ShootAttack(void)
{
    m_iDiscState = 1;                                                // [OK]
    UTIL_MakeVectors(m_pPlayer->pev->v_angle);
    Vector start = m_pPlayer->GetGunPosition() + Vector(0, 0, 2);    // [OK] 2.0
    Vector vel = gpGlobals->v_forward * 1000;                        // [OK] 1000.0
    m_pDisc->Shoot(start, vel);                                      // [OK]
    m_pPlayer->f_340 = 0;
    m_pPlayer->f_33c = 1;
    m_pPlayer->m_flSpeedMult = 0;                                    // [OK]
}

// ======================================================================
// CFriezaDiscAttack
// ======================================================================
CFriezaDiscAttack *CFriezaDiscAttack::ChargeFriezaDisc(entvars_t *pevOwner, Vector vecOrigin, float flScale)
{
    CFriezaDiscAttack *p = GetClassPtr((CFriezaDiscAttack *)NULL);   // [OK]
    p->Spawn();                                                      // [OK] slot 0
    p->pev->effects &= ~4;                                           // [OK] 251
    p->pev->renderamt = 100.0f;                                      // [OK] +0x14c (diferente do Destructo)
    p->pev->solid = SOLID_TRIGGER;                                   // [OK] 1
    p->pev->movetype = MOVETYPE_NOCLIP;                              // [OK] 8
    SET_MODEL(ENT(p->pev), "models/w_friezadisc.mdl");               // [OK]
    p->pev->scale = flScale;                                         // [OK]
    p->pev->dmg = 999.0f;                                            // [OK] +0x1e0
    UTIL_SetOrigin(p->pev, vecOrigin);
    p->pev->velocity = Vector(0, 0, 0);
    p->pev->rendercolor.x = (float)ENTINDEX(ENT(pevOwner));          // [OK] +0x150
    p->pev->classname = MAKE_STRING("Frieza Disc");                  // [OK] string em 0x59c25d
    p->pev->sequence = 0;  p->pev->gaitsequence = 0;  p->pev->frame = 0;   // [OK] memset(+0x128, 0, 12)
    p->ResetSequenceInfo();
    p->m_fReleased = 0;                                              // [OK] +0x2ac
    p->SetTouch(NULL);
    p->SetThink(&CDiscAttack::AuraCheck);                            // [OK]
    p->AuraCheck();
    return p;
}

void CFriezaDiscAttack::Shoot(Vector vecOrigin, Vector vecVelocity)
{
    pev->movetype = MOVETYPE_NOCLIP;                                 // [OK] 8
    pev->aiment = NULL;                                              // [OK] +0x194
    pev->effects |= 4;                                               // [OK]
    UTIL_SetOrigin(pev, vecOrigin);
    float flHalf = pev->scale * 7.0f;                                // [OK]
    UTIL_SetSize(pev, Vector(-flHalf, -flHalf, -flHalf), Vector(flHalf, flHalf, flHalf));
    pev->velocity = vecVelocity;
    m_flSpeed = vecVelocity.Length();                                // [OK] +0x2a8
    pev->angles = UTIL_VecToAngles(vecVelocity);
    pev->rendercolor.x = 0;                                          // [OK]
    SetTouch(&CDiscAttack::HitTouch);                                // [OK]
    SetThink(&CFriezaDiscAttack::FollowThink);                       // [OK] (o Destructo usa RandomRotateThink)
    pev->nextthink = gpGlobals->time;                                // [OK]
    EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "weapons/rotating.wav", 1.0, 0.8, 0, 100);
}

void CFriezaDiscAttack::Returned(void)
{
    if (pev->owner)
    {
        UTIL_SetOrigin(pev, VARS(pev->owner)->origin);               // [OK] volta para a posicao do dono
        pev->rendercolor.x = (float)ENTINDEX(pev->owner);            // [OK] +0x150
    }
    pev->effects &= ~4;                                              // [OK]
    pev->velocity = Vector(0, 0, 0);                                 // [OK] +0x20
    pev->angles = Vector(0, 0, 0);                                   // [OK] +0x50
    pev->scale *= 0.5f;                                              // [OK] +0x144
    SetTouch(NULL);
    SetThink(&CDiscAttack::AuraCheck);                               // [OK]
    pev->nextthink = gpGlobals->time;                                // [OK] +0x104
    AuraCheck();
    EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, "weapons/rotating.wav", 0, 0, SND_STOP, 100);   // [OK] 32 = SND_STOP
}

void CFriezaDiscAttack::HomeThink(void)
{
    if (pev->owner)
    {
        entvars_t *pevOwner = VARS(pev->owner);
        Vector vecTarget = pevOwner->origin + pevOwner->view_ofs;    // [OK] origem + view_ofs do dono
        Vector vecDir = (vecTarget - pev->origin).Normalize();       // [OK]
        Vector vecDesired = vecDir * m_flSpeed;                      // [OK] +0x2a8
        pev->velocity = vecDesired * 0.8 + pev->velocity * 0.2;      // [OK] 0.8 / 0.2: curva suave
        pev->angles = UTIL_VecToAngles(pev->velocity);
    }
    else
        SetThink(&CMagicAttack::NormalThink);                        // [OK]
    DrawBubbles();                                                   // [OK]
    if (!IsInWorld())                                                // [OK] vtable[37]
        Vaporize();
    pev->nextthink = gpGlobals->time + 0.3;                          // [OK]
}

void CFriezaDiscAttack::FollowThink(void)
{
    if (pev->owner)
    {
        entvars_t *pevOwner = VARS(pev->owner);
        UTIL_MakeVectors(pevOwner->v_angle);                         // [OK] o disco segue a mira do dono
        Vector vecStart = pevOwner->origin + pevOwner->view_ofs;     // [?] origem do tracado
        Vector vecEnd = vecStart + gpGlobals->v_forward * 8192;      // [OK]
        TraceResult tr;
        UTIL_TraceLine(vecStart, vecEnd, dont_ignore_monsters, pev->owner, &tr);   // [OK]
        Vector vecTarget = tr.vecEndPos - gpGlobals->v_forward * 10; // [OK] 10.0 antes do ponto de impacto
        UTIL_MakeAimVectors(pev->angles);
        Vector vecToTarget = vecTarget - pev->origin;
        float flDist = vecToTarget.Length();
        Vector vecSteer = vecToTarget;                               // [?] valor padrao (v12..v14 antes do if) nao conferido
        Vector vecDir = vecToTarget.Normalize();
        float flDot = DotProduct(gpGlobals->v_forward, vecDir);
        if (0.0 < flDot && (1.0 - flDot) * flDist < 4096.0)          // [OK] alvo a frente e perto o bastante da linha
            vecSteer = vecDir;                                       // [OK]
        Vector vecCur = pev->velocity.Normalize() * 0.8;             // [OK]
        pev->velocity = vecSteer * m_flSpeed * 0.2 + vecCur * m_flSpeed;   // [OK] 0.2 / 0.8
        pev->angles = UTIL_VecToAngles(pev->velocity);
    }
    else
        SetThink(&CMagicAttack::NormalThink);                        // [OK]
    DrawBubbles();                                                   // [OK]
    if (!IsInWorld())
        Vaporize();
    pev->nextthink = gpGlobals->time + 0.3;                          // [OK]
}
