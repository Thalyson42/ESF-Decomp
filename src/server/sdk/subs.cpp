// sdk/subs.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/subs.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "saverestore.h"
#include "nodes.h"
#include "doors.h"

// [SDK score 1.0] CPointEntity::Spawn
void CPointEntity :: Spawn( void )
{
	pev->solid = SOLID_NOT;
//	UTIL_SetSize(pev, g_vecZero, g_vecZero);
}

// [SDK score 1.0] CNullEntity::Spawn
void CNullEntity :: Spawn( void )
{
	REMOVE_ENTITY(ENT(pev));
}

// [SDK score 1.0] CBaseDMStart::KeyValue
void CBaseDMStart::KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "master"))
	{
		pev->netname = ALLOC_STRING(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CPointEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CBaseDMStart::IsTriggered
BOOL CBaseDMStart::IsTriggered( CBaseEntity *pEntity )
{
	BOOL master = UTIL_IsMasterTriggered( pev->netname, pEntity );

	return master;
}

// [SDK score 1.0] CBaseEntity::UpdateOnRemove
void CBaseEntity::UpdateOnRemove( void )
{
	int	i;

	if ( FBitSet( pev->flags, FL_GRAPHED ) )
	{
	// this entity was a LinkEnt in the world node graph, so we must remove it from
	// the graph since we are removing it from the world.
		for ( i = 0 ; i < WorldGraph.m_cLinks ; i++ )
		{
			if ( WorldGraph.m_pLinkPool [ i ].m_pLinkEnt == pev )
			{
				// if this link has a link ent which is the same ent that is removing itself, remove it!
				WorldGraph.m_pLinkPool [ i ].m_pLinkEnt = NULL;
			}
		}
	}
	if ( pev->globalname )
		gGlobalState.EntitySetState( pev->globalname, GLOBAL_DEAD );
}

// [SDK score 1.0] CBaseEntity::SUB_Remove
void CBaseEntity :: SUB_Remove( void )
{
	UpdateOnRemove();
	if (pev->health > 0)
	{
		// this situation can screw up monsters who can't tell their entity pointers are invalid.
		pev->health = 0;
		ALERT( at_aiconsole, "SUB_Remove called on entity with health > 0\n");
	}

	REMOVE_ENTITY(ENT(pev));
}

// [SDK score 1.0] CBaseEntity::SUB_DoNothing
void CBaseEntity :: SUB_DoNothing( void )
{
}

// [SDK score 1.0] CBaseDelay::KeyValue
void CBaseDelay :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "delay"))
	{
		m_flDelay = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "killtarget"))
	{
		m_iszKillTarget = ALLOC_STRING(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
	{
		CBaseEntity::KeyValue( pkvd );
	}
}

// [SDK score 1.0] CBaseEntity::SUB_UseTargets
void CBaseEntity :: SUB_UseTargets( CBaseEntity *pActivator, USE_TYPE useType, float value )
{
	//
	// fire targets
	//
	if (!FStringNull(pev->target))
	{
		FireTargets( STRING(pev->target), pActivator, this, useType, value );
	}
}

// [SDK score 0.75] CBaseDelay::SUB_UseTargets
void CBaseDelay :: SUB_UseTargets( CBaseEntity *pActivator, USE_TYPE useType, float value )
{
	//
	// exit immediatly if we don't have a target or kill target
	//
	if (FStringNull(pev->target) && !m_iszKillTarget)
		return;

	//
	// check for a delay
	//
	if (m_flDelay != 0)
	{
		// create a temp object to fire at a later time
		CBaseDelay *pTemp = GetClassPtr( (CBaseDelay *)NULL);
		pTemp->pev->classname = MAKE_STRING("DelayedUse");

		pTemp->pev->nextthink = gpGlobals->time + m_flDelay;

		pTemp->SetThink( &CBaseDelay::DelayThink );
		
		// Save the useType
		pTemp->pev->button = (int)useType;
		pTemp->m_iszKillTarget = m_iszKillTarget;
		pTemp->m_flDelay = 0; // prevent "recursion"
		pTemp->pev->target = pev->target;

		// HACKHACK
		// This wasn't in the release build of Half-Life.  We should have moved m_hActivator into this class
		// but changing member variable hierarchy would break save/restore without some ugly code.
		// This code is not as ugly as that code
		if ( pActivator && pActivator->IsPlayer() )		// If a player activates, then save it
		{
			pTemp->pev->owner = pActivator->edict();
		}
		else
		{
			pTemp->pev->owner = NULL;
		}

		return;
	}

	//
	// kill the killtargets
	//

	if ( m_iszKillTarget )
	{
		edict_t *pentKillTarget = NULL;

		ALERT( at_aiconsole, "KillTarget: %s\n", STRING(m_iszKillTarget) );
		pentKillTarget = FIND_ENTITY_BY_TARGETNAME( NULL, STRING(m_iszKillTarget) );
		while ( !FNullEnt(pentKillTarget) )
		{
			UTIL_Remove( CBaseEntity::Instance(pentKillTarget) );

			ALERT( at_aiconsole, "killing %s\n", STRING( pentKillTarget->v.classname ) );
			pentKillTarget = FIND_ENTITY_BY_TARGETNAME( pentKillTarget, STRING(m_iszKillTarget) );
		}
	}
	
	//
	// fire targets
	//
	if (!FStringNull(pev->target))
	{
		FireTargets( STRING(pev->target), pActivator, this, useType, value );
	}
}

// [SDK score 1.0] CBaseDelay::DelayThink
void CBaseDelay::DelayThink( void )
{
	CBaseEntity *pActivator = NULL;

	if ( pev->owner != NULL )		// A player activated this on delay
	{
		pActivator = CBaseEntity::Instance( pev->owner );	
	}
	// The use type is cached (and stashed) in pev->button
	SUB_UseTargets( pActivator, (USE_TYPE)pev->button, 0 );
	REMOVE_ENTITY(ENT(pev));
}

// [SDK score 1.0] CBaseToggle::KeyValue
void CBaseToggle::KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "lip"))
	{
		m_flLip = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "wait"))
	{
		m_flWait = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "master"))
	{
		m_sMaster = ALLOC_STRING(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "distance"))
	{
		m_flMoveDistance = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CBaseDelay::KeyValue( pkvd );
}

// [SDK score 1.0] CBaseToggle::LinearMove
void CBaseToggle ::  LinearMove( Vector	vecDest, float flSpeed )
{
	ASSERTSZ(flSpeed != 0, "LinearMove:  no speed is defined!");
//	ASSERTSZ(m_pfnCallWhenMoveDone != NULL, "LinearMove: no post-move function defined");
	
	m_vecFinalDest = vecDest;

	// Already there?
	if (vecDest == pev->origin)
	{
		LinearMoveDone();
		return;
	}
		
	// set destdelta to the vector needed to move
	Vector vecDestDelta = vecDest - pev->origin;
	
	// divide vector length by speed to get time to reach dest
	float flTravelTime = vecDestDelta.Length() / flSpeed;

	// set nextthink to trigger a call to LinearMoveDone when dest is reached
	pev->nextthink = pev->ltime + flTravelTime;
	SetThink( &CBaseToggle::LinearMoveDone );

	// scale the destdelta vector by the time spent traveling to get velocity
	pev->velocity = vecDestDelta / flTravelTime;
}

// [SDK score 1.0] CBaseToggle::LinearMoveDone
void CBaseToggle :: LinearMoveDone( void )
{
	Vector delta = m_vecFinalDest - pev->origin;
	float error = delta.Length();
	if ( error > 0.03125 )
	{
		LinearMove( m_vecFinalDest, 100 );
		return;
	}

	UTIL_SetOrigin(pev, m_vecFinalDest);
	pev->velocity = g_vecZero;
	pev->nextthink = -1;
	if ( m_pfnCallWhenMoveDone )
		(this->*m_pfnCallWhenMoveDone)();
}

// [SDK score 1.0] CBaseToggle::IsLockedByMaster
BOOL CBaseToggle :: IsLockedByMaster( void )
{
	if (m_sMaster && !UTIL_IsMasterTriggered(m_sMaster, m_hActivator))
		return TRUE;
	else
		return FALSE;
}

// [SDK score 1.0] CBaseToggle::AngularMove
void CBaseToggle :: AngularMove( Vector vecDestAngle, float flSpeed )
{
	ASSERTSZ(flSpeed != 0, "AngularMove:  no speed is defined!");
//	ASSERTSZ(m_pfnCallWhenMoveDone != NULL, "AngularMove: no post-move function defined");
	
	m_vecFinalAngle = vecDestAngle;

	// Already there?
	if (vecDestAngle == pev->angles)
	{
		AngularMoveDone();
		return;
	}
	
	// set destdelta to the vector needed to move
	Vector vecDestDelta = vecDestAngle - pev->angles;
	
	// divide by speed to get time to reach dest
	float flTravelTime = vecDestDelta.Length() / flSpeed;

	// set nextthink to trigger a call to AngularMoveDone when dest is reached
	pev->nextthink = pev->ltime + flTravelTime;
	SetThink( &CBaseToggle::AngularMoveDone );

	// scale the destdelta vector by the time spent traveling to get velocity
	pev->avelocity = vecDestDelta / flTravelTime;
}

// [SDK score 1.0] CBaseToggle::AngularMoveDone
void CBaseToggle :: AngularMoveDone( void )
{
	pev->angles = m_vecFinalAngle;
	pev->avelocity = g_vecZero;
	pev->nextthink = -1;
	if ( m_pfnCallWhenMoveDone )
		(this->*m_pfnCallWhenMoveDone)();
}

// [SDK score 1.0] CBaseToggle::AxisValue
float CBaseToggle :: AxisValue( int flags, const Vector &angles )
{
	if ( FBitSet(flags, SF_DOOR_ROTATE_Z) )
		return angles.z;
	if ( FBitSet(flags, SF_DOOR_ROTATE_X) )
		return angles.x;

	return angles.y;
}

// [SDK score 1.0] CBaseToggle::AxisDir
void CBaseToggle :: AxisDir( entvars_t *pev )
{
	if ( FBitSet(pev->spawnflags, SF_DOOR_ROTATE_Z) )
		pev->movedir = Vector ( 0, 0, 1 );	// around z-axis
	else if ( FBitSet(pev->spawnflags, SF_DOOR_ROTATE_X) )
		pev->movedir = Vector ( 1, 0, 0 );	// around x-axis
	else
		pev->movedir = Vector ( 0, 1, 0 );		// around y-axis
}

// [SDK score 1.0] CBaseToggle::AxisDelta
float CBaseToggle :: AxisDelta( int flags, const Vector &angle1, const Vector &angle2 )
{
	if ( FBitSet (flags, SF_DOOR_ROTATE_Z) )
		return angle1.z - angle2.z;
	
	if ( FBitSet (flags, SF_DOOR_ROTATE_X) )
		return angle1.x - angle2.x;

	return angle1.y - angle2.y;
}
