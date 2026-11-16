// sdk/pathcorner.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/pathcorner.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "trains.h"
#include "saverestore.h"

// [SDK score 1.0] CPathCorner::KeyValue
void CPathCorner :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "wait"))
	{
		m_flWait = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else 
		CPointEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CPathCorner::Spawn
void CPathCorner :: Spawn( )
{
	ASSERTSZ(!FStringNull(pev->targetname), "path_corner without a targetname");
}

// [SDK score 1.0] CPathTrack::KeyValue
void CPathTrack :: KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "altpath"))
	{
		m_altName = ALLOC_STRING(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CPointEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CPathTrack::Use
void CPathTrack :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	int on;

	// Use toggles between two paths
	if ( m_paltpath )
	{
		on = !FBitSet( pev->spawnflags, SF_PATH_ALTERNATE );
		if ( ShouldToggle( useType, on ) )
		{
			if ( on )
				SetBits( pev->spawnflags, SF_PATH_ALTERNATE );
			else
				ClearBits( pev->spawnflags, SF_PATH_ALTERNATE );
		}
	}
	else	// Use toggles between enabled/disabled
	{
		on = !FBitSet( pev->spawnflags, SF_PATH_DISABLED );

		if ( ShouldToggle( useType, on ) )
		{
			if ( on )
				SetBits( pev->spawnflags, SF_PATH_DISABLED );
			else
				ClearBits( pev->spawnflags, SF_PATH_DISABLED );
		}
	}
}

// [SDK score 1.0] CPathTrack::Spawn
void CPathTrack :: Spawn( void )
{
	pev->solid = SOLID_TRIGGER;
	UTIL_SetSize(pev, Vector(-8, -8, -8), Vector(8, 8, 8));

	m_pnext = NULL;
	m_pprevious = NULL;
// DEBUGGING CODE
#if PATH_SPARKLE_DEBUG
	SetThink( Sparkle );
	pev->nextthink = gpGlobals->time + 0.5;
#endif
}

// [SDK score 1.0] CPathTrack::Activate
void CPathTrack::Activate( void )
{
	if ( !FStringNull( pev->targetname ) )		// Link to next, and back-link
		Link();
}

// [SDK score 1.0] CPathTrack::ValidPath
CPathTrack	*CPathTrack :: ValidPath( CPathTrack	*ppath, int testFlag )
{
	if ( !ppath )
		return NULL;

	if ( testFlag && FBitSet( ppath->pev->spawnflags, SF_PATH_DISABLED ) )
		return NULL;

	return ppath;
}

// [SDK score 1.0] CPathTrack::Project
void CPathTrack :: Project( CPathTrack *pstart, CPathTrack *pend, Vector *origin, float dist )
{
	if ( pstart && pend )
	{
		Vector dir = (pend->pev->origin - pstart->pev->origin);
		dir = dir.Normalize();
		*origin = pend->pev->origin + dir * dist;
	}
}

// [SDK score 1.0] CPathTrack::GetNext
CPathTrack *CPathTrack::GetNext( void )
{
	if ( m_paltpath && FBitSet( pev->spawnflags, SF_PATH_ALTERNATE ) && !FBitSet( pev->spawnflags, SF_PATH_ALTREVERSE ) )
		return m_paltpath;
	
	return m_pnext;
}

// [SDK score 1.0] CPathTrack::GetPrevious
CPathTrack *CPathTrack::GetPrevious( void )
{
	if ( m_paltpath && FBitSet( pev->spawnflags, SF_PATH_ALTERNATE ) && FBitSet( pev->spawnflags, SF_PATH_ALTREVERSE ) )
		return m_paltpath;
	
	return m_pprevious;
}

// [SDK score 1.0] CPathTrack::SetPrevious
void CPathTrack::SetPrevious( CPathTrack *pprev )
{
	// Only set previous if this isn't my alternate path
	if ( pprev && !FStrEq( STRING(pprev->pev->targetname), STRING(m_altName) ) )
		m_pprevious = pprev;
}

// [SDK score 1.0] CPathTrack::LookAhead
CPathTrack *CPathTrack :: LookAhead( Vector *origin, float dist, int move )
{
	CPathTrack *pcurrent;
	float originalDist = dist;
	
	pcurrent = this;
	Vector currentPos = *origin;

	if ( dist < 0 )		// Travelling backwards through path
	{
		dist = -dist;
		while ( dist > 0 )
		{
			Vector dir = pcurrent->pev->origin - currentPos;
			float length = dir.Length();
			if ( !length )
			{
				if ( !ValidPath(pcurrent->GetPrevious(), move) ) 	// If there is no previous node, or it's disabled, return now.
				{
					if ( !move )
						Project( pcurrent->GetNext(), pcurrent, origin, dist );
					return NULL;
				}
				pcurrent = pcurrent->GetPrevious();
			}
			else if ( length > dist )	// enough left in this path to move
			{
				*origin = currentPos + (dir * (dist / length));
				return pcurrent;
			}
			else
			{
				dist -= length;
				currentPos = pcurrent->pev->origin;
				*origin = currentPos;
				if ( !ValidPath(pcurrent->GetPrevious(), move) )	// If there is no previous node, or it's disabled, return now.
					return NULL;

				pcurrent = pcurrent->GetPrevious();
			}
		}
		*origin = currentPos;
		return pcurrent;
	}
	else 
	{
		while ( dist > 0 )
		{
			if ( !ValidPath(pcurrent->GetNext(), move) )	// If there is no next node, or it's disabled, return now.
			{
				if ( !move )
					Project( pcurrent->GetPrevious(), pcurrent, origin, dist );
				return NULL;
			}
			Vector dir = pcurrent->GetNext()->pev->origin - currentPos;
			float length = dir.Length();
			if ( !length  && !ValidPath( pcurrent->GetNext()->GetNext(), move ) )
			{
				if ( dist == originalDist ) // HACK -- up against a dead end
					return NULL;
				return pcurrent;
			}
			if ( length > dist )	// enough left in this path to move
			{
				*origin = currentPos + (dir * (dist / length));
				return pcurrent;
			}
			else
			{
				dist -= length;
				currentPos = pcurrent->GetNext()->pev->origin;
				pcurrent = pcurrent->GetNext();
				*origin = currentPos;
			}
		}
		*origin = currentPos;
	}

	return pcurrent;
}

// [SDK score 1.0] CPathTrack::Nearest
CPathTrack *CPathTrack :: Nearest( Vector origin )
{
	int			deadCount;
	float		minDist, dist;
	Vector		delta;
	CPathTrack	*ppath, *pnearest;


	delta = origin - pev->origin;
	delta.z = 0;
	minDist = delta.Length();
	pnearest = this;
	ppath = GetNext();

	// Hey, I could use the old 2 racing pointers solution to this, but I'm lazy :)
	deadCount = 0;
	while ( ppath && ppath != this )
	{
		deadCount++;
		if ( deadCount > 9999 )
		{
			ALERT( at_error, "Bad sequence of path_tracks from %s", STRING(pev->targetname) );
			return NULL;
		}
		delta = origin - ppath->pev->origin;
		delta.z = 0;
		dist = delta.Length();
		if ( dist < minDist )
		{
			minDist = dist;
			pnearest = ppath;
		}
		ppath = ppath->GetNext();
	}
	return pnearest;
}

// [SDK score 1.0] CPathTrack::Instance
CPathTrack *CPathTrack::Instance( edict_t *pent )
{ 
	if ( FClassnameIs( pent, "path_track" ) )
		return (CPathTrack *)GET_PRIVATE(pent);
	return NULL;
}
