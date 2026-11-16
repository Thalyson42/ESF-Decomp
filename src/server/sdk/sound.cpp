// sdk/sound.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/sound.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "weapons.h"
#include "player.h"
#include "talkmonster.h"
#include "gamerules.h"
#include <ctype.h>

// [SDK NÃO CONFERIDA] CAmbientGeneric::Spawn
void CAmbientGeneric :: Spawn( void )
{
/*
		-1 : "Default"
		0  : "Everywhere"
		200 : "Small Radius"
		125 : "Medium Radius"
		80  : "Large Radius"
*/

	if ( FBitSet ( pev->spawnflags, AMBIENT_SOUND_EVERYWHERE) )
	{
		m_flAttenuation = ATTN_NONE;
	}
	else if ( FBitSet ( pev->spawnflags, AMBIENT_SOUND_SMALLRADIUS) )
	{
		m_flAttenuation = ATTN_IDLE;
	}
	else if ( FBitSet ( pev->spawnflags, AMBIENT_SOUND_MEDIUMRADIUS) )
	{
		m_flAttenuation = ATTN_STATIC;
	}
	else if ( FBitSet ( pev->spawnflags, AMBIENT_SOUND_LARGERADIUS) )
	{
		m_flAttenuation = ATTN_NORM;
	}
	else 
	{// if the designer didn't set a sound attenuation, default to one.
		m_flAttenuation = ATTN_STATIC;
	}
	
	char* szSoundFile = (char*) STRING(pev->message);

	if ( FStringNull( pev->message ) || strlen( szSoundFile ) < 1 )
	{
		ALERT( at_error, "EMPTY AMBIENT AT: %f, %f, %f\n", pev->origin.x, pev->origin.y, pev->origin.z );
		pev->nextthink = gpGlobals->time + 0.1;
		SetThink( &CAmbientGeneric::SUB_Remove );
		return;
	}
    pev->solid		= SOLID_NOT;
    pev->movetype	= MOVETYPE_NONE;

	// Set up think function for dynamic modification 
	// of ambient sound's pitch or volume. Don't
	// start thinking yet.

	SetThink(&CAmbientGeneric::RampThink);
	pev->nextthink = 0;

	// allow on/off switching via 'use' function.

	SetUse ( &CAmbientGeneric::ToggleUse );
	
	m_fActive = FALSE;

	if ( FBitSet ( pev->spawnflags, AMBIENT_SOUND_NOT_LOOPING ) )
		m_fLooping = FALSE;
	else
		m_fLooping = TRUE;
	Precache( );
}

// [SDK score 1.0] CAmbientGeneric::Precache
void CAmbientGeneric :: Precache( void )
{
	char* szSoundFile = (char*) STRING(pev->message);

	if ( !FStringNull( pev->message ) && strlen( szSoundFile ) > 1 )
	{
		if (*szSoundFile != '!')
			PRECACHE_SOUND(szSoundFile);
	}
	// init all dynamic modulation parms
	InitModulationParms();

	if ( !FBitSet (pev->spawnflags, AMBIENT_SOUND_START_SILENT ) )
	{
		// start the sound ASAP
		if (m_fLooping)
			m_fActive = TRUE;
	}
	if ( m_fActive )
	{
		UTIL_EmitAmbientSound ( ENT(pev), pev->origin, szSoundFile, 
				(m_dpv.vol * 0.01), m_flAttenuation, SND_SPAWNING, m_dpv.pitch);

		pev->nextthink = gpGlobals->time + 0.1;
	}
}

// [SDK score 1.0] CAmbientGeneric::RampThink
void CAmbientGeneric :: RampThink( void )
{
	char* szSoundFile = (char*) STRING(pev->message);
	int pitch = m_dpv.pitch; 
	int vol = m_dpv.vol;
	int flags = 0;
	int fChanged = 0;		// FALSE if pitch and vol remain unchanged this round
	int	prev;

	if (!m_dpv.spinup && !m_dpv.spindown && !m_dpv.fadein && !m_dpv.fadeout && !m_dpv.lfotype)
		return;						// no ramps or lfo, stop thinking

	// ==============
	// pitch envelope
	// ==============
	if (m_dpv.spinup || m_dpv.spindown)
	{
		prev = m_dpv.pitchfrac >> 8;

		if (m_dpv.spinup > 0)
			m_dpv.pitchfrac += m_dpv.spinup;
		else if (m_dpv.spindown > 0)
			m_dpv.pitchfrac -= m_dpv.spindown;

		pitch = m_dpv.pitchfrac >> 8;
		
		if (pitch > m_dpv.pitchrun)
		{
			pitch = m_dpv.pitchrun;
			m_dpv.spinup = 0;				// done with ramp up
		}

		if (pitch < m_dpv.pitchstart)
		{
			pitch = m_dpv.pitchstart;
			m_dpv.spindown = 0;				// done with ramp down

			// shut sound off
			UTIL_EmitAmbientSound(ENT(pev), pev->origin, szSoundFile, 
					0, 0, SND_STOP, 0);

			// return without setting nextthink
			return;
		}

		if (pitch > 255) pitch = 255;
		if (pitch < 1) pitch = 1;

		m_dpv.pitch = pitch;

		fChanged |= (prev != pitch);
		flags |= SND_CHANGE_PITCH;
	}

	// ==================
	// amplitude envelope
	// ==================
	if (m_dpv.fadein || m_dpv.fadeout)
	{
		prev = m_dpv.volfrac >> 8;

		if (m_dpv.fadein > 0)
			m_dpv.volfrac += m_dpv.fadein;
		else if (m_dpv.fadeout > 0)
			m_dpv.volfrac -= m_dpv.fadeout;

		vol = m_dpv.volfrac >> 8;

		if (vol > m_dpv.volrun)
		{
			vol = m_dpv.volrun;
			m_dpv.fadein = 0;				// done with ramp up
		}

		if (vol < m_dpv.volstart)
		{
			vol = m_dpv.volstart;
			m_dpv.fadeout = 0;				// done with ramp down
			
			// shut sound off
			UTIL_EmitAmbientSound(ENT(pev), pev->origin, szSoundFile, 
					0, 0, SND_STOP, 0);

			// return without setting nextthink
			return;
		}

		if (vol > 100) vol = 100;
		if (vol < 1) vol = 1;

		m_dpv.vol = vol;

		fChanged |= (prev != vol);
		flags |= SND_CHANGE_VOL;
	}

	// ===================
	// pitch/amplitude LFO
	// ===================
	if (m_dpv.lfotype)
	{
		int pos;

		if (m_dpv.lfofrac > 0x6fffffff)
			m_dpv.lfofrac = 0;

		// update lfo, lfofrac/255 makes a triangle wave 0-255
		m_dpv.lfofrac += m_dpv.lforate;
		pos = m_dpv.lfofrac >> 8;

		if (m_dpv.lfofrac < 0)
		{
			m_dpv.lfofrac = 0;
			m_dpv.lforate = abs(m_dpv.lforate);
			pos = 0;
		}
		else if (pos > 255)
		{
			pos = 255;
			m_dpv.lfofrac = (255 << 8);
			m_dpv.lforate = -abs(m_dpv.lforate);
		}

		switch(m_dpv.lfotype)
		{
		case LFO_SQUARE:
			if (pos < 128)
				m_dpv.lfomult = 255;
			else
				m_dpv.lfomult = 0;
			
			break;
		case LFO_RANDOM:
			if (pos == 255)
				m_dpv.lfomult = RANDOM_LONG(0, 255);
			break;
		case LFO_TRIANGLE:
		default: 
			m_dpv.lfomult = pos;
			break;
		}

		if (m_dpv.lfomodpitch)
		{
			prev = pitch;

			// pitch 0-255
			pitch += ((m_dpv.lfomult - 128) * m_dpv.lfomodpitch) / 100;

			if (pitch > 255) pitch = 255;
			if (pitch < 1) pitch = 1;

			
			fChanged |= (prev != pitch);
			flags |= SND_CHANGE_PITCH;
		}

		if (m_dpv.lfomodvol)
		{
			// vol 0-100
			prev = vol;

			vol += ((m_dpv.lfomult - 128) * m_dpv.lfomodvol) / 100;

			if (vol > 100) vol = 100;
			if (vol < 0) vol = 0;
			
			fChanged |= (prev != vol);
			flags |= SND_CHANGE_VOL;
		}

	}

	// Send update to playing sound only if we actually changed
	// pitch or volume in this routine.

	if (flags && fChanged) 
	{
		if (pitch == PITCH_NORM)
			pitch = PITCH_NORM + 1; // don't send 'no pitch' !

		UTIL_EmitAmbientSound(ENT(pev), pev->origin, szSoundFile, 
				(vol * 0.01), m_flAttenuation, flags, pitch);
	}

	// update ramps at 5hz
	pev->nextthink = gpGlobals->time + 0.2;
	return;
}

// [SDK heurística] CAmbientGeneric::InitModulationParms
void CAmbientGeneric :: InitModulationParms(void)
{
	int pitchinc;

	m_dpv.volrun = pev->health * 10;	// 0 - 100
	if (m_dpv.volrun > 100) m_dpv.volrun = 100;
	if (m_dpv.volrun < 0) m_dpv.volrun = 0;

	// get presets
	if (m_dpv.preset != 0 && m_dpv.preset <= CDPVPRESETMAX)
	{
		// load preset values
		m_dpv = rgdpvpreset[m_dpv.preset - 1];

		// fixup preset values, just like
		// fixups in KeyValue routine.
		if (m_dpv.spindown > 0)
			m_dpv.spindown = (101 - m_dpv.spindown) * 64;
		if (m_dpv.spinup > 0)
			m_dpv.spinup = (101 - m_dpv.spinup) * 64;

		m_dpv.volstart *= 10;
		m_dpv.volrun *= 10;

		if (m_dpv.fadein > 0)
			m_dpv.fadein = (101 - m_dpv.fadein) * 64;
		if (m_dpv.fadeout > 0)
			m_dpv.fadeout = (101 - m_dpv.fadeout) * 64;

		m_dpv.lforate *= 256;

		m_dpv.fadeinsav = m_dpv.fadein;
		m_dpv.fadeoutsav = m_dpv.fadeout;
		m_dpv.spinupsav = m_dpv.spinup;
		m_dpv.spindownsav = m_dpv.spindown;
	}

	m_dpv.fadein = m_dpv.fadeinsav;
	m_dpv.fadeout = 0; 
	
	if (m_dpv.fadein)
		m_dpv.vol = m_dpv.volstart;
	else
		m_dpv.vol = m_dpv.volrun;

	m_dpv.spinup = m_dpv.spinupsav;
	m_dpv.spindown = 0; 

	if (m_dpv.spinup)
		m_dpv.pitch = m_dpv.pitchstart;
	else
		m_dpv.pitch = m_dpv.pitchrun;

	if (m_dpv.pitch == 0)
		m_dpv.pitch = PITCH_NORM;

	m_dpv.pitchfrac = m_dpv.pitch << 8;
	m_dpv.volfrac = m_dpv.vol << 8;

	m_dpv.lfofrac = 0;
	m_dpv.lforate = abs(m_dpv.lforate);

	m_dpv.cspincount = 1;
	
	if (m_dpv.cspinup) 
	{
		pitchinc = (255 - m_dpv.pitchstart) / m_dpv.cspinup;

		m_dpv.pitchrun = m_dpv.pitchstart + pitchinc;
		if (m_dpv.pitchrun > 255) m_dpv.pitchrun = 255;
	}

	if ((m_dpv.spinupsav || m_dpv.spindownsav || (m_dpv.lfotype && m_dpv.lfomodpitch))
		&& (m_dpv.pitch == PITCH_NORM))
		m_dpv.pitch = PITCH_NORM + 1; // must never send 'no pitch' as first pitch
									  // if we intend to pitch shift later!
}

// [SDK NÃO CONFERIDA] CAmbientGeneric::ToggleUse
void CAmbientGeneric :: ToggleUse ( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	char* szSoundFile = (char*) STRING(pev->message);
	float fraction;

	if ( useType != USE_TOGGLE )
	{
		if ( (m_fActive && useType == USE_ON) || (!m_fActive && useType == USE_OFF) )
			return;
	}
	// Directly change pitch if arg passed. Only works if sound is already playing.

	if (useType == USE_SET && m_fActive)		// Momentary buttons will pass down a float in here
	{

		fraction = value;
		
		if ( fraction > 1.0 )
			fraction = 1.0;
		if (fraction < 0.0)
			fraction = 0.01;

		m_dpv.pitch = fraction * 255;

		UTIL_EmitAmbientSound(ENT(pev), pev->origin, szSoundFile, 
					0, 0, SND_CHANGE_PITCH, m_dpv.pitch);

		return;
	}

	// Toggle

	// m_fActive is TRUE only if a looping sound is playing.
	
	if ( m_fActive )
	{// turn sound off

		if (m_dpv.cspinup)
		{
			// Don't actually shut off. Each toggle causes
			// incremental spinup to max pitch

			if (m_dpv.cspincount <= m_dpv.cspinup)
			{	
				int pitchinc;

				// start a new spinup
				m_dpv.cspincount++;
				
				pitchinc = (255 - m_dpv.pitchstart) / m_dpv.cspinup;

				m_dpv.spinup = m_dpv.spinupsav;
				m_dpv.spindown = 0;

				m_dpv.pitchrun = m_dpv.pitchstart + pitchinc * m_dpv.cspincount;
				if (m_dpv.pitchrun > 255) m_dpv.pitchrun = 255;

				pev->nextthink = gpGlobals->time + 0.1;
			}
			
		}
		else
		{
			m_fActive = FALSE;
			
			// HACKHACK - this makes the code in Precache() work properly after a save/restore
			pev->spawnflags |= AMBIENT_SOUND_START_SILENT;

			if (m_dpv.spindownsav || m_dpv.fadeoutsav)
			{
				// spin it down (or fade it) before shutoff if spindown is set
				m_dpv.spindown = m_dpv.spindownsav;
				m_dpv.spinup = 0;

				m_dpv.fadeout = m_dpv.fadeoutsav;
				m_dpv.fadein = 0;
				pev->nextthink = gpGlobals->time + 0.1;
			}
			else
				UTIL_EmitAmbientSound(ENT(pev), pev->origin, szSoundFile, 
					0, 0, SND_STOP, 0);
		}
	}
	else 
	{// turn sound on

		// only toggle if this is a looping sound.  If not looping, each
		// trigger will cause the sound to play.  If the sound is still
		// playing from a previous trigger press, it will be shut off
		// and then restarted.

		if (m_fLooping)
			m_fActive = TRUE;
		else
			// shut sound off now - may be interrupting a long non-looping sound
			UTIL_EmitAmbientSound(ENT(pev), pev->origin, szSoundFile, 
				0, 0, SND_STOP, 0);
			
		// init all ramp params for startup

		InitModulationParms();

		UTIL_EmitAmbientSound(ENT(pev), pev->origin, szSoundFile, 
				(m_dpv.vol * 0.01), m_flAttenuation, 0, m_dpv.pitch);
		
		pev->nextthink = gpGlobals->time + 0.1;

	} 
}

// [SDK score 1.0] CAmbientGeneric::KeyValue
void CAmbientGeneric :: KeyValue( KeyValueData *pkvd )
{
	// NOTE: changing any of the modifiers in this code
	// NOTE: also requires changing InitModulationParms code.

	// preset
	if (FStrEq(pkvd->szKeyName, "preset"))
	{
		m_dpv.preset = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}

	// pitchrun
	else if (FStrEq(pkvd->szKeyName, "pitch"))
	{
		m_dpv.pitchrun = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;
		
		if (m_dpv.pitchrun > 255) m_dpv.pitchrun = 255;
		if (m_dpv.pitchrun < 0) m_dpv.pitchrun = 0;
	}		

	// pitchstart
	else if (FStrEq(pkvd->szKeyName, "pitchstart"))
	{
		m_dpv.pitchstart = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;		
		
		if (m_dpv.pitchstart > 255) m_dpv.pitchstart = 255;
		if (m_dpv.pitchstart < 0) m_dpv.pitchstart = 0;
	}

	// spinup
	else if (FStrEq(pkvd->szKeyName, "spinup"))
	{
		m_dpv.spinup = atoi(pkvd->szValue);
		
		if (m_dpv.spinup > 100) m_dpv.spinup = 100;
		if (m_dpv.spinup < 0) m_dpv.spinup = 0;

		if (m_dpv.spinup > 0)
			m_dpv.spinup = (101 - m_dpv.spinup) * 64;
		m_dpv.spinupsav = m_dpv.spinup;
		pkvd->fHandled = TRUE;
	}		

	// spindown
	else if (FStrEq(pkvd->szKeyName, "spindown"))
	{
		m_dpv.spindown = atoi(pkvd->szValue);
		
		if (m_dpv.spindown > 100) m_dpv.spindown = 100;
		if (m_dpv.spindown < 0) m_dpv.spindown = 0;

		if (m_dpv.spindown > 0)
			m_dpv.spindown = (101 - m_dpv.spindown) * 64;
		m_dpv.spindownsav = m_dpv.spindown;
		pkvd->fHandled = TRUE;
	}

	// volstart
	else if (FStrEq(pkvd->szKeyName, "volstart"))
	{
		m_dpv.volstart = atoi(pkvd->szValue);

		if (m_dpv.volstart > 10) m_dpv.volstart = 10;
		if (m_dpv.volstart < 0) m_dpv.volstart = 0;
		
		m_dpv.volstart *= 10;	// 0 - 100

		pkvd->fHandled = TRUE;
	}

	// fadein
	else if (FStrEq(pkvd->szKeyName, "fadein"))
	{
		m_dpv.fadein = atoi(pkvd->szValue);
		
		if (m_dpv.fadein > 100) m_dpv.fadein = 100;
		if (m_dpv.fadein < 0) m_dpv.fadein = 0;

		if (m_dpv.fadein > 0)
			m_dpv.fadein = (101 - m_dpv.fadein) * 64;
		m_dpv.fadeinsav = m_dpv.fadein;
		pkvd->fHandled = TRUE;
	}

	// fadeout
	else if (FStrEq(pkvd->szKeyName, "fadeout"))
	{
		m_dpv.fadeout = atoi(pkvd->szValue);
		
		if (m_dpv.fadeout > 100) m_dpv.fadeout = 100;
		if (m_dpv.fadeout < 0) m_dpv.fadeout = 0;

		if (m_dpv.fadeout > 0)
			m_dpv.fadeout = (101 - m_dpv.fadeout) * 64;
		m_dpv.fadeoutsav = m_dpv.fadeout;
		pkvd->fHandled = TRUE;
	}

	// lfotype
	else if (FStrEq(pkvd->szKeyName, "lfotype"))
	{
		m_dpv.lfotype = atoi(pkvd->szValue);
		if (m_dpv.lfotype > 4) m_dpv.lfotype = LFO_TRIANGLE;
		pkvd->fHandled = TRUE;
	}

	// lforate
	else if (FStrEq(pkvd->szKeyName, "lforate"))
	{
		m_dpv.lforate = atoi(pkvd->szValue);
		
		if (m_dpv.lforate > 1000) m_dpv.lforate = 1000;
		if (m_dpv.lforate < 0) m_dpv.lforate = 0;

		m_dpv.lforate *= 256;

		pkvd->fHandled = TRUE;
	}
	// lfomodpitch
	else if (FStrEq(pkvd->szKeyName, "lfomodpitch"))
	{
		m_dpv.lfomodpitch = atoi(pkvd->szValue);
		if (m_dpv.lfomodpitch > 100) m_dpv.lfomodpitch = 100;
		if (m_dpv.lfomodpitch < 0) m_dpv.lfomodpitch = 0;
		

		pkvd->fHandled = TRUE;
	}

	// lfomodvol
	else if (FStrEq(pkvd->szKeyName, "lfomodvol"))
	{
		m_dpv.lfomodvol = atoi(pkvd->szValue);
		if (m_dpv.lfomodvol > 100) m_dpv.lfomodvol = 100;
		if (m_dpv.lfomodvol < 0) m_dpv.lfomodvol = 0;

		pkvd->fHandled = TRUE;
	}

	// cspinup
	else if (FStrEq(pkvd->szKeyName, "cspinup"))
	{
		m_dpv.cspinup = atoi(pkvd->szValue);
		if (m_dpv.cspinup > 100) m_dpv.cspinup = 100;
		if (m_dpv.cspinup < 0) m_dpv.cspinup = 0;

		pkvd->fHandled = TRUE;
	}
	else
		CBaseEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CEnvSound::KeyValue
void CEnvSound :: KeyValue( KeyValueData *pkvd )
{
	
	if (FStrEq(pkvd->szKeyName, "radius"))
	{
		m_flRadius = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	if (FStrEq(pkvd->szKeyName, "roomtype"))
	{
		m_flRoomtype = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
}

// [SDK score 1.0] CEnvSound::Think
void CEnvSound :: Think( void )
{
	// get pointer to client if visible; FIND_CLIENT_IN_PVS will
	// cycle through visible clients on consecutive calls.

	edict_t *pentPlayer = FIND_CLIENT_IN_PVS(edict());
	CBasePlayer *pPlayer = NULL;

	if (FNullEnt(pentPlayer))
		goto env_sound_Think_slow; // no player in pvs of sound entity, slow it down
 
	pPlayer = GetClassPtr( (CBasePlayer *)VARS(pentPlayer));
	float flRange;

	// check to see if this is the sound entity that is 
	// currently affecting this player

	if(!FNullEnt(pPlayer->m_pentSndLast) && (pPlayer->m_pentSndLast == ENT(pev))) {

		// this is the entity currently affecting player, check
		// for validity

		if (pPlayer->m_flSndRoomtype != 0 && pPlayer->m_flSndRange != 0) {
		
			// we're looking at a valid sound entity affecting
			// player, make sure it's still valid, update range

			if (FEnvSoundInRange(pev, VARS(pentPlayer), &flRange)) {
				pPlayer->m_flSndRange = flRange;
				goto env_sound_Think_fast;
			} else {
				
				// current sound entity affecting player is no longer valid,
				// flag this state by clearing room_type and range.
				// NOTE: we do not actually change the player's room_type
				// NOTE: until we have a new valid room_type to change it to.

				pPlayer->m_flSndRange = 0;
				pPlayer->m_flSndRoomtype = 0;
				goto env_sound_Think_slow;
			}
		} else {
			// entity is affecting player but is out of range,
			// wait passively for another entity to usurp it...
			goto env_sound_Think_slow;
		}
	}

	// if we got this far, we're looking at an entity that is contending
	// for current player sound. the closest entity to player wins.

	if (FEnvSoundInRange(pev, VARS(pentPlayer), &flRange)) 
	{
		if (flRange < pPlayer->m_flSndRange || pPlayer->m_flSndRange == 0) 
		{
			// new entity is closer to player, so it wins.
			pPlayer->m_pentSndLast = ENT(pev);
			pPlayer->m_flSndRoomtype = m_flRoomtype;
			pPlayer->m_flSndRange = flRange;
			
			// send room_type command to player's server.
			// this should be a rare event - once per change of room_type
			// only!

			//CLIENT_COMMAND(pentPlayer, "room_type %f", m_flRoomtype);
			
			MESSAGE_BEGIN( MSG_ONE, SVC_ROOMTYPE, NULL, pentPlayer );		// use the magic #1 for "one client"
				WRITE_SHORT( (short)m_flRoomtype );					// sequence number
			MESSAGE_END();

			// crank up nextthink rate for new active sound entity
			// by falling through to think_fast...
		}
		// player is not closer to the contending sound entity,
		// just fall through to think_fast. this effectively
		// cranks up the think_rate of entities near the player.
	} 

	// player is in pvs of sound entity, but either not visible or
	// not in range. do nothing, fall through to think_fast...

env_sound_Think_fast:
	pev->nextthink = gpGlobals->time + 0.25;
	return;

env_sound_Think_slow:
	pev->nextthink = gpGlobals->time + 0.75;
	return;
}

// [SDK score 1.0] CEnvSound::Spawn
void CEnvSound :: Spawn( )
{
	// spread think times
	pev->nextthink = gpGlobals->time + RANDOM_FLOAT(0.0, 0.5); 
}

// [SDK score 1.0] CSpeaker::Spawn
void CSpeaker :: Spawn( void )
{
	char* szSoundFile = (char*) STRING(pev->message);

	if ( !m_preset && (FStringNull( pev->message ) || strlen( szSoundFile ) < 1 ))
	{
		ALERT( at_error, "SPEAKER with no Level/Sentence! at: %f, %f, %f\n", pev->origin.x, pev->origin.y, pev->origin.z );
		pev->nextthink = gpGlobals->time + 0.1;
		SetThink( &CSpeaker::SUB_Remove );
		return;
	}
    pev->solid		= SOLID_NOT;
    pev->movetype	= MOVETYPE_NONE;

	
	SetThink(&CSpeaker::SpeakerThink);
	pev->nextthink = 0.0;

	// allow on/off switching via 'use' function.

	SetUse ( &CSpeaker::ToggleUse );

	Precache( );
}

// [SDK score 1.0] CSpeaker::Precache
void CSpeaker :: Precache( void )
{
	if ( !FBitSet (pev->spawnflags, SPEAKER_START_SILENT ) )
		// set first announcement time for random n second
		pev->nextthink = gpGlobals->time + RANDOM_FLOAT(5.0, 15.0);
}

// [SDK score 0.6] CSpeaker::SpeakerThink
void CSpeaker :: SpeakerThink( void )
{
	char* szSoundFile;
	float flvolume = pev->health * 0.1;
	float flattenuation = 0.3;
	int flags = 0;
	int pitch = 100;


	// Wait for the talkmonster to finish first.
	if (gpGlobals->time <= CTalkMonster::g_talkWaitTime)
	{
		pev->nextthink = CTalkMonster::g_talkWaitTime + RANDOM_FLOAT( 5, 10 );
		return;
	}
	
	if (m_preset)
	{
		// go lookup preset text, assign szSoundFile
		switch (m_preset)
		{
		case 1: szSoundFile =  "C1A0_"; break;
		case 2: szSoundFile =  "C1A1_"; break;
		case 3: szSoundFile =  "C1A2_"; break;
		case 4: szSoundFile =  "C1A3_"; break;
		case 5: szSoundFile =  "C1A4_"; break; 
		case 6: szSoundFile =  "C2A1_"; break;
		case 7: szSoundFile =  "C2A2_"; break;
		case 8: szSoundFile =  "C2A3_"; break;
		case 9: szSoundFile =  "C2A4_"; break;
		case 10: szSoundFile = "C2A5_"; break;
		case 11: szSoundFile = "C3A1_"; break;
		case 12: szSoundFile = "C3A2_"; break;
		}
	} else
		szSoundFile = (char*) STRING(pev->message);
	
	if (szSoundFile[0] == '!')
	{
		// play single sentence, one shot
		UTIL_EmitAmbientSound ( ENT(pev), pev->origin, szSoundFile, 
			flvolume, flattenuation, flags, pitch);

		// shut off and reset
		pev->nextthink = 0.0;
	}
	else
	{
		// make random announcement from sentence group

		if (SENTENCEG_PlayRndSz(ENT(pev), szSoundFile, flvolume, flattenuation, flags, pitch) < 0)
			ALERT(at_console, "Level Design Error!\nSPEAKER has bad sentence group name: %s\n",szSoundFile); 

		// set next announcement time for random 5 to 10 minute delay
		pev->nextthink = gpGlobals->time + 
						RANDOM_FLOAT(ANNOUNCE_MINUTES_MIN * 60.0, ANNOUNCE_MINUTES_MAX * 60.0);

		CTalkMonster::g_talkWaitTime = gpGlobals->time + 5;		// time delay until it's ok to speak: used so that two NPCs don't talk at once
	}

	return;
}

// [SDK score 1.0] CSpeaker::ToggleUse
void CSpeaker :: ToggleUse ( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	int fActive = (pev->nextthink > 0.0);

	// fActive is TRUE only if an announcement is pending
	
	if ( useType != USE_TOGGLE )
	{
		// ignore if we're just turning something on that's already on, or
		// turning something off that's already off.
		if ( (fActive && useType == USE_ON) || (!fActive && useType == USE_OFF) )
			return;
	}

	if ( useType == USE_ON )
	{
		// turn on announcements
		pev->nextthink = gpGlobals->time + 0.1;
		return;
	}

	if ( useType == USE_OFF )
	{
		// turn off announcements
		pev->nextthink = 0.0;
		return;
	
	}

	// Toggle announcements

	
	if ( fActive )
	{
		// turn off announcements
		pev->nextthink = 0.0;
	}
	else 
	{
		// turn on announcements
		pev->nextthink = gpGlobals->time + 0.1;
	} 
}

// [SDK score 1.0] CSpeaker::KeyValue
void CSpeaker :: KeyValue( KeyValueData *pkvd )
{
	
	// preset
	if (FStrEq(pkvd->szKeyName, "preset"))
	{
		m_preset = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CBaseEntity::KeyValue( pkvd );
}
