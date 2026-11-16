// sdk/monsters.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/monsters.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "nodes.h"
#include "monsters.h"
#include "animation.h"
#include "saverestore.h"
#include "weapons.h"
#include "scripted.h"
#include "squadmonster.h"
#include "decals.h"
#include "soundent.h"
#include "gamerules.h"

// [SDK score 1.0] CBaseMonster::Save
int CBaseMonster::Save( CSave &save )
{
	if ( !CBaseToggle::Save(save) )
		return 0;
	return save.WriteFields( "CBaseMonster", this, m_SaveData, ARRAYSIZE(m_SaveData) );
}

// [SDK score 1.0] CBaseMonster::Restore
int CBaseMonster::Restore( CRestore &restore )
{
	if ( !CBaseToggle::Restore(restore) )
		return 0;
	int status = restore.ReadFields( "CBaseMonster", this, m_SaveData, ARRAYSIZE(m_SaveData) );
	
	// We don't save/restore routes yet
	RouteClear();

	// We don't save/restore schedules yet
	m_pSchedule = NULL;
	m_iTaskStatus = TASKSTATUS_NEW;
	
	// Reset animation
	m_Activity = ACT_RESET;

	// If we don't have an enemy, clear conditions like see enemy, etc.
	if ( m_hEnemy == NULL )
		m_afConditions = 0;

	return status;
}

// [SDK score 1.0] CBaseMonster::Eat
void CBaseMonster :: Eat ( float flFullDuration )
{
	m_flHungryTime = gpGlobals->time + flFullDuration;
}

// [SDK score 1.0] CBaseMonster::FShouldEat
BOOL CBaseMonster :: FShouldEat ( void )
{
	if ( m_flHungryTime > gpGlobals->time )
	{
		return FALSE;
	}

	return TRUE;
}

// [SDK score 1.0] CBaseMonster::BarnacleVictimBitten
void CBaseMonster :: BarnacleVictimBitten ( entvars_t *pevBarnacle )
{
	Schedule_t	*pNewSchedule;

	pNewSchedule = GetScheduleOfType( SCHED_BARNACLE_VICTIM_CHOMP );

	if ( pNewSchedule )
	{
		ChangeSchedule( pNewSchedule );
	}
}

// [SDK score 1.0] CBaseMonster::BarnacleVictimReleased
void CBaseMonster :: BarnacleVictimReleased ( void )
{
	m_IdealMonsterState = MONSTERSTATE_IDLE;

	pev->velocity = g_vecZero;
	pev->movetype = MOVETYPE_STEP;
}

// [SDK score 1.0] CBaseMonster::Listen
void CBaseMonster :: Listen ( void )
{
	int		iSound;
	int		iMySounds;
	float	hearingSensitivity;
	CSound	*pCurrentSound;

	m_iAudibleList = SOUNDLIST_EMPTY; 
	ClearConditions(bits_COND_HEAR_SOUND | bits_COND_SMELL | bits_COND_SMELL_FOOD);
	m_afSoundTypes = 0;

	iMySounds = ISoundMask();

	if ( m_pSchedule )
	{
		//!!!WATCH THIS SPOT IF YOU ARE HAVING SOUND RELATED BUGS!
		// Make sure your schedule AND personal sound masks agree!
		iMySounds &= m_pSchedule->iSoundMask;
	}

	iSound = CSoundEnt::ActiveList();

	// UNDONE: Clear these here?
	ClearConditions( bits_COND_HEAR_SOUND | bits_COND_SMELL_FOOD | bits_COND_SMELL );
	hearingSensitivity = HearingSensitivity( );

	while ( iSound != SOUNDLIST_EMPTY )
	{
		pCurrentSound = CSoundEnt::SoundPointerForIndex( iSound );

		if ( pCurrentSound	&& 
			 ( pCurrentSound->m_iType & iMySounds )	&& 
			 ( pCurrentSound->m_vecOrigin - EarPosition() ).Length() <= pCurrentSound->m_iVolume * hearingSensitivity )

		//if ( ( g_pSoundEnt->m_SoundPool[ iSound ].m_iType & iMySounds ) && ( g_pSoundEnt->m_SoundPool[ iSound ].m_vecOrigin - EarPosition()).Length () <= g_pSoundEnt->m_SoundPool[ iSound ].m_iVolume * hearingSensitivity ) 
		{
 			// the monster cares about this sound, and it's close enough to hear.
			//g_pSoundEnt->m_SoundPool[ iSound ].m_iNextAudible = m_iAudibleList;
			pCurrentSound->m_iNextAudible = m_iAudibleList;
			
			if ( pCurrentSound->FIsSound() )
			{
				// this is an audible sound.
				SetConditions( bits_COND_HEAR_SOUND );
			}
			else
			{
				// if not a sound, must be a smell - determine if it's just a scent, or if it's a food scent
//				if ( g_pSoundEnt->m_SoundPool[ iSound ].m_iType & ( bits_SOUND_MEAT | bits_SOUND_CARCASS ) )
				if ( pCurrentSound->m_iType & ( bits_SOUND_MEAT | bits_SOUND_CARCASS ) )
				{
					// the detected scent is a food item, so set both conditions.
					// !!!BUGBUG - maybe a virtual function to determine whether or not the scent is food?
					SetConditions( bits_COND_SMELL_FOOD );
					SetConditions( bits_COND_SMELL );
				}
				else
				{
					// just a normal scent. 
					SetConditions( bits_COND_SMELL );
				}
			}

//			m_afSoundTypes |= g_pSoundEnt->m_SoundPool[ iSound ].m_iType;
			m_afSoundTypes |= pCurrentSound->m_iType;

			m_iAudibleList = iSound;
		}

//		iSound = g_pSoundEnt->m_SoundPool[ iSound ].m_iNext;
		iSound = pCurrentSound->m_iNext;
	}
}

// [SDK score 1.0] CBaseMonster::FLSoundVolume
float CBaseMonster :: FLSoundVolume ( CSound *pSound )
{
	return ( pSound->m_iVolume - ( ( pSound->m_vecOrigin - pev->origin ).Length() ) );
}

// [SDK score 1.0] CBaseMonster::FValidateHintType
BOOL CBaseMonster :: FValidateHintType ( short sHint )
{
	return FALSE;
}

// [SDK score 1.0] CBaseMonster::ISoundMask
int CBaseMonster :: ISoundMask ( void )
{
	return	bits_SOUND_WORLD	|
			bits_SOUND_COMBAT	|
			bits_SOUND_PLAYER;
}

// [SDK score 1.0] CBaseMonster::PBestSound
CSound* CBaseMonster :: PBestSound ( void )
{	
	int iThisSound; 
	int	iBestSound = -1;
	float flBestDist = 8192;// so first nearby sound will become best so far.
	float flDist;
	CSound *pSound;

	iThisSound = m_iAudibleList; 

	if ( iThisSound == SOUNDLIST_EMPTY )
	{
		ALERT ( at_aiconsole, "ERROR! monster %s has no audible sounds!\n", STRING(pev->classname) );
#if _DEBUG
		ALERT( at_error, "NULL Return from PBestSound\n" );
#endif
		return NULL;
	}

	while ( iThisSound != SOUNDLIST_EMPTY )
	{
		pSound = CSoundEnt::SoundPointerForIndex( iThisSound );

		if ( pSound && pSound->FIsSound() )
		{
			flDist = ( pSound->m_vecOrigin - EarPosition()).Length();

			if ( flDist < flBestDist )
			{
				iBestSound = iThisSound;
				flBestDist = flDist;
			}
		}

		iThisSound = pSound->m_iNextAudible;
	}
	if ( iBestSound >= 0 )
	{
		pSound = CSoundEnt::SoundPointerForIndex( iBestSound );
		return pSound;
	}
#if _DEBUG
	ALERT( at_error, "NULL Return from PBestSound\n" );
#endif
	return NULL;
}

// [SDK score 1.0] CBaseMonster::PBestScent
CSound* CBaseMonster :: PBestScent ( void )
{	
	int iThisScent; 
	int	iBestScent = -1;
	float flBestDist = 8192;// so first nearby smell will become best so far.
	float flDist;
	CSound *pSound;

	iThisScent = m_iAudibleList;// smells are in the sound list.

	if ( iThisScent == SOUNDLIST_EMPTY )
	{
		ALERT ( at_aiconsole, "ERROR! PBestScent() has empty soundlist!\n" );
#if _DEBUG
		ALERT( at_error, "NULL Return from PBestSound\n" );
#endif
		return NULL;
	}

	while ( iThisScent != SOUNDLIST_EMPTY )
	{
		pSound = CSoundEnt::SoundPointerForIndex( iThisScent );

		if ( pSound->FIsScent() )
		{
			flDist = ( pSound->m_vecOrigin - pev->origin ).Length();

			if ( flDist < flBestDist )
			{
				iBestScent = iThisScent;
				flBestDist = flDist;
			}
		}

		iThisScent = pSound->m_iNextAudible;
	}
	if ( iBestScent >= 0 )
	{
		pSound = CSoundEnt::SoundPointerForIndex( iBestScent );

		return pSound;
	}
#if _DEBUG
	ALERT( at_error, "NULL Return from PBestScent\n" );
#endif
	return NULL;
}

// [SDK score 1.0] CBaseMonster::MonsterThink
void CBaseMonster :: MonsterThink ( void )
{
	pev->nextthink = gpGlobals->time + 0.1;// keep monster thinking.


	RunAI();

	float flInterval = StudioFrameAdvance( ); // animate
// start or end a fidget
// This needs a better home -- switching animations over time should be encapsulated on a per-activity basis
// perhaps MaintainActivity() or a ShiftAnimationOverTime() or something.
	if ( m_MonsterState != MONSTERSTATE_SCRIPT && m_MonsterState != MONSTERSTATE_DEAD && m_Activity == ACT_IDLE && m_fSequenceFinished )
	{
		int iSequence;

		if ( m_fSequenceLoops )
		{
			// animation does loop, which means we're playing subtle idle. Might need to 
			// fidget.
			iSequence = LookupActivity ( m_Activity );
		}
		else
		{
			// animation that just ended doesn't loop! That means we just finished a fidget
			// and should return to our heaviest weighted idle (the subtle one)
			iSequence = LookupActivityHeaviest ( m_Activity );
		}
		if ( iSequence != ACTIVITY_NOT_AVAILABLE )
		{
			pev->sequence = iSequence;	// Set to new anim (if it's there)
			ResetSequenceInfo( );
		}
	}

	DispatchAnimEvents( flInterval );

	if ( !MovementIsComplete() )
	{
		Move( flInterval );
	}
#if _DEBUG	
	else 
	{
		if ( !TaskIsRunning() && !TaskIsComplete() )
			ALERT( at_error, "Schedule stalled!!\n" );
	}
#endif
}

// [SDK score 1.0] CBaseMonster::MonsterUse
void CBaseMonster :: MonsterUse ( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	m_IdealMonsterState = MONSTERSTATE_ALERT;
}

// [SDK score 1.0] CBaseMonster::IgnoreConditions
int CBaseMonster :: IgnoreConditions ( void )
{
	int iIgnoreConditions = 0;

	if ( !FShouldEat() )
	{
		// not hungry? Ignore food smell.
		iIgnoreConditions |= bits_COND_SMELL_FOOD;
	}

	if ( m_MonsterState == MONSTERSTATE_SCRIPT && m_pCine )
		iIgnoreConditions |= m_pCine->IgnoreConditions();

	return iIgnoreConditions;
}

// [SDK score 1.0] CBaseMonster::RouteClear
void CBaseMonster :: RouteClear ( void )
{
	RouteNew();
	m_movementGoal = MOVEGOAL_NONE;
	m_movementActivity = ACT_IDLE;
	Forget( bits_MEMORY_MOVE_FAILED );
}

// [SDK score 1.0] CBaseMonster::RouteNew
void CBaseMonster :: RouteNew ( void )
{
	m_Route[ 0 ].iType		= 0;
	m_iRouteIndex			= 0;
}

// [SDK score 1.0] CBaseMonster::FRouteClear
BOOL CBaseMonster :: FRouteClear ( void )
{
	if ( m_Route[ m_iRouteIndex ].iType == 0 || m_movementGoal == MOVEGOAL_NONE )
		return TRUE;

	return FALSE;
}

// [SDK score 1.0] CBaseMonster::FRefreshRoute
BOOL CBaseMonster :: FRefreshRoute ( void )
{
	CBaseEntity	*pPathCorner;
	int			i;
	BOOL		returnCode;

	RouteNew();

	returnCode = FALSE;

	switch( m_movementGoal )
	{
		case MOVEGOAL_PATHCORNER:
			{
				// monster is on a path_corner loop
				pPathCorner = m_pGoalEnt;
				i = 0;

				while ( pPathCorner && i < ROUTE_SIZE )
				{
					m_Route[ i ].iType = bits_MF_TO_PATHCORNER;
					m_Route[ i ].vecLocation = pPathCorner->pev->origin;

					pPathCorner = pPathCorner->GetNextTarget();

					// Last path_corner in list?
					if ( !pPathCorner )
						m_Route[i].iType |= bits_MF_IS_GOAL;
					
					i++;
				}
			}
			returnCode = TRUE;
			break;

		case MOVEGOAL_ENEMY:
			returnCode = BuildRoute( m_vecEnemyLKP, bits_MF_TO_ENEMY, m_hEnemy );
			break;

		case MOVEGOAL_LOCATION:
			returnCode = BuildRoute( m_vecMoveGoal, bits_MF_TO_LOCATION, NULL );
			break;

		case MOVEGOAL_TARGETENT:
			if (m_hTargetEnt != NULL)
			{
				returnCode = BuildRoute( m_hTargetEnt->pev->origin, bits_MF_TO_TARGETENT, m_hTargetEnt );
			}
			break;

		case MOVEGOAL_NODE:
			returnCode = FGetNodeRoute( m_vecMoveGoal );
//			if ( returnCode )
//				RouteSimplify( NULL );
			break;
	}

	return returnCode;
}

// [SDK score 1.0] CBaseMonster::MoveToEnemy
BOOL CBaseMonster::MoveToEnemy( Activity movementAct, float waitTime )
{
	m_movementActivity = movementAct;
	m_moveWaitTime = waitTime;
	
	m_movementGoal = MOVEGOAL_ENEMY;
	return FRefreshRoute();
}

// [SDK score 1.0] CBaseMonster::MoveToLocation
BOOL CBaseMonster::MoveToLocation( Activity movementAct, float waitTime, const Vector &goal )
{
	m_movementActivity = movementAct;
	m_moveWaitTime = waitTime;
	
	m_movementGoal = MOVEGOAL_LOCATION;
	m_vecMoveGoal = goal;
	return FRefreshRoute();
}

// [SDK score 1.0] CBaseMonster::MoveToTarget
BOOL CBaseMonster::MoveToTarget( Activity movementAct, float waitTime )
{
	m_movementActivity = movementAct;
	m_moveWaitTime = waitTime;
	
	m_movementGoal = MOVEGOAL_TARGETENT;
	return FRefreshRoute();
}

// [SDK score 1.0] CBaseMonster::MoveToNode
BOOL CBaseMonster::MoveToNode( Activity movementAct, float waitTime, const Vector &goal )
{
	m_movementActivity = movementAct;
	m_moveWaitTime = waitTime;

	m_movementGoal = MOVEGOAL_NODE;
	m_vecMoveGoal = goal;
	return FRefreshRoute();
}

// [SDK score 1.0] CBaseMonster::RouteSimplify
void CBaseMonster :: RouteSimplify( CBaseEntity *pTargetEnt )
{
	// BUGBUG: this doesn't work 100% yet
	int			i, count, outCount;
	Vector		vecStart;
	WayPoint_t	outRoute[ ROUTE_SIZE * 2 ];	// Any points except the ends can turn into 2 points in the simplified route

	count = 0;

	for ( i = m_iRouteIndex; i < ROUTE_SIZE; i++ )
	{
		if ( !m_Route[i].iType )
			break;
		else
			count++;
		if ( m_Route[i].iType & bits_MF_IS_GOAL )
			break;
	}
	// Can't simplify a direct route!
	if ( count < 2 )
	{
//		DrawRoute( pev, m_Route, m_iRouteIndex, 0, 0, 255 );
		return;
	}

	outCount = 0;
	vecStart = pev->origin;
	for ( i = 0; i < count-1; i++ )
	{
		// Don't eliminate path_corners
		if ( !ShouldSimplify( m_Route[m_iRouteIndex+i].iType ) )
		{
			outRoute[outCount] = m_Route[ m_iRouteIndex + i ];
			outCount++;
		}
		else if ( CheckLocalMove ( vecStart, m_Route[m_iRouteIndex+i+1].vecLocation, pTargetEnt, NULL ) == LOCALMOVE_VALID )
		{
			// Skip vert
			continue;
		}
		else
		{
			Vector vecTest, vecSplit;

			// Halfway between this and next
			vecTest = (m_Route[m_iRouteIndex+i+1].vecLocation + m_Route[m_iRouteIndex+i].vecLocation) * 0.5;

			// Halfway between this and previous
			vecSplit = (m_Route[m_iRouteIndex+i].vecLocation + vecStart) * 0.5;

			int iType = (m_Route[m_iRouteIndex+i].iType | bits_MF_TO_DETOUR) & ~bits_MF_NOT_TO_MASK;
			if ( CheckLocalMove ( vecStart, vecTest, pTargetEnt, NULL ) == LOCALMOVE_VALID )
			{
				outRoute[outCount].iType = iType;
				outRoute[outCount].vecLocation = vecTest;
			}
			else if ( CheckLocalMove ( vecSplit, vecTest, pTargetEnt, NULL ) == LOCALMOVE_VALID )
			{
				outRoute[outCount].iType = iType;
				outRoute[outCount].vecLocation = vecSplit;
				outRoute[outCount+1].iType = iType;
				outRoute[outCount+1].vecLocation = vecTest;
				outCount++; // Adding an extra point
			}
			else
			{
				outRoute[outCount] = m_Route[ m_iRouteIndex + i ];
			}
		}
		// Get last point
		vecStart = outRoute[ outCount ].vecLocation;
		outCount++;
	}
	ASSERT( i < count );
	outRoute[outCount] = m_Route[ m_iRouteIndex + i ];
	outCount++;
	
	// Terminate
	outRoute[outCount].iType = 0;
	ASSERT( outCount < (ROUTE_SIZE*2) );

// Copy the simplified route, disable for testing
	m_iRouteIndex = 0;
	for ( i = 0; i < ROUTE_SIZE && i < outCount; i++ )
	{
		m_Route[i] = outRoute[i];
	}

	// Terminate route
	if ( i < ROUTE_SIZE )
		m_Route[i].iType = 0;

// Debug, test movement code
#if 0
//	if ( CVAR_GET_FLOAT( "simplify" ) != 0 )
		DrawRoute( pev, outRoute, 0, 255, 0, 0 );
//	else
		DrawRoute( pev, m_Route, m_iRouteIndex, 0, 255, 0 );
#endif
}

// [SDK score 1.0] CBaseMonster::FBecomeProne
BOOL CBaseMonster :: FBecomeProne ( void )
{
	if ( FBitSet ( pev->flags, FL_ONGROUND ) )
	{
		pev->flags -= FL_ONGROUND;
	}

	m_IdealMonsterState = MONSTERSTATE_PRONE;
	return TRUE;
}

// [SDK score 1.0] CBaseMonster::CheckRangeAttack1
BOOL CBaseMonster :: CheckRangeAttack1 ( float flDot, float flDist )
{
	if ( flDist > 64 && flDist <= 784 && flDot >= 0.5 )
	{
		return TRUE;
	}
	return FALSE;
}

// [SDK score 1.0] CBaseMonster::CheckRangeAttack2
BOOL CBaseMonster :: CheckRangeAttack2 ( float flDot, float flDist )
{
	if ( flDist > 64 && flDist <= 512 && flDot >= 0.5 )
	{
		return TRUE;
	}
	return FALSE;
}

// [SDK score 1.0] CBaseMonster::CheckAttacks
void CBaseMonster :: CheckAttacks ( CBaseEntity *pTarget, float flDist )
{
	Vector2D	vec2LOS;
	float		flDot;

	UTIL_MakeVectors ( pev->angles );

	vec2LOS = ( pTarget->pev->origin - pev->origin ).Make2D();
	vec2LOS = vec2LOS.Normalize();

	flDot = DotProduct (vec2LOS , gpGlobals->v_forward.Make2D() );

	// we know the enemy is in front now. We'll find which attacks the monster is capable of by
	// checking for corresponding Activities in the model file, then do the simple checks to validate
	// those attack types.
	
	// Clear all attack conditions
	ClearConditions( bits_COND_CAN_RANGE_ATTACK1 | bits_COND_CAN_RANGE_ATTACK2 | bits_COND_CAN_MELEE_ATTACK1 |bits_COND_CAN_MELEE_ATTACK2 );

	if ( m_afCapability & bits_CAP_RANGE_ATTACK1 )
	{
		if ( CheckRangeAttack1 ( flDot, flDist ) )
			SetConditions( bits_COND_CAN_RANGE_ATTACK1 );
	}
	if ( m_afCapability & bits_CAP_RANGE_ATTACK2 )
	{
		if ( CheckRangeAttack2 ( flDot, flDist ) )
			SetConditions( bits_COND_CAN_RANGE_ATTACK2 );
	}
	if ( m_afCapability & bits_CAP_MELEE_ATTACK1 )
	{
		if ( CheckMeleeAttack1 ( flDot, flDist ) )
			SetConditions( bits_COND_CAN_MELEE_ATTACK1 );
	}
	if ( m_afCapability & bits_CAP_MELEE_ATTACK2 )
	{
		if ( CheckMeleeAttack2 ( flDot, flDist ) )
			SetConditions( bits_COND_CAN_MELEE_ATTACK2 );
	}
}

// [SDK score 1.0] CBaseMonster::FCanCheckAttacks
BOOL CBaseMonster :: FCanCheckAttacks ( void )
{
	if ( HasConditions(bits_COND_SEE_ENEMY) && !HasConditions( bits_COND_ENEMY_TOOFAR ) )
	{
		return TRUE;
	}

	return FALSE;
}

// [SDK score 1.0] CBaseMonster::PushEnemy
void CBaseMonster :: PushEnemy( CBaseEntity *pEnemy, Vector &vecLastKnownPos )
{
	int i;

	if (pEnemy == NULL)
		return;

	// UNDONE: blah, this is bad, we should use a stack but I'm too lazy to code one.
	for (i = 0; i < MAX_OLD_ENEMIES; i++)
	{
		if (m_hOldEnemy[i] == pEnemy)
			return;
		if (m_hOldEnemy[i] == NULL) // someone died, reuse their slot
			break;
	}
	if (i >= MAX_OLD_ENEMIES)
		return;

	m_hOldEnemy[i] = pEnemy;
	m_vecOldEnemy[i] = vecLastKnownPos;
}

// [SDK score 1.0] CBaseMonster::PopEnemy
BOOL CBaseMonster :: PopEnemy( )
{
	// UNDONE: blah, this is bad, we should use a stack but I'm too lazy to code one.
	for (int i = MAX_OLD_ENEMIES - 1; i >= 0; i--)
	{
		if (m_hOldEnemy[i] != NULL)
		{
			if (m_hOldEnemy[i]->IsAlive( )) // cheat and know when they die
			{
				m_hEnemy = m_hOldEnemy[i];
				m_vecEnemyLKP = m_vecOldEnemy[i];
				// ALERT( at_console, "remembering\n");
				return TRUE;
			}
			else
			{
				m_hOldEnemy[i] = NULL;
			}
		}
	}
	return FALSE;
}

// [SDK score 1.0] CBaseMonster::SetActivity
void CBaseMonster :: SetActivity ( Activity NewActivity )
{
	int	iSequence;

	iSequence = LookupActivity ( NewActivity );

	// Set to the desired anim, or default anim if the desired is not present
	if ( iSequence > ACTIVITY_NOT_AVAILABLE )
	{
		if ( pev->sequence != iSequence || !m_fSequenceLoops )
		{
			// don't reset frame between walk and run
			if ( !(m_Activity == ACT_WALK || m_Activity == ACT_RUN) || !(NewActivity == ACT_WALK || NewActivity == ACT_RUN))
				pev->frame = 0;
		}

		pev->sequence		= iSequence;	// Set to the reset anim (if it's there)
		ResetSequenceInfo( );
		SetYawSpeed();
	}
	else
	{
		// Not available try to get default anim
		ALERT ( at_aiconsole, "%s has no sequence for act:%d\n", STRING(pev->classname), NewActivity );
		pev->sequence		= 0;	// Set to the reset anim (if it's there)
	}

	m_Activity = NewActivity; // Go ahead and set this so it doesn't keep trying when the anim is not present
	
	// In case someone calls this with something other than the ideal activity
	m_IdealActivity = m_Activity;


}

// [SDK score 1.0] CBaseMonster::SetSequenceByName
void CBaseMonster :: SetSequenceByName ( char *szSequence )
{
	int	iSequence;

	iSequence = LookupSequence ( szSequence );

	// Set to the desired anim, or default anim if the desired is not present
	if ( iSequence > ACTIVITY_NOT_AVAILABLE )
	{
		if ( pev->sequence != iSequence || !m_fSequenceLoops )
		{
			pev->frame = 0;
		}

		pev->sequence		= iSequence;	// Set to the reset anim (if it's there)
		ResetSequenceInfo( );
		SetYawSpeed();
	}
	else
	{
		// Not available try to get default anim
		ALERT ( at_aiconsole, "%s has no sequence named:%f\n", STRING(pev->classname), szSequence );
		pev->sequence		= 0;	// Set to the reset anim (if it's there)
	}
}

// [SDK score 1.0] CBaseMonster::AdvanceRoute
void CBaseMonster :: AdvanceRoute ( float distance )
{

	if ( m_iRouteIndex == ROUTE_SIZE - 1 )
	{
		// time to refresh the route.
		if ( !FRefreshRoute() )
		{
			ALERT ( at_aiconsole, "Can't Refresh Route!!\n" );
		}
	}
	else
	{
		if ( ! (m_Route[ m_iRouteIndex ].iType & bits_MF_IS_GOAL) )
		{
			// If we've just passed a path_corner, advance m_pGoalEnt
			if ( (m_Route[ m_iRouteIndex ].iType & ~bits_MF_NOT_TO_MASK) == bits_MF_TO_PATHCORNER )
				m_pGoalEnt = m_pGoalEnt->GetNextTarget();

			// IF both waypoints are nodes, then check for a link for a door and operate it.
			//
			if (  (m_Route[m_iRouteIndex].iType   & bits_MF_TO_NODE) == bits_MF_TO_NODE
			   && (m_Route[m_iRouteIndex+1].iType & bits_MF_TO_NODE) == bits_MF_TO_NODE)
			{
				//ALERT(at_aiconsole, "SVD: Two nodes. ");

				int iSrcNode  = WorldGraph.FindNearestNode(m_Route[m_iRouteIndex].vecLocation, this );
				int iDestNode = WorldGraph.FindNearestNode(m_Route[m_iRouteIndex+1].vecLocation, this );

				int iLink;
				WorldGraph.HashSearch(iSrcNode, iDestNode, iLink);

				if ( iLink >= 0 && WorldGraph.m_pLinkPool[iLink].m_pLinkEnt != NULL )
				{
					//ALERT(at_aiconsole, "A link. ");
					if ( WorldGraph.HandleLinkEnt ( iSrcNode, WorldGraph.m_pLinkPool[iLink].m_pLinkEnt, m_afCapability, CGraph::NODEGRAPH_DYNAMIC ) )
					{
						//ALERT(at_aiconsole, "usable.");
						entvars_t *pevDoor = WorldGraph.m_pLinkPool[iLink].m_pLinkEnt;
						if (pevDoor)
						{
							m_flMoveWaitFinished = OpenDoorAndWait( pevDoor );
//							ALERT( at_aiconsole, "Wating for door %.2f\n", m_flMoveWaitFinished-gpGlobals->time );
						}
					}
				}
				//ALERT(at_aiconsole, "\n");
			}
			m_iRouteIndex++;
		}
		else	// At goal!!!
		{
			if ( distance < m_flGroundSpeed * 0.2 /* FIX */ )
			{
				MovementComplete();
			}
		}
	}
}

// [SDK score 1.0] CBaseMonster::RouteClassify
int CBaseMonster :: RouteClassify( int iMoveFlag )
{
	int movementGoal;

	movementGoal = MOVEGOAL_NONE;

	if ( iMoveFlag & bits_MF_TO_TARGETENT )
		movementGoal = MOVEGOAL_TARGETENT;
	else if ( iMoveFlag & bits_MF_TO_ENEMY )
		movementGoal = MOVEGOAL_ENEMY;
	else if ( iMoveFlag & bits_MF_TO_PATHCORNER )
		movementGoal = MOVEGOAL_PATHCORNER;
	else if ( iMoveFlag & bits_MF_TO_NODE )
		movementGoal = MOVEGOAL_NODE;
	else if ( iMoveFlag & bits_MF_TO_LOCATION )
		movementGoal = MOVEGOAL_LOCATION;

	return movementGoal;
}

// [SDK score 1.0] CBaseMonster::BuildRoute
BOOL CBaseMonster :: BuildRoute ( const Vector &vecGoal, int iMoveFlag, CBaseEntity *pTarget )
{
	float	flDist;
	Vector	vecApex;
	int		iLocalMove;

	RouteNew();
	m_movementGoal = RouteClassify( iMoveFlag );

// so we don't end up with no moveflags
	m_Route[ 0 ].vecLocation = vecGoal;
	m_Route[ 0 ].iType = iMoveFlag | bits_MF_IS_GOAL;

// check simple local move
	iLocalMove = CheckLocalMove( pev->origin, vecGoal, pTarget, &flDist );

	if ( iLocalMove == LOCALMOVE_VALID )
	{
		// monster can walk straight there!
		return TRUE;
	}
// try to triangulate around any obstacles.
	else if ( iLocalMove != LOCALMOVE_INVALID_DONT_TRIANGULATE && FTriangulate( pev->origin, vecGoal, flDist, pTarget, &vecApex ) )
	{
		// there is a slightly more complicated path that allows the monster to reach vecGoal
		m_Route[ 0 ].vecLocation = vecApex;
		m_Route[ 0 ].iType = (iMoveFlag | bits_MF_TO_DETOUR);

		m_Route[ 1 ].vecLocation = vecGoal;
		m_Route[ 1 ].iType = iMoveFlag | bits_MF_IS_GOAL;

			/*
			WRITE_BYTE(MSG_BROADCAST, SVC_TEMPENTITY);
			WRITE_BYTE(MSG_BROADCAST, TE_SHOWLINE);
			WRITE_COORD(MSG_BROADCAST, vecApex.x );
			WRITE_COORD(MSG_BROADCAST, vecApex.y );
			WRITE_COORD(MSG_BROADCAST, vecApex.z );
			WRITE_COORD(MSG_BROADCAST, vecApex.x );
			WRITE_COORD(MSG_BROADCAST, vecApex.y );
			WRITE_COORD(MSG_BROADCAST, vecApex.z + 128 );
			*/

		RouteSimplify( pTarget );
		return TRUE;
	}

// last ditch, try nodes
	if ( FGetNodeRoute( vecGoal ) )
	{
//		ALERT ( at_console, "Can get there on nodes\n" );
		m_vecMoveGoal = vecGoal;
		RouteSimplify( pTarget );
		return TRUE;
	}

	// b0rk
	return FALSE;
}

// [SDK score 1.0] CBaseMonster::InsertWaypoint
void CBaseMonster :: InsertWaypoint ( Vector vecLocation, int afMoveFlags )
{
	int			i, type;

	
	// we have to save some Index and Type information from the real
	// path_corner or node waypoint that the monster was trying to reach. This makes sure that data necessary 
	// to refresh the original path exists even in the new waypoints that don't correspond directy to a path_corner
	// or node. 
	type = afMoveFlags | (m_Route[ m_iRouteIndex ].iType & ~bits_MF_NOT_TO_MASK);

	for ( i = ROUTE_SIZE-1; i > 0; i-- )
		m_Route[i] = m_Route[i-1];

	m_Route[ m_iRouteIndex ].vecLocation = vecLocation;
	m_Route[ m_iRouteIndex ].iType = type;
}

// [SDK score 1.0] CBaseMonster::Move
void CBaseMonster :: Move ( float flInterval ) 
{
	float		flWaypointDist;
	float		flCheckDist;
	float		flDist;// how far the lookahead check got before hitting an object.
	Vector		vecDir;
	Vector		vecApex;
	CBaseEntity	*pTargetEnt;

	// Don't move if no valid route
	if ( FRouteClear() )
	{
		// If we still have a movement goal, then this is probably a route truncated by SimplifyRoute()
		// so refresh it.
		if ( m_movementGoal == MOVEGOAL_NONE || !FRefreshRoute() )
		{
			ALERT( at_aiconsole, "Tried to move with no route!\n" );
			TaskFail();
			return;
		}
	}
	
	if ( m_flMoveWaitFinished > gpGlobals->time )
		return;

// Debug, test movement code
#if 0
//	if ( CVAR_GET_FLOAT("stopmove" ) != 0 )
	{
		if ( m_movementGoal == MOVEGOAL_ENEMY )
			RouteSimplify( m_hEnemy );
		else
			RouteSimplify( m_hTargetEnt );
		FRefreshRoute();
		return;
	}
#else
// Debug, draw the route
//	DrawRoute( pev, m_Route, m_iRouteIndex, 0, 200, 0 );
#endif

	// if the monster is moving directly towards an entity (enemy for instance), we'll set this pointer
	// to that entity for the CheckLocalMove and Triangulate functions.
	pTargetEnt = NULL;

	// local move to waypoint.
	vecDir = ( m_Route[ m_iRouteIndex ].vecLocation - pev->origin ).Normalize();
	flWaypointDist = ( m_Route[ m_iRouteIndex ].vecLocation - pev->origin ).Length2D();
	
	MakeIdealYaw ( m_Route[ m_iRouteIndex ].vecLocation );
	ChangeYaw ( pev->yaw_speed );

	// if the waypoint is closer than CheckDist, CheckDist is the dist to waypoint
	if ( flWaypointDist < DIST_TO_CHECK )
	{
		flCheckDist = flWaypointDist;
	}
	else
	{
		flCheckDist = DIST_TO_CHECK;
	}
	
	if ( (m_Route[ m_iRouteIndex ].iType & (~bits_MF_NOT_TO_MASK)) == bits_MF_TO_ENEMY )
	{
		// only on a PURE move to enemy ( i.e., ONLY MF_TO_ENEMY set, not MF_TO_ENEMY and DETOUR )
		pTargetEnt = m_hEnemy;
	}
	else if ( (m_Route[ m_iRouteIndex ].iType & ~bits_MF_NOT_TO_MASK) == bits_MF_TO_TARGETENT )
	{
		pTargetEnt = m_hTargetEnt;
	}

	// !!!BUGBUG - CheckDist should be derived from ground speed.
	// If this fails, it should be because of some dynamic entity blocking this guy.
	// We've already checked this path, so we should wait and time out if the entity doesn't move
	flDist = 0;
	if ( CheckLocalMove ( pev->origin, pev->origin + vecDir * flCheckDist, pTargetEnt, &flDist ) != LOCALMOVE_VALID )
	{
		CBaseEntity *pBlocker;

		// Can't move, stop
		Stop();
		// Blocking entity is in global trace_ent
		pBlocker = CBaseEntity::Instance( gpGlobals->trace_ent );
		if (pBlocker)
		{
			DispatchBlocked( edict(), pBlocker->edict() );
		}

		if ( pBlocker && m_moveWaitTime > 0 && pBlocker->IsMoving() && !pBlocker->IsPlayer() && (gpGlobals->time-m_flMoveWaitFinished) > 3.0 )
		{
			// Can we still move toward our target?
			if ( flDist < m_flGroundSpeed )
			{
				// No, Wait for a second
				m_flMoveWaitFinished = gpGlobals->time + m_moveWaitTime;
				return;
			}
			// Ok, still enough room to take a step
		}
		else 
		{
			// try to triangulate around whatever is in the way.
			if ( FTriangulate( pev->origin, m_Route[ m_iRouteIndex ].vecLocation, flDist, pTargetEnt, &vecApex ) )
			{
				InsertWaypoint( vecApex, bits_MF_TO_DETOUR );
				RouteSimplify( pTargetEnt );
			}
			else
			{
//				ALERT ( at_aiconsole, "Couldn't Triangulate\n" );
				Stop();
				// Only do this once until your route is cleared
				if ( m_moveWaitTime > 0 && !(m_afMemory & bits_MEMORY_MOVE_FAILED) )
				{
					FRefreshRoute();
					if ( FRouteClear() )
					{
						TaskFail();
					}
					else
					{
						// Don't get stuck
						if ( (gpGlobals->time - m_flMoveWaitFinished) < 0.2 )
							Remember( bits_MEMORY_MOVE_FAILED );

						m_flMoveWaitFinished = gpGlobals->time + 0.1;
					}
				}
				else
				{
					TaskFail();
					ALERT( at_aiconsole, "%s Failed to move (%d)!\n", STRING(pev->classname), HasMemory( bits_MEMORY_MOVE_FAILED ) );
					//ALERT( at_aiconsole, "%f, %f, %f\n", pev->origin.z, (pev->origin + (vecDir * flCheckDist)).z, m_Route[m_iRouteIndex].vecLocation.z );
				}
				return;
			}
		}
	}

	// close enough to the target, now advance to the next target. This is done before actually reaching
	// the target so that we get a nice natural turn while moving.
	if ( ShouldAdvanceRoute( flWaypointDist ) )///!!!BUGBUG- magic number
	{
		AdvanceRoute( flWaypointDist );
	}

	// Might be waiting for a door
	if ( m_flMoveWaitFinished > gpGlobals->time )
	{
		Stop();
		return;
	}

	// UNDONE: this is a hack to quit moving farther than it has looked ahead.
	if (flCheckDist < m_flGroundSpeed * flInterval)
	{
		flInterval = flCheckDist / m_flGroundSpeed;
		// ALERT( at_console, "%.02f\n", flInterval );
	}
	MoveExecute( pTargetEnt, vecDir, flInterval );

	if ( MovementIsComplete() )
	{
		Stop();
		RouteClear();
	}
}

// [SDK score 1.0] CBaseMonster::MoveExecute
void CBaseMonster::MoveExecute( CBaseEntity *pTargetEnt, const Vector &vecDir, float flInterval )
{
//	float flYaw = UTIL_VecToYaw ( m_Route[ m_iRouteIndex ].vecLocation - pev->origin );// build a yaw that points to the goal.
//	WALK_MOVE( ENT(pev), flYaw, m_flGroundSpeed * flInterval, WALKMOVE_NORMAL );
	if ( m_IdealActivity != m_movementActivity )
		m_IdealActivity = m_movementActivity;

	float flTotal = m_flGroundSpeed * pev->framerate * flInterval;
	float flStep;
	while (flTotal > 0.001)
	{
		// don't walk more than 16 units or stairs stop working
		flStep = min( 16.0f, flTotal );
		UTIL_MoveToOrigin ( ENT(pev), m_Route[ m_iRouteIndex ].vecLocation, flStep, MOVE_NORMAL );
		flTotal -= flStep;
	}
	// ALERT( at_console, "dist %f\n", m_flGroundSpeed * pev->framerate * flInterval );
}

// [SDK score 1.0] CBaseMonster::MonsterInit
void CBaseMonster :: MonsterInit ( void )
{
	if (!g_pGameRules->FAllowMonsters())
	{
		pev->flags |= FL_KILLME;		// Post this because some monster code modifies class data after calling this function
//		REMOVE_ENTITY(ENT(pev));
		return;
	}

	// Set fields common to all monsters
	pev->effects		= 0;
	pev->takedamage		= DAMAGE_AIM;
	pev->ideal_yaw		= pev->angles.y;
	pev->max_health		= pev->health;
	pev->deadflag		= DEAD_NO;
	m_IdealMonsterState	= MONSTERSTATE_IDLE;// Assume monster will be idle, until proven otherwise

	m_IdealActivity = ACT_IDLE;

	SetBits (pev->flags, FL_MONSTER);
	if ( pev->spawnflags & SF_MONSTER_HITMONSTERCLIP )
		pev->flags |= FL_MONSTERCLIP;
	
	ClearSchedule();
	RouteClear();
	InitBoneControllers( ); // FIX: should be done in Spawn

	m_iHintNode			= NO_NODE;

	m_afMemory			= MEMORY_CLEAR;

	m_hEnemy			= NULL;

	m_flDistTooFar		= 1024.0;
	m_flDistLook		= 2048.0;

	// set eye position
	SetEyePosition();

	SetThink( &CBaseMonster::MonsterInitThink );
	pev->nextthink = gpGlobals->time + 0.1;
	SetUse ( &CBaseMonster::MonsterUse );
}

// [SDK score 1.0] CBaseMonster::MonsterInitThink
void CBaseMonster :: MonsterInitThink ( void )
{
	StartMonster();
}

// [SDK score 1.0] CBaseMonster::MovementComplete
void CBaseMonster :: MovementComplete( void ) 
{ 
	switch( m_iTaskStatus )
	{
	case TASKSTATUS_NEW:
	case TASKSTATUS_RUNNING:
		m_iTaskStatus = TASKSTATUS_RUNNING_TASK;
		break;

	case TASKSTATUS_RUNNING_MOVEMENT:
		TaskComplete();
		break;
	
	case TASKSTATUS_RUNNING_TASK:
		ALERT( at_error, "Movement completed twice!\n" );
		break;

	case TASKSTATUS_COMPLETE:		
		break;
	}
	m_movementGoal = MOVEGOAL_NONE;
}

// [SDK score 1.0] CBaseMonster::TaskIsRunning
int CBaseMonster::TaskIsRunning( void )
{
	if ( m_iTaskStatus != TASKSTATUS_COMPLETE && 
		 m_iTaskStatus != TASKSTATUS_RUNNING_MOVEMENT )
		 return 1;

	return 0;
}

// [SDK score 1.0] CBaseMonster::FindCover
BOOL CBaseMonster :: FindCover ( Vector vecThreat, Vector vecViewOffset, float flMinDist, float flMaxDist )
{
	int i;
	int iMyHullIndex;
	int iMyNode;
	int iThreatNode;
	float flDist;
	Vector	vecLookersOffset;
	TraceResult tr;

	if ( !flMaxDist )
	{
		// user didn't supply a MaxDist, so work up a crazy one.
		flMaxDist = 784;
	}

	if ( flMinDist > 0.5 * flMaxDist)
	{
#if _DEBUG
		ALERT ( at_console, "FindCover MinDist (%.0f) too close to MaxDist (%.0f)\n", flMinDist, flMaxDist );
#endif
		flMinDist = 0.5 * flMaxDist;
	}

	if ( !WorldGraph.m_fGraphPresent || !WorldGraph.m_fGraphPointersSet )
	{
		ALERT ( at_aiconsole, "Graph not ready for findcover!\n" );
		return FALSE;
	}

	iMyNode = WorldGraph.FindNearestNode( pev->origin, this );
	iThreatNode = WorldGraph.FindNearestNode ( vecThreat, this );
	iMyHullIndex = WorldGraph.HullIndex( this );

	if ( iMyNode == NO_NODE )
	{
		ALERT ( at_aiconsole, "FindCover() - %s has no nearest node!\n", STRING(pev->classname));
		return FALSE;
	}
	if ( iThreatNode == NO_NODE )
	{
		// ALERT ( at_aiconsole, "FindCover() - Threat has no nearest node!\n" );
		iThreatNode = iMyNode;
		// return FALSE;
	}

	vecLookersOffset = vecThreat + vecViewOffset;// calculate location of enemy's eyes

	// we'll do a rough sample to find nodes that are relatively nearby
	for ( i = 0 ; i < WorldGraph.m_cNodes ; i++ )
	{
		int nodeNumber = (i + WorldGraph.m_iLastCoverSearch) % WorldGraph.m_cNodes;

		CNode &node = WorldGraph.Node( nodeNumber );
		WorldGraph.m_iLastCoverSearch = nodeNumber + 1; // next monster that searches for cover node will start where we left off here.

		// could use an optimization here!!
		flDist = ( pev->origin - node.m_vecOrigin ).Length();

		// DON'T do the trace check on a node that is farther away than a node that we've already found to 
		// provide cover! Also make sure the node is within the mins/maxs of the search.
		if ( flDist >= flMinDist && flDist < flMaxDist )
		{
			UTIL_TraceLine ( node.m_vecOrigin + vecViewOffset, vecLookersOffset, ignore_monsters, ignore_glass,  ENT(pev), &tr );

			// if this node will block the threat's line of sight to me...
			if ( tr.flFraction != 1.0 )
			{
				// ..and is also closer to me than the threat, or the same distance from myself and the threat the node is good.
				if ( ( iMyNode == iThreatNode ) || WorldGraph.PathLength( iMyNode, nodeNumber, iMyHullIndex, m_afCapability ) <= WorldGraph.PathLength( iThreatNode, nodeNumber, iMyHullIndex, m_afCapability ) )
				{
					if ( FValidateCover ( node.m_vecOrigin ) && MoveToLocation( ACT_RUN, 0, node.m_vecOrigin ) )
					{
						/*
						MESSAGE_BEGIN( MSG_BROADCAST, SVC_TEMPENTITY );
							WRITE_BYTE( TE_SHOWLINE);
							
							WRITE_COORD( node.m_vecOrigin.x );
							WRITE_COORD( node.m_vecOrigin.y );
							WRITE_COORD( node.m_vecOrigin.z );

							WRITE_COORD( vecLookersOffset.x );
							WRITE_COORD( vecLookersOffset.y );
							WRITE_COORD( vecLookersOffset.z );
						MESSAGE_END();
						*/

						return TRUE;
					}
				}
			}
		}
	}
	return FALSE;
}

// [SDK score 1.0] CBaseMonster::BuildNearestRoute
BOOL CBaseMonster :: BuildNearestRoute ( Vector vecThreat, Vector vecViewOffset, float flMinDist, float flMaxDist )
{
	int i;
	int iMyHullIndex;
	int iMyNode;
	float flDist;
	Vector	vecLookersOffset;
	TraceResult tr;

	if ( !flMaxDist )
	{
		// user didn't supply a MaxDist, so work up a crazy one.
		flMaxDist = 784;
	}

	if ( flMinDist > 0.5 * flMaxDist)
	{
#if _DEBUG
		ALERT ( at_console, "FindCover MinDist (%.0f) too close to MaxDist (%.0f)\n", flMinDist, flMaxDist );
#endif
		flMinDist = 0.5 * flMaxDist;
	}

	if ( !WorldGraph.m_fGraphPresent || !WorldGraph.m_fGraphPointersSet )
	{
		ALERT ( at_aiconsole, "Graph not ready for BuildNearestRoute!\n" );
		return FALSE;
	}

	iMyNode = WorldGraph.FindNearestNode( pev->origin, this );
	iMyHullIndex = WorldGraph.HullIndex( this );

	if ( iMyNode == NO_NODE )
	{
		ALERT ( at_aiconsole, "BuildNearestRoute() - %s has no nearest node!\n", STRING(pev->classname));
		return FALSE;
	}

	vecLookersOffset = vecThreat + vecViewOffset;// calculate location of enemy's eyes

	// we'll do a rough sample to find nodes that are relatively nearby
	for ( i = 0 ; i < WorldGraph.m_cNodes ; i++ )
	{
		int nodeNumber = (i + WorldGraph.m_iLastCoverSearch) % WorldGraph.m_cNodes;

		CNode &node = WorldGraph.Node( nodeNumber );
		WorldGraph.m_iLastCoverSearch = nodeNumber + 1; // next monster that searches for cover node will start where we left off here.

		// can I get there?
		if (WorldGraph.NextNodeInRoute( iMyNode, nodeNumber, iMyHullIndex, 0 ) != iMyNode)
		{
			flDist = ( vecThreat - node.m_vecOrigin ).Length();

			// is it close?
			if ( flDist > flMinDist && flDist < flMaxDist)
			{
				// can I see where I want to be from there?
				UTIL_TraceLine( node.m_vecOrigin + pev->view_ofs, vecLookersOffset, ignore_monsters, edict(), &tr );

				if (tr.flFraction == 1.0)
				{
					// try to actually get there
					if ( BuildRoute ( node.m_vecOrigin, bits_MF_TO_LOCATION, NULL ) )
					{
						flMaxDist = flDist;
						m_vecMoveGoal = node.m_vecOrigin;
						return TRUE; // UNDONE: keep looking for something closer!
					}
				}
			}
		}
	}

	return FALSE;
}

// [SDK score 1.0] CBaseMonster::FlYawDiff
float	CBaseMonster::FlYawDiff ( void )
{
	float	flCurrentYaw;

	flCurrentYaw = UTIL_AngleMod( pev->angles.y );

	if ( flCurrentYaw == pev->ideal_yaw )
	{
		return 0;
	}


	return UTIL_AngleDiff( pev->ideal_yaw, flCurrentYaw );
}

// [SDK score 1.0] CBaseMonster::VecToYaw
float	CBaseMonster::VecToYaw ( Vector vecDir )
{
	if (vecDir.x == 0 && vecDir.y == 0 && vecDir.z == 0)
		return pev->angles.y;

	return UTIL_VecToYaw( vecDir );
}

// [SDK score 1.0] CBaseMonster::SetEyePosition
void CBaseMonster :: SetEyePosition ( void )
{
	Vector  vecEyePosition;
	void	*pmodel = GET_MODEL_PTR( ENT(pev) );

	GetEyePosition( pmodel, vecEyePosition );

	pev->view_ofs = vecEyePosition;

	if ( pev->view_ofs == g_vecZero )
	{
		ALERT ( at_aiconsole, "%s has no view_ofs!\n", STRING ( pev->classname ) );
	}
}

// [SDK score 1.0] CBaseMonster::HandleAnimEvent
void CBaseMonster :: HandleAnimEvent( MonsterEvent_t *pEvent )
{
	switch( pEvent->event )
	{
	case SCRIPT_EVENT_DEAD:
		if ( m_MonsterState == MONSTERSTATE_SCRIPT )
		{
			pev->deadflag = DEAD_DYING;
			// Kill me now! (and fade out when CineCleanup() is called)
#if _DEBUG
			ALERT( at_aiconsole, "Death event: %s\n", STRING(pev->classname) );
#endif
			pev->health = 0;
		}
#if _DEBUG
		else
			ALERT( at_aiconsole, "INVALID death event:%s\n", STRING(pev->classname) );
#endif
		break;
	case SCRIPT_EVENT_NOT_DEAD:
		if ( m_MonsterState == MONSTERSTATE_SCRIPT )
		{
			pev->deadflag = DEAD_NO;
			// This is for life/death sequences where the player can determine whether a character is dead or alive after the script 
			pev->health = pev->max_health;
		}
		break;

	case SCRIPT_EVENT_SOUND:			// Play a named wave file
		EMIT_SOUND( edict(), CHAN_BODY, pEvent->options, 1.0, ATTN_IDLE );
		break;

	case SCRIPT_EVENT_SOUND_VOICE:
		EMIT_SOUND( edict(), CHAN_VOICE, pEvent->options, 1.0, ATTN_IDLE );
		break;

	case SCRIPT_EVENT_SENTENCE_RND1:		// Play a named sentence group 33% of the time
		if (RANDOM_LONG(0,2) == 0)
			break;
		// fall through...
	case SCRIPT_EVENT_SENTENCE:			// Play a named sentence group
		SENTENCEG_PlayRndSz( edict(), pEvent->options, 1.0, ATTN_IDLE, 0, 100 );
		break;

	case SCRIPT_EVENT_FIREEVENT:		// Fire a trigger
		FireTargets( pEvent->options, this, this, USE_TOGGLE, 0 );
		break;

	case SCRIPT_EVENT_NOINTERRUPT:		// Can't be interrupted from now on
		if ( m_pCine )
			m_pCine->AllowInterrupt( FALSE );
		break;

	case SCRIPT_EVENT_CANINTERRUPT:		// OK to interrupt now
		if ( m_pCine )
			m_pCine->AllowInterrupt( TRUE );
		break;

#if 0
	case SCRIPT_EVENT_INAIR:			// Don't DROP_TO_FLOOR()
	case SCRIPT_EVENT_ENDANIMATION:		// Set ending animation sequence to
		break;
#endif

	case MONSTER_EVENT_BODYDROP_HEAVY:
		if ( pev->flags & FL_ONGROUND )
		{
			if ( RANDOM_LONG( 0, 1 ) == 0 )
			{
				EMIT_SOUND_DYN( ENT(pev), CHAN_BODY, "common/bodydrop3.wav", 1, ATTN_NORM, 0, 90 );
			}
			else
			{
				EMIT_SOUND_DYN( ENT(pev), CHAN_BODY, "common/bodydrop4.wav", 1, ATTN_NORM, 0, 90 );
			}
		}
		break;

	case MONSTER_EVENT_BODYDROP_LIGHT:
		if ( pev->flags & FL_ONGROUND )
		{
			if ( RANDOM_LONG( 0, 1 ) == 0 )
			{
				EMIT_SOUND( ENT(pev), CHAN_BODY, "common/bodydrop3.wav", 1, ATTN_NORM );
			}
			else
			{
				EMIT_SOUND( ENT(pev), CHAN_BODY, "common/bodydrop4.wav", 1, ATTN_NORM );
			}
		}
		break;

	case MONSTER_EVENT_SWISHSOUND:
		{
			// NO MONSTER may use this anim event unless that monster's precache precaches this sound!!!
			EMIT_SOUND( ENT(pev), CHAN_BODY, "zombie/claw_miss2.wav", 1, ATTN_NORM );
			break;
		}

	default:
		ALERT( at_aiconsole, "Unhandled animation event %d for %s\n", pEvent->event, STRING(pev->classname) );
		break;

	}
}

// [SDK score 1.0] CBaseMonster::GetGunPosition
Vector CBaseMonster :: GetGunPosition( )
{
	UTIL_MakeVectors(pev->angles);

	// Vector vecSrc = pev->origin + gpGlobals->v_forward * 10;
	//vecSrc.z = pevShooter->absmin.z + pevShooter->size.z * 0.7;
	//vecSrc.z = pev->origin.z + (pev->view_ofs.z - 4);
	Vector vecSrc = pev->origin 
					+ gpGlobals->v_forward * m_HackedGunPos.y 
					+ gpGlobals->v_right * m_HackedGunPos.x 
					+ gpGlobals->v_up * m_HackedGunPos.z;

	return vecSrc;
}

// [SDK score 1.0] CBaseMonster::FGetNodeRoute
BOOL CBaseMonster :: FGetNodeRoute ( Vector vecDest )
{
	int iPath[ MAX_PATH_SIZE ];
	int iSrcNode, iDestNode;
	int iResult;
	int i;
	int iNumToCopy;

	iSrcNode = WorldGraph.FindNearestNode ( pev->origin, this );
	iDestNode = WorldGraph.FindNearestNode ( vecDest, this );

	if ( iSrcNode == -1 )
	{
		// no node nearest self
//		ALERT ( at_aiconsole, "FGetNodeRoute: No valid node near self!\n" );
		return FALSE;
	}
	else if ( iDestNode == -1 )
	{
		// no node nearest target
//		ALERT ( at_aiconsole, "FGetNodeRoute: No valid node near target!\n" );
		return FALSE;
	}

	// valid src and dest nodes were found, so it's safe to proceed with
	// find shortest path
	int iNodeHull = WorldGraph.HullIndex( this ); // make this a monster virtual function
	iResult = WorldGraph.FindShortestPath ( iPath, iSrcNode, iDestNode, iNodeHull, m_afCapability );

	if ( !iResult )
	{
#if 1
		ALERT ( at_aiconsole, "No Path from %d to %d!\n", iSrcNode, iDestNode );
		return FALSE;
#else
		BOOL bRoutingSave = WorldGraph.m_fRoutingComplete;
		WorldGraph.m_fRoutingComplete = FALSE;
		iResult = WorldGraph.FindShortestPath(iPath, iSrcNode, iDestNode, iNodeHull, m_afCapability);
		WorldGraph.m_fRoutingComplete = bRoutingSave;
		if ( !iResult )
		{
			ALERT ( at_aiconsole, "No Path from %d to %d!\n", iSrcNode, iDestNode );
			return FALSE;
		}
		else
		{
			ALERT ( at_aiconsole, "Routing is inconsistent!" );
		}
#endif
	}

	// there's a valid path within iPath now, so now we will fill the route array
	// up with as many of the waypoints as it will hold.
	
	// don't copy ROUTE_SIZE entries if the path returned is shorter
	// than ROUTE_SIZE!!!
	if ( iResult < ROUTE_SIZE )
	{
		iNumToCopy = iResult;
	}
	else
	{
		iNumToCopy = ROUTE_SIZE;
	}
	
	for ( i = 0 ; i < iNumToCopy; i++ )
	{
		m_Route[ i ].vecLocation = WorldGraph.m_pNodes[ iPath[ i ] ].m_vecOrigin;
		m_Route[ i ].iType = bits_MF_TO_NODE;
	}
	
	if ( iNumToCopy < ROUTE_SIZE )
	{
		m_Route[ iNumToCopy ].vecLocation = vecDest;
		m_Route[ iNumToCopy ].iType |= bits_MF_IS_GOAL;
	}

	return TRUE;
}

// [SDK score 1.0] CBaseMonster::FindHintNode
int CBaseMonster :: FindHintNode ( void )
{
	int i;
	TraceResult tr;

	if ( !WorldGraph.m_fGraphPresent )
	{
		ALERT ( at_aiconsole, "find_hintnode: graph not ready!\n" );
		return NO_NODE;
	}

	if ( WorldGraph.m_iLastActiveIdleSearch >= WorldGraph.m_cNodes )
	{
		WorldGraph.m_iLastActiveIdleSearch = 0;
	}

	for ( i = 0; i < WorldGraph.m_cNodes ; i++ )
	{
		int nodeNumber = (i + WorldGraph.m_iLastActiveIdleSearch) % WorldGraph.m_cNodes;
		CNode &node = WorldGraph.Node( nodeNumber );

		if ( node.m_sHintType )
		{
			// this node has a hint. Take it if it is visible, the monster likes it, and the monster has an animation to match the hint's activity.
			if ( FValidateHintType ( node.m_sHintType ) )
			{
				if ( !node.m_sHintActivity || LookupActivity ( node.m_sHintActivity ) != ACTIVITY_NOT_AVAILABLE )
				{
					UTIL_TraceLine ( pev->origin + pev->view_ofs, node.m_vecOrigin + pev->view_ofs, ignore_monsters, ENT(pev), &tr );

					if ( tr.flFraction == 1.0 )
					{
						WorldGraph.m_iLastActiveIdleSearch = nodeNumber + 1; // next monster that searches for hint nodes will start where we left off.
						return nodeNumber;// take it!
					}
				}
			}
		}
	}

	WorldGraph.m_iLastActiveIdleSearch = 0;// start at the top of the list for the next search.

	return NO_NODE;
}

// [SDK score 0.94] CBaseMonster::ReportAIState
void CBaseMonster::ReportAIState( void )
{
	ALERT_TYPE level = at_console;

	static const char *pStateNames[] = { "None", "Idle", "Combat", "Alert", "Hunt", "Prone", "Scripted", "Dead" };

	ALERT( level, "%s: ", STRING(pev->classname) );
	if ( (int)m_MonsterState < ARRAYSIZE(pStateNames) )
		ALERT( level, "State: %s, ", pStateNames[m_MonsterState] );
	int i = 0;
	while ( activity_map[i].type != 0 )
	{
		if ( activity_map[i].type == (int)m_Activity )
		{
			ALERT( level, "Activity %s, ", activity_map[i].name );
			break;
		}
		i++;
	}

	if ( m_pSchedule )
	{
		const char *pName = NULL;
		pName = m_pSchedule->pName;
		if ( !pName )
			pName = "Unknown";
		ALERT( level, "Schedule %s, ", pName );
		Task_t *pTask = GetTask();
		if ( pTask )
			ALERT( level, "Task %d (#%d), ", pTask->iTask, m_iScheduleIndex );
	}
	else
		ALERT( level, "No Schedule, " );

	if ( m_hEnemy != NULL )
		ALERT( level, "\nEnemy is %s", STRING(m_hEnemy->pev->classname) );
	else
		ALERT( level, "No enemy" );

	if ( IsMoving() )
	{
		ALERT( level, " Moving " );
		if ( m_flMoveWaitFinished > gpGlobals->time )
			ALERT( level, ": Stopped for %.2f. ", m_flMoveWaitFinished - gpGlobals->time );
		else if ( m_IdealActivity == GetStoppedActivity() )
			ALERT( level, ": In stopped anim. " );
	}

	CSquadMonster *pSquadMonster = MySquadMonsterPointer();

	if ( pSquadMonster )
	{
		if ( !pSquadMonster->InSquad() )
		{
			ALERT ( level, "not " );
		}

		ALERT ( level, "In Squad, " );

		if ( !pSquadMonster->IsLeader() )
		{
			ALERT ( level, "not " );
		}

		ALERT ( level, "Leader." );
	}

	ALERT( level, "\n" );
	ALERT( level, "Yaw speed:%3.1f,Health: %3.1f\n", pev->yaw_speed, pev->health );
	if ( pev->spawnflags & SF_MONSTER_PRISONER )
		ALERT( level, " PRISONER! " );
	if ( pev->spawnflags & SF_MONSTER_PREDISASTER )
		ALERT( level, " Pre-Disaster! " );
	ALERT( level, "\n" );
}

// [SDK score 1.0] CBaseMonster::KeyValue
void CBaseMonster :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "TriggerTarget"))
	{
		m_iszTriggerTarget = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "TriggerCondition") )
	{
		m_iTriggerCondition = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
	{
		CBaseToggle::KeyValue( pkvd );
	}
}

// [SDK score 1.0] CBaseMonster::FCheckAITrigger
BOOL CBaseMonster :: FCheckAITrigger ( void )
{
	BOOL fFireTarget;

	if ( m_iTriggerCondition == AITRIGGER_NONE )
	{
		// no conditions, so this trigger is never fired.
		return FALSE; 
	}

	fFireTarget = FALSE;

	switch ( m_iTriggerCondition )
	{
	case AITRIGGER_SEEPLAYER_ANGRY_AT_PLAYER:
		if ( m_hEnemy != NULL && m_hEnemy->IsPlayer() && HasConditions ( bits_COND_SEE_ENEMY ) )
		{
			fFireTarget = TRUE;
		}
		break;
	case AITRIGGER_SEEPLAYER_UNCONDITIONAL:
		if ( HasConditions ( bits_COND_SEE_CLIENT ) )
		{
			fFireTarget = TRUE;
		}
		break;
	case AITRIGGER_SEEPLAYER_NOT_IN_COMBAT:
		if ( HasConditions ( bits_COND_SEE_CLIENT ) && 
			 m_MonsterState != MONSTERSTATE_COMBAT	&& 
			 m_MonsterState != MONSTERSTATE_PRONE	&& 
			 m_MonsterState != MONSTERSTATE_SCRIPT)
		{
			fFireTarget = TRUE;
		}
		break;
	case AITRIGGER_TAKEDAMAGE:
		if ( m_afConditions & ( bits_COND_LIGHT_DAMAGE | bits_COND_HEAVY_DAMAGE ) )
		{
			fFireTarget = TRUE;
		}
		break;
	case AITRIGGER_DEATH:
		if ( pev->deadflag != DEAD_NO )
		{
			fFireTarget = TRUE;
		}
		break;
	case AITRIGGER_HALFHEALTH:
		if ( IsAlive() && pev->health <= ( pev->max_health / 2 ) )
		{
			fFireTarget = TRUE;
		}
		break;
/*

  // !!!UNDONE - no persistant game state that allows us to track these two. 

	case AITRIGGER_SQUADMEMBERDIE:
		break;
	case AITRIGGER_SQUADLEADERDIE:
		break;
*/
	case AITRIGGER_HEARWORLD:
		if ( m_afConditions & bits_COND_HEAR_SOUND && m_afSoundTypes & bits_SOUND_WORLD )
		{
			fFireTarget = TRUE;
		}
		break;
	case AITRIGGER_HEARPLAYER:
		if ( m_afConditions & bits_COND_HEAR_SOUND && m_afSoundTypes & bits_SOUND_PLAYER )
		{
			fFireTarget = TRUE;
		}
		break;
	case AITRIGGER_HEARCOMBAT:
		if ( m_afConditions & bits_COND_HEAR_SOUND && m_afSoundTypes & bits_SOUND_COMBAT )
		{
			fFireTarget = TRUE;
		}
		break;
	}

	if ( fFireTarget )
	{
		// fire the target, then set the trigger conditions to NONE so we don't fire again
		ALERT ( at_aiconsole, "AI Trigger Fire Target\n" );
		FireTargets( STRING( m_iszTriggerTarget ), this, this, USE_TOGGLE, 0 );
		m_iTriggerCondition = AITRIGGER_NONE;
		return TRUE;
	}

	return FALSE;
}

// [SDK score 1.0] CBaseMonster::CanPlaySequence
int CBaseMonster :: CanPlaySequence( BOOL fDisregardMonsterState, int interruptLevel )
{
	if ( m_pCine || !IsAlive() || m_MonsterState == MONSTERSTATE_PRONE )
	{
		// monster is already running a scripted sequence or dead!
		return FALSE;
	}
	
	if ( fDisregardMonsterState )
	{
		// ok to go, no matter what the monster state. (scripted AI)
		return TRUE;
	}

	if ( m_MonsterState == MONSTERSTATE_NONE || m_MonsterState == MONSTERSTATE_IDLE || m_IdealMonsterState == MONSTERSTATE_IDLE )
	{
		// ok to go, but only in these states
		return TRUE;
	}
	
	if ( m_MonsterState == MONSTERSTATE_ALERT && interruptLevel >= SS_INTERRUPT_BY_NAME )
		return TRUE;

	// unknown situation
	return FALSE;
}

// [SDK score 1.0] CBaseMonster::ShootAtEnemy
Vector CBaseMonster :: ShootAtEnemy( const Vector &shootOrigin )
{
	CBaseEntity *pEnemy = m_hEnemy;

	if ( pEnemy )
	{
		return ( (pEnemy->BodyTarget( shootOrigin ) - pEnemy->pev->origin) + m_vecEnemyLKP - shootOrigin ).Normalize();
	}
	else
		return gpGlobals->v_forward;
}

// [SDK score 1.0] CBaseMonster::FacingIdeal
BOOL CBaseMonster :: FacingIdeal( void )
{
	if ( fabs( FlYawDiff() ) <= 0.006 )//!!!BUGBUG - no magic numbers!!!
	{
		return TRUE;
	}

	return FALSE;
}

// [SDK score 1.0] CBaseMonster::FCanActiveIdle
BOOL CBaseMonster :: FCanActiveIdle ( void )
{
	/*
	if ( m_MonsterState == MONSTERSTATE_IDLE && m_IdealMonsterState == MONSTERSTATE_IDLE && !IsMoving() )
	{
		return TRUE;
	}
	*/
	return FALSE;
}

// [SDK score 1.0] CBaseMonster::GetEnemy
BOOL CBaseMonster :: GetEnemy ( void )
{
	CBaseEntity *pNewEnemy;

	if ( HasConditions(bits_COND_SEE_HATE | bits_COND_SEE_DISLIKE | bits_COND_SEE_NEMESIS) )
	{
		pNewEnemy = BestVisibleEnemy();

		if ( pNewEnemy != m_hEnemy && pNewEnemy != NULL)
		{
			// DO NOT mess with the monster's m_hEnemy pointer unless the schedule the monster is currently running will be interrupted
			// by COND_NEW_ENEMY. This will eliminate the problem of monsters getting a new enemy while they are in a schedule that doesn't care,
			// and then not realizing it by the time they get to a schedule that does. I don't feel this is a good permanent fix. 

			if ( m_pSchedule )
			{
				if ( m_pSchedule->iInterruptMask & bits_COND_NEW_ENEMY )
				{
					PushEnemy( m_hEnemy, m_vecEnemyLKP );
					SetConditions(bits_COND_NEW_ENEMY);
					m_hEnemy = pNewEnemy;
					m_vecEnemyLKP = m_hEnemy->pev->origin;
				}
				// if the new enemy has an owner, take that one as well
				if (pNewEnemy->pev->owner != NULL)
				{
					CBaseEntity *pOwner = GetMonsterPointer( pNewEnemy->pev->owner );
					if ( pOwner && (pOwner->pev->flags & FL_MONSTER) && IRelationship( pOwner ) != R_NO )
						PushEnemy( pOwner, m_vecEnemyLKP );
				}
			}
		}
	}

	// remember old enemies
	if (m_hEnemy == NULL && PopEnemy( ))
	{
		if ( m_pSchedule )
		{
			if ( m_pSchedule->iInterruptMask & bits_COND_NEW_ENEMY )
			{
				SetConditions(bits_COND_NEW_ENEMY);
			}
		}
	}

	if ( m_hEnemy != NULL )
	{
		// monster has an enemy.
		return TRUE;
	}

	return FALSE;// monster has no enemy
}

// [SDK score 1.0] CBaseMonster::DropItem
CBaseEntity* CBaseMonster :: DropItem ( char *pszItemName, const Vector &vecPos, const Vector &vecAng )
{
	if ( !pszItemName )
	{
		ALERT ( at_console, "DropItem() - No item name!\n" );
		return NULL;
	}

	CBaseEntity *pItem = CBaseEntity::Create( pszItemName, vecPos, vecAng, edict() );

	if ( pItem )
	{
		// do we want this behavior to be default?! (sjb)
		pItem->pev->velocity = pev->velocity;
		pItem->pev->avelocity = Vector ( 0, RANDOM_FLOAT( 0, 100 ), 0 );
		return pItem;
	}
	else
	{
		ALERT ( at_console, "DropItem() - Didn't create!\n" );
		return FALSE;
	}

}
