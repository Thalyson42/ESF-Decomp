// sdk/plats.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/plats.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "trains.h"
#include "saverestore.h"

// [SDK score 1.0] CBasePlatTrain::KeyValue
void CBasePlatTrain :: KeyValue( KeyValueData *pkvd )
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
	else if (FStrEq(pkvd->szKeyName, "height"))
	{
		m_flHeight = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "rotation"))
	{
		m_vecFinalAngle.x = atof(pkvd->szValue);
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
	else if (FStrEq(pkvd->szKeyName, "volume"))
	{
		m_volume = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CBaseToggle::KeyValue( pkvd );
}

// [SDK score 1.0] CBasePlatTrain::Precache
void CBasePlatTrain::Precache( void )
{
// set the plat's "in-motion" sound
	switch (m_bMoveSnd)
	{
	case	0:
		pev->noiseMoving = MAKE_STRING("common/null.wav");
		break;
	case	1:
		PRECACHE_SOUND ("plats/bigmove1.wav");
		pev->noiseMoving = MAKE_STRING("plats/bigmove1.wav");
		break;
	case	2:
		PRECACHE_SOUND ("plats/bigmove2.wav");
		pev->noiseMoving = MAKE_STRING("plats/bigmove2.wav");
		break;
	case	3:
		PRECACHE_SOUND ("plats/elevmove1.wav");
		pev->noiseMoving = MAKE_STRING("plats/elevmove1.wav");
		break;
	case	4:
		PRECACHE_SOUND ("plats/elevmove2.wav");
		pev->noiseMoving = MAKE_STRING("plats/elevmove2.wav");
		break;
	case	5:
		PRECACHE_SOUND ("plats/elevmove3.wav");
		pev->noiseMoving = MAKE_STRING("plats/elevmove3.wav");
		break;
	case	6:
		PRECACHE_SOUND ("plats/freightmove1.wav");
		pev->noiseMoving = MAKE_STRING("plats/freightmove1.wav");
		break;
	case	7:
		PRECACHE_SOUND ("plats/freightmove2.wav");
		pev->noiseMoving = MAKE_STRING("plats/freightmove2.wav");
		break;
	case	8:
		PRECACHE_SOUND ("plats/heavymove1.wav");
		pev->noiseMoving = MAKE_STRING("plats/heavymove1.wav");
		break;
	case	9:
		PRECACHE_SOUND ("plats/rackmove1.wav");
		pev->noiseMoving = MAKE_STRING("plats/rackmove1.wav");
		break;
	case	10:
		PRECACHE_SOUND ("plats/railmove1.wav");
		pev->noiseMoving = MAKE_STRING("plats/railmove1.wav");
		break;
	case	11:
		PRECACHE_SOUND ("plats/squeekmove1.wav");
		pev->noiseMoving = MAKE_STRING("plats/squeekmove1.wav");
		break;
	case	12:
		PRECACHE_SOUND ("plats/talkmove1.wav");
		pev->noiseMoving = MAKE_STRING("plats/talkmove1.wav");
		break;
	case	13:
		PRECACHE_SOUND ("plats/talkmove2.wav");
		pev->noiseMoving = MAKE_STRING("plats/talkmove2.wav");
		break;
	default:
		pev->noiseMoving = MAKE_STRING("common/null.wav");
		break;
	}

// set the plat's 'reached destination' stop sound
	switch (m_bStopSnd)
	{
	case	0:
		pev->noiseArrived = MAKE_STRING("common/null.wav");
		break;
	case	1:
		PRECACHE_SOUND ("plats/bigstop1.wav");
		pev->noiseArrived = MAKE_STRING("plats/bigstop1.wav");
		break;
	case	2:
		PRECACHE_SOUND ("plats/bigstop2.wav");
		pev->noiseArrived = MAKE_STRING("plats/bigstop2.wav");
		break;
	case	3:
		PRECACHE_SOUND ("plats/freightstop1.wav");
		pev->noiseArrived = MAKE_STRING("plats/freightstop1.wav");
		break;
	case	4:
		PRECACHE_SOUND ("plats/heavystop2.wav");
		pev->noiseArrived = MAKE_STRING("plats/heavystop2.wav");
		break;
	case	5:
		PRECACHE_SOUND ("plats/rackstop1.wav");
		pev->noiseArrived = MAKE_STRING("plats/rackstop1.wav");
		break;
	case	6:
		PRECACHE_SOUND ("plats/railstop1.wav");
		pev->noiseArrived = MAKE_STRING("plats/railstop1.wav");
		break;
	case	7:
		PRECACHE_SOUND ("plats/squeekstop1.wav");
		pev->noiseArrived = MAKE_STRING("plats/squeekstop1.wav");
		break;
	case	8:
		PRECACHE_SOUND ("plats/talkstop1.wav");
		pev->noiseArrived = MAKE_STRING("plats/talkstop1.wav");
		break;

	default:
		pev->noiseArrived = MAKE_STRING("common/null.wav");
		break;
	}
}

// [SDK score 1.0] CFuncPlat::Spawn
void CFuncPlat :: Spawn( )
{
	Setup();

	Precache();

	// If this platform is the target of some button, it starts at the TOP position,
	// and is brought down by that button.  Otherwise, it starts at BOTTOM.
	if ( !FStringNull(pev->targetname) )
	{
		UTIL_SetOrigin (pev, m_vecPosition1);
		m_toggle_state = TS_AT_TOP;
		SetUse( &CFuncPlat::PlatUse );
	}
	else
	{
		UTIL_SetOrigin (pev, m_vecPosition2);
		m_toggle_state = TS_AT_BOTTOM;
	}
}

// [SDK score 1.0] CPlatTrigger::Touch
void CPlatTrigger :: Touch( CBaseEntity *pOther )
{
	// Ignore touches by non-players
	entvars_t*	pevToucher = pOther->pev;
	if ( !FClassnameIs (pevToucher, "player") )
		return;

	// Ignore touches by corpses
	if (!pOther->IsAlive()||!m_pPlatform||!m_pPlatform->pev)
		return;
	
	// Make linked platform go up/down.
	if (m_pPlatform->m_toggle_state == TS_AT_BOTTOM)
		m_pPlatform->GoUp();
	else if (m_pPlatform->m_toggle_state == TS_AT_TOP)
		m_pPlatform->pev->nextthink = m_pPlatform->pev->ltime + 1;// delay going down
}

// [SDK score 1.0] CFuncPlat::PlatUse
void CFuncPlat :: PlatUse( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( IsTogglePlat() )
	{
		// Top is off, bottom is on
		BOOL on = (m_toggle_state == TS_AT_BOTTOM) ? TRUE : FALSE;

		if ( !ShouldToggle( useType, on ) )
			return;

		if (m_toggle_state == TS_AT_TOP)
			GoDown();
		else if ( m_toggle_state == TS_AT_BOTTOM )
			GoUp();
	}
	else
	{
		SetUse( NULL );

		if (m_toggle_state == TS_AT_TOP)
			GoDown();
	}
}

// [SDK score 1.0] CFuncPlat::GoDown
void CFuncPlat :: GoDown( void )
{
	if(pev->noiseMovement)
		EMIT_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseMovement), m_volume, ATTN_NORM);

	ASSERT(m_toggle_state == TS_AT_TOP || m_toggle_state == TS_GOING_UP);
	m_toggle_state = TS_GOING_DOWN;
	SetMoveDone(&CFuncPlat::CallHitBottom);
	LinearMove(m_vecPosition2, pev->speed);
}

// [SDK score 1.0] CFuncPlat::HitBottom
void CFuncPlat :: HitBottom( void )
{
	if(pev->noiseMovement)
		STOP_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseMovement));

	if (pev->noiseStopMoving)
		EMIT_SOUND(ENT(pev), CHAN_WEAPON, (char*)STRING(pev->noiseStopMoving), m_volume, ATTN_NORM);

	ASSERT(m_toggle_state == TS_GOING_DOWN);
	m_toggle_state = TS_AT_BOTTOM;
}

// [SDK score 1.0] CFuncPlat::GoUp
void CFuncPlat :: GoUp( void )
{
	if (pev->noiseMovement)
		EMIT_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseMovement), m_volume, ATTN_NORM);
	
	ASSERT(m_toggle_state == TS_AT_BOTTOM || m_toggle_state == TS_GOING_DOWN);
	m_toggle_state = TS_GOING_UP;
	SetMoveDone(&CFuncPlat::CallHitTop);
	LinearMove(m_vecPosition1, pev->speed);
}

// [SDK score 1.0] CFuncPlat::Blocked
void CFuncPlat :: Blocked( CBaseEntity *pOther )
{
	ALERT( at_aiconsole, "%s Blocked by %s\n", STRING(pev->classname), STRING(pOther->pev->classname) );
	// Hurt the blocker a little
	pOther->TakeDamage(pev, pev, 1, DMG_CRUSH);

	if(pev->noiseMovement)
		STOP_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseMovement));
	
	// Send the platform back where it came from
	ASSERT(m_toggle_state == TS_GOING_UP || m_toggle_state == TS_GOING_DOWN);
	if (m_toggle_state == TS_GOING_UP)
		GoDown();
	else if (m_toggle_state == TS_GOING_DOWN)
		GoUp ();
}

// [SDK score 1.0] CFuncPlatRot::SetupRotation
void CFuncPlatRot :: SetupRotation( void )
{
	if ( m_vecFinalAngle.x != 0 )		// This plat rotates too!
	{
		CBaseToggle :: AxisDir( pev );
		m_start	= pev->angles;
		m_end = pev->angles + pev->movedir * m_vecFinalAngle.x;
	}
	else
	{
		m_start = g_vecZero;
		m_end = g_vecZero;
	}
	if ( !FStringNull(pev->targetname) )	// Start at top
	{
		pev->angles = m_end;
	}
}

// [SDK score 1.0] CFuncPlatRot::Spawn
void CFuncPlatRot :: Spawn( void )
{
	CFuncPlat :: Spawn();
	SetupRotation();
}

// [SDK score 1.0] CFuncPlatRot::GoDown
void CFuncPlatRot :: GoDown( void )
{
	CFuncPlat :: GoDown();
	RotMove( m_start, pev->nextthink - pev->ltime );
}

// [SDK score 1.0] CFuncPlatRot::HitBottom
void CFuncPlatRot :: HitBottom( void )
{
	CFuncPlat :: HitBottom();
	pev->avelocity = g_vecZero;
	pev->angles = m_start;
}

// [SDK score 1.0] CFuncPlatRot::GoUp
void CFuncPlatRot :: GoUp( void )
{
	CFuncPlat :: GoUp();
	RotMove( m_end, pev->nextthink - pev->ltime );
}

// [SDK score 1.0] CFuncPlatRot::HitTop
void CFuncPlatRot :: HitTop( void )
{
	CFuncPlat :: HitTop();
	pev->avelocity = g_vecZero;
	pev->angles = m_end;
}

// [SDK score 1.0] CFuncPlatRot::RotMove
void CFuncPlatRot :: RotMove( Vector &destAngle, float time )
{
	// set destdelta to the vector needed to move
	Vector vecDestDelta = destAngle - pev->angles;

	// Travel time is so short, we're practically there already;  so make it so.
	if ( time >= 0.1)
		pev->avelocity = vecDestDelta / time;
	else
	{
		pev->avelocity = vecDestDelta;
		pev->nextthink = pev->ltime + 1;
	}
}

// [SDK score 1.0] CFuncTrain::KeyValue
void CFuncTrain :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "sounds"))
	{
		m_sounds = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CBasePlatTrain::KeyValue( pkvd );
}

// [SDK score 1.0] CFuncTrain::Blocked
void CFuncTrain :: Blocked( CBaseEntity *pOther )

{
	if ( gpGlobals->time < m_flActivateFinished)
		return;

	m_flActivateFinished = gpGlobals->time + 0.5;
	
	pOther->TakeDamage(pev, pev, pev->dmg, DMG_CRUSH);
}

// [SDK score 1.0] CFuncTrain::Use
void CFuncTrain :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( pev->spawnflags & SF_TRAIN_WAIT_RETRIGGER )
	{
		// Move toward my target
		pev->spawnflags &= ~SF_TRAIN_WAIT_RETRIGGER;
		Next();
	}
	else
	{
		pev->spawnflags |= SF_TRAIN_WAIT_RETRIGGER;
		// Pop back to last target if it's available
		if ( pev->enemy )
			pev->target = pev->enemy->v.targetname;
		pev->nextthink = 0;
		pev->velocity = g_vecZero;
		if ( pev->noiseStopMoving )
			EMIT_SOUND (ENT(pev), CHAN_VOICE, (char*)STRING(pev->noiseStopMoving), m_volume, ATTN_NORM);
	}
}

// [SDK score 1.0] CFuncTrain::Wait
void CFuncTrain :: Wait( void )
{
	// Fire the pass target if there is one
	if ( m_pevCurrentTarget->message )
	{
		FireTargets( STRING(m_pevCurrentTarget->message), this, this, USE_TOGGLE, 0 );
		if ( FBitSet( m_pevCurrentTarget->spawnflags, SF_CORNER_FIREONCE ) )
			m_pevCurrentTarget->message = 0;
	}
		
	// need pointer to LAST target.
	if ( FBitSet (m_pevCurrentTarget->spawnflags , SF_TRAIN_WAIT_RETRIGGER ) || ( pev->spawnflags & SF_TRAIN_WAIT_RETRIGGER ) )
    {
		pev->spawnflags |= SF_TRAIN_WAIT_RETRIGGER;
        // clear the sound channel.
		if ( pev->noiseMovement )
			STOP_SOUND( edict(), CHAN_STATIC, (char*)STRING(pev->noiseMovement) );
		if ( pev->noiseStopMoving )
			EMIT_SOUND (ENT(pev), CHAN_VOICE, (char*)STRING(pev->noiseStopMoving), m_volume, ATTN_NORM);
		pev->nextthink = 0;
        return;
    }
    
    // ALERT ( at_console, "%f\n", m_flWait );

	if (m_flWait != 0)
	{// -1 wait will wait forever!		
		pev->nextthink = pev->ltime + m_flWait;
		if ( pev->noiseMovement )
			STOP_SOUND( edict(), CHAN_STATIC, (char*)STRING(pev->noiseMovement) );
		if ( pev->noiseStopMoving )
			EMIT_SOUND (ENT(pev), CHAN_VOICE, (char*)STRING(pev->noiseStopMoving), m_volume, ATTN_NORM);
		SetThink( &CFuncTrain::Next );
	}
	else
	{
		Next();// do it RIGHT now!
	}
}

// [SDK score 1.0] CFuncTrain::Next
void CFuncTrain :: Next( void )
{
	CBaseEntity	*pTarg;

	
	// now find our next target
	pTarg = GetNextTarget();

    if ( !pTarg )
	{
		if ( pev->noiseMovement )
			STOP_SOUND( edict(), CHAN_STATIC, (char*)STRING(pev->noiseMovement) );
		// Play stop sound
		if ( pev->noiseStopMoving )
			EMIT_SOUND (ENT(pev), CHAN_VOICE, (char*)STRING(pev->noiseStopMoving), m_volume, ATTN_NORM);
		return;
	}

	// Save last target in case we need to find it again
	pev->message = pev->target;

	pev->target = pTarg->pev->target;
	m_flWait = pTarg->GetDelay();

	if ( m_pevCurrentTarget && m_pevCurrentTarget->speed != 0 )
	{// don't copy speed from target if it is 0 (uninitialized)
        pev->speed = m_pevCurrentTarget->speed;
		ALERT( at_aiconsole, "Train %s speed to %4.2f\n", STRING(pev->targetname), pev->speed );
	}
	m_pevCurrentTarget = pTarg->pev;// keep track of this since path corners change our target for us.

    pev->enemy = pTarg->edict();//hack

	if(FBitSet(m_pevCurrentTarget->spawnflags, SF_CORNER_TELEPORT))
	{
		// Path corner has indicated a teleport to the next corner.
		SetBits(pev->effects, EF_NOINTERP);
		UTIL_SetOrigin(pev, pTarg->pev->origin - (pev->mins + pev->maxs)* 0.5);
		Wait(); // Get on with doing the next path corner.
	}
	else
	{
		// Normal linear move.
		
		// CHANGED this from CHAN_VOICE to CHAN_STATIC around OEM beta time because trains should
		// use CHAN_STATIC for their movement sounds to prevent sound field problems.
		// this is not a hack or temporary fix, this is how things should be. (sjb).
		if ( pev->noiseMovement )
			STOP_SOUND( edict(), CHAN_STATIC, (char*)STRING(pev->noiseMovement) );
		if ( pev->noiseMovement )
			EMIT_SOUND (ENT(pev), CHAN_STATIC, (char*)STRING(pev->noiseMovement), m_volume, ATTN_NORM);
		ClearBits(pev->effects, EF_NOINTERP);
		SetMoveDone( &CFuncTrain::Wait );
		LinearMove (pTarg->pev->origin - (pev->mins + pev->maxs)* 0.5, pev->speed);
	}
}

// [SDK score 1.0] CFuncTrain::Spawn
void CFuncTrain :: Spawn( void )
{
	Precache();
	if (pev->speed == 0)
		pev->speed = 100;
	
	if ( FStringNull(pev->target) )
		ALERT(at_console, "FuncTrain with no target");
	
	if (pev->dmg == 0)
		pev->dmg = 2;
	
	pev->movetype = MOVETYPE_PUSH;
	
	if ( FBitSet (pev->spawnflags, SF_TRACKTRAIN_PASSABLE) )
		pev->solid		= SOLID_NOT;
	else
		pev->solid		= SOLID_BSP;

	SET_MODEL( ENT(pev), STRING(pev->model) );
	UTIL_SetSize (pev, pev->mins, pev->maxs);
	UTIL_SetOrigin(pev, pev->origin);

	m_activated = FALSE;

	if ( m_volume == 0 )
		m_volume = 0.85;
}

// [SDK score 1.0] CFuncTrain::Precache
void CFuncTrain::Precache( void )
{
	CBasePlatTrain::Precache();

#if 0  // obsolete
	// otherwise use preset sound
	switch (m_sounds)
	{
	case 0:
		pev->noise = 0;
		pev->noise1 = 0;
		break;

	case 1:
		PRECACHE_SOUND ("plats/train2.wav");
		PRECACHE_SOUND ("plats/train1.wav");
		pev->noise = MAKE_STRING("plats/train2.wav");
		pev->noise1 = MAKE_STRING("plats/train1.wav");
		break;

	case 2:
		PRECACHE_SOUND ("plats/platmove1.wav");
		PRECACHE_SOUND ("plats/platstop1.wav");
		pev->noise = MAKE_STRING("plats/platstop1.wav");
		pev->noise1 = MAKE_STRING("plats/platmove1.wav");
		break;
	}
#endif
}

// [SDK score 1.0] CFuncTrain::OverrideReset
void CFuncTrain::OverrideReset( void )
{
	CBaseEntity	*pTarg;

	// Are we moving?
	if ( pev->velocity != g_vecZero && pev->nextthink != 0 )
	{
		pev->target = pev->message;
		// now find our next target
		pTarg = GetNextTarget();
		if ( !pTarg )
		{
			pev->nextthink = 0;
			pev->velocity = g_vecZero;
		}
		else	// Keep moving for 0.1 secs, then find path_corner again and restart
		{
			SetThink( &CFuncTrain::Next );
			pev->nextthink = pev->ltime + 0.1;
		}
	}
}

// [SDK score 1.0] CFuncTrackTrain::KeyValue
void CFuncTrackTrain :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "wheels"))
	{
		m_length = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "height"))
	{
		m_height = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "startspeed"))
	{
		m_startSpeed = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "sounds"))
	{
		m_sounds = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "volume"))
	{
		m_flVolume = (float) (atoi(pkvd->szValue));
		m_flVolume *= 0.1;
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "bank"))
	{
		m_flBank = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CBaseEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CFuncTrackTrain::NextThink
void CFuncTrackTrain :: NextThink( float thinkTime, BOOL alwaysThink )
{
	if ( alwaysThink )
		pev->flags |= FL_ALWAYSTHINK;
	else
		pev->flags &= ~FL_ALWAYSTHINK;

	pev->nextthink = thinkTime;
}

// [SDK score 1.0] CFuncTrackTrain::StopSound
void CFuncTrackTrain :: StopSound( void )
{
	// if sound playing, stop it
	if (m_soundPlaying && pev->noise)
	{
		unsigned short us_encode;
		unsigned short us_sound  = ( ( unsigned short )( m_sounds ) & 0x0007 ) << 12;

		us_encode = us_sound;

		PLAYBACK_EVENT_FULL( FEV_RELIABLE | FEV_UPDATE, edict(), m_usAdjustPitch, 0.0, 
			(float *)&g_vecZero, (float *)&g_vecZero, 0.0, 0.0, us_encode, 0, 1, 0 );

		/*
		STOP_SOUND(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noise));
		*/
		EMIT_SOUND_DYN(ENT(pev), CHAN_ITEM, "plats/ttrain_brake1.wav", m_flVolume, ATTN_NORM, 0, 100);
	}

	m_soundPlaying = 0;
}

// [SDK score 1.0] CFuncTrackTrain::UpdateSound
void CFuncTrackTrain :: UpdateSound( void )
{
	float flpitch;
	
	if (!pev->noise)
		return;

	flpitch = TRAIN_STARTPITCH + (abs(pev->speed) * (TRAIN_MAXPITCH - TRAIN_STARTPITCH) / TRAIN_MAXSPEED);

	if (!m_soundPlaying)
	{
		// play startup sound for train
		EMIT_SOUND_DYN(ENT(pev), CHAN_ITEM, "plats/ttrain_start1.wav", m_flVolume, ATTN_NORM, 0, 100);
		EMIT_SOUND_DYN(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noise), m_flVolume, ATTN_NORM, 0, (int) flpitch);
		m_soundPlaying = 1;
	} 
	else
	{
/*
		// update pitch
		EMIT_SOUND_DYN(ENT(pev), CHAN_STATIC, (char*)STRING(pev->noise), m_flVolume, ATTN_NORM, SND_CHANGE_PITCH, (int) flpitch);
*/
		// volume 0.0 - 1.0 - 6 bits
		// m_sounds 3 bits
		// flpitch = 6 bits
		// 15 bits total

		unsigned short us_encode;
		unsigned short us_sound  = ( ( unsigned short )( m_sounds ) & 0x0007 ) << 12;
		unsigned short us_pitch  = ( ( unsigned short )( flpitch / 10.0 ) & 0x003f ) << 6;
		unsigned short us_volume = ( ( unsigned short )( m_flVolume * 40.0 ) & 0x003f );

		us_encode = us_sound | us_pitch | us_volume;

		PLAYBACK_EVENT_FULL( FEV_RELIABLE | FEV_UPDATE, edict(), m_usAdjustPitch, 0.0, 
			(float *)&g_vecZero, (float *)&g_vecZero, 0.0, 0.0, us_encode, 0, 0, 0 );
	}
}

// [SDK score 1.0] CFuncTrackTrain::DeadEnd
void CFuncTrackTrain::DeadEnd( void )
{
	// Fire the dead-end target if there is one
	CPathTrack *pTrack, *pNext;

	pTrack = m_ppath;

	ALERT( at_aiconsole, "TRAIN(%s): Dead end ", STRING(pev->targetname) );
	// Find the dead end path node
	// HACKHACK -- This is bugly, but the train can actually stop moving at a different node depending on it's speed
	// so we have to traverse the list to it's end.
	if ( pTrack )
	{
		if ( m_oldSpeed < 0 )
		{
			do
			{
				pNext = pTrack->ValidPath( pTrack->GetPrevious(), TRUE );
				if ( pNext )
					pTrack = pNext;
			} while ( pNext );
		}
		else
		{
			do
			{
				pNext = pTrack->ValidPath( pTrack->GetNext(), TRUE );
				if ( pNext )
					pTrack = pNext;
			} while ( pNext );
		}
	}

	pev->velocity = g_vecZero;
	pev->avelocity = g_vecZero;
	if ( pTrack )
	{
		ALERT( at_aiconsole, "at %s\n", STRING(pTrack->pev->targetname) );
		if ( pTrack->pev->netname )
			FireTargets( STRING(pTrack->pev->netname), this, this, USE_TOGGLE, 0 );
	}
	else
		ALERT( at_aiconsole, "\n" );
}

// [SDK score 1.0] CFuncTrackTrain::SetControls
void CFuncTrackTrain :: SetControls( entvars_t *pevControls )
{
	Vector offset = pevControls->origin - pev->oldorigin;

	m_controlMins = pevControls->mins + offset;
	m_controlMaxs = pevControls->maxs + offset;
}

// [SDK score 1.0] CFuncTrackTrain::OnControls
BOOL CFuncTrackTrain :: OnControls( entvars_t *pevTest )
{
	Vector offset = pevTest->origin - pev->origin;

	if ( pev->spawnflags & SF_TRACKTRAIN_NOCONTROL )
		return FALSE;

	// Transform offset into local coordinates
	UTIL_MakeVectors( pev->angles );
	Vector local;
	local.x = DotProduct( offset, gpGlobals->v_forward );
	local.y = -DotProduct( offset, gpGlobals->v_right );
	local.z = DotProduct( offset, gpGlobals->v_up );

	if ( local.x >= m_controlMins.x && local.y >= m_controlMins.y && local.z >= m_controlMins.z &&
		 local.x <= m_controlMaxs.x && local.y <= m_controlMaxs.y && local.z <= m_controlMaxs.z )
		 return TRUE;

	return FALSE;
}

// [SDK score 1.0] CFuncTrackTrain::OverrideReset
void CFuncTrackTrain::OverrideReset( void )
{
	NextThink( pev->ltime + 0.1, FALSE );
	SetThink( &CFuncTrackTrain::NearestPath );
}

// [SDK score 1.0] CFuncTrackTrain::Instance
CFuncTrackTrain *CFuncTrackTrain::Instance( edict_t *pent )
{ 
	if ( FClassnameIs( pent, "func_tracktrain" ) )
		return (CFuncTrackTrain *)GET_PRIVATE(pent);
	return NULL;
}

// [SDK score 1.0] CFuncTrackTrain::Precache
void CFuncTrackTrain :: Precache( void )
{
	if (m_flVolume == 0.0)
		m_flVolume = 1.0;

	switch (m_sounds)
	{
	default:
		// no sound
		pev->noise = 0;
		break;
	case 1: PRECACHE_SOUND("plats/ttrain1.wav"); pev->noise = MAKE_STRING("plats/ttrain1.wav");break;
	case 2: PRECACHE_SOUND("plats/ttrain2.wav"); pev->noise = MAKE_STRING("plats/ttrain2.wav");break;
	case 3: PRECACHE_SOUND("plats/ttrain3.wav"); pev->noise = MAKE_STRING("plats/ttrain3.wav");break; 
	case 4: PRECACHE_SOUND("plats/ttrain4.wav"); pev->noise = MAKE_STRING("plats/ttrain4.wav");break;
	case 5: PRECACHE_SOUND("plats/ttrain6.wav"); pev->noise = MAKE_STRING("plats/ttrain6.wav");break;
	case 6: PRECACHE_SOUND("plats/ttrain7.wav"); pev->noise = MAKE_STRING("plats/ttrain7.wav");break;
	}

	PRECACHE_SOUND("plats/ttrain_brake1.wav");
	PRECACHE_SOUND("plats/ttrain_start1.wav");

	m_usAdjustPitch = PRECACHE_EVENT( 1, "events/train.sc" );
}

// [SDK score 1.0] CFuncTrainControls::Spawn
void CFuncTrainControls :: Spawn( void )
{
	pev->solid = SOLID_NOT;
	pev->movetype = MOVETYPE_NONE;
	SET_MODEL( ENT(pev), STRING(pev->model) );

	UTIL_SetSize( pev, pev->mins, pev->maxs );
	UTIL_SetOrigin( pev, pev->origin );
	
	SetThink(&CFuncTrainControls::Find );
	pev->nextthink = gpGlobals->time;
}

// [SDK score 1.0] CFuncTrackChange::Spawn
void CFuncTrackChange :: Spawn( void )
{
	Setup();
	if ( FBitSet( pev->spawnflags, SF_TRACK_DONT_MOVE ) )
		m_vecPosition2.z = pev->origin.z;

	SetupRotation();

	if ( FBitSet( pev->spawnflags, SF_TRACK_STARTBOTTOM ) )
	{
		UTIL_SetOrigin (pev, m_vecPosition2);
		m_toggle_state = TS_AT_BOTTOM;
		pev->angles = m_start;
		m_targetState = TS_AT_TOP;
	}
	else
	{
		UTIL_SetOrigin (pev, m_vecPosition1);
		m_toggle_state = TS_AT_TOP;
		pev->angles = m_end;
		m_targetState = TS_AT_BOTTOM;
	}

	EnableUse();
	pev->nextthink = pev->ltime + 2.0;
	SetThink( &CFuncTrackChange::Find );
	Precache();
}

// [SDK score 1.0] CFuncTrackChange::Precache
void CFuncTrackChange :: Precache( void )
{
	// Can't trigger sound
	PRECACHE_SOUND( "buttons/button11.wav" );
	
	CFuncPlatRot::Precache();
}

// [SDK score 1.0] CFuncTrackChange::Touch
void CFuncTrackChange :: Touch( CBaseEntity *pOther )
{
#if 0
	TRAIN_CODE code;
	entvars_t *pevToucher = pOther->pev;
#endif
}

// [SDK score 1.0] CFuncTrackChange::KeyValue
void CFuncTrackChange :: KeyValue( KeyValueData *pkvd )
{
	if ( FStrEq(pkvd->szKeyName, "train") )
	{
		m_trainName = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if ( FStrEq(pkvd->szKeyName, "toptrack") )
	{
		m_trackTopName = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if ( FStrEq(pkvd->szKeyName, "bottomtrack") )
	{
		m_trackBottomName = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
	{
		CFuncPlatRot::KeyValue( pkvd );		// Pass up to base class
	}
}

// [SDK score 1.0] CFuncTrackChange::OverrideReset
void CFuncTrackChange::OverrideReset( void )
{
	pev->nextthink = pev->ltime + 1.0;
	SetThink( &CFuncTrackChange::Find );
}

// [SDK score 1.0] CFuncTrackChange::UpdateTrain
void CFuncTrackChange :: UpdateTrain( Vector &dest )
{
	float time = (pev->nextthink - pev->ltime);

	m_train->pev->velocity = pev->velocity;
	m_train->pev->avelocity = pev->avelocity;
	m_train->NextThink( m_train->pev->ltime + time, FALSE );

	// Attempt at getting the train to rotate properly around the origin of the trackchange
	if ( time <= 0 )
		return;

	Vector offset = m_train->pev->origin - pev->origin;
	Vector delta = dest - pev->angles;
	// Transform offset into local coordinates
	UTIL_MakeInvVectors( delta, gpGlobals );
	Vector local;
	local.x = DotProduct( offset, gpGlobals->v_forward );
	local.y = DotProduct( offset, gpGlobals->v_right );
	local.z = DotProduct( offset, gpGlobals->v_up );

	local = local - offset;
	m_train->pev->velocity = pev->velocity + (local * (1.0/time));
}

// [SDK score 1.0] CFuncTrackChange::GoDown
void CFuncTrackChange :: GoDown( void )
{
	if ( m_code == TRAIN_BLOCKING )
		return;

	// HitBottom may get called during CFuncPlat::GoDown(), so set up for that
	// before you call GoDown()

	UpdateAutoTargets( TS_GOING_DOWN );
	// If ROTMOVE, move & rotate
	if ( FBitSet( pev->spawnflags, SF_TRACK_DONT_MOVE ) )
	{
		SetMoveDone( &CFuncTrackChange::CallHitBottom );
		m_toggle_state = TS_GOING_DOWN;
		AngularMove( m_start, pev->speed );
	}
	else
	{
		CFuncPlat :: GoDown();
		SetMoveDone( &CFuncTrackChange::CallHitBottom );
		RotMove( m_start, pev->nextthink - pev->ltime );
	}
	// Otherwise, rotate first, move second

	// If the train is moving with the platform, update it
	if ( m_code == TRAIN_FOLLOWING )
	{
		UpdateTrain( m_start );
		m_train->m_ppath = NULL;
	}
}

// [SDK score 1.0] CFuncTrackChange::GoUp
void CFuncTrackChange :: GoUp( void )
{
	if ( m_code == TRAIN_BLOCKING )
		return;

	// HitTop may get called during CFuncPlat::GoUp(), so set up for that
	// before you call GoUp();

	UpdateAutoTargets( TS_GOING_UP );
	if ( FBitSet( pev->spawnflags, SF_TRACK_DONT_MOVE ) )
	{
		m_toggle_state = TS_GOING_UP;
		SetMoveDone( &CFuncTrackChange::CallHitTop );
		AngularMove( m_end, pev->speed );
	}
	else
	{
		// If ROTMOVE, move & rotate
		CFuncPlat :: GoUp();
		SetMoveDone( &CFuncTrackChange::CallHitTop );
		RotMove( m_end, pev->nextthink - pev->ltime );
	}
	
	// Otherwise, move first, rotate second

	// If the train is moving with the platform, update it
	if ( m_code == TRAIN_FOLLOWING )
	{
		UpdateTrain( m_end );
		m_train->m_ppath = NULL;
	}
}

// [SDK score 1.0] CFuncTrackChange::UpdateAutoTargets
void CFuncTrackChange :: UpdateAutoTargets( int toggleState )
{
	if ( !m_trackTop || !m_trackBottom )
		return;

	if ( toggleState == TS_AT_TOP )
		ClearBits( m_trackTop->pev->spawnflags, SF_PATH_DISABLED );
	else
		SetBits( m_trackTop->pev->spawnflags, SF_PATH_DISABLED );

	if ( toggleState == TS_AT_BOTTOM )
		ClearBits( m_trackBottom->pev->spawnflags, SF_PATH_DISABLED );
	else
		SetBits( m_trackBottom->pev->spawnflags, SF_PATH_DISABLED );
}

// [SDK score 1.0] CFuncTrackChange::Use
void CFuncTrackChange :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( m_toggle_state != TS_AT_TOP && m_toggle_state != TS_AT_BOTTOM )
		return;

	// If train is in "safe" area, but not on the elevator, play alarm sound
	if ( m_toggle_state == TS_AT_TOP )
		m_code = EvaluateTrain( m_trackTop );
	else if ( m_toggle_state == TS_AT_BOTTOM )
		m_code = EvaluateTrain( m_trackBottom );
	else
		m_code = TRAIN_BLOCKING;
	if ( m_code == TRAIN_BLOCKING )
	{
		// Play alarm and return
		EMIT_SOUND(ENT(pev), CHAN_VOICE, "buttons/button11.wav", 1, ATTN_NORM);
		return;
	}

	// Otherwise, it's safe to move
	// If at top, go down
	// at bottom, go up

	DisableUse();
	if (m_toggle_state == TS_AT_TOP)
		GoDown();
	else
		GoUp();
}

// [SDK score 1.0] CFuncTrackChange::HitBottom
void CFuncTrackChange :: HitBottom( void )
{
	CFuncPlatRot :: HitBottom();
	if ( m_code == TRAIN_FOLLOWING )
	{
//		UpdateTrain();
		m_train->SetTrack( m_trackBottom );
	}
	SetThink( NULL );
	pev->nextthink = -1;

	UpdateAutoTargets( m_toggle_state );

	EnableUse();
}

// [SDK score 1.0] CFuncTrackChange::HitTop
void CFuncTrackChange :: HitTop( void )
{
	CFuncPlatRot :: HitTop();
	if ( m_code == TRAIN_FOLLOWING )
	{
//		UpdateTrain();
		m_train->SetTrack( m_trackTop );
	}
	
	// Don't let the plat go back down
	SetThink( NULL );
	pev->nextthink = -1;
	UpdateAutoTargets( m_toggle_state );
	EnableUse();
}

// [SDK score 1.0] CFuncTrackAuto::UpdateAutoTargets
void CFuncTrackAuto :: UpdateAutoTargets( int toggleState )
{
	CPathTrack *pTarget, *pNextTarget;

	if ( !m_trackTop || !m_trackBottom )
		return;

	if ( m_targetState == TS_AT_TOP )
	{
		pTarget = m_trackTop->GetNext();
		pNextTarget = m_trackBottom->GetNext();
	}
	else
	{
		pTarget = m_trackBottom->GetNext();
		pNextTarget = m_trackTop->GetNext();
	}
	if ( pTarget )
	{
		ClearBits( pTarget->pev->spawnflags, SF_PATH_DISABLED );
		if ( m_code == TRAIN_FOLLOWING && m_train && m_train->pev->speed == 0 )
			m_train->Use( this, this, USE_ON, 0 );
	}

	if ( pNextTarget )
		SetBits( pNextTarget->pev->spawnflags, SF_PATH_DISABLED );

}

// [SDK score 1.0] CFuncTrackAuto::Use
void CFuncTrackAuto :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	CPathTrack *pTarget;

	if ( !UseEnabled() )
		return;

	if ( m_toggle_state == TS_AT_TOP )
		pTarget = m_trackTop;
	else if ( m_toggle_state == TS_AT_BOTTOM )
		pTarget = m_trackBottom;
	else
		pTarget = NULL;

	if ( FClassnameIs( pActivator->pev, "func_tracktrain" ) )
	{
		m_code = EvaluateTrain( pTarget );
		// Safe to fire?
		if ( m_code == TRAIN_FOLLOWING && m_toggle_state != m_targetState )
		{
			DisableUse();
			if (m_toggle_state == TS_AT_TOP)
				GoDown();
			else
				GoUp();
		}
	}
	else
	{
		if ( pTarget )
			pTarget = pTarget->GetNext();
		if ( pTarget && m_train->m_ppath != pTarget && ShouldToggle( useType, m_targetState ) )
		{
			if ( m_targetState == TS_AT_TOP )
				m_targetState = TS_AT_BOTTOM;
			else
				m_targetState = TS_AT_TOP;
		}

		UpdateAutoTargets( m_targetState );
	}
}

// [SDK score 1.0] CGunTarget::Spawn
void CGunTarget::Spawn( void )
{
	pev->solid		= SOLID_BSP;
	pev->movetype	= MOVETYPE_PUSH;

	UTIL_SetOrigin(pev, pev->origin);
	SET_MODEL(ENT(pev), STRING(pev->model) );

	if ( pev->speed == 0 )
		pev->speed = 100;

	// Don't take damage until "on"
	pev->takedamage = DAMAGE_NO;
	pev->flags |= FL_MONSTER;

	m_on = FALSE;
	pev->max_health = pev->health;

	if ( pev->spawnflags & FGUNTARGET_START_ON )
	{
		SetThink( &CGunTarget::Start );
		pev->nextthink = pev->ltime + 0.3;
	}
}

// [SDK score 1.0] CGunTarget::Activate
void CGunTarget::Activate( void )
{
	CBaseEntity	*pTarg;

	// now find our next target
	pTarg = GetNextTarget();
	if ( pTarg )
	{
		m_hTargetEnt = pTarg;
		UTIL_SetOrigin( pev, pTarg->pev->origin - (pev->mins + pev->maxs) * 0.5 );
	}
}

// [SDK score 1.0] CGunTarget::Start
void CGunTarget::Start( void )
{
	Use( this, this, USE_ON, 0 );
}

// [SDK score 1.0] CGunTarget::Next
void CGunTarget::Next( void )
{
	SetThink( NULL );

	m_hTargetEnt = GetNextTarget();
	CBaseEntity *pTarget = m_hTargetEnt;
	
	if ( !pTarget )
	{
		Stop();
		return;
	}
	SetMoveDone( &CGunTarget::Wait );
	LinearMove( pTarget->pev->origin - (pev->mins + pev->maxs) * 0.5, pev->speed );
}

// [SDK score 1.0] CGunTarget::Wait
void CGunTarget::Wait( void )
{
	CBaseEntity *pTarget = m_hTargetEnt;
	
	if ( !pTarget )
	{
		Stop();
		return;
	}

	// Fire the pass target if there is one
	if ( pTarget->pev->message )
	{
		FireTargets( STRING(pTarget->pev->message), this, this, USE_TOGGLE, 0 );
		if ( FBitSet( pTarget->pev->spawnflags, SF_CORNER_FIREONCE ) )
			pTarget->pev->message = 0;
	}
		
	m_flWait = pTarget->GetDelay();

	pev->target = pTarget->pev->target;
	SetThink( &CGunTarget::Next );
	if (m_flWait != 0)
	{// -1 wait will wait forever!		
		pev->nextthink = pev->ltime + m_flWait;
	}
	else
	{
		Next();// do it RIGHT now!
	}
}

// [SDK score 1.0] CGunTarget::Stop
void CGunTarget::Stop( void )
{
	pev->velocity = g_vecZero;
	pev->nextthink = 0;
	pev->takedamage = DAMAGE_NO;
}

// [SDK score 1.0] CGunTarget::TakeDamage
int	CGunTarget::TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	if ( pev->health > 0 )
	{
		pev->health -= flDamage;
		if ( pev->health <= 0 )
		{
			pev->health = 0;
			Stop();
			if ( pev->message )
				FireTargets( STRING(pev->message), this, this, USE_TOGGLE, 0 );
		}
	}
	return 0;
}

// [SDK score 1.0] CGunTarget::Use
void CGunTarget::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !ShouldToggle( useType, m_on ) )
		return;

	if ( m_on )
	{
		Stop();
	}
	else
	{
		pev->takedamage = DAMAGE_AIM;
		m_hTargetEnt = GetNextTarget();
		if ( m_hTargetEnt == NULL )
			return;
		pev->health = pev->max_health;
		Next();
	}
}
