// esf_mods.cpp -- funções de classes do SDK (não-CBasePlayer) que o ESF alterou. RECUPERADO À MÃO.
// Fonte: decomp_raw/<Classe>/*.c. As que são iguais ao SDK estão em src/server/sdk/ (docs/sdk_reviewed.txt).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "multiplay_gamerules.h"

#define ESF_ITEM_RESPAWN_TIME 120      // [OK] SDK: 30

float CHalfLifeMultiplay::FlItemRespawnTime(CItem *pItem)
{
    return gpGlobals->time + ESF_ITEM_RESPAWN_TIME;           // [OK]
}

float CHalfLifeMultiplay::FlPlayerFallDamage(CBasePlayer *pPlayer)
{
    return 10;                                                // [OK] ESF: dano fixo (sem cvar falldamage)
}

void CWorld::Spawn(void)
{
    g_fGameOver = FALSE;
    Precache();
    g_flWeaponCheat = CVAR_GET_FLOAT("sv_cheats");            // [OK] impulse 101 só com sv_cheats
}

void CGib::WaitTillLand(void)
{
    if (!IsInWorld())
    {
        UTIL_Remove(this);
        return;
    }
    if (pev->velocity == g_vecZero)
    {
        SetThink(&CGib::SUB_StartFadeOut);
        pev->movetype = MOVETYPE_NONE;                        // [OK] ESF: o pedaço fica parado...
        pev->origin.z += 10.0f;                               // [OK] ...e sobe 10 unidades
        pev->nextthink = gpGlobals->time + m_lifeTime;
        if (m_bloodColor != DONT_BLEED)
            CSoundEnt::InsertSound(bits_SOUND_MEAT, pev->origin, 384, 25);
    }
    else
        pev->nextthink = gpGlobals->time + 0.5f;
}

void CBaseEntity::TraceAttack(entvars_t *pevAttacker, float flDamage, Vector vecDir, TraceResult *ptr, int bitsDamageType)
{
    Vector vecOrigin = ptr->vecEndPos - vecDir * 4;
    if (pev->takedamage)
    {
        AddMultiDamage(pevAttacker, this, flDamage, bitsDamageType);
        int blood = BloodColor();
        if (blood != DONT_BLEED || (bitsDamageType & DMG_BULLET))   // [OK] ESF: sangra também sem cor de sangue se for bala (bits & 2)
        {
            SpawnBlood(vecOrigin, blood, flDamage);
            TraceBleed(flDamage, vecDir, ptr, bitsDamageType);      // [OK] virtual (slot +0x44) no ESF
        }
    }
}

// CGib::BounceGibTouch [OK] vs decomp 0xa5200: ESF ignora toque do dono, e SEMPRE freia a velocidade (x0.8) no fim.
void CGib::BounceGibTouch(CBaseEntity *pOther)
{
    Vector vecSpot;
    TraceResult tr;

    if (pev->owner)                                           // [?] decomp ambíguo: dono ou "irmãos" do mesmo dono não colidem
    {
        if (pev->owner == pOther->edict())
            return;
        if (pOther->pev->owner == pev->owner)
            return;
    }
    if (pev->flags & FL_ONGROUND)
    {
        pev->angles.x = 0;                                    // (sem o x0.9 do SDK)
        pev->angles.z = 0;
        pev->avelocity.x = 0;
        pev->avelocity.z = 0;
    }
    else
    {
        if (g_Language != LANGUAGE_GERMAN && m_cBloodDecals > 0 && m_bloodColor != DONT_BLEED)
        {
            vecSpot = pev->origin + Vector(0, 0, 8);
            UTIL_TraceLine(vecSpot, vecSpot + Vector(0, 0, -24), ignore_monsters, ENT(pev), &tr);
            UTIL_BloodDecalTrace(&tr, m_bloodColor);
            m_cBloodDecals--;
        }
        if (m_material != matNone && RANDOM_LONG(0, 2) == 0)
        {
            float zvel = fabs(pev->velocity.z);
            float volume = 0.8 * min(1.0, ((float)zvel) / 450.0);
            CBreakable::MaterialSoundRandom(edict(), (Materials)m_material, volume);
        }
    }
    pev->velocity = pev->velocity * 0.8;                      // [OK] ESF
}

// CBaseMonster::TakeDamage = SDK + flag de dano 0x4000000 (sem empurrão). [OK] vs decomp 0xa5810
int CBaseMonster :: TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	float	flTake;
	Vector	vecDir;

	if (!pev->takedamage)
		return 0;

	if ( !IsAlive() )
	{
		return DeadTakeDamage( pevInflictor, pevAttacker, flDamage, bitsDamageType );
	}

	if ( pev->deadflag == DEAD_NO )
	{
		// no pain sound during death animation.
		PainSound();// "Ouch!"
	}

	//!!!LATER - make armor consideration here!
	flTake = flDamage;

	// set damage type sustained
	m_bitsDamageType |= bitsDamageType;

	// grab the vector of the incoming attack. ( pretend that the inflictor is a little lower than it really is, so the body will tend to fly upward a bit).
	vecDir = Vector( 0, 0, 0 );
	if (!FNullEnt( pevInflictor ))
	{
		CBaseEntity *pInflictor = CBaseEntity :: Instance( pevInflictor );
		if (pInflictor)
		{
			vecDir = ( pInflictor->Center() - Vector ( 0, 0, 10 ) - Center() ).Normalize();
			vecDir = g_vecAttackDir = vecDir.Normalize();
		}
	}

	// add to the damage total for clients, which will be sent as a single
	// message at the end of the frame
	// todo: remove after combining shotgun blasts?
	if ( IsPlayer() )
	{
		if ( pevInflictor )
			pev->dmg_inflictor = ENT(pevInflictor);

		pev->dmg_take += flTake;

		// check for godmode or invincibility
		if ( pev->flags & FL_GODMODE )
		{
			return 0;
		}
	}

	// if this is a player, move him around!
	if ( ( !FNullEnt( pevInflictor ) ) && (pev->movetype == MOVETYPE_WALK) && (!pevAttacker || pevAttacker->solid != SOLID_TRIGGER) && !(bitsDamageType & 0x4000000) )   // [OK] ESF: bit 0x4000000 = dano sem empurrão
	{
		pev->velocity = pev->velocity + vecDir * -DamageForce( flDamage );
	}

	// do the damage
	pev->health -= flTake;

	
	// HACKHACK Don't kill monsters in a script.  Let them break their scripts first
	if ( m_MonsterState == MONSTERSTATE_SCRIPT )
	{
		SetConditions( bits_COND_LIGHT_DAMAGE );
		return 0;
	}

	if ( pev->health <= 0 )
	{
		g_pevLastInflictor = pevInflictor;

		if ( bitsDamageType & DMG_ALWAYSGIB )
		{
			Killed( pevAttacker, GIB_ALWAYS );
		}
		else if ( bitsDamageType & DMG_NEVERGIB )
		{
			Killed( pevAttacker, GIB_NEVER );
		}
		else
		{
			Killed( pevAttacker, GIB_NORMAL );
		}

		g_pevLastInflictor = NULL;

		return 0;
	}

	// react to the damage (get mad)
	if ( (pev->flags & FL_MONSTER) && !FNullEnt(pevAttacker) )
	{
		if ( pevAttacker->flags & (FL_MONSTER | FL_CLIENT) )
		{// only if the attack was a monster or client!
			
			// enemy's last known position is somewhere down the vector that the attack came from.
			if (pevInflictor)
			{
				if (m_hEnemy == NULL || pevInflictor == m_hEnemy->pev || !HasConditions(bits_COND_SEE_ENEMY))
				{
					m_vecEnemyLKP = pevInflictor->origin;
				}
			}
			else
			{
				m_vecEnemyLKP = pev->origin + ( g_vecAttackDir * 64 ); 
			}

			MakeIdealYaw( m_vecEnemyLKP );

			// add pain to the conditions 
			// !!!HACKHACK - fudged for now. Do we want to have a virtual function to determine what is light and 
			// heavy damage per monster class?
			if ( flDamage > 0 )
			{
				SetConditions(bits_COND_LIGHT_DAMAGE);
			}

			if ( flDamage >= 20 )
			{
				SetConditions(bits_COND_HEAVY_DAMAGE);
			}
		}
	}

	return 1;
}
