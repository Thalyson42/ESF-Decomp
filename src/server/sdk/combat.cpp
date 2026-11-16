// sdk/combat.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/combat.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "soundent.h"
#include "decals.h"
#include "animation.h"
#include "weapons.h"
#include "func_break.h"

// [SDK score 1.0] CGib::LimitVelocity
void CGib :: LimitVelocity( void )
{
	float length = pev->velocity.Length();

	// ceiling at 1500.  The gib velocity equation is not bounded properly.  Rather than tune it
	// in 3 separate places again, I'll just limit it here.
	if ( length > 1500.0 )
		pev->velocity = pev->velocity.Normalize() * 1500;		// This should really be sv_maxvelocity * 0.75 or something
}

// [SDK score 1.0] CBaseMonster::HasHumanGibs
BOOL CBaseMonster :: HasHumanGibs( void )
{
	int myClass = Classify();

	if ( myClass == CLASS_HUMAN_MILITARY ||
		 myClass == CLASS_PLAYER_ALLY	||
		 myClass == CLASS_HUMAN_PASSIVE  ||
		 myClass == CLASS_PLAYER )

		 return TRUE;

	return FALSE;
}

// [SDK score 1.0] CBaseMonster::HasAlienGibs
BOOL CBaseMonster :: HasAlienGibs( void )
{
	int myClass = Classify();

	if ( myClass == CLASS_ALIEN_MILITARY ||
		 myClass == CLASS_ALIEN_MONSTER	||
		 myClass == CLASS_ALIEN_PASSIVE  ||
		 myClass == CLASS_INSECT  ||
		 myClass == CLASS_ALIEN_PREDATOR  ||
		 myClass == CLASS_ALIEN_PREY )

		 return TRUE;

	return FALSE;
}

// [SDK score 1.0] CBaseMonster::FadeMonster
void CBaseMonster::FadeMonster( void )
{
	StopAnimation();
	pev->velocity = g_vecZero;
	pev->movetype = MOVETYPE_NONE;
	pev->avelocity = g_vecZero;
	pev->animtime = gpGlobals->time;
	pev->effects |= EF_NOINTERP;
	SUB_StartFadeOut();
}

// [SDK score 1.0] CBaseMonster::GetSmallFlinchActivity
Activity CBaseMonster :: GetSmallFlinchActivity ( void )
{
	Activity	flinchActivity;
	BOOL		fTriedDirection;
	float		flDot;

	fTriedDirection = FALSE;
	UTIL_MakeVectors ( pev->angles );
	flDot = DotProduct ( gpGlobals->v_forward, g_vecAttackDir * -1 );
	
	switch ( m_LastHitGroup )
	{
		// pick a region-specific flinch
	case HITGROUP_HEAD:
		flinchActivity = ACT_FLINCH_HEAD;
		break;
	case HITGROUP_STOMACH:
		flinchActivity = ACT_FLINCH_STOMACH;
		break;
	case HITGROUP_LEFTARM:
		flinchActivity = ACT_FLINCH_LEFTARM;
		break;
	case HITGROUP_RIGHTARM:
		flinchActivity = ACT_FLINCH_RIGHTARM;
		break;
	case HITGROUP_LEFTLEG:
		flinchActivity = ACT_FLINCH_LEFTLEG;
		break;
	case HITGROUP_RIGHTLEG:
		flinchActivity = ACT_FLINCH_RIGHTLEG;
		break;
	case HITGROUP_GENERIC:
	default:
		// just get a generic flinch.
		flinchActivity = ACT_SMALL_FLINCH;
		break;
	}


	// do we have a sequence for the ideal activity?
	if ( LookupActivity ( flinchActivity ) == ACTIVITY_NOT_AVAILABLE )
	{
		flinchActivity = ACT_SMALL_FLINCH;
	}

	return flinchActivity;
}

// [SDK score 1.0] CBaseMonster::ShouldGibMonster
BOOL CBaseMonster::ShouldGibMonster( int iGib )
{
	if ( ( iGib == GIB_NORMAL && pev->health < GIB_HEALTH_VALUE ) || ( iGib == GIB_ALWAYS ) )
		return TRUE;
	
	return FALSE;
}

// [SDK score 1.0] CBaseMonster::CallGibMonster
void CBaseMonster::CallGibMonster( void )
{
	BOOL fade = FALSE;

	if ( HasHumanGibs() )
	{
		if ( CVAR_GET_FLOAT("violence_hgibs") == 0 )
			fade = TRUE;
	}
	else if ( HasAlienGibs() )
	{
		if ( CVAR_GET_FLOAT("violence_agibs") == 0 )
			fade = TRUE;
	}

	pev->takedamage = DAMAGE_NO;
	pev->solid = SOLID_NOT;// do something with the body. while monster blows up

	if ( fade )
	{
		FadeMonster();
	}
	else
	{
		pev->effects = EF_NODRAW; // make the model invisible.
		GibMonster();
	}

	pev->deadflag = DEAD_DEAD;
	FCheckAITrigger();

	// don't let the status bar glitch for players.with <0 health.
	if (pev->health < -99)
	{
		pev->health = 0;
	}
	
	if ( ShouldFadeOnDeath() && !fade )
		UTIL_Remove(this);
}

// [SDK score 1.0] CBaseMonster::Killed
void CBaseMonster :: Killed( entvars_t *pevAttacker, int iGib )
{
	unsigned int	cCount = 0;
	BOOL			fDone = FALSE;

	if ( HasMemory( bits_MEMORY_KILLED ) )
	{
		if ( ShouldGibMonster( iGib ) )
			CallGibMonster();
		return;
	}

	Remember( bits_MEMORY_KILLED );

	// clear the deceased's sound channels.(may have been firing or reloading when killed)
	EMIT_SOUND(ENT(pev), CHAN_WEAPON, "common/null.wav", 1, ATTN_NORM);
	m_IdealMonsterState = MONSTERSTATE_DEAD;
	// Make sure this condition is fired too (TakeDamage breaks out before this happens on death)
	SetConditions( bits_COND_LIGHT_DAMAGE );
	
	// tell owner ( if any ) that we're dead.This is mostly for MonsterMaker functionality.
	CBaseEntity *pOwner = CBaseEntity::Instance(pev->owner);
	if ( pOwner )
	{
		pOwner->DeathNotice( pev );
	}

	if	( ShouldGibMonster( iGib ) )
	{
		CallGibMonster();
		return;
	}
	else if ( pev->flags & FL_MONSTER )
	{
		SetTouch( NULL );
		BecomeDead();
	}
	
	// don't let the status bar glitch for players.with <0 health.
	if (pev->health < -99)
	{
		pev->health = 0;
	}
	
	//pev->enemy = ENT( pevAttacker );//why? (sjb)
	
	m_IdealMonsterState = MONSTERSTATE_DEAD;
}

// [SDK score 1.0] CBaseEntity::SUB_StartFadeOut
void CBaseEntity :: SUB_StartFadeOut ( void )
{
	if (pev->rendermode == kRenderNormal)
	{
		pev->renderamt = 255;
		pev->rendermode = kRenderTransTexture;
	}

	pev->solid = SOLID_NOT;
	pev->avelocity = g_vecZero;

	pev->nextthink = gpGlobals->time + 0.1;
	SetThink ( &CBaseEntity::SUB_FadeOut );
}

// [SDK score 1.0] CBaseMonster::TakeHealth
int CBaseMonster :: TakeHealth (float flHealth, int bitsDamageType)
{
	if (!pev->takedamage)
		return 0;

	// clear out any damage types we healed.
	// UNDONE: generic health should not heal any
	// UNDONE: time-based damage

	m_bitsDamageType &= ~(bitsDamageType & ~DMG_TIMEBASED);
	
	return CBaseEntity::TakeHealth(flHealth, bitsDamageType);
}

// [SDK score 1.0] CBaseMonster::DeadTakeDamage
int CBaseMonster :: DeadTakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	Vector			vecDir;

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

#if 0// turn this back on when the bounding box issues are resolved.

	pev->flags &= ~FL_ONGROUND;
	pev->origin.z += 1;
	
	// let the damage scoot the corpse around a bit.
	if ( !FNullEnt(pevInflictor) && (pevAttacker->solid != SOLID_TRIGGER) )
	{
		pev->velocity = pev->velocity + vecDir * -DamageForce( flDamage );
	}

#endif

	// kill the corpse if enough damage was done to destroy the corpse and the damage is of a type that is allowed to destroy the corpse.
	if ( bitsDamageType & DMG_GIB_CORPSE )
	{
		if ( pev->health <= flDamage )
		{
			pev->health = -50;
			Killed( pevAttacker, GIB_ALWAYS );
			return 0;
		}
		// Accumulate corpse gibbing damage, so you can gib with multiple hits
		pev->health -= flDamage * 0.1;
	}
	
	return 1;
}

// [SDK score 1.0] CBaseMonster::RadiusDamage
void CBaseMonster :: RadiusDamage(entvars_t* pevInflictor, entvars_t*	pevAttacker, float flDamage, int iClassIgnore, int bitsDamageType )
{
	::RadiusDamage( pev->origin, pevInflictor, pevAttacker, flDamage, flDamage * 2.5, iClassIgnore, bitsDamageType );
}

// [SDK score 1.0] CBaseMonster::RadiusDamage
void CBaseMonster :: RadiusDamage( Vector vecSrc, entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int iClassIgnore, int bitsDamageType )
{
	::RadiusDamage( vecSrc, pevInflictor, pevAttacker, flDamage, flDamage * 2.5, iClassIgnore, bitsDamageType );
}

// [SDK score 1.0] CBaseMonster::CheckTraceHullAttack
CBaseEntity* CBaseMonster :: CheckTraceHullAttack( float flDist, int iDamage, int iDmgType )
{
	TraceResult tr;

	if (IsPlayer())
		UTIL_MakeVectors( pev->angles );
	else
		UTIL_MakeAimVectors( pev->angles );

	Vector vecStart = pev->origin;
	vecStart.z += pev->size.z * 0.5;
	Vector vecEnd = vecStart + (gpGlobals->v_forward * flDist );

	UTIL_TraceHull( vecStart, vecEnd, dont_ignore_monsters, head_hull, ENT(pev), &tr );
	
	if ( tr.pHit )
	{
		CBaseEntity *pEntity = CBaseEntity::Instance( tr.pHit );

		if ( iDamage > 0 )
		{
			pEntity->TakeDamage( pev, pev, iDamage, iDmgType );
		}

		return pEntity;
	}

	return NULL;
}

// [SDK score 1.0] CBaseMonster::FInViewCone
BOOL CBaseMonster :: FInViewCone ( CBaseEntity *pEntity )
{
	Vector2D	vec2LOS;
	float	flDot;

	UTIL_MakeVectors ( pev->angles );
	
	vec2LOS = ( pEntity->pev->origin - pev->origin ).Make2D();
	vec2LOS = vec2LOS.Normalize();

	flDot = DotProduct (vec2LOS , gpGlobals->v_forward.Make2D() );

	if ( flDot > m_flFieldOfView )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

// [SDK score 1.0] CBaseMonster::FInViewCone
BOOL CBaseMonster :: FInViewCone ( Vector *pOrigin )
{
	Vector2D	vec2LOS;
	float		flDot;

	UTIL_MakeVectors ( pev->angles );
	
	vec2LOS = ( *pOrigin - pev->origin ).Make2D();
	vec2LOS = vec2LOS.Normalize();

	flDot = DotProduct (vec2LOS , gpGlobals->v_forward.Make2D() );

	if ( flDot > m_flFieldOfView )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

// [SDK score 1.0] CBaseEntity::FVisible
BOOL CBaseEntity :: FVisible ( CBaseEntity *pEntity )
{
	TraceResult tr;
	Vector		vecLookerOrigin;
	Vector		vecTargetOrigin;
	
	if (FBitSet( pEntity->pev->flags, FL_NOTARGET ))
		return FALSE;

	// don't look through water
	if ((pev->waterlevel != 3 && pEntity->pev->waterlevel == 3) 
		|| (pev->waterlevel == 3 && pEntity->pev->waterlevel == 0))
		return FALSE;

	vecLookerOrigin = pev->origin + pev->view_ofs;//look through the caller's 'eyes'
	vecTargetOrigin = pEntity->EyePosition();

	UTIL_TraceLine(vecLookerOrigin, vecTargetOrigin, ignore_monsters, ignore_glass, ENT(pev)/*pentIgnore*/, &tr);
	
	if (tr.flFraction != 1.0)
	{
		return FALSE;// Line of sight is not established
	}
	else
	{
		return TRUE;// line of sight is valid.
	}
}

// [SDK score 1.0] CBaseEntity::FVisible
BOOL CBaseEntity :: FVisible ( const Vector &vecOrigin )
{
	TraceResult tr;
	Vector		vecLookerOrigin;
	
	vecLookerOrigin = EyePosition();//look through the caller's 'eyes'

	UTIL_TraceLine(vecLookerOrigin, vecOrigin, ignore_monsters, ignore_glass, ENT(pev)/*pentIgnore*/, &tr);
	
	if (tr.flFraction != 1.0)
	{
		return FALSE;// Line of sight is not established
	}
	else
	{
		return TRUE;// line of sight is valid.
	}
}

// [SDK score 1.0] CBaseMonster::TraceAttack
void CBaseMonster :: TraceAttack( entvars_t *pevAttacker, float flDamage, Vector vecDir, TraceResult *ptr, int bitsDamageType)
{
	if ( pev->takedamage )
	{
		m_LastHitGroup = ptr->iHitgroup;

		switch ( ptr->iHitgroup )
		{
		case HITGROUP_GENERIC:
			break;
		case HITGROUP_HEAD:
			flDamage *= gSkillData.monHead;
			break;
		case HITGROUP_CHEST:
			flDamage *= gSkillData.monChest;
			break;
		case HITGROUP_STOMACH:
			flDamage *= gSkillData.monStomach;
			break;
		case HITGROUP_LEFTARM:
		case HITGROUP_RIGHTARM:
			flDamage *= gSkillData.monArm;
			break;
		case HITGROUP_LEFTLEG:
		case HITGROUP_RIGHTLEG:
			flDamage *= gSkillData.monLeg;
			break;
		default:
			break;
		}

		SpawnBlood(ptr->vecEndPos, BloodColor(), flDamage);// a little surface blood.
		TraceBleed( flDamage, vecDir, ptr, bitsDamageType );
		AddMultiDamage( pevAttacker, this, flDamage, bitsDamageType );
	}
}
