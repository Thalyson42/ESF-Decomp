// sdk/scripted.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/scripted.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "animation.h"
#include "saverestore.h"
#include "schedule.h"
#include "scripted.h"
#include "defaultai.h"

// [SDK score 1.0] CCineMonster::KeyValue
void CCineMonster :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "m_iszIdle"))
	{
		m_iszIdle = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "m_iszPlay"))
	{
		m_iszPlay = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "m_iszEntity"))
	{
		m_iszEntity = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "m_fMoveTo"))
	{
		m_fMoveTo = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "m_flRepeat"))
	{
		m_flRepeat = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "m_flRadius"))
	{
		m_flRadius = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "m_iFinishSchedule"))
	{
		m_iFinishSchedule = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
	{
		CBaseMonster::KeyValue( pkvd );
	}
}

// [SDK score 1.0] CCineMonster::FCanOverrideState
BOOL CCineMonster :: FCanOverrideState( void )
{
	if ( pev->spawnflags & SF_SCRIPT_OVERRIDESTATE )
		return TRUE;
	return FALSE;
}

// [SDK score 1.0] CCineAI::FCanOverrideState
BOOL CCineAI :: FCanOverrideState( void )
{
	return TRUE;
}

// [SDK score 1.0] CCineMonster::Use
void CCineMonster :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	// do I already know who I should use
	CBaseEntity		*pEntity = m_hTargetEnt;
	CBaseMonster	*pTarget = NULL;

	if ( pEntity )
		pTarget = pEntity->MyMonsterPointer();

	if ( pTarget )
	{
		// am I already playing the script?
		if ( pTarget->m_scriptState == SCRIPT_PLAYING )
			return;

		m_startTime = gpGlobals->time + 0.05;
	}
	else
	{
		// if not, try finding them
		SetThink( &CCineMonster::CineThink );
		pev->nextthink = gpGlobals->time;
	}
}

// [SDK score 1.0] CCineMonster::Blocked
void CCineMonster :: Blocked( CBaseEntity *pOther )
{

}

// [SDK score 1.0] CCineMonster::Touch
void CCineMonster :: Touch( CBaseEntity *pOther )
{
/*
	ALERT( at_aiconsole, "Cine Touch\n" );
	if (m_pentTarget && OFFSET(pOther->pev) == OFFSET(m_pentTarget))
	{
		CBaseMonster *pTarget = GetClassPtr((CBaseMonster *)VARS(m_pentTarget));
		pTarget->m_monsterState == MONSTERSTATE_SCRIPT;
	}
*/
}

// [SDK score 1.0] CCineMonster::Die
void CCineMonster :: Die( void )
{
	SetThink( &CCineMonster::SUB_Remove );
}

// [SDK score 1.0] CCineMonster::Pain
void CCineMonster :: Pain( void )
{

}

// [SDK score 1.0] CCineMonster::PossessEntity
void CCineMonster :: PossessEntity( void )
{
	CBaseEntity		*pEntity = m_hTargetEnt;
	CBaseMonster	*pTarget = NULL;
	if ( pEntity )
		pTarget = pEntity->MyMonsterPointer();

	if ( pTarget )
	{

	// FindEntity() just checked this!
#if 0
		if ( !pTarget->CanPlaySequence(  FCanOverrideState() ) )
		{
			ALERT( at_aiconsole, "Can't possess entity %s\n", STRING(pTarget->pev->classname) );
			return;
		}
#endif

		pTarget->m_pGoalEnt = this;
		pTarget->m_pCine = this;
		pTarget->m_hTargetEnt = this;

		m_saved_movetype = pTarget->pev->movetype;
		m_saved_solid = pTarget->pev->solid;
		m_saved_effects = pTarget->pev->effects;
		pTarget->pev->effects |= pev->effects;

		switch (m_fMoveTo)
		{
		case 0: 
			pTarget->m_scriptState = SCRIPT_WAIT; 
			break;

		case 1: 
			pTarget->m_scriptState = SCRIPT_WALK_TO_MARK; 
			DelayStart( 1 ); 
			break;

		case 2: 
			pTarget->m_scriptState = SCRIPT_RUN_TO_MARK; 
			DelayStart( 1 ); 
			break;

		case 4: 
			UTIL_SetOrigin( pTarget->pev, pev->origin );
			pTarget->pev->ideal_yaw = pev->angles.y;
			pTarget->pev->avelocity = Vector( 0, 0, 0 );
			pTarget->pev->velocity = Vector( 0, 0, 0 );
			pTarget->pev->effects |= EF_NOINTERP;
			pTarget->pev->angles.y = pev->angles.y;
			pTarget->m_scriptState = SCRIPT_WAIT;
			m_startTime = gpGlobals->time + 1E6;
			// UNDONE: Add a flag to do this so people can fixup physics after teleporting monsters
			//			pTarget->pev->flags &= ~FL_ONGROUND;
			break;
		}
//		ALERT( at_aiconsole, "\"%s\" found and used (INT: %s)\n", STRING( pTarget->pev->targetname ), FBitSet(pev->spawnflags, SF_SCRIPT_NOINTERRUPT)?"No":"Yes" );

		pTarget->m_IdealMonsterState = MONSTERSTATE_SCRIPT;
		if (m_iszIdle)
		{
			StartSequence( pTarget, m_iszIdle, FALSE );
			if (FStrEq( STRING(m_iszIdle), STRING(m_iszPlay)))
			{
				pTarget->pev->framerate = 0;
			}
		}
	}
}

// [SDK score 1.0] CCineAI::PossessEntity
void CCineAI :: PossessEntity( void )
{
	Schedule_t *pNewSchedule;

	CBaseEntity		*pEntity = m_hTargetEnt;
	CBaseMonster	*pTarget = NULL;
	if ( pEntity )
		pTarget = pEntity->MyMonsterPointer();

	if ( pTarget )
	{
		if ( !pTarget->CanPlaySequence( FCanOverrideState(), SS_INTERRUPT_AI ) )
		{
			ALERT( at_aiconsole, "(AI)Can't possess entity %s\n", STRING(pTarget->pev->classname) );
			return;
		}

		pTarget->m_pGoalEnt = this;
		pTarget->m_pCine = this;
		pTarget->m_hTargetEnt = this;

		m_saved_movetype = pTarget->pev->movetype;
		m_saved_solid = pTarget->pev->solid;
		m_saved_effects = pTarget->pev->effects;
		pTarget->pev->effects |= pev->effects;

		switch (m_fMoveTo)
		{
		case 0: 
		case 5:
			pTarget->m_scriptState = SCRIPT_WAIT; 
			break;

		case 1: 
			pTarget->m_scriptState = SCRIPT_WALK_TO_MARK; 
			break;

		case 2: 
			pTarget->m_scriptState = SCRIPT_RUN_TO_MARK; 
			break;

		case 4: 
			// zap the monster instantly to the site of the script entity.
			UTIL_SetOrigin( pTarget->pev, pev->origin );
			pTarget->pev->ideal_yaw = pev->angles.y;
			pTarget->pev->avelocity = Vector( 0, 0, 0 );
			pTarget->pev->velocity = Vector( 0, 0, 0 );
			pTarget->pev->effects |= EF_NOINTERP;
			pTarget->pev->angles.y = pev->angles.y;
			pTarget->m_scriptState = SCRIPT_WAIT;
			m_startTime = gpGlobals->time + 1E6;
			// UNDONE: Add a flag to do this so people can fixup physics after teleporting monsters
			pTarget->pev->flags &= ~FL_ONGROUND;
			break;
		default:
			ALERT ( at_aiconsole, "aiscript:  invalid Move To Position value!" );
			break;
		}
		
		ALERT( at_aiconsole, "\"%s\" found and used\n", STRING( pTarget->pev->targetname ) );

		pTarget->m_IdealMonsterState = MONSTERSTATE_SCRIPT;

/*
		if (m_iszIdle)
		{
			StartSequence( pTarget, m_iszIdle, FALSE );
			if (FStrEq( STRING(m_iszIdle), STRING(m_iszPlay)))
			{
				pTarget->pev->framerate = 0;
			}
		}
*/
		// Already in a scripted state?
		if ( pTarget->m_MonsterState == MONSTERSTATE_SCRIPT )
		{
			pNewSchedule = pTarget->GetScheduleOfType( SCHED_AISCRIPT );
			pTarget->ChangeSchedule( pNewSchedule );
		}
	}
}

// [SDK score 1.0] CCineMonster::StartSequence
BOOL CCineMonster :: StartSequence( CBaseMonster *pTarget, int iszSeq, BOOL completeOnEmpty )
{
	if ( !iszSeq && completeOnEmpty )
	{
		SequenceDone( pTarget );
		return FALSE;
	}

	pTarget->pev->sequence = pTarget->LookupSequence( STRING( iszSeq ) );
	if (pTarget->pev->sequence == -1)
	{
		ALERT( at_error, "%s: unknown scripted sequence \"%s\"\n", STRING( pTarget->pev->targetname ), STRING( iszSeq) );
		pTarget->pev->sequence = 0;
		// return FALSE;
	}

#if 0
	char *s;
	if ( pev->spawnflags & SF_SCRIPT_NOINTERRUPT ) 
		s = "No";
	else
		s = "Yes";

	ALERT( at_console, "%s (%s): started \"%s\":INT:%s\n", STRING( pTarget->pev->targetname ), STRING( pTarget->pev->classname ), STRING( iszSeq), s );
#endif

	pTarget->pev->frame = 0;
	pTarget->ResetSequenceInfo( );
	return TRUE;
}

// [SDK score 1.0] CCineAI::StartSequence
BOOL CCineAI :: StartSequence( CBaseMonster *pTarget, int iszSeq, BOOL completeOnEmpty )
{
	if ( iszSeq == 0 && completeOnEmpty )
	{
		// no sequence was provided. Just let the monster proceed, however, we still have to fire any Sequence target
		// and remove any non-repeatable CineAI entities here ( because there is code elsewhere that handles those tasks, but
		// not until the animation sequence is finished. We have to manually take care of these things where there is no sequence.

		SequenceDone ( pTarget );

		return TRUE;
	}

	pTarget->pev->sequence = pTarget->LookupSequence( STRING( iszSeq ) );

	if (pTarget->pev->sequence == -1)
	{
		ALERT( at_error, "%s: unknown aiscripted sequence \"%s\"\n", STRING( pTarget->pev->targetname ), STRING( iszSeq) );
		pTarget->pev->sequence = 0;
		// return FALSE;
	}

	pTarget->pev->frame = 0;
	pTarget->ResetSequenceInfo( );
	return TRUE;
}

// [SDK score 1.0] CCineMonster::SequenceDone
void CCineMonster :: SequenceDone ( CBaseMonster *pMonster )
{
	//ALERT( at_aiconsole, "Sequence %s finished\n", STRING( m_pCine->m_iszPlay ) );

	if ( !( pev->spawnflags & SF_SCRIPT_REPEATABLE ) )
	{
		SetThink( &CCineMonster::SUB_Remove );
		pev->nextthink = gpGlobals->time + 0.1;
	}
	
	// This is done so that another sequence can take over the monster when triggered by the first
	
	pMonster->CineCleanup();

	FixScriptMonsterSchedule( pMonster );
	
	// This may cause a sequence to attempt to grab this guy NOW, so we have to clear him out
	// of the existing sequence
	SUB_UseTargets( NULL, USE_TOGGLE, 0 );
}

// [SDK score 1.0] CCineMonster::FixScriptMonsterSchedule
void CCineMonster :: FixScriptMonsterSchedule( CBaseMonster *pMonster )
{
	if ( pMonster->m_IdealMonsterState != MONSTERSTATE_DEAD )
		pMonster->m_IdealMonsterState = MONSTERSTATE_IDLE;
	pMonster->ClearSchedule();
}

// [SDK score 1.0] CCineAI::FixScriptMonsterSchedule
void CCineAI :: FixScriptMonsterSchedule( CBaseMonster *pMonster )
{
	switch ( m_iFinishSchedule )
	{
		case SCRIPT_FINISHSCHED_DEFAULT:
			pMonster->ClearSchedule();
			break;
		case SCRIPT_FINISHSCHED_AMBUSH:
			pMonster->ChangeSchedule( pMonster->GetScheduleOfType( SCHED_AMBUSH ) );
			break;
		default:
			ALERT ( at_aiconsole, "FixScriptMonsterSchedule - no case!\n" );
			pMonster->ClearSchedule();
			break;
	}
}

// [SDK score 1.0] CBaseMonster::ExitScriptedSequence
BOOL CBaseMonster :: ExitScriptedSequence( )
{
	if ( pev->deadflag == DEAD_DYING )
	{
		// is this legal?
		// BUGBUG -- This doesn't call Killed()
		m_IdealMonsterState = MONSTERSTATE_DEAD;
		return FALSE;
	}

	if (m_pCine)
	{
		m_pCine->CancelScript( );
	}

	return TRUE;
}

// [SDK score 1.0] CCineMonster::AllowInterrupt
void CCineMonster::AllowInterrupt( BOOL fAllow )
{
	if ( pev->spawnflags & SF_SCRIPT_NOINTERRUPT )
		return;
	m_interruptable = fAllow;
}

// [SDK score 1.0] CCineMonster::CanInterrupt
BOOL CCineMonster::CanInterrupt( void )
{
	if ( !m_interruptable )
		return FALSE;

	CBaseEntity *pTarget = m_hTargetEnt;

	if ( pTarget != NULL && pTarget->pev->deadflag == DEAD_NO )
		return TRUE;

	return FALSE;
}

// [SDK score 1.0] CCineMonster::IgnoreConditions
int	CCineMonster::IgnoreConditions( void )
{
	if ( CanInterrupt() )
		return 0;
	return SCRIPT_BREAK_CONDITIONS;
}

// [SDK score 1.0] CScriptedSentence::KeyValue
void CScriptedSentence :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "sentence"))
	{
		m_iszSentence = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "entity"))
	{
		m_iszEntity = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "duration"))
	{
		m_flDuration = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "radius"))
	{
		m_flRadius = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "refire"))
	{
		m_flRepeat = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if(FStrEq(pkvd->szKeyName, "attenuation"))
	{
		pev->impulse = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if(FStrEq(pkvd->szKeyName, "volume"))
	{
		m_flVolume = atof( pkvd->szValue ) * 0.1;
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "listener"))
	{
		m_iszListener = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
		CBaseToggle::KeyValue( pkvd );
}

// [SDK score 1.0] CScriptedSentence::Use
void CScriptedSentence :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !m_active )
		return;
//	ALERT( at_console, "Firing sentence: %s\n", STRING(m_iszSentence) );
	SetThink( &CScriptedSentence::FindThink );
	pev->nextthink = gpGlobals->time;
}

// [SDK score 1.0] CScriptedSentence::Spawn
void CScriptedSentence :: Spawn( void )
{
	pev->solid = SOLID_NOT;
	
	m_active = TRUE;
	// if no targetname, start now
	if ( !pev->targetname )
	{
		SetThink( &CScriptedSentence::FindThink );
		pev->nextthink = gpGlobals->time + 1.0;
	}

	switch( pev->impulse )
	{
	case 1: // Medium radius
		m_flAttenuation = ATTN_STATIC;
		break;
	
	case 2:	// Large radius
		m_flAttenuation = ATTN_NORM;
		break;

	case 3:	//EVERYWHERE
		m_flAttenuation = ATTN_NONE;
		break;
	
	default:
	case 0: // Small radius
		m_flAttenuation = ATTN_IDLE;
		break;
	}
	pev->impulse = 0;

	// No volume, use normal
	if ( m_flVolume <= 0 )
		m_flVolume = 1.0;
}

// [SDK score 1.0] CScriptedSentence::FindThink
void CScriptedSentence :: FindThink( void )
{
	CBaseToggle *pEnt = FindEntity();
	if (pEnt)
	{
		StartSentence(pEnt);
		if ( pev->spawnflags & SF_SENTENCE_ONCE )
			UTIL_Remove( this );
		SetThink( &CScriptedSentence::DelayThink );
		pev->nextthink = gpGlobals->time + m_flDuration + m_flRepeat;
		m_active = FALSE;
//		ALERT( at_console, "%s: found monster %s\n", STRING(m_iszSentence), STRING(m_iszEntity) );
	}
	else
	{
//		ALERT( at_console, "%s: can't find monster %s\n", STRING(m_iszSentence), STRING(m_iszEntity) );
		pev->nextthink = gpGlobals->time + m_flRepeat + 0.5;
	}
}

// [SDK score 1.0] CScriptedSentence::DelayThink
void CScriptedSentence :: DelayThink( void )
{
	m_active = TRUE;
	if ( !pev->targetname )
		pev->nextthink = gpGlobals->time + 0.1;
	SetThink( &CScriptedSentence::FindThink );
}

// [SDK score 1.0] CScriptedSentence::AcceptableSpeaker
BOOL CScriptedSentence :: AcceptableSpeaker( CBaseToggle *pTarget )
{
	CBaseMonster *pMonster;
	pMonster = NULL;

	if (pTarget)
	{
		pMonster = pTarget->MyMonsterPointer();
	}

	if ( pMonster )
	{
		if ( pev->spawnflags & SF_SENTENCE_FOLLOWERS )
		{
			if ( pMonster->m_hTargetEnt == NULL || !FClassnameIs(pMonster->m_hTargetEnt->pev, "player") )
				return FALSE;
		}
		BOOL override;
		if ( pev->spawnflags & SF_SENTENCE_INTERRUPT )
			override = TRUE;
		else
			override = FALSE;
		if ( pMonster->CanPlaySentence( override ) )
			return TRUE;
	}
	else
	{
		// targeting something other than a monster, sure it can speak
		if( pTarget && pTarget->IsAllowedToSpeak() )
			return TRUE;
	}


	return FALSE;
}

// [SDK score 1.0] CScriptedSentence::StartSentence
BOOL CScriptedSentence :: StartSentence( CBaseToggle *pTarget )
{
	if ( !pTarget )
	{
		ALERT( at_aiconsole, "Not Playing sentence %s\n", STRING(m_iszSentence) );
		return NULL;
	}

	BOOL bConcurrent = FALSE;
	if ( !(pev->spawnflags & SF_SENTENCE_CONCURRENT) )
		bConcurrent = TRUE;

	CBaseEntity *pListener = NULL;
	if (!FStringNull(m_iszListener))
	{
		float radius = m_flRadius;

		if ( FStrEq( STRING(m_iszListener ), "player" ) )
			radius = 4096;	// Always find the player

		pListener = UTIL_FindEntityGeneric( STRING( m_iszListener ), pTarget->pev->origin, radius );
	}

	pTarget->PlayScriptedSentence( STRING(m_iszSentence), m_flDuration,  m_flVolume, m_flAttenuation, bConcurrent, pListener );
	ALERT( at_aiconsole, "Playing sentence %s (%.1f)\n", STRING(m_iszSentence), m_flDuration );
	SUB_UseTargets( NULL, USE_TOGGLE, 0 );
	return TRUE;
}

// [SDK score 1.0] CFurniture::Die
void CFurniture :: Die ( void )
{
	SetThink ( &CFurniture::SUB_Remove );
	pev->nextthink = gpGlobals->time;
}

// [SDK score 1.0] CFurniture::Spawn
void CFurniture :: Spawn( )
{
	PRECACHE_MODEL((char *)STRING(pev->model));
	SET_MODEL(ENT(pev),	STRING(pev->model));

	pev->movetype	= MOVETYPE_NONE;
	pev->solid		= SOLID_BBOX;
	pev->health		= 80000;
	pev->takedamage = DAMAGE_AIM;
	pev->effects		= 0;
	pev->yaw_speed		= 0;
	pev->sequence		= 0;
	pev->frame			= 0;

//	pev->nextthink += 1.0;
//	SetThink (WalkMonsterDelay);

	ResetSequenceInfo( );
	pev->frame = 0;
	MonsterInit();
}

// [SDK score 1.0] CFurniture::Classify
int CFurniture::Classify ( void )
{
	return	CLASS_NONE;
}
