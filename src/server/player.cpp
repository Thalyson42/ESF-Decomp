// player.cpp -- funções do SDK em CBasePlayer que o ESF MODIFICOU. RECUPERADO À MÃO.
// Fonte: decomp_raw/CBasePlayer/*.c. Campos ESF: include/player_esf.h. [OK] conferido; [?] incerto.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"

#define SUITFIRSTUPDATETIME 0.1f     // [OK] ESF: 0.1 (SDK: 3.5)
#define SUITUPDATETIME      3.5f     // [OK]

// ---------------------------------------------------------------------------
// Jump -- como no SDK, mas bloqueado por estados do ESF e gasta ki
// ---------------------------------------------------------------------------
void CBasePlayer::Jump()
{
    if (f_364) return;                                        // [?] +0x364
    if (m_fFlying) return;                                    // [OK] voando não pula
    if (f_33c) return;                                        // [?] +0x33c
    if (m_fBlocking) return;                                  // [OK] defendendo
    if (f_330) return;                                        // [OK] +0x330 (powerup/carregando)
    if (f_770) return;                                        // [?] +0x770

    if (pev->iuser4) return;                                  // [?] +0x250
    if (f_37c) return;                                        // [OK] em melee
    if (pev->flags & FL_WATERJUMP) return;                    // [OK] como no SDK
    if (pev->waterlevel >= 2) return;                         // [OK]
    if (!(m_afButtonPressed & IN_JUMP)) return;               // [OK]
    if (!(pev->flags & FL_ONGROUND)) return;                  // [OK]
    if (!pev->groundentity) return;                           // [OK] +0x19c

    UTIL_MakeVectors(pev->angles);
    EMIT_SOUND(ENT(pev), CHAN_BODY, "weapons/jump.wav", 1.0, ATTN_NORM);   // [OK] volume 1.0, atten 0.8 (ATTN_NORM)

    if (pev->button & IN_DUCK)                                // [OK] agachado: pulo "super"; custa 50 de ki
    {
        SetAnimation(PLAYER_JUMP);
        pev->fuser4 -= 50.0f;                                 // [OK] ki = fuser4 (+0x260)
    }
    else                                                      // [?] animação 3 se segurando para trás, senão 1
    {
        SetAnimation((pev->button & IN_BACK) ? PLAYER_SUPERJUMP : PLAYER_WALK);
        pev->fuser4 -= 20.0f;                                 // [OK] custo 20
    }
    if (pev->fuser4 < 0.0f) pev->fuser4 = 0.0f;               // [OK]

    if (pev->groundentity && (pev->groundentity->v.flags & FL_BASEVELOCITY))   // [OK] SDK: carrega a velocidade do chão
        pev->velocity = pev->velocity + pev->basevelocity;
}

// ---------------------------------------------------------------------------
// SetSuitUpdate -- igual ao SDK, exceto o 1º atraso (0.1 s)
// ---------------------------------------------------------------------------
void CBasePlayer::SetSuitUpdate(char *name, int fgroup, int iNoRepeatTime)
{
    int i;
    int isentence;
    int iempty = -1;

    if (!(pev->weapons & (1 << WEAPON_SUIT))) return;         // [OK] sem HEV: sem frases
    if (g_pGameRules->IsMultiplayer()) return;                // [OK]

    if (!name)                                                // [OK] limpa a fila
    {
        for (i = 0; i < CSUITPLAYLIST; i++) m_rgSuitPlayList[i] = 0;
        return;
    }

    if (!fgroup)
    {
        isentence = SENTENCEG_Lookup(name, NULL);             // [OK] nome de sentença
        if (isentence < 0) return;
    }
    else
        isentence = -SENTENCEG_GetIndex(name);                // [OK] grupo

    for (i = 0; i < CSUITNOREPEAT; i++)
    {
        if (isentence == m_rgiSuitNoRepeat[i])
        {
            if (m_rgflSuitNoRepeatTime[i] >= gpGlobals->time) return;   // ainda não pode repetir
            m_rgiSuitNoRepeat[i] = 0;
            m_rgflSuitNoRepeatTime[i] = 0.0;
            iempty = i;
            break;
        }
        if (!m_rgiSuitNoRepeat[i]) iempty = i;
    }

    if (iNoRepeatTime)
    {
        if (iempty < 0) iempty = RANDOM_LONG(0, CSUITNOREPEAT - 1);
        m_rgiSuitNoRepeat[iempty] = isentence;
        m_rgflSuitNoRepeatTime[iempty] = iNoRepeatTime + gpGlobals->time;
    }

    m_rgSuitPlayList[m_iSuitPlayNext++] = isentence;
    if (m_iSuitPlayNext == CSUITPLAYLIST) m_iSuitPlayNext = 0;

    if (m_flSuitUpdate <= gpGlobals->time)
    {
        if (m_flSuitUpdate == 0)
            m_flSuitUpdate = gpGlobals->time + SUITFIRSTUPDATETIME;   // [OK] fila vazia: 0.1 s
        else
            m_flSuitUpdate = gpGlobals->time + SUITUPDATETIME;        // [OK] 3.5 s
    }
}

// ---------------------------------------------------------------------------
// PostThink -- SDK + animação própria, Swoop, melee e ângulos salvos
// ---------------------------------------------------------------------------
#define ESF_MAX_SAFE_FALL_SPEED 2000.0f    // [OK] (SDK: 580)

void CBasePlayer::PostThink()
{
    if (!g_fGameOver && IsAlive())
    {
        if (m_pTank != NULL)                                  // [OK] +0x90c: controlando um func_tank
        {
            if (m_pTank->OnControls(pev) && !pev->weaponmodel)
                m_pTank->Use(this, this, USE_SET, 2);
            else
            {
                m_pTank->Use(this, this, USE_OFF, 0);
                m_pTank = NULL;
            }
        }

        ForceCorrectModels();                                 // [OK] ESF
        ItemPostFrame();

        if ((pev->flags & FL_ONGROUND) && pev->health > 0 && m_flFallVelocity >= PLAYER_FALL_PUNCH_THRESHHOLD)   // [OK] 350
        {
            if (pev->watertype == CONTENTS_WATER)
            {
                // [OK] caiu na água: sem dano
            }
            else if (m_flFallVelocity > ESF_MAX_SAFE_FALL_SPEED)
            {
                float flFallDamage = g_pGameRules->FlPlayerFallDamage(this);
                if (flFallDamage > 0)
                {
                    TakeDamage(VARS(eoNullEntity), VARS(eoNullEntity), flFallDamage, DMG_FALL);   // [OK] 32
                    pev->punchangle.x = 0;
                    EMIT_SOUND(ENT(pev), CHAN_ITEM, "weapons/groundhit2.wav", 1.0, ATTN_NORM);    // [OK]
                }
            }
            if (IsAlive())
                PlayAnimation();                              // [OK] ESF: no lugar de SetAnimation(PLAYER_WALK)
        }

        if (pev->flags & FL_ONGROUND)
        {
            if (m_flFallVelocity > 64 && !g_pGameRules->IsMultiplayer())
                CSoundEnt::InsertSound(bits_SOUND_PLAYER, pev->origin, (int)m_flFallVelocity, 0.2);
            m_flFallVelocity = 0;
        }

        if (IsAlive())
            PlayAnimation();                                  // [OK]

        if (m_fTurbo)                                         // [?] +0x508 (campo do Swoop ativo)
            Swoop();

        if (m_Melee.m_fInAdvMelee && (m_Melee.m_Mode == 7 || m_Melee.m_Mode == 8))   // [OK] em combo exe
            m_Melee.MeleeFrameAdvance();
        else
            StudioFrameAdvance(0);

        CheckPowerups(pev);
        UpdatePlayerSound();
        m_afButtonLast = pev->button;                         // [OK]
    }

    if (pev->fixangle)                                        // [OK] salva/restaura pev->angles
        pev->angles = m_vecSavedAngles;                       // [?] +0x7a0
    else
        m_vecSavedAngles = pev->angles;
}

// ---------------------------------------------------------------------------
// TakeDamage -- imunidades do ESF, defesa (block), PL ganho pelo atacante, flash
// ---------------------------------------------------------------------------
int CBasePlayer::TakeDamage(entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType)
{
    float flOldHealth = pev->health;
    if (!IsAlive()) return 0;                                 // [OK]

    CBaseEntity *pInflictor = CBaseEntity::Instance(ENT(pevInflictor));   // [OK] edict->pvPrivateData
    CBaseEntity *pAttacker  = CBaseEntity::Instance(ENT(pevAttacker));

    if (!g_pGameRules->FPlayerCanTakeDamage(this, pAttacker)) return 0;   // [OK] slot 0x40
    if (f_34c) return 0;                                      // [?] +0x34c: invulnerável
    if (f_4c4)                                                // [?] +0x4c4: em melee avançado
    {
        if (!(bitsDamageType & 0x2400000)) return 0;          // só dano de melee/powerhit passa
        if (m_Melee.m_fIsAttacker && pevAttacker != m_Melee.m_pDefender->pev) return 0;
        if (m_Melee.m_fIsDefender && pevAttacker != m_Melee.m_pAttackerOther->pev) return 0;
    }
    if (!m_Melee.CanInflictDamage((CBasePlayer *)pInflictor, bitsDamageType)) return 0;   // [OK]

    int bInflictorIs14 = pInflictor->Classify() == 14;        // [?] classe 14 (ataque de ki especial)
    if (m_fInBlockStruggle) return 0;                         // [?] +0x35c
    if (m_fBlockStruggling && m_pBlockAttack != pInflictor) return 0;   // +0x358/+0x780 [OK] ExplodeTouch
    if (m_fInPowerStruggle && m_pPowerStruggle && !m_pPowerStruggle->InStruggle(pevInflictor)) return 0;   // [OK] +0x354/+0x36c

    f_8d4 = (int)flDamage;                                    // [?] último dano sofrido
    if (m_fPoweredUp) flDamage *= 0.75f;                      // [OK] +0x324
    if (f_770)        flDamage *= 0.5f;                       // [?] +0x770

    int iYaw = ((int)pev->v_angle.y + 360) % 360;
    int iFromYaw = ((int)pevInflictor->angles.y + 540) % 360; // [OK] direção de onde veio o golpe
    int bBlocked = 0;
    if (m_fBlocking && iFromYaw < iYaw + 75 && iFromYaw > iYaw - 75)   // [OK] defendendo de frente (±75°)
    {
        flDamage *= 0.25f;
        bBlocked = 1;
    }

    if ((bitsDamageType & 0x100000) && pAttacker->IsPlayer() && flDamage >= pev->health && pAttacker != this)
    {
        WaitToBecomeCandy((CBasePlayer *)pAttacker);          // [OK] vítima vira doce (Buu) em vez de morrer
        return 0;
    }

    if (pAttacker->IsPlayer())                                // atacante ganha PL
    {
        int iGain;
        if (bInflictorIs14) iGain = 10;
        else if (bitsDamageType & 0x2400000) iGain = (int)(flDamage < pev->health ? flDamage * 2 : pev->health * 2);   // [OK] melee: dobro
        else iGain = (int)(flDamage < pev->health ? flDamage : pev->health);
        ((CBasePlayer *)pAttacker)->IncreaseStrength(this, iGain);
    }

    if (!f_344 && (bitsDamageType & 0x1000000))               // [?] dano de flash: cegueira
    {
        UTIL_ScreenFade(this, Vector(255, 255, 255), 1.1666666f, 2.3333333f, 255, 0);
        f_344 = 1;
        f_31c = gpGlobals->time + 3.5f;
    }

    if (pAttacker != this || !(bitsDamageType & DMG_BULLET))  // [OK] (char)a4 & 2
    {
        int iAtkYaw = ((int)pevAttacker->v_angle.y + 540) % 360;
        if (!f_344 && (bitsDamageType & 2) && iAtkYaw < iYaw + 75 && iAtkYaw > iYaw - 75)   // [?] olhando de frente p/ o clarão
        {
            UTIL_ScreenFade(this, Vector(255, 255, 255), 4.0f, 8.0f, 255, 0);
            f_344 = 1;
            f_31c = gpGlobals->time + 12.0f;
        }

        if (bitsDamageType & 0x600000)                        // [OK] empurrão
        {
            UTIL_MakeVectors(pevInflictor->angles);
            if (bBlocked)                                     // defendendo: recua o atacante
            {
                float flPush = (bitsDamageType & 0x200000) ? 75.0f : 250.0f;
                pevInflictor->velocity = pevInflictor->velocity - gpGlobals->v_forward * flPush;
            }
            else
                pev->origin = pev->origin + gpGlobals->v_forward * 50.0f;   // [?] desloca a vítima
        }

        int ret = CBaseMonster::TakeDamage(pevInflictor, pevAttacker, (float)(int)flDamage, bitsDamageType);
        if (ret && flDamage >= 1.0f) Pain();

        MESSAGE_BEGIN(MSG_SPEC, SVC_DIRECTOR);                // [OK] evento do HLTV
            WRITE_BYTE(9);
            WRITE_BYTE(DRC_CMD_EVENT);
            WRITE_SHORT(ENTINDEX(this->edict()));
            WRITE_SHORT(ENTINDEX(ENT(pevInflictor)));
            WRITE_LONG(5);
        MESSAGE_END();

        pev->punchangle.x = -2;                               // [OK]
        if (!ret || !(bitsDamageType & ~(DMG_FALL - 1)) || flOldHealth >= 75.0f)   // [?] máscara 0xffffc000
            return ret;
        if (flOldHealth >= 50.0f)
            SetSuitUpdate("!HEV_HLTH1", FALSE, 600);          // [OK]
        else if (!RANDOM_LONG(0, 3))
            SetSuitUpdate("!HEV_DMG7", FALSE, 300);
        return ret;
    }
    return 0;
}

// ---------------------------------------------------------------------------
// PreThink -- SDK + ki (regeneração/consumo), melee, voo, block, powerups
// ---------------------------------------------------------------------------
#define ESF_PEV_RAW_INT(p, off)   (*(int *)((char *)(p) + (off)))     // campos de entvars ainda sem nome

void CBasePlayer::PreThink()
{
    int buttonsChanged = (m_afButtonLast ^ pev->button);      // [OK] SDK
    m_afButtonPressed  = buttonsChanged & pev->button;
    m_afButtonReleased = buttonsChanged & (~pev->button);

    g_pGameRules->PlayerThink(this);                          // [OK] slot 0x4c
    if (g_fGameOver) return;

    UTIL_MakeVectors(pev->v_angle);
    ItemPreFrame();
    WaterMove();
    UpdateClientData_Hook();                                  // [?] virtual +0x204 (slot 127), sem nome
    CheckTimeBasedDamage();

    if (pev->iuser1)                                          // [OK] espectador
    {
        Spectator_HandleButtons();
        pev->impulse = 0;
        return;
    }

    // melee avançado ligado/desligado pelo cvar simplemelee
    if ((simplemelee.value == 1.0f && !m_Melee.f_080) || (simplemelee.value == 0.0f && m_Melee.f_080))   // [?] +0x400 = flag "melee ativo"
    {
        if (!f_37c)
        {
            m_Melee.f_080 = !m_Melee.f_080;
            m_Melee.Reset();
            m_Melee.SetAttacker(this);
        }
    }
    if (f_37c)                                                // [OK] em melee
    {
        m_Melee.ManageToss();
        m_Melee.ManageMelee();
    }

    CheckWallJump();
    if (!(pev->flags & 0x4000000))                            // [?] flag ESF (byte +0x1a7 & 4)
        m_Swoop.ManageSwoop();
    CheckSubModelStatus();

    if (f_34c && gpGlobals->time > f_73c)                     // [OK] fim da invulnerabilidade
    {
        if (f_350)
        {
            f_350 = 0;
            ESF_PEV_RAW_INT(pev, 0x15c) = 0;                  // [?]
            if (!m_fPoweredUp && !m_fTurbo)
                ESF_PEV_RAW_INT(pev, 0x148) = 0;              // [?]
            m_pClass->vfunc_30();                             // [?] callback do personagem (vtable +4, slot 0x30)
        }
        f_34c = 0;
    }

    if (f_728 && gpGlobals->time - f_72c > 10.0f)             // [OK] doce (Buu) por no máximo 10 s
    {
        ((CBasePlayer *)f_728)->ReleaseCandy();
        f_728 = 0;
    }

    if (f_378 && !f_33c)                                      // [?]
    {
        RemoveAllWeapons(0);
        m_pClass->vfunc_30();
        f_378 = 0;
    }

    if (gpGlobals->time - f_318 > 0.2f)                       // [OK] tick de ki a cada 0.2 s
    {
        float flDrain = m_pClass->vfunc_18();                 // [?] custo base por tick do personagem
        if (flDrain < pev->fuser4)
            pev->fuser4 -= m_pClass->vfunc_18();
        else if (!f_33c)
            Descend(1);

        if (!m_fFlying && !m_fPoweredUp)                      // regeneração parado
        {
            if (!f_330 && !f_364 && !f_4c4)
            {
                if (pev->fuser4 < 1000.0f)                    // [OK] +3.5 por tick, máx. 1000
                {
                    pev->fuser4 += 3.5f;
                    if (pev->fuser4 > 1000.0f) pev->fuser4 = 1000.0f;
                }
            }
        }
        if (f_330)                                            // [OK] carregando: +70 por tick
        {
            if (pev->fuser4 < 1000.0f)
            {
                pev->fuser4 += 70.0f;
                if (pev->fuser4 > 1000.0f) pev->fuser4 = 1000.0f;
            }
        }
        if (m_fPoweredUp && !UseKi(2))  StopTurbo();          // [OK] turbo custa 2/tick
        if (m_fFlying && !UseKi(1))     StopFly();            // [OK] voo custa 1/tick
        if (f_37c && m_fTurbo && !UseKi(16)) StopSwoop();     // [OK] swoop em melee custa 16
        f_318 = gpGlobals->time;
    }

    if (f_724 < gpGlobals->time) UpdateOldPositions();        // [OK] histórico de posições

    if (pev->fuser4 <= 20.0f)                                 // ki acabando
        pev->iuser4 = 1;                                      // [?] +0x250: "sem ki"
    else if (m_flSpeedMult != 0.0f)
        pev->iuser4 = 0;

    if (f_344 && gpGlobals->time > f_31c) f_344 = 0;          // [OK] fim da cegueira

    if (pev->health < 5.0f)                                   // [OK] vida baixa: consome PL
    {
        int iPL = (int)((double)m_iPowerLevel - (double)m_iMaxPowerLevel * 0.0001);
        if (iPL > 0)
            SetPowerLevel(iPL);
        else if (IsAlive())
            TakeDamage(VARS(INDEXENT(0)), VARS(INDEXENT(0)), 900.0f, 0x1000);   // [OK] morre sem PL
    }

    if (f_770 && gpGlobals->time - f_774 > 0.0f)              // [?]
        Ascend();

    if (f_358 && m_pBlockAttack)                              // [?] segurando um ataque de block
    {
        entvars_t *pevAtk = m_pBlockAttack->pev;
        UTIL_MakeVectors(pevAtk->angles);
        Vector vecFwd = gpGlobals->v_forward;
        if (pev->flags & FL_ONGROUND)
        {
            vecFwd.z = 0;
            pevAtk->angles.x = 0;
        }
        TraceResult tr;
        Vector vecEnd = pev->origin + vecFwd * 32.0f;
        UTIL_TraceHull(pev->origin, vecEnd, dont_ignore_monsters, head_hull, ENT(pevAtk), &tr);
        if (tr.flFraction < 1.0f)                             // [OK] bateu na parede: para
        {
            pevAtk->velocity = Vector(0, 0, 0);
            pev->vuser4 = Vector(0, 0, 0);
            m_pBlockAttack->m_fHitWall = 1;                   // [?] +0x2b4
        }
        if (gpGlobals->time > f_734)                          // [OK] custo do block: 5 de ki a cada 0.2 s
        {
            if (!UseKi(5))
                StopBlock();
            else
            {
                if (g_flBlockPLDiv)                           // [?] o decompilado lê *g_pGameRules; provável variável global
                    f_730 = (int)((double)f_730 + (double)GetPowerLevel() / (double)g_flBlockPLDiv * 4.0);
                f_734 = gpGlobals->time + 0.2f;
            }
        }
    }

    if (!f_6bc)                                               // [?] ativa objetos próximos (Classify 1)
    {
        CBaseEntity *pEnt = NULL;
        while ((pEnt = UTIL_FindEntityInSphere(pEnt, pev->origin, 30.0f)) != NULL)
        {
            if (pEnt->Classify() == 1 && pEnt->pev->solid)
                pEnt->TouchedByPlayer(this);                  // [?] virtual +0xb4 (slot 43)
        }
    }

    CheckSuitUpdate();

    if (pev->deadflag >= DEAD_DYING)                          // [OK] SDK
    {
        PlayerDeathThink();
        return;
    }

    if (m_afPhysicsFlags & PFLAG_ONTRAIN) pev->flags |= FL_ONTRAIN;   // [OK] SDK
    else                                  pev->flags &= ~FL_ONTRAIN;

    if (pev->button & IN_JUMP) Jump();                        // [OK] virtual no ESF

    if (!(pev->flags & FL_ONGROUND))
        m_flFallVelocity = -pev->velocity.z;                  // [OK]

    m_hTrain = NULL;                                          // [?] EHANDLE +0x108

    if (m_afPhysicsFlags & PFLAG_ONBARNACLE)                  // [OK]
        pev->velocity = g_vecZero;
}
