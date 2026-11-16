// sdk/bmodels.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/bmodels.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "doors.h"

// [SDK score 1.0] CFuncWall::Spawn
void CFuncWall :: Spawn( void )
{
	pev->angles		= g_vecZero;
	pev->movetype	= MOVETYPE_PUSH;  // so it doesn't get pushed by anything
	pev->solid		= SOLID_BSP;
	SET_MODEL( ENT(pev), STRING(pev->model) );
	
	// If it can't move/go away, it's really part of the world
	pev->flags |= FL_WORLDBRUSH;
}

// [SDK score 1.0] CFuncWall::Use
void CFuncWall :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( ShouldToggle( useType, (int)(pev->frame)) )
		pev->frame = 1 - pev->frame;
}

// [SDK score 1.0] CFuncWallToggle::Spawn
void CFuncWallToggle :: Spawn( void )
{
	CFuncWall::Spawn();
	if ( pev->spawnflags & SF_WALL_START_OFF )
		TurnOff();
}

// [SDK score 1.0] CFuncWallToggle::TurnOff
void CFuncWallToggle :: TurnOff( void )
{
	pev->solid = SOLID_NOT;
	pev->effects |= EF_NODRAW;
	UTIL_SetOrigin( pev, pev->origin );
}

// [SDK score 1.0] CFuncWallToggle::TurnOn
void CFuncWallToggle :: TurnOn( void )
{
	pev->solid = SOLID_BSP;
	pev->effects &= ~EF_NODRAW;
	UTIL_SetOrigin( pev, pev->origin );
}

// [SDK score 1.0] CFuncWallToggle::IsOn
BOOL CFuncWallToggle :: IsOn( void )
{
	if ( pev->solid == SOLID_NOT )
		return FALSE;
	return TRUE;
}

// [SDK score 1.0] CFuncWallToggle::Use
void CFuncWallToggle :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	int status = IsOn();

	if ( ShouldToggle( useType, status ) )
	{
		if ( status )
			TurnOff();
		else
			TurnOn();
	}
}

// [SDK score 1.0] CFuncConveyor::Spawn
void CFuncConveyor :: Spawn( void )
{
	SetMovedir( pev );
	CFuncWall::Spawn();

	if ( !(pev->spawnflags & SF_CONVEYOR_VISUAL) )
		SetBits( pev->flags, FL_CONVEYOR );

	// HACKHACK - This is to allow for some special effects
	if ( pev->spawnflags & SF_CONVEYOR_NOTSOLID )
	{
		pev->solid = SOLID_NOT;
		pev->skin = 0;		// Don't want the engine thinking we've got special contents on this brush
	}

	if ( pev->speed == 0 )
		pev->speed = 100;

	UpdateSpeed( pev->speed );
}

// [SDK score 1.0] CFuncConveyor::UpdateSpeed
void CFuncConveyor :: UpdateSpeed( float speed )
{
	// Encode it as an integer with 4 fractional bits
	int speedCode = (int)(fabs(speed) * 16.0);

	if ( speed < 0 )
		pev->rendercolor.x = 1;
	else
		pev->rendercolor.x = 0;

	pev->rendercolor.y = (speedCode >> 8);
	pev->rendercolor.z = (speedCode & 0xFF);
}

// [SDK score 1.0] CFuncConveyor::Use
void CFuncConveyor :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
    pev->speed = -pev->speed;
	UpdateSpeed( pev->speed );
}

// [SDK score 1.0] CFuncIllusionary::KeyValue
void CFuncIllusionary :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "skin"))//skin is used for content type
	{
		pev->skin = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CBaseToggle::KeyValue( pkvd );
}

// [SDK score 1.0] CFuncIllusionary::Spawn
void CFuncIllusionary :: Spawn( void )
{
	pev->angles = g_vecZero;
	pev->movetype = MOVETYPE_NONE;  
	pev->solid = SOLID_NOT;// always solid_not 
	SET_MODEL( ENT(pev), STRING(pev->model) );
	
	// I'd rather eat the network bandwidth of this than figure out how to save/restore
	// these entities after they have been moved to the client, or respawn them ala Quake
	// Perhaps we can do this in deathmatch only.
	//	MAKE_STATIC(ENT(pev));
}

// [SDK score 1.0] CFuncMonsterClip::Spawn
void CFuncMonsterClip::Spawn( void )
{
	CFuncWall::Spawn();
	if ( CVAR_GET_FLOAT("showtriggers") == 0 )
		pev->effects = EF_NODRAW;
	pev->flags |= FL_MONSTERCLIP;
}

// [SDK score 0.86] CFuncRotating::KeyValue
void CFuncRotating :: KeyValue( KeyValueData* pkvd)
{
	if (FStrEq(pkvd->szKeyName, "fanfriction"))
	{
		m_flFanFriction = atof(pkvd->szValue)/100;
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "Volume"))
	{
		m_flVolume = atof(pkvd->szValue)/10.0;

		if (m_flVolume > 1.0)
			m_flVolume = 1.0;
		if (m_flVolume < 0.0)
			m_flVolume = 0.0;
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "spawnorigin"))
	{
		Vector tmp;
		UTIL_StringToVector( (float *)tmp, pkvd->szValue );
		if ( tmp != g_vecZero )
			pev->origin = tmp;
	}
	else if (FStrEq(pkvd->szKeyName, "sounds"))
	{
		m_sounds = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else 
		CBaseEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CFuncRotating::Precache
void CFuncRotating :: Precache( void )
{
	char* szSoundFile = (char*) STRING(pev->message);

	// set up fan sounds

	if (!FStringNull( pev->message ) && strlen( szSoundFile ) > 0)
	{
		// if a path is set for a wave, use it

		PRECACHE_SOUND(szSoundFile);
			
		pev->noiseRunning = ALLOC_STRING(szSoundFile);
	} else
	{
		// otherwise use preset sound
		switch (m_sounds)
		{
		case 1:
			PRECACHE_SOUND ("fans/fan1.wav");
			pev->noiseRunning = ALLOC_STRING("fans/fan1.wav");
			break;
		case 2:
			PRECACHE_SOUND ("fans/fan2.wav");
			pev->noiseRunning = ALLOC_STRING("fans/fan2.wav");
			break;
		case 3:
			PRECACHE_SOUND ("fans/fan3.wav");
			pev->noiseRunning = ALLOC_STRING("fans/fan3.wav");
			break;
		case 4:
			PRECACHE_SOUND ("fans/fan4.wav");
			pev->noiseRunning = ALLOC_STRING("fans/fan4.wav");
			break;
		case 5:
			PRECACHE_SOUND ("fans/fan5.wav");
			pev->noiseRunning = ALLOC_STRING("fans/fan5.wav");
			break;

		case 0:
		default:
			if (!FStringNull( pev->message ) && strlen( szSoundFile ) > 0)
			{
				PRECACHE_SOUND(szSoundFile);
				
				pev->noiseRunning = ALLOC_STRING(szSoundFile);
				break;
			} else
			{
				pev->noiseRunning = ALLOC_STRING("common/null.wav");
				break;
			}
		}
	}
	
	if (pev->avelocity != g_vecZero )
	{
		// if fan was spinning, and we went through transition or save/restore,
		// make sure we restart the sound.  1.5 sec delay is magic number. KDB

		SetThink ( &CFuncRotating::SpinUp );
		pev->nextthink = pev->ltime + 1.5;
	}
}

// [SDK score 1.0] CFuncRotating::SpinUp
void CFuncRotating :: SpinUp( void )
{
	Vector	vecAVel;//rotational velocity

	pev->nextthink = pev->ltime + 0.1;
	pev->avelocity = pev->avelocity + ( pev->movedir * ( pev->speed * m_flFanFriction ) );

	vecAVel = pev->avelocity;// cache entity's rotational velocity

	// if we've met or exceeded target speed, set target speed and stop thinking
	if (	abs(vecAVel.x) >= abs(pev->movedir.x * pev->speed)	&&
			abs(vecAVel.y) >= abs(pev->movedir.y * pev->speed)	&&
			abs(vecAVel.z) >= abs(pev->movedir.z * pev->speed) )
	{
		pev->avelocity = pev->movedir * pev->speed;// set speed in case we overshot
		EMIT_SOUND_DYN(ENT(pev), CHAN_STATIC, (char *)STRING(pev->noiseRunning), 
			m_flVolume, m_flAttenuation, SND_CHANGE_PITCH | SND_CHANGE_VOL, FANPITCHMAX);
		
		SetThink( &CFuncRotating::Rotate );
		Rotate();
	} 
	else
	{
		RampPitchVol(TRUE);
	}
}

// [SDK score 1.0] CFuncRotating::SpinDown
void CFuncRotating :: SpinDown( void )
{
	Vector	vecAVel;//rotational velocity
	vec_t vecdir;

	pev->nextthink = pev->ltime + 0.1;

	pev->avelocity = pev->avelocity - ( pev->movedir * ( pev->speed * m_flFanFriction ) );//spin down slower than spinup

	vecAVel = pev->avelocity;// cache entity's rotational velocity

	if (pev->movedir.x != 0)
		vecdir = pev->movedir.x;
	else if (pev->movedir.y != 0)
		vecdir = pev->movedir.y;
	else
		vecdir = pev->movedir.z;

	// if we've met or exceeded target speed, set target speed and stop thinking
	// (note: must check for movedir > 0 or < 0)
	if (((vecdir > 0) && (vecAVel.x <= 0 && vecAVel.y <= 0 && vecAVel.z <= 0)) || 
		((vecdir < 0) && (vecAVel.x >= 0 && vecAVel.y >= 0 && vecAVel.z >= 0)))
	{
		pev->avelocity = g_vecZero;// set speed in case we overshot
		
		// stop sound, we're done
		EMIT_SOUND_DYN(ENT(pev), CHAN_STATIC, (char *)STRING(pev->noiseRunning /* Stop */), 
				0, 0, SND_STOP, m_pitch);

		SetThink( &CFuncRotating::Rotate );
		Rotate();
	} 
	else
	{
		RampPitchVol(FALSE);
	}
}

// [SDK score 1.0] CFuncRotating::RotatingUse
void CFuncRotating :: RotatingUse( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	// is this a brush that should accelerate and decelerate when turned on/off (fan)?
	if ( FBitSet ( pev->spawnflags, SF_BRUSH_ACCDCC ) )
	{
		// fan is spinning, so stop it.
		if ( pev->avelocity != g_vecZero )
		{
			SetThink ( &CFuncRotating::SpinDown );
			//EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, (char *)STRING(pev->noiseStop), 
			//	m_flVolume, m_flAttenuation, 0, m_pitch);

			pev->nextthink = pev->ltime + 0.1;
		}
		else// fan is not moving, so start it
		{
			SetThink ( &CFuncRotating::SpinUp );
			EMIT_SOUND_DYN(ENT(pev), CHAN_STATIC, (char *)STRING(pev->noiseRunning), 
				0.01, m_flAttenuation, 0, FANPITCHMIN);

			pev->nextthink = pev->ltime + 0.1;
		}
	}
	else if ( !FBitSet ( pev->spawnflags, SF_BRUSH_ACCDCC ) )//this is a normal start/stop brush.
	{
		if ( pev->avelocity != g_vecZero )
		{
			// play stopping sound here
			SetThink ( &CFuncRotating::SpinDown );

			// EMIT_SOUND_DYN(ENT(pev), CHAN_WEAPON, (char *)STRING(pev->noiseStop), 
			//	m_flVolume, m_flAttenuation, 0, m_pitch);
			
			pev->nextthink = pev->ltime + 0.1;
			// pev->avelocity = g_vecZero;
		}
		else
		{
			EMIT_SOUND_DYN(ENT(pev), CHAN_STATIC, (char *)STRING(pev->noiseRunning), 
				m_flVolume, m_flAttenuation, 0, FANPITCHMAX);
			pev->avelocity = pev->movedir * pev->speed;

			SetThink( &CFuncRotating::Rotate );
			Rotate();
		}
	}
}

// [SDK score 1.0] CFuncRotating::Blocked
void CFuncRotating :: Blocked( CBaseEntity *pOther )

{
	pOther->TakeDamage( pev, pev, pev->dmg, DMG_CRUSH);
}

// [SDK score 1.0] CPendulum::KeyValue
void CPendulum :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "distance"))
	{
		m_distance = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "damp"))
	{
		m_damp = atof(pkvd->szValue) * 0.001;
		pkvd->fHandled = TRUE;
	}
	else 
		CBaseEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CPendulum::Spawn
void CPendulum :: Spawn( void )
{
	// set the axis of rotation
	CBaseToggle :: AxisDir( pev );

	if ( FBitSet (pev->spawnflags, SF_DOOR_PASSABLE) )
		pev->solid		= SOLID_NOT;
	else
		pev->solid		= SOLID_BSP;
	pev->movetype	= MOVETYPE_PUSH;
	UTIL_SetOrigin(pev, pev->origin);
	SET_MODEL(ENT(pev), STRING(pev->model) );

	if ( m_distance == 0 )
		return;

	if (pev->speed == 0)
		pev->speed = 100;

	m_accel = (pev->speed * pev->speed) / (2 * fabs(m_distance));	// Calculate constant acceleration from speed and distance
	m_maxSpeed = pev->speed;
	m_start = pev->angles;
	m_center = pev->angles + (m_distance * 0.5) * pev->movedir;

	if ( FBitSet( pev->spawnflags, SF_BRUSH_ROTATE_INSTANT) )
	{		
		SetThink( &CPendulum::SUB_CallUseToggle );
		pev->nextthink = gpGlobals->time + 0.1;
	}
	pev->speed = 0;
	SetUse( &CPendulum::PendulumUse );

	if ( FBitSet( pev->spawnflags, SF_PENDULUM_SWING ) )
	{
		SetTouch ( &CPendulum::RopeTouch );
	}
}

// [SDK score 1.0] CPendulum::PendulumUse
void CPendulum :: PendulumUse( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( pev->speed )		// Pendulum is moving, stop it and auto-return if necessary
	{
		if ( FBitSet( pev->spawnflags, SF_PENDULUM_AUTO_RETURN ) )
		{		
			float	delta;

			delta = CBaseToggle :: AxisDelta( pev->spawnflags, pev->angles, m_start );

			pev->avelocity = m_maxSpeed * pev->movedir;
			pev->nextthink = pev->ltime + (delta / m_maxSpeed);
			SetThink( &CPendulum::Stop );
		}
		else
		{
			pev->speed = 0;		// Dead stop
			SetThink( NULL );
			pev->avelocity = g_vecZero;
		}
	}
	else
	{
		pev->nextthink = pev->ltime + 0.1;		// Start the pendulum moving
		m_time = gpGlobals->time;		// Save time to calculate dt
		SetThink( &CPendulum::Swing );
		m_dampSpeed = m_maxSpeed;
	}
}

// [SDK score 1.0] CPendulum::Stop
void CPendulum :: Stop( void )
{
	pev->angles = m_start;
	pev->speed = 0;
	SetThink( NULL );
	pev->avelocity = g_vecZero;
}

// [SDK score 1.0] CPendulum::Blocked
void CPendulum::Blocked( CBaseEntity *pOther )
{
	m_time = gpGlobals->time;
}

// [SDK score 1.0] CPendulum::Swing
void CPendulum :: Swing( void )
{
	float delta, dt;
	
	delta = CBaseToggle :: AxisDelta( pev->spawnflags, pev->angles, m_center );
	dt = gpGlobals->time - m_time;	// How much time has passed?
	m_time = gpGlobals->time;		// Remember the last time called

	if ( delta > 0 && m_accel > 0 )
		pev->speed -= m_accel * dt;	// Integrate velocity
	else 
		pev->speed += m_accel * dt;

	if ( pev->speed > m_maxSpeed )
		pev->speed = m_maxSpeed;
	else if ( pev->speed < -m_maxSpeed )
		pev->speed = -m_maxSpeed;
	// scale the destdelta vector by the time spent traveling to get velocity
	pev->avelocity = pev->speed * pev->movedir;

	// Call this again
	pev->nextthink = pev->ltime + 0.1;

	if ( m_damp )
	{
		m_dampSpeed -= m_damp * m_dampSpeed * dt;
		if ( m_dampSpeed < 30.0 )
		{
			pev->angles = m_center;
			pev->speed = 0;
			SetThink( NULL );
			pev->avelocity = g_vecZero;
		}
		else if ( pev->speed > m_dampSpeed )
			pev->speed = m_dampSpeed;
		else if ( pev->speed < -m_dampSpeed )
			pev->speed = -m_dampSpeed;

	}
}

// [SDK score 1.0] CPendulum::Touch
void CPendulum :: Touch ( CBaseEntity *pOther )
{
	entvars_t	*pevOther = pOther->pev;

	if ( pev->dmg <= 0 )
		return;

	// we can't hurt this thing, so we're not concerned with it
	if ( !pevOther->takedamage )
		return;

	// calculate damage based on rotation speed
	float damage = pev->dmg * pev->speed * 0.01;

	if ( damage < 0 )
		damage = -damage;

	pOther->TakeDamage( pev, pev, damage, DMG_CRUSH );
	
	pevOther->velocity = (pevOther->origin - VecBModelOrigin(pev) ).Normalize() * damage;
}

// [SDK score 1.0] CPendulum::RopeTouch
void CPendulum :: RopeTouch ( CBaseEntity *pOther )
{
	entvars_t	*pevOther = pOther->pev;

	if ( !pOther->IsPlayer() )
	{// not a player!
		ALERT ( at_console, "Not a client\n" );
		return;
	}

	if ( ENT(pevOther) == pev->enemy )
	{// this player already on the rope.
		return;
	}

	pev->enemy = pOther->edict();
	pevOther->velocity = g_vecZero;
	pevOther->movetype = MOVETYPE_NONE;
}
