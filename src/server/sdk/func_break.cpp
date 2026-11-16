// sdk/func_break.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/func_break.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "saverestore.h"
#include "func_break.h"
#include "decals.h"
#include "explode.h"

// [SDK score 1.0] CBreakable::KeyValue
void CBreakable::KeyValue( KeyValueData* pkvd )
{
	// UNDONE_WC: explicitly ignoring these fields, but they shouldn't be in the map file!
	if (FStrEq(pkvd->szKeyName, "explosion"))
	{
		if (!stricmp(pkvd->szValue, "directed"))
			m_Explosion = expDirected;
		else if (!stricmp(pkvd->szValue, "random"))
			m_Explosion = expRandom;
		else
			m_Explosion = expRandom;

		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "material"))
	{
		int i = atoi( pkvd->szValue);

		// 0:glass, 1:metal, 2:flesh, 3:wood

		if ((i < 0) || (i >= matLastMaterial))
			m_Material = matWood;
		else
			m_Material = (Materials)i;

		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "deadmodel"))
	{
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "shards"))
	{
//			m_iShards = atof(pkvd->szValue);
			pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "gibmodel") )
	{
		m_iszGibModel = ALLOC_STRING(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "spawnobject") )
	{
		int object = atoi( pkvd->szValue );
		if ( object > 0 && object < ARRAYSIZE(pSpawnObjects) )
			m_iszSpawnObject = MAKE_STRING( pSpawnObjects[object] );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "explodemagnitude") )
	{
		ExplosionSetMagnitude( atoi( pkvd->szValue ) );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "lip") )
		pkvd->fHandled = TRUE;
	else
		CBaseDelay::KeyValue( pkvd );
}

// [SDK score 1.0] CBreakable::Spawn
void CBreakable::Spawn( void )
{
    Precache( );    

	if ( FBitSet( pev->spawnflags, SF_BREAK_TRIGGER_ONLY ) )
		pev->takedamage	= DAMAGE_NO;
	else
		pev->takedamage	= DAMAGE_YES;
  
	pev->solid		= SOLID_BSP;
    pev->movetype	= MOVETYPE_PUSH;
    m_angle			= pev->angles.y;
	pev->angles.y	= 0;

	// HACK:  matGlass can receive decals, we need the client to know about this
	//  so use class to store the material flag
	if ( m_Material == matGlass )
	{
		pev->playerclass = 1;
	}

	SET_MODEL(ENT(pev), STRING(pev->model) );//set size and link into world.

	SetTouch( &CBreakable::BreakTouch );
	if ( FBitSet( pev->spawnflags, SF_BREAK_TRIGGER_ONLY ) )		// Only break on trigger
		SetTouch( NULL );

	// Flag unbreakable glass as "worldbrush" so it will block ALL tracelines
	if ( !IsBreakable() && pev->rendermode != kRenderNormal )
		pev->flags |= FL_WORLDBRUSH;
}

// [SDK score 1.0] CBreakable::MaterialSoundList
const char **CBreakable::MaterialSoundList( Materials precacheMaterial, int &soundCount )
{
	const char	**pSoundList = NULL;

    switch ( precacheMaterial ) 
	{
	case matWood:
		pSoundList = pSoundsWood;
		soundCount = ARRAYSIZE(pSoundsWood);
		break;
	case matFlesh:
		pSoundList = pSoundsFlesh;
		soundCount = ARRAYSIZE(pSoundsFlesh);
		break;
	case matComputer:
	case matUnbreakableGlass:
	case matGlass:
		pSoundList = pSoundsGlass;
		soundCount = ARRAYSIZE(pSoundsGlass);
		break;

	case matMetal:
		pSoundList = pSoundsMetal;
		soundCount = ARRAYSIZE(pSoundsMetal);
		break;

	case matCinderBlock:
	case matRocks:
		pSoundList = pSoundsConcrete;
		soundCount = ARRAYSIZE(pSoundsConcrete);
		break;
	
	
	case matCeilingTile:
	case matNone:
	default:
		soundCount = 0;
		break;
	}

	return pSoundList;
}

// [SDK score 1.0] CBreakable::MaterialSoundPrecache
void CBreakable::MaterialSoundPrecache( Materials precacheMaterial )
{
	const char	**pSoundList;
	int			i, soundCount = 0;

	pSoundList = MaterialSoundList( precacheMaterial, soundCount );

	for ( i = 0; i < soundCount; i++ )
	{
		PRECACHE_SOUND( (char *)pSoundList[i] );
	}
}

// [SDK score 1.0] CBreakable::MaterialSoundRandom
void CBreakable::MaterialSoundRandom( edict_t *pEdict, Materials soundMaterial, float volume )
{
	const char	**pSoundList;
	int			soundCount = 0;

	pSoundList = MaterialSoundList( soundMaterial, soundCount );

	if ( soundCount )
		EMIT_SOUND( pEdict, CHAN_BODY, pSoundList[ RANDOM_LONG(0,soundCount-1) ], volume, 1.0 );
}

// [SDK score 1.0] CBreakable::Precache
void CBreakable::Precache( void )
{
	const char *pGibName;

    switch (m_Material) 
	{
	case matWood:
		pGibName = "models/woodgibs.mdl";
		
		PRECACHE_SOUND("debris/bustcrate1.wav");
		PRECACHE_SOUND("debris/bustcrate2.wav");
		break;
	case matFlesh:
		pGibName = "models/fleshgibs.mdl";
		
		PRECACHE_SOUND("debris/bustflesh1.wav");
		PRECACHE_SOUND("debris/bustflesh2.wav");
		break;
	case matComputer:
		PRECACHE_SOUND("buttons/spark5.wav");
		PRECACHE_SOUND("buttons/spark6.wav");
		pGibName = "models/computergibs.mdl";
		
		PRECACHE_SOUND("debris/bustmetal1.wav");
		PRECACHE_SOUND("debris/bustmetal2.wav");
		break;

	case matUnbreakableGlass:
	case matGlass:
		pGibName = "models/glassgibs.mdl";
		
		PRECACHE_SOUND("debris/bustglass1.wav");
		PRECACHE_SOUND("debris/bustglass2.wav");
		break;
	case matMetal:
		pGibName = "models/metalplategibs.mdl";
		
		PRECACHE_SOUND("debris/bustmetal1.wav");
		PRECACHE_SOUND("debris/bustmetal2.wav");
		break;
	case matCinderBlock:
		pGibName = "models/cindergibs.mdl";
		
		PRECACHE_SOUND("debris/bustconcrete1.wav");
		PRECACHE_SOUND("debris/bustconcrete2.wav");
		break;
	case matRocks:
		pGibName = "models/rockgibs.mdl";
		
		PRECACHE_SOUND("debris/bustconcrete1.wav");
		PRECACHE_SOUND("debris/bustconcrete2.wav");
		break;
	case matCeilingTile:
		pGibName = "models/ceilinggibs.mdl";
		
		PRECACHE_SOUND ("debris/bustceiling.wav");  
		break;
	}
	MaterialSoundPrecache( m_Material );
	if ( m_iszGibModel )
		pGibName = STRING(m_iszGibModel);

	m_idShard = PRECACHE_MODEL( (char *)pGibName );

	// Precache the spawn item's data
	if ( m_iszSpawnObject )
		UTIL_PrecacheOther( (char *)STRING( m_iszSpawnObject ) );
}

// [SDK score 1.0] CBreakable::DamageSound
void CBreakable::DamageSound( void )
{
	int pitch;
	float fvol;
	char *rgpsz[6];
	int i;
	int material = m_Material;

//	if (RANDOM_LONG(0,1))
//		return;

	if (RANDOM_LONG(0,2))
		pitch = PITCH_NORM;
	else
		pitch = 95 + RANDOM_LONG(0,34);

	fvol = RANDOM_FLOAT(0.75, 1.0);

	if (material == matComputer && RANDOM_LONG(0,1))
		material = matMetal;

	switch (material)
	{
	case matComputer:
	case matGlass:
	case matUnbreakableGlass:
		rgpsz[0] = "debris/glass1.wav";
		rgpsz[1] = "debris/glass2.wav";
		rgpsz[2] = "debris/glass3.wav";
		i = 3;
		break;

	case matWood:
		rgpsz[0] = "debris/wood1.wav";
		rgpsz[1] = "debris/wood2.wav";
		rgpsz[2] = "debris/wood3.wav";
		i = 3;
		break;

	case matMetal:
		rgpsz[0] = "debris/metal1.wav";
		rgpsz[1] = "debris/metal3.wav";
		rgpsz[2] = "debris/metal2.wav";
		i = 2;
		break;

	case matFlesh:
		rgpsz[0] = "debris/flesh1.wav";
		rgpsz[1] = "debris/flesh2.wav";
		rgpsz[2] = "debris/flesh3.wav";
		rgpsz[3] = "debris/flesh5.wav";
		rgpsz[4] = "debris/flesh6.wav";
		rgpsz[5] = "debris/flesh7.wav";
		i = 6;
		break;

	case matRocks:
	case matCinderBlock:
		rgpsz[0] = "debris/concrete1.wav";
		rgpsz[1] = "debris/concrete2.wav";
		rgpsz[2] = "debris/concrete3.wav";
		i = 3;
		break;

	case matCeilingTile:
		// UNDONE: no ceiling tile shard sound yet
		i = 0;
		break;
	}

	if (i)
		EMIT_SOUND_DYN(ENT(pev), CHAN_VOICE, rgpsz[RANDOM_LONG(0,i-1)], fvol, ATTN_NORM, 0, pitch);
}

// [SDK score 1.0] CBreakable::Use
void CBreakable::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( IsBreakable() )
	{
		pev->angles.y = m_angle;
		UTIL_MakeVectors(pev->angles);
		g_vecAttackDir = gpGlobals->v_forward;

		Die();
	}
}

// [SDK score 1.0] CBreakable::TakeDamage
int CBreakable :: TakeDamage( entvars_t* pevInflictor, entvars_t* pevAttacker, float flDamage, int bitsDamageType )
{
	Vector	vecTemp;

	// if Attacker == Inflictor, the attack was a melee or other instant-hit attack.
	// (that is, no actual entity projectile was involved in the attack so use the shooter's origin). 
	if ( pevAttacker == pevInflictor )	
	{
		vecTemp = pevInflictor->origin - ( pev->absmin + ( pev->size * 0.5 ) );
		
		// if a client hit the breakable with a crowbar, and breakable is crowbar-sensitive, break it now.
		if ( FBitSet ( pevAttacker->flags, FL_CLIENT ) &&
				 FBitSet ( pev->spawnflags, SF_BREAK_CROWBAR ) && (bitsDamageType & DMG_CLUB))
			flDamage = pev->health;
	}
	else
	// an actual missile was involved.
	{
		vecTemp = pevInflictor->origin - ( pev->absmin + ( pev->size * 0.5 ) );
	}
	
	if (!IsBreakable())
		return 0;

	// Breakables take double damage from the crowbar
	if ( bitsDamageType & DMG_CLUB )
		flDamage *= 2;

	// Boxes / glass / etc. don't take much poison damage, just the impact of the dart - consider that 10%
	if ( bitsDamageType & DMG_POISON )
		flDamage *= 0.1;

// this global is still used for glass and other non-monster killables, along with decals.
	g_vecAttackDir = vecTemp.Normalize();
		
// do the damage
	pev->health -= flDamage;
	if (pev->health <= 0)
	{
		Killed( pevAttacker, GIB_NORMAL );
		Die();
		return 0;
	}

	// Make a shard noise each time func breakable is hit.
	// Don't play shard noise if cbreakable actually died.

	DamageSound();

	return 1;
}

// [SDK score 1.0] CBreakable::IsBreakable
BOOL CBreakable :: IsBreakable( void ) 
{ 
	return m_Material != matUnbreakableGlass;
}

// [SDK score 1.0] CBreakable::DamageDecal
int	CBreakable :: DamageDecal( int bitsDamageType )
{
	if ( m_Material == matGlass  )
		return DECAL_GLASSBREAK1 + RANDOM_LONG(0,2);

	if ( m_Material == matUnbreakableGlass )
		return DECAL_BPROOF1;

	return CBaseEntity::DamageDecal( bitsDamageType );
}

// [SDK score 1.0] CPushable::Precache
void CPushable :: Precache( void )
{
	for ( int i = 0; i < 3; i++ )
		PRECACHE_SOUND( m_soundNames[i] );

	if ( pev->spawnflags & SF_PUSH_BREAKABLE )
		CBreakable::Precache( );
}

// [SDK score 1.0] CPushable::KeyValue
void CPushable :: KeyValue( KeyValueData *pkvd )
{
	if ( FStrEq(pkvd->szKeyName, "size") )
	{
		int bbox = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;

		switch( bbox )
		{
		case 0:	// Point
			UTIL_SetSize(pev, Vector(-8, -8, -8), Vector(8, 8, 8));
			break;

		case 2: // Big Hull!?!?	!!!BUGBUG Figure out what this hull really is
			UTIL_SetSize(pev, VEC_DUCK_HULL_MIN*2, VEC_DUCK_HULL_MAX*2);
			break;

		case 3: // Player duck
			UTIL_SetSize(pev, VEC_DUCK_HULL_MIN, VEC_DUCK_HULL_MAX);
			break;

		default:
		case 1: // Player
			UTIL_SetSize(pev, VEC_HULL_MIN, VEC_HULL_MAX);
			break;
		}

	}
	else if ( FStrEq(pkvd->szKeyName, "buoyancy") )
	{
		pev->skin = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else
		CBreakable::KeyValue( pkvd );
}

// [SDK score 1.0] CPushable::Use
void CPushable :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !pActivator || !pActivator->IsPlayer() )
	{
		if ( pev->spawnflags & SF_PUSH_BREAKABLE )
			this->CBreakable::Use( pActivator, pCaller, useType, value );
		return;
	}

	if ( pActivator->pev->velocity != g_vecZero )
		Move( pActivator, 0 );
}

// [SDK score 1.0] CPushable::Touch
void CPushable :: Touch( CBaseEntity *pOther )
{
	if ( FClassnameIs( pOther->pev, "worldspawn" ) )
		return;

	Move( pOther, 1 );
}

// [SDK score 1.0] CPushable::TakeDamage
int CPushable::TakeDamage( entvars_t* pevInflictor, entvars_t* pevAttacker, float flDamage, int bitsDamageType )
{
	if ( pev->spawnflags & SF_PUSH_BREAKABLE )
		return CBreakable::TakeDamage( pevInflictor, pevAttacker, flDamage, bitsDamageType );

	return 1;
}
