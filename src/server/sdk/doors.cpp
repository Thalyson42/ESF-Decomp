// sdk/doors.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/doors.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "doors.h"

// [SDK score 0.91] CBaseDoor::KeyValue
void CBaseDoor::KeyValue( KeyValueData *pkvd )
{

	if (FStrEq(pkvd->szKeyName, "skin"))//skin is used for content type
	{
		pev->skin = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "movesnd"))
	{
		m_bMoveSnd = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "stopsnd"))
	{
		m_bStopSnd = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "healthvalue"))
	{
		m_bHealthValue = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "locked_sound"))
	{
		m_bLockedSound = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "locked_sentence"))
	{
		m_bLockedSentence = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "unlocked_sound"))
	{
		m_bUnlockedSound = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "unlocked_sentence"))
	{
		m_bUnlockedSentence = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "WaveHeight"))
	{
		pev->scale = atof(pkvd->szValue) * (1.0/8.0);
		pkvd->fHandled = TRUE;
	}
	else
		CBaseToggle::KeyValue( pkvd );
}

// [SDK score 1.0] CBaseDoor::SetToggleState
void CBaseDoor :: SetToggleState( int state )
{
	if ( state == TS_AT_TOP )
		UTIL_SetOrigin( pev, m_vecPosition2 );
	else
		UTIL_SetOrigin( pev, m_vecPosition1 );
}

// [SDK score 1.0] CBaseDoor::Precache
void CBaseDoor::Precache( void )
{
	char *pszSound;

// set the door's "in-motion" sound
	switch (m_bMoveSnd)
	{
	case	0:
		pev->noiseMoving = ALLOC_STRING("common/null.wav");
		break;
	case	1:
		PRECACHE_SOUND ("doors/doormove1.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove1.wav");
		break;
	case	2:
		PRECACHE_SOUND ("doors/doormove2.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove2.wav");
		break;
	case	3:
		PRECACHE_SOUND ("doors/doormove3.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove3.wav");
		break;
	case	4:
		PRECACHE_SOUND ("doors/doormove4.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove4.wav");
		break;
	case	5:
		PRECACHE_SOUND ("doors/doormove5.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove5.wav");
		break;
	case	6:
		PRECACHE_SOUND ("doors/doormove6.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove6.wav");
		break;
	case	7:
		PRECACHE_SOUND ("doors/doormove7.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove7.wav");
		break;
	case	8:
		PRECACHE_SOUND ("doors/doormove8.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove8.wav");
		break;
	case	9:
		PRECACHE_SOUND ("doors/doormove9.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove9.wav");
		break;
	case	10:
		PRECACHE_SOUND ("doors/doormove10.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove10.wav");
		break;
	default:
		pev->noiseMoving = ALLOC_STRING("common/null.wav");
		break;
	}

// set the door's 'reached destination' stop sound
	switch (m_bStopSnd)
	{
	case	0:
		pev->noiseArrived = ALLOC_STRING("common/null.wav");
		break;
	case	1:
		PRECACHE_SOUND ("doors/doorstop1.wav");
		pev->noiseArrived = ALLOC_STRING("doors/doorstop1.wav");
		break;
	case	2:
		PRECACHE_SOUND ("doors/doorstop2.wav");
		pev->noiseArrived = ALLOC_STRING("doors/doorstop2.wav");
		break;
	case	3:
		PRECACHE_SOUND ("doors/doorstop3.wav");
		pev->noiseArrived = ALLOC_STRING("doors/doorstop3.wav");
		break;
	case	4:
		PRECACHE_SOUND ("doors/doorstop4.wav");
		pev->noiseArrived = ALLOC_STRING("doors/doorstop4.wav");
		break;
	case	5:
		PRECACHE_SOUND ("doors/doorstop5.wav");
		pev->noiseArrived = ALLOC_STRING("doors/doorstop5.wav");
		break;
	case	6:
		PRECACHE_SOUND ("doors/doorstop6.wav");
		pev->noiseArrived = ALLOC_STRING("doors/doorstop6.wav");
		break;
	case	7:
		PRECACHE_SOUND ("doors/doorstop7.wav");
		pev->noiseArrived = ALLOC_STRING("doors/doorstop7.wav");
		break;
	case	8:
		PRECACHE_SOUND ("doors/doorstop8.wav");
		pev->noiseArrived = ALLOC_STRING("doors/doorstop8.wav");
		break;
	default:
		pev->noiseArrived = ALLOC_STRING("common/null.wav");
		break;
	}

	// get door button sounds, for doors which are directly 'touched' to open

	if (m_bLockedSound)
	{
		pszSound = ButtonSound( (int)m_bLockedSound );
		PRECACHE_SOUND(pszSound);
		m_ls.sLockedSound = ALLOC_STRING(pszSound);
	}

	if (m_bUnlockedSound)
	{
		pszSound = ButtonSound( (int)m_bUnlockedSound );
		PRECACHE_SOUND(pszSound);
		m_ls.sUnlockedSound = ALLOC_STRING(pszSound);
	}

	// get sentence group names, for doors which are directly 'touched' to open

	switch (m_bLockedSentence)
	{
		case 1: m_ls.sLockedSentence = ALLOC_STRING("NA"); break; // access denied
		case 2: m_ls.sLockedSentence = ALLOC_STRING("ND"); break; // security lockout
		case 3: m_ls.sLockedSentence = ALLOC_STRING("NF"); break; // blast door
		case 4: m_ls.sLockedSentence = ALLOC_STRING("NFIRE"); break; // fire door
		case 5: m_ls.sLockedSentence = ALLOC_STRING("NCHEM"); break; // chemical door
		case 6: m_ls.sLockedSentence = ALLOC_STRING("NRAD"); break; // radiation door
		case 7: m_ls.sLockedSentence = ALLOC_STRING("NCON"); break; // gen containment
		case 8: m_ls.sLockedSentence = ALLOC_STRING("NH"); break; // maintenance door
		case 9: m_ls.sLockedSentence = ALLOC_STRING("NG"); break; // broken door
		
		default: m_ls.sLockedSentence = 0; break;
	}

	switch (m_bUnlockedSentence)
	{
		case 1: m_ls.sUnlockedSentence = ALLOC_STRING("EA"); break; // access granted
		case 2: m_ls.sUnlockedSentence = ALLOC_STRING("ED"); break; // security door
		case 3: m_ls.sUnlockedSentence = ALLOC_STRING("EF"); break; // blast door
		case 4: m_ls.sUnlockedSentence = ALLOC_STRING("EFIRE"); break; // fire door
		case 5: m_ls.sUnlockedSentence = ALLOC_STRING("ECHEM"); break; // chemical door
		case 6: m_ls.sUnlockedSentence = ALLOC_STRING("ERAD"); break; // radiation door
		case 7: m_ls.sUnlockedSentence = ALLOC_STRING("ECON"); break; // gen containment
		case 8: m_ls.sUnlockedSentence = ALLOC_STRING("EH"); break; // maintenance door
		
		default: m_ls.sUnlockedSentence = 0; break;
	}
}

// [SDK score 1.0] CBaseDoor::DoorTouch
void CBaseDoor::DoorTouch( CBaseEntity *pOther )
{
	entvars_t*	pevToucher = pOther->pev;
	
	// Ignore touches by anything but players
	if (!FClassnameIs(pevToucher, "player"))
		return;

	// If door has master, and it's not ready to trigger, 
	// play 'locked' sound

	if (m_sMaster && !UTIL_IsMasterTriggered(m_sMaster, pOther))
		PlayLockSounds(pev, &m_ls, TRUE, FALSE);
	
	// If door is somebody's target, then touching does nothing.
	// You have to activate the owner (e.g. button).
	
	if (!FStringNull(pev->targetname))
	{
		// play locked sound
		PlayLockSounds(pev, &m_ls, TRUE, FALSE);
		return; 
	}
	
	m_hActivator = pOther;// remember who activated the door

	if (DoorActivate( ))
		SetTouch( NULL ); // Temporarily disable the touch function, until movement is finished.
}

// [SDK score 1.0] CBaseDoor::Use
void CBaseDoor::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	m_hActivator = pActivator;
	// if not ready to be used, ignore "use" command.
	if (m_toggle_state == TS_AT_BOTTOM || FBitSet(pev->spawnflags, SF_DOOR_NO_AUTO_RETURN) && m_toggle_state == TS_AT_TOP)
		DoorActivate();
}

// [SDK score 1.0] CBaseDoor::DoorActivate
int CBaseDoor::DoorActivate( )
{
	if (!UTIL_IsMasterTriggered(m_sMaster, m_hActivator))
		return 0;

	if (FBitSet(pev->spawnflags, SF_DOOR_NO_AUTO_RETURN) && m_toggle_state == TS_AT_TOP)
	{// door should close
		DoorGoDown();
	}
	else
	{// door should open

		if ( m_hActivator != NULL && m_hActivator->IsPlayer() )
		{// give health if player opened the door (medikit)
		// VARS( m_eoActivator )->health += m_bHealthValue;
	
			m_hActivator->TakeHealth( m_bHealthValue, DMG_GENERIC );

		}

		// play door unlock sounds
		PlayLockSounds(pev, &m_ls, FALSE, FALSE);
		
		DoorGoUp();
	}

	return 1;
}

// [SDK score 1.0] CBaseDoor::DoorHitTop
void CBaseDoor::DoorHitTop( void )
{
	if ( !FBitSet( pev->spawnflags, SF_DOOR_SILENT ) )
	{
		STOP_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseMoving) );
		EMIT_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseArrived), 1, ATTN_NORM);
	}

	ASSERT(m_toggle_state == TS_GOING_UP);
	m_toggle_state = TS_AT_TOP;
	
	// toggle-doors don't come down automatically, they wait for refire.
	if (FBitSet(pev->spawnflags, SF_DOOR_NO_AUTO_RETURN))
	{
		// Re-instate touch method, movement is complete
		if ( !FBitSet ( pev->spawnflags, SF_DOOR_USE_ONLY ) )
			SetTouch( &CBaseDoor::DoorTouch );
	}
	else
	{
		// In flWait seconds, DoorGoDown will fire, unless wait is -1, then door stays open
		pev->nextthink = pev->ltime + m_flWait;
		SetThink( &CBaseDoor::DoorGoDown );

		if ( m_flWait == -1 )
		{
			pev->nextthink = -1;
		}
	}

	// Fire the close target (if startopen is set, then "top" is closed) - netname is the close target
	if ( pev->netname && (pev->spawnflags & SF_DOOR_START_OPEN) )
		FireTargets( STRING(pev->netname), m_hActivator, this, USE_TOGGLE, 0 );

	SUB_UseTargets( m_hActivator, USE_TOGGLE, 0 ); // this isn't finished
}

// [SDK score 1.0] CBaseDoor::DoorGoDown
void CBaseDoor::DoorGoDown( void )
{
	if ( !FBitSet( pev->spawnflags, SF_DOOR_SILENT ) )
	{
		if ( m_toggle_state != TS_GOING_UP && m_toggle_state != TS_GOING_DOWN )
			EMIT_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseMoving), 1, ATTN_NORM);
	}
	
#ifdef DOOR_ASSERT
	ASSERT(m_toggle_state == TS_AT_TOP);
#endif // DOOR_ASSERT
	m_toggle_state = TS_GOING_DOWN;

	SetMoveDone( &CBaseDoor::DoorHitBottom );
	if ( FClassnameIs(pev, "func_door_rotating"))//rotating door
		AngularMove( m_vecAngle1, pev->speed);
	else
		LinearMove( m_vecPosition1, pev->speed);
}

// [SDK score 1.0] CBaseDoor::DoorHitBottom
void CBaseDoor::DoorHitBottom( void )
{
	if ( !FBitSet( pev->spawnflags, SF_DOOR_SILENT ) )
	{
		STOP_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseMoving) );
		EMIT_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseArrived), 1, ATTN_NORM);
	}

	ASSERT(m_toggle_state == TS_GOING_DOWN);
	m_toggle_state = TS_AT_BOTTOM;

	// Re-instate touch method, cycle is complete
	if ( FBitSet ( pev->spawnflags, SF_DOOR_USE_ONLY ) )
	{// use only door
		SetTouch ( NULL );
	}
	else // touchable door
		SetTouch( &CBaseDoor::DoorTouch );

	SUB_UseTargets( m_hActivator, USE_TOGGLE, 0 ); // this isn't finished

	// Fire the close target (if startopen is set, then "top" is closed) - netname is the close target
	if ( pev->netname && !(pev->spawnflags & SF_DOOR_START_OPEN) )
		FireTargets( STRING(pev->netname), m_hActivator, this, USE_TOGGLE, 0 );
}

// [SDK score 1.0] CRotDoor::Spawn
void CRotDoor::Spawn( void )
{
	Precache();
	// set the axis of rotation
	CBaseToggle::AxisDir( pev );

	// check for clockwise rotation
	if ( FBitSet (pev->spawnflags, SF_DOOR_ROTATE_BACKWARDS) )
		pev->movedir = pev->movedir * -1;
	
	//m_flWait			= 2; who the hell did this? (sjb)
	m_vecAngle1	= pev->angles;
	m_vecAngle2	= pev->angles + pev->movedir * m_flMoveDistance;

	ASSERTSZ(m_vecAngle1 != m_vecAngle2, "rotating door start/end positions are equal");
	
	if ( FBitSet (pev->spawnflags, SF_DOOR_PASSABLE) )
		pev->solid		= SOLID_NOT;
	else
		pev->solid		= SOLID_BSP;

	pev->movetype	= MOVETYPE_PUSH;
	UTIL_SetOrigin(pev, pev->origin);
	SET_MODEL(ENT(pev), STRING(pev->model) );

	if (pev->speed == 0)
		pev->speed = 100;
	
// DOOR_START_OPEN is to allow an entity to be lighted in the closed position
// but spawn in the open position
	if ( FBitSet (pev->spawnflags, SF_DOOR_START_OPEN) )
	{	// swap pos1 and pos2, put door at pos2, invert movement direction
		pev->angles = m_vecAngle2;
		Vector vecSav = m_vecAngle1;
		m_vecAngle2 = m_vecAngle1;
		m_vecAngle1 = vecSav;
		pev->movedir = pev->movedir * -1;
	}

	m_toggle_state = TS_AT_BOTTOM;

	if ( FBitSet ( pev->spawnflags, SF_DOOR_USE_ONLY ) )
	{
		SetTouch ( NULL );
	}
	else // touchable button
		SetTouch( &CRotDoor::DoorTouch );
}

// [SDK score 1.0] CRotDoor::SetToggleState
void CRotDoor :: SetToggleState( int state )
{
	if ( state == TS_AT_TOP )
		pev->angles = m_vecAngle2;
	else
		pev->angles = m_vecAngle1;

	UTIL_SetOrigin( pev, pev->origin );
}

// [SDK score 1.0] CMomentaryDoor::Precache
void CMomentaryDoor::Precache( void )
{

// set the door's "in-motion" sound
	switch (m_bMoveSnd)
	{
	case	0:
		pev->noiseMoving = ALLOC_STRING("common/null.wav");
		break;
	case	1:
		PRECACHE_SOUND ("doors/doormove1.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove1.wav");
		break;
	case	2:
		PRECACHE_SOUND ("doors/doormove2.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove2.wav");
		break;
	case	3:
		PRECACHE_SOUND ("doors/doormove3.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove3.wav");
		break;
	case	4:
		PRECACHE_SOUND ("doors/doormove4.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove4.wav");
		break;
	case	5:
		PRECACHE_SOUND ("doors/doormove5.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove5.wav");
		break;
	case	6:
		PRECACHE_SOUND ("doors/doormove6.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove6.wav");
		break;
	case	7:
		PRECACHE_SOUND ("doors/doormove7.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove7.wav");
		break;
	case	8:
		PRECACHE_SOUND ("doors/doormove8.wav");
		pev->noiseMoving = ALLOC_STRING("doors/doormove8.wav");
		break;
	default:
		pev->noiseMoving = ALLOC_STRING("common/null.wav");
		break;
	}
}

// [SDK score 1.0] CMomentaryDoor::KeyValue
void CMomentaryDoor::KeyValue( KeyValueData *pkvd )
{

	if (FStrEq(pkvd->szKeyName, "movesnd"))
	{
		m_bMoveSnd = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "stopsnd"))
	{
//		m_bStopSnd = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "healthvalue"))
	{
//		m_bHealthValue = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CBaseToggle::KeyValue( pkvd );
}
