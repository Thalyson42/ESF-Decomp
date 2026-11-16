// sdk/mpstubb.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/mpstubb.cpp. Conferir contra decomp_raw ao compilar.
#include	"extdll.h"
#include	"util.h"
#include	"cbase.h"
#include	"monsters.h"
#include	"soundent.h"
#include	"nodes.h"
#include	"talkmonster.h"

// [SDK score 1.0] CGraph::InitGraph
void CGraph :: InitGraph( void ) { }

// [SDK score 1.0] CGraph::FindNearestNode
int	CGraph :: FindNearestNode ( const Vector &vecOrigin,  int afNodeTypes ) { return 0; }

// [SDK NÃO CONFERIDA] CBaseMonster::ChangeYaw
float 	CBaseMonster :: ChangeYaw ( int speed ) { return 0; }

// [SDK score 1.0] CBaseMonster::MakeIdealYaw
void	CBaseMonster :: MakeIdealYaw( Vector vecTarget ) { }

// [SDK score 1.0] CBaseMonster::CorpseFallThink
void CBaseMonster::CorpseFallThink( void )
{
	if ( pev->flags & FL_ONGROUND )
	{
		SetThink ( NULL );

		SetSequenceBox( );
		UTIL_SetOrigin( pev, pev->origin );// link into world.
	}
	else
		pev->nextthink = gpGlobals->time + 0.1;
}

// [SDK score 1.0] CBaseMonster::MonsterInitDead
void CBaseMonster :: MonsterInitDead( void )
{
	InitBoneControllers();

	pev->solid			= SOLID_BBOX;
	pev->movetype		= MOVETYPE_TOSS;// so he'll fall to ground

	pev->frame = 0;
	ResetSequenceInfo( );
	pev->framerate = 0;
	
	// Copy health
	pev->max_health		= pev->health;
	pev->deadflag		= DEAD_DEAD;
	
	UTIL_SetSize(pev, g_vecZero, g_vecZero );
	UTIL_SetOrigin( pev, pev->origin );

	// Setup health counters, etc.
	BecomeDead();
	SetThink( CorpseFallThink );
	pev->nextthink = gpGlobals->time + 0.5;
}

// [SDK score 1.0] CBaseMonster::ShouldFadeOnDeath
BOOL	CBaseMonster :: ShouldFadeOnDeath( void ) 
{ 
	return FALSE; 
}

// [SDK score 1.0] CBaseMonster::IRelationship
int CBaseMonster::IRelationship ( CBaseEntity *pTarget )
{
	static int iEnemy[14][14] =
	{			 //   NONE	 MACH	 PLYR	 HPASS	 HMIL	 AMIL	 APASS	 AMONST	APREY	 APRED	 INSECT	PLRALY	PBWPN	ABWPN
	/*NONE*/		{ R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO,	R_NO,	R_NO	},
	/*MACHINE*/		{ R_NO	,R_NO	,R_DL	,R_DL	,R_NO	,R_DL	,R_DL	,R_DL	,R_DL	,R_DL	,R_NO	,R_DL,	R_DL,	R_DL	},
	/*PLAYER*/		{ R_NO	,R_DL	,R_NO	,R_NO	,R_DL	,R_DL	,R_DL	,R_DL	,R_DL	,R_DL	,R_NO	,R_NO,	R_DL,	R_DL	},
	/*HUMANPASSIVE*/{ R_NO	,R_NO	,R_AL	,R_AL	,R_HT	,R_FR	,R_NO	,R_HT	,R_DL	,R_FR	,R_NO	,R_AL,	R_NO,	R_NO	},
	/*HUMANMILITAR*/{ R_NO	,R_NO	,R_HT	,R_DL	,R_NO	,R_HT	,R_DL	,R_DL	,R_DL	,R_DL	,R_NO	,R_HT,	R_NO,	R_NO	},
	/*ALIENMILITAR*/{ R_NO	,R_DL	,R_HT	,R_DL	,R_HT	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_DL,	R_NO,	R_NO	},
	/*ALIENPASSIVE*/{ R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO,	R_NO,	R_NO	},
	/*ALIENMONSTER*/{ R_NO	,R_DL	,R_DL	,R_DL	,R_DL	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_NO	,R_DL,	R_NO,	R_NO	},
	/*ALIENPREY   */{ R_NO	,R_NO	,R_DL	,R_DL	,R_DL	,R_NO	,R_NO	,R_NO	,R_NO	,R_FR	,R_NO	,R_DL,	R_NO,	R_NO	},
	/*ALIENPREDATO*/{ R_NO	,R_NO	,R_DL	,R_DL	,R_DL	,R_NO	,R_NO	,R_NO	,R_HT	,R_DL	,R_NO	,R_DL,	R_NO,	R_NO	},
	/*INSECT*/		{ R_FR	,R_FR	,R_FR	,R_FR	,R_FR	,R_NO	,R_FR	,R_FR	,R_FR	,R_FR	,R_NO	,R_FR,	R_NO,	R_NO	},
	/*PLAYERALLY*/	{ R_NO	,R_DL	,R_AL	,R_AL	,R_DL	,R_DL	,R_DL	,R_DL	,R_DL	,R_DL	,R_NO	,R_NO,	R_NO,	R_NO	},
	/*PBIOWEAPON*/	{ R_NO	,R_NO	,R_DL	,R_DL	,R_DL	,R_DL	,R_DL	,R_DL	,R_DL	,R_DL	,R_NO	,R_DL,	R_NO,	R_DL	},
	/*ABIOWEAPON*/	{ R_NO	,R_NO	,R_DL	,R_DL	,R_DL	,R_AL	,R_NO	,R_DL	,R_DL	,R_NO	,R_NO	,R_DL,	R_DL,	R_NO	}
	};

	return iEnemy[ Classify() ][ pTarget->Classify() ];
}

// [SDK score 1.0] CBaseMonster::Look
void CBaseMonster :: Look ( int iDistance )
{
	int	iSighted = 0;

	// DON'T let visibility information from last frame sit around!
	ClearConditions(bits_COND_SEE_HATE | bits_COND_SEE_DISLIKE | bits_COND_SEE_ENEMY | bits_COND_SEE_FEAR | bits_COND_SEE_NEMESIS | bits_COND_SEE_CLIENT);

	m_pLink = NULL;

	CBaseEntity	*pSightEnt = NULL;// the current visible entity that we're dealing with

	CBaseEntity *pList[100];

	Vector delta = Vector( iDistance, iDistance, iDistance );

	// Find only monsters/clients in box, NOT limited to PVS
	int count = UTIL_EntitiesInBox( pList, 100, pev->origin - delta, pev->origin + delta, FL_CLIENT|FL_MONSTER );
	for ( int i = 0; i < count; i++ )
	{
		pSightEnt = pList[i];
		if ( pSightEnt != this && pSightEnt->pev->health > 0 )
		{
			// the looker will want to consider this entity
			// don't check anything else about an entity that can't be seen, or an entity that you don't care about.
			if ( IRelationship( pSightEnt ) != R_NO && FInViewCone( pSightEnt ) && !FBitSet( pSightEnt->pev->flags, FL_NOTARGET ) && FVisible( pSightEnt ) )
			{
				if ( pSightEnt->IsPlayer() )
				{
					// if we see a client, remember that (mostly for scripted AI)
					iSighted |= bits_COND_SEE_CLIENT;
				}

				pSightEnt->m_pLink = m_pLink;
				m_pLink = pSightEnt;

				if ( pSightEnt == m_hEnemy )
				{
					// we know this ent is visible, so if it also happens to be our enemy, store that now.
					iSighted |= bits_COND_SEE_ENEMY;
				}

				// don't add the Enemy's relationship to the conditions. We only want to worry about conditions when
				// we see monsters other than the Enemy.
				switch ( IRelationship ( pSightEnt ) )
				{
				case	R_NM:
					iSighted |= bits_COND_SEE_NEMESIS;		
					break;
				case	R_HT:		
					iSighted |= bits_COND_SEE_HATE;		
					break;
				case	R_DL:
					iSighted |= bits_COND_SEE_DISLIKE;
					break;
				case	R_FR:
					iSighted |= bits_COND_SEE_FEAR;
					break;
				case    R_AL:
					break;
				default:
					ALERT ( at_aiconsole, "%s can't assess %s\n", STRING(pev->classname), STRING(pSightEnt->pev->classname ) );
					break;
				}
			}
		}
	}
	
	SetConditions( iSighted );
}

// [SDK score 1.0] CBaseMonster::BestVisibleEnemy
CBaseEntity *CBaseMonster :: BestVisibleEnemy ( void )
{
	CBaseEntity	*pReturn;
	CBaseEntity	*pNextEnt;
	int			iNearest;
	int			iDist;
	int			iBestRelationship;

	iNearest = 8192;// so first visible entity will become the closest.
	pNextEnt = m_pLink;
	pReturn = NULL;
	iBestRelationship = R_NO;

	while ( pNextEnt != NULL )
	{
		if ( pNextEnt->IsAlive() )
		{
			if ( IRelationship( pNextEnt) > iBestRelationship )
			{
				// this entity is disliked MORE than the entity that we 
				// currently think is the best visible enemy. No need to do 
				// a distance check, just get mad at this one for now.
				iBestRelationship = IRelationship ( pNextEnt );
				iNearest = ( pNextEnt->pev->origin - pev->origin ).Length();
				pReturn = pNextEnt;
			}
			else if ( IRelationship( pNextEnt) == iBestRelationship )
			{
				// this entity is disliked just as much as the entity that
				// we currently think is the best visible enemy, so we only
				// get mad at it if it is closer.
				iDist = ( pNextEnt->pev->origin - pev->origin ).Length();
				
				if ( iDist <= iNearest )
				{
					iNearest = iDist;
					iBestRelationship = IRelationship ( pNextEnt );
					pReturn = pNextEnt;
				}
			}
		}

		pNextEnt = pNextEnt->m_pLink;
	}

	return pReturn;
}
