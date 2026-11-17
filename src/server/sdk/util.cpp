// sdk/util.cpp -- arquivo do HL SDK com SÓ as funções que o hl_i386.so do ESF reproduz (score >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/util.cpp. As demais funções do arquivo foram removidas.
/***
*
*	Copyright (c) 1996-2001, Valve LLC. All rights reserved.
*	
*	This product contains software technology licensed from Id 
*	Software, Inc. ("Id Technology").  Id Technology (c) 1996 Id Software, Inc. 
*	All Rights Reserved.
*
*   Use, distribution, and modification of this source code and/or resulting
*   object code is restricted to non-commercial enhancements to products from
*   Valve LLC.  All other use, distribution, or modification is prohibited
*   without written permission from Valve LLC.
*
****/
/*

===== util.cpp ========================================================

  Utility code.  Really not optional after all.

*/

#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "saverestore.h"
#include <time.h>
#include "shake.h"
#include "decals.h"
#include "player.h"
#include "weapons.h"
#include "gamerules.h"

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] float UTIL_WeaponTimeBase( void )

static unsigned int glSeed = 0; 

unsigned int seed_table[ 256 ] =
{
	28985, 27138, 26457, 9451, 17764, 10909, 28790, 8716, 6361, 4853, 17798, 21977, 19643, 20662, 10834, 20103,
	27067, 28634, 18623, 25849, 8576, 26234, 23887, 18228, 32587, 4836, 3306, 1811, 3035, 24559, 18399, 315,
	26766, 907, 24102, 12370, 9674, 2972, 10472, 16492, 22683, 11529, 27968, 30406, 13213, 2319, 23620, 16823,
	10013, 23772, 21567, 1251, 19579, 20313, 18241, 30130, 8402, 20807, 27354, 7169, 21211, 17293, 5410, 19223,
	10255, 22480, 27388, 9946, 15628, 24389, 17308, 2370, 9530, 31683, 25927, 23567, 11694, 26397, 32602, 15031,
	18255, 17582, 1422, 28835, 23607, 12597, 20602, 10138, 5212, 1252, 10074, 23166, 19823, 31667, 5902, 24630,
	18948, 14330, 14950, 8939, 23540, 21311, 22428, 22391, 3583, 29004, 30498, 18714, 4278, 2437, 22430, 3439,
	28313, 23161, 25396, 13471, 19324, 15287, 2563, 18901, 13103, 16867, 9714, 14322, 15197, 26889, 19372, 26241,
	31925, 14640, 11497, 8941, 10056, 6451, 28656, 10737, 13874, 17356, 8281, 25937, 1661, 4850, 7448, 12744,
	21826, 5477, 10167, 16705, 26897, 8839, 30947, 27978, 27283, 24685, 32298, 3525, 12398, 28726, 9475, 10208,
	617, 13467, 22287, 2376, 6097, 26312, 2974, 9114, 21787, 28010, 4725, 15387, 3274, 10762, 31695, 17320,
	18324, 12441, 16801, 27376, 22464, 7500, 5666, 18144, 15314, 31914, 31627, 6495, 5226, 31203, 2331, 4668,
	12650, 18275, 351, 7268, 31319, 30119, 7600, 2905, 13826, 11343, 13053, 15583, 30055, 31093, 5067, 761,
	9685, 11070, 21369, 27155, 3663, 26542, 20169, 12161, 15411, 30401, 7580, 31784, 8985, 29367, 20989, 14203,
	29694, 21167, 10337, 1706, 28578, 887, 3373, 19477, 14382, 675, 7033, 15111, 26138, 12252, 30996, 21409,
	25678, 18555, 13256, 23316, 22407, 16727, 991, 9236, 5373, 29402, 6117, 15241, 27715, 19291, 19888, 19847
};

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] unsigned int U_Random( void ) 

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void U_Srand( unsigned int seed )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] /* ===================== UTIL_SharedRandomLong ===================== */ int UTIL_SharedRan

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] /* ===================== UTIL_SharedRandomFloat ===================== */ float UTIL_Shared

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ParametricRocket( entvars_t *pev, Vector vecOrigin, Vector vecAngles, edict_t *o

int g_groupmask = 0;
int g_groupop = 0;

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] // Normal overrides void UTIL_SetGroupTrace( int groupmask, int op )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_UnsetGroupTrace( void )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] // Smart version, it'll clean itself up when it pops off stack UTIL_GroupTrace::UTIL_Group

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] UTIL_GroupTrace::~UTIL_GroupTrace( void )

TYPEDESCRIPTION	gEntvarsDescription[] = 
{
	DEFINE_ENTITY_FIELD( classname, FIELD_STRING ),
	DEFINE_ENTITY_GLOBAL_FIELD( globalname, FIELD_STRING ),
	
	DEFINE_ENTITY_FIELD( origin, FIELD_POSITION_VECTOR ),
	DEFINE_ENTITY_FIELD( oldorigin, FIELD_POSITION_VECTOR ),
	DEFINE_ENTITY_FIELD( velocity, FIELD_VECTOR ),
	DEFINE_ENTITY_FIELD( basevelocity, FIELD_VECTOR ),
	DEFINE_ENTITY_FIELD( movedir, FIELD_VECTOR ),

	DEFINE_ENTITY_FIELD( angles, FIELD_VECTOR ),
	DEFINE_ENTITY_FIELD( avelocity, FIELD_VECTOR ),
	DEFINE_ENTITY_FIELD( punchangle, FIELD_VECTOR ),
	DEFINE_ENTITY_FIELD( v_angle, FIELD_VECTOR ),
	DEFINE_ENTITY_FIELD( fixangle, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( idealpitch, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( pitch_speed, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( ideal_yaw, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( yaw_speed, FIELD_FLOAT ),

	DEFINE_ENTITY_FIELD( modelindex, FIELD_INTEGER ),
	DEFINE_ENTITY_GLOBAL_FIELD( model, FIELD_MODELNAME ),

	DEFINE_ENTITY_FIELD( viewmodel, FIELD_MODELNAME ),
	DEFINE_ENTITY_FIELD( weaponmodel, FIELD_MODELNAME ),

	DEFINE_ENTITY_FIELD( absmin, FIELD_POSITION_VECTOR ),
	DEFINE_ENTITY_FIELD( absmax, FIELD_POSITION_VECTOR ),
	DEFINE_ENTITY_GLOBAL_FIELD( mins, FIELD_VECTOR ),
	DEFINE_ENTITY_GLOBAL_FIELD( maxs, FIELD_VECTOR ),
	DEFINE_ENTITY_GLOBAL_FIELD( size, FIELD_VECTOR ),

	DEFINE_ENTITY_FIELD( ltime, FIELD_TIME ),
	DEFINE_ENTITY_FIELD( nextthink, FIELD_TIME ),

	DEFINE_ENTITY_FIELD( solid, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( movetype, FIELD_INTEGER ),

	DEFINE_ENTITY_FIELD( skin, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( body, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( effects, FIELD_INTEGER ),

	DEFINE_ENTITY_FIELD( gravity, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( friction, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( light_level, FIELD_FLOAT ),

	DEFINE_ENTITY_FIELD( frame, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( scale, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( sequence, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( animtime, FIELD_TIME ),
	DEFINE_ENTITY_FIELD( framerate, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( controller, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( blending, FIELD_INTEGER ),

	DEFINE_ENTITY_FIELD( rendermode, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( renderamt, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( rendercolor, FIELD_VECTOR ),
	DEFINE_ENTITY_FIELD( renderfx, FIELD_INTEGER ),

	DEFINE_ENTITY_FIELD( health, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( frags, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( weapons, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( takedamage, FIELD_FLOAT ),

	DEFINE_ENTITY_FIELD( deadflag, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( view_ofs, FIELD_VECTOR ),
	DEFINE_ENTITY_FIELD( button, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( impulse, FIELD_INTEGER ),

	DEFINE_ENTITY_FIELD( chain, FIELD_EDICT ),
	DEFINE_ENTITY_FIELD( dmg_inflictor, FIELD_EDICT ),
	DEFINE_ENTITY_FIELD( enemy, FIELD_EDICT ),
	DEFINE_ENTITY_FIELD( aiment, FIELD_EDICT ),
	DEFINE_ENTITY_FIELD( owner, FIELD_EDICT ),
	DEFINE_ENTITY_FIELD( groundentity, FIELD_EDICT ),

	DEFINE_ENTITY_FIELD( spawnflags, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( flags, FIELD_FLOAT ),

	DEFINE_ENTITY_FIELD( colormap, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( team, FIELD_INTEGER ),

	DEFINE_ENTITY_FIELD( max_health, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( teleport_time, FIELD_TIME ),
	DEFINE_ENTITY_FIELD( armortype, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( armorvalue, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( waterlevel, FIELD_INTEGER ),
	DEFINE_ENTITY_FIELD( watertype, FIELD_INTEGER ),

	// Having these fields be local to the individual levels makes it easier to test those levels individually.
	DEFINE_ENTITY_GLOBAL_FIELD( target, FIELD_STRING ),
	DEFINE_ENTITY_GLOBAL_FIELD( targetname, FIELD_STRING ),
	DEFINE_ENTITY_FIELD( netname, FIELD_STRING ),
	DEFINE_ENTITY_FIELD( message, FIELD_STRING ),

	DEFINE_ENTITY_FIELD( dmg_take, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( dmg_save, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( dmg, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( dmgtime, FIELD_TIME ),

	DEFINE_ENTITY_FIELD( noise, FIELD_SOUNDNAME ),
	DEFINE_ENTITY_FIELD( noise1, FIELD_SOUNDNAME ),
	DEFINE_ENTITY_FIELD( noise2, FIELD_SOUNDNAME ),
	DEFINE_ENTITY_FIELD( noise3, FIELD_SOUNDNAME ),
	DEFINE_ENTITY_FIELD( speed, FIELD_FLOAT ),
	DEFINE_ENTITY_FIELD( air_finished, FIELD_TIME ),
	DEFINE_ENTITY_FIELD( pain_finished, FIELD_TIME ),
	DEFINE_ENTITY_FIELD( radsuit_finished, FIELD_TIME ),
};

#define ENTVARS_COUNT		(sizeof(gEntvarsDescription)/sizeof(gEntvarsDescription[0]))


#ifdef	DEBUG
// [fora desta etapa: diferente do SDK ou definida em outro arquivo] edict_t *DBG_EntOfVars( const entvars_t *pev )
#endif //DEBUG


#ifdef	DEBUG
	// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void DBG_AssertFunction( BOOL fExpr, const char* szExpr, const char* szFile, int szLine, c
#endif	// DEBUG

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] BOOL UTIL_GetNextBestWeapon( CBasePlayer *pPlayer, CBasePlayerItem *pCurrentWeapon )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] // ripped this out of the engine float UTIL_AngleMod(float a)

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] float UTIL_AngleDiff( float destAngle, float srcAngle )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] Vector UTIL_VecToAngles( const Vector &vec )
	
// [fora desta etapa: diferente do SDK ou definida em outro arquivo] // float UTIL_MoveToOrigin( edict_t *pent, const Vector vecGoal, float flDist, int iMoveTy


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] int UTIL_EntitiesInBox( CBaseEntity **pList, int listMax, const Vector &mins, const Vector


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] int UTIL_MonstersInSphere( CBaseEntity **pList, int listMax, const Vector &center, float r


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] CBaseEntity *UTIL_FindEntityInSphere( CBaseEntity *pStartEntity, const Vector &vecCenter, 


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] CBaseEntity *UTIL_FindEntityByString( CBaseEntity *pStartEntity, const char *szKeyword, co

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] CBaseEntity *UTIL_FindEntityByClassname( CBaseEntity *pStartEntity, const char *szName )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] CBaseEntity *UTIL_FindEntityByTargetname( CBaseEntity *pStartEntity, const char *szName )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] CBaseEntity *UTIL_FindEntityGeneric( const char *szWhatever, Vector &vecSrc, float flRadiu


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] // returns a CBaseEntity pointer to a player by index. Only returns if the player is spawn


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_MakeVectors( const Vector &vecAngles )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_MakeAimVectors( const Vector &vecAngles )


#define SWAP(a,b,temp)	((temp)=(a),(a)=(b),(b)=(temp))

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_MakeInvVectors( const Vector &vec, globalvars_t *pgv )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_EmitAmbientSound( edict_t *entity, const Vector &vecOrigin, const char *samp, fl

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] static unsigned short FixedUnsigned16( float value, float scale )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] static short FixedSigned16( float value, float scale )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] // Shake the screen of all clients within radius // radius == 0, shake all clients // UNDO



// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ScreenShakeAll( const Vector &center, float amplitude, float frequency, float du


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ScreenFadeBuild( ScreenFade &fade, const Vector &color, float fadeTime, float fa


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ScreenFadeWrite( const ScreenFade &fade, CBaseEntity *pEntity )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ScreenFadeAll( const Vector &color, float fadeTime, float fadeHold, int alpha, i


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ScreenFade( CBaseEntity *pEntity, const Vector &color, float fadeTime, float fad


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_HudMessage( CBaseEntity *pEntity, const hudtextparms_t &textparms, const char *p

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_HudMessageAll( const hudtextparms_t &textparms, const char *pMessage )

					 
extern int gmsgTextMsg, gmsgSayText;
// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ClientPrintAll( int msg_dest, const char *msg_name, const char *param1, const ch

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void ClientPrint( entvars_t *client, int msg_dest, const char *msg_name, const char *param

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_SayText( const char *pText, CBaseEntity *pEntity )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_SayTextAll( const char *pText, CBaseEntity *pEntity )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] char *UTIL_dtos1( int d )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] char *UTIL_dtos2( int d )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] char *UTIL_dtos3( int d )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] char *UTIL_dtos4( int d )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ShowMessage( const char *pString, CBaseEntity *pEntity )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ShowMessageAll( const char *pString )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] // Overloaded to add IGNORE_GLASS void UTIL_TraceLine( const Vector &vecStart, const Vecto


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_TraceLine( const Vector &vecStart, const Vector &vecEnd, IGNORE_MONSTERS igmon, 


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_TraceHull( const Vector &vecStart, const Vector &vecEnd, IGNORE_MONSTERS igmon, 

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_TraceModel( const Vector &vecStart, const Vector &vecEnd, int hullNumber, edict_


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] TraceResult UTIL_GetGlobalTrace( )

	
// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_SetSize( entvars_t *pev, const Vector &vecMin, const Vector &vecMax )
	
	
// [fora desta etapa: diferente do SDK ou definida em outro arquivo] float UTIL_VecToYaw( const Vector &vec )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_SetOrigin( entvars_t *pev, const Vector &vecOrigin )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_ParticleEffect( const Vector &vecOrigin, const Vector &vecDirection, ULONG ulCol


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] float UTIL_Approach( float target, float value, float speed )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] float UTIL_ApproachAngle( float target, float value, float speed )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] float UTIL_AngleDistance( float next, float cur )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] float UTIL_SplineFraction( float value, float scale )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] char* UTIL_VarArgs( char *format, ... )
	
// [fora desta etapa: diferente do SDK ou definida em outro arquivo] Vector UTIL_GetAimVector( edict_t *pent, float flSpeed )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] int UTIL_IsMasterTriggered(string_t sMaster, CBaseEntity *pActivator)

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] BOOL UTIL_ShouldShowBlood( int color )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] int UTIL_PointContents( const Vector &vec )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_BloodStream( const Vector &origin, const Vector &direction, int color, int amoun				

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_BloodDrips( const Vector &origin, const Vector &direction, int color, int amount				

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] Vector UTIL_RandomBloodVector( void )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_BloodDecalTrace( TraceResult *pTrace, int bloodColor )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_DecalTrace( TraceResult *pTrace, int decalNumber )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] /* ============== UTIL_PlayerDecalTrace A player is trying to apply his custom decal for t

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_GunshotDecalTrace( TraceResult *pTrace, int decalNumber )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_Sparks( const Vector &position )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_Ricochet( const Vector &position, float scale )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] BOOL UTIL_TeamsMatch( const char *pTeamName1, const char *pTeamName2 )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_StringToVector( float *pVector, const char *pString )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_StringToIntArray( int *pVector, int count, const char *pString )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] Vector UTIL_ClampVectorToBox( const Vector &input, const Vector &clampSize )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] float UTIL_WaterLevel( const Vector &position, float minz, float maxz )


extern DLL_GLOBAL	short	g_sModelIndexBubbles;// [fora desta etapa: diferente do SDK ou definida em outro arquivo] // holds the index for the bubbles model void UTIL_Bubbles( Vector mins, Vector maxs, int 

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_BubbleTrail( Vector from, Vector to, int count )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_Remove( CBaseEntity *pEntity )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] BOOL UTIL_IsValidEntity( edict_t *pent )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void UTIL_PrecacheOther( const char *szClassname )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] //========================================================= // UTIL_LogPrintf - Prints a l

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] //========================================================= // UTIL_DotPoints - returns th


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] //========================================================= // UTIL_StripToken - for redun


// --------------------------------------------------------------
//
// CSave
//
// --------------------------------------------------------------
static int gSizes[FIELD_TYPECOUNT] = 
{
	sizeof(float),		// FIELD_FLOAT
	sizeof(int),		// FIELD_STRING
	sizeof(int),		// FIELD_ENTITY
	sizeof(int),		// FIELD_CLASSPTR
	sizeof(int),		// FIELD_EHANDLE
	sizeof(int),		// FIELD_entvars_t
	sizeof(int),		// FIELD_EDICT
	sizeof(float)*3,	// FIELD_VECTOR
	sizeof(float)*3,	// FIELD_POSITION_VECTOR
	sizeof(int *),		// FIELD_POINTER
	sizeof(int),		// FIELD_INTEGER
#ifdef GNUC
	sizeof(int *)*2,		// FIELD_FUNCTION
#else
	sizeof(int *),		// FIELD_FUNCTION	
#endif
	sizeof(int),		// FIELD_BOOLEAN
	sizeof(short),		// FIELD_SHORT
	sizeof(char),		// FIELD_CHARACTER
	sizeof(float),		// FIELD_TIME
	sizeof(int),		// FIELD_MODELNAME
	sizeof(int),		// FIELD_SOUNDNAME
};


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] // Base class includes common SAVERESTOREDATA pointer, and manages the entity table CSaveR


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] CSaveRestoreBuffer :: CSaveRestoreBuffer( SAVERESTOREDATA *pdata )


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] CSaveRestoreBuffer :: ~CSaveRestoreBuffer( void )

// [SDK score 1.0] CSaveRestoreBuffer::EntityIndex
int	CSaveRestoreBuffer :: EntityIndex( CBaseEntity *pEntity )
{
	if ( pEntity == NULL )
		return -1;
	return EntityIndex( pEntity->pev );
}


// [SDK score 1.0] CSaveRestoreBuffer::EntityIndex
int	CSaveRestoreBuffer :: EntityIndex( entvars_t *pevLookup )
{
	if ( pevLookup == NULL )
		return -1;
	return EntityIndex( ENT( pevLookup ) );
}

// [SDK score 1.0] CSaveRestoreBuffer::EntityIndex
int	CSaveRestoreBuffer :: EntityIndex( EOFFSET eoLookup )
{
	return EntityIndex( ENT( eoLookup ) );
}


// [SDK score 1.0] CSaveRestoreBuffer::EntityIndex
int	CSaveRestoreBuffer :: EntityIndex( edict_t *pentLookup )
{
	if ( !m_pdata || pentLookup == NULL )
		return -1;

	int i;
	ENTITYTABLE *pTable;

	for ( i = 0; i < m_pdata->tableCount; i++ )
	{
		pTable = m_pdata->pTable + i;
		if ( pTable->pent == pentLookup )
			return i;
	}
	return -1;
}


// [SDK score 1.0] CSaveRestoreBuffer::EntityFromIndex
edict_t *CSaveRestoreBuffer :: EntityFromIndex( int entityIndex )
{
	if ( !m_pdata || entityIndex < 0 )
		return NULL;

	int i;
	ENTITYTABLE *pTable;

	for ( i = 0; i < m_pdata->tableCount; i++ )
	{
		pTable = m_pdata->pTable + i;
		if ( pTable->id == entityIndex )
			return pTable->pent;
	}
	return NULL;
}


// [SDK score 1.0] CSaveRestoreBuffer::EntityFlagsSet
int	CSaveRestoreBuffer :: EntityFlagsSet( int entityIndex, int flags )
{
	if ( !m_pdata || entityIndex < 0 )
		return 0;
	if ( entityIndex > m_pdata->tableCount )
		return 0;

	m_pdata->pTable[ entityIndex ].flags |= flags;

	return m_pdata->pTable[ entityIndex ].flags;
}


// [SDK score 1.0] CSaveRestoreBuffer::BufferRewind
void CSaveRestoreBuffer :: BufferRewind( int size )
{
	if ( !m_pdata )
		return;

	if ( m_pdata->size < size )
		size = m_pdata->size;

	m_pdata->pCurrentData -= size;
	m_pdata->size -= size;
}

#ifndef _WIN32
extern "C" {
unsigned _rotr ( unsigned val, int shift)
{
        register unsigned lobit;        /* non-zero means lo bit set */
        register unsigned num = val;    /* number to rotate */

        shift &= 0x1f;                  /* modulo 32 -- this will also make
                                           negative shifts work */

        while (shift--) {
                lobit = num & 1;        /* get high bit */
                num >>= 1;              /* shift right one bit */
                if (lobit)
                        num |= 0x80000000;  /* set hi bit if lo bit was set */
        }

        return num;
}
}
#endif

// [SDK score 1.0] CSaveRestoreBuffer::HashString
unsigned int CSaveRestoreBuffer :: HashString( const char *pszToken )
{
	unsigned int	hash = 0;

	while ( *pszToken )
		hash = _rotr( hash, 4 ) ^ *pszToken++;

	return hash;
}

// [SDK score 1.0] CSaveRestoreBuffer::TokenHash
unsigned short CSaveRestoreBuffer :: TokenHash( const char *pszToken )
{
	unsigned short	hash = (unsigned short)(HashString( pszToken ) % (unsigned)m_pdata->tokenCount );
	
#if _DEBUG
	static int tokensparsed = 0;
	tokensparsed++;
	if ( !m_pdata->tokenCount || !m_pdata->pTokens )
		ALERT( at_error, "No token table array in TokenHash()!" );
#endif

	for ( int i=0; i<m_pdata->tokenCount; i++ )
	{
#if _DEBUG
		static qboolean beentheredonethat = FALSE;
		if ( i > 50 && !beentheredonethat )
		{
			beentheredonethat = TRUE;
			ALERT( at_error, "CSaveRestoreBuffer :: TokenHash() is getting too full!" );
		}
#endif

		int	index = hash + i;
		if ( index >= m_pdata->tokenCount )
			index -= m_pdata->tokenCount;

		if ( !m_pdata->pTokens[index] || strcmp( pszToken, m_pdata->pTokens[index] ) == 0 )
		{
			m_pdata->pTokens[index] = (char *)pszToken;
			return index;
		}
	}
		
	// Token hash table full!!! 
	// [Consider doing overflow table(s) after the main table & limiting linear hash table search]
	ALERT( at_error, "CSaveRestoreBuffer :: TokenHash() is COMPLETELY FULL!" );
	return 0;
}

// [SDK score 1.0] CSave::WriteData
void CSave :: WriteData( const char *pname, int size, const char *pdata )
{
	BufferField( pname, size, pdata );
}


// [SDK score 1.0] CSave::WriteShort
void CSave :: WriteShort( const char *pname, const short *data, int count )
{
	BufferField( pname, sizeof(short) * count, (const char *)data );
}


// [SDK score 1.0] CSave::WriteInt
void CSave :: WriteInt( const char *pname, const int *data, int count )
{
	BufferField( pname, sizeof(int) * count, (const char *)data );
}


// [SDK score 1.0] CSave::WriteFloat
void CSave :: WriteFloat( const char *pname, const float *data, int count )
{
	BufferField( pname, sizeof(float) * count, (const char *)data );
}


// [SDK score 1.0] CSave::WriteTime
void CSave :: WriteTime( const char *pname, const float *data, int count )
{
	int i;
	Vector tmp, input;

	BufferHeader( pname, sizeof(float) * count );
	for ( i = 0; i < count; i++ )
	{
		float tmp = data[0];

		// Always encode time as a delta from the current time so it can be re-based if loaded in a new level
		// Times of 0 are never written to the file, so they will be restored as 0, not a relative time
		if ( m_pdata )
			tmp -= m_pdata->time;

		BufferData( (const char *)&tmp, sizeof(float) );
		data ++;
	}
}


// [SDK score 1.0] CSave::WriteString
void CSave :: WriteString( const char *pname, const char *pdata )
{
#ifdef TOKENIZE
	short	token = (short)TokenHash( pdata );
	WriteShort( pname, &token, 1 );
#else
	BufferField( pname, strlen(pdata) + 1, pdata );
#endif
}


// [SDK score 1.0] CSave::WriteString
void CSave :: WriteString( const char *pname, const int *stringId, int count )
{
	int i, size;

#ifdef TOKENIZE
	short	token = (short)TokenHash( STRING( *stringId ) );
	WriteShort( pname, &token, 1 );
#else
#if 0
	if ( count != 1 )
		ALERT( at_error, "No string arrays!\n" );
	WriteString( pname, (char *)STRING(*stringId) );
#endif

	size = 0;
	for ( i = 0; i < count; i++ )
		size += strlen( STRING( stringId[i] ) ) + 1;

	BufferHeader( pname, size );
	for ( i = 0; i < count; i++ )
	{
		const char *pString = STRING(stringId[i]);
		BufferData( pString, strlen(pString)+1 );
	}
#endif
}


// [SDK score 1.0] CSave::WriteVector
void CSave :: WriteVector( const char *pname, const Vector &value )
{
	WriteVector( pname, &value.x, 1 );
}


// [SDK score 1.0] CSave::WriteVector
void CSave :: WriteVector( const char *pname, const float *value, int count )
{
	BufferHeader( pname, sizeof(float) * 3 * count );
	BufferData( (const char *)value, sizeof(float) * 3 * count );
}



// [SDK score 1.0] CSave::WritePositionVector
void CSave :: WritePositionVector( const char *pname, const Vector &value )
{

	if ( m_pdata && m_pdata->fUseLandmark )
	{
		Vector tmp = value - m_pdata->vecLandmarkOffset;
		WriteVector( pname, tmp );
	}

	WriteVector( pname, value );
}


// [SDK score 1.0] CSave::WritePositionVector
void CSave :: WritePositionVector( const char *pname, const float *value, int count )
{
	int i;
	Vector tmp, input;

	BufferHeader( pname, sizeof(float) * 3 * count );
	for ( i = 0; i < count; i++ )
	{
		Vector tmp( value[0], value[1], value[2] );

		if ( m_pdata && m_pdata->fUseLandmark )
			tmp = tmp - m_pdata->vecLandmarkOffset;

		BufferData( (const char *)&tmp.x, sizeof(float) * 3 );
		value += 3;
	}
}


// [SDK score 1.0] CSave::WriteFunction
void CSave :: WriteFunction( const char *pname, void **data, int count )
{
	const char *functionName;

	functionName = NAME_FOR_FUNCTION( (uint32)*data );
	if ( functionName )
		BufferField( pname, strlen(functionName) + 1, functionName );
	else
		ALERT( at_error, "Invalid function pointer in entity!" );
}


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void EntvarsKeyvalue( entvars_t *pev, KeyValueData *pkvd )



// [SDK score 1.0] CSave::WriteEntVars
int CSave :: WriteEntVars( const char *pname, entvars_t *pev )
{
	return WriteFields( pname, pev, gEntvarsDescription, ENTVARS_COUNT );
}



// [SDK score 1.0] CSave::WriteFields
int CSave :: WriteFields( const char *pname, void *pBaseData, TYPEDESCRIPTION *pFields, int fieldCount )
{
	int				i, j, actualCount, emptyCount;
	TYPEDESCRIPTION	*pTest;
	int				entityArray[MAX_ENTITYARRAY];

	// Precalculate the number of empty fields
	emptyCount = 0;
	for ( i = 0; i < fieldCount; i++ )
	{
		void *pOutputData;
		pOutputData = ((char *)pBaseData + pFields[i].fieldOffset );
		if ( DataEmpty( (const char *)pOutputData, pFields[i].fieldSize * gSizes[pFields[i].fieldType] ) )
			emptyCount++;
	}

	// Empty fields will not be written, write out the actual number of fields to be written
	actualCount = fieldCount - emptyCount;
	WriteInt( pname, &actualCount, 1 );

	for ( i = 0; i < fieldCount; i++ )
	{
		void *pOutputData;
		pTest = &pFields[ i ];
		pOutputData = ((char *)pBaseData + pTest->fieldOffset );

		// UNDONE: Must we do this twice?
		if ( DataEmpty( (const char *)pOutputData, pTest->fieldSize * gSizes[pTest->fieldType] ) )
			continue;

		switch( pTest->fieldType )
		{
		case FIELD_FLOAT:
			WriteFloat( pTest->fieldName, (float *)pOutputData, pTest->fieldSize );
		break;
		case FIELD_TIME:
			WriteTime( pTest->fieldName, (float *)pOutputData, pTest->fieldSize );
		break;
		case FIELD_MODELNAME:
		case FIELD_SOUNDNAME:
		case FIELD_STRING:
			WriteString( pTest->fieldName, (int *)pOutputData, pTest->fieldSize );
		break;
		case FIELD_CLASSPTR:
		case FIELD_EVARS:
		case FIELD_EDICT:
		case FIELD_ENTITY:
		case FIELD_EHANDLE:
			if ( pTest->fieldSize > MAX_ENTITYARRAY )
				ALERT( at_error, "Can't save more than %d entities in an array!!!\n", MAX_ENTITYARRAY );
			for ( j = 0; j < pTest->fieldSize; j++ )
			{
				switch( pTest->fieldType )
				{
					case FIELD_EVARS:
						entityArray[j] = EntityIndex( ((entvars_t **)pOutputData)[j] );
					break;
					case FIELD_CLASSPTR:
						entityArray[j] = EntityIndex( ((CBaseEntity **)pOutputData)[j] );
					break;
					case FIELD_EDICT:
						entityArray[j] = EntityIndex( ((edict_t **)pOutputData)[j] );
					break;
					case FIELD_ENTITY:
						entityArray[j] = EntityIndex( ((EOFFSET *)pOutputData)[j] );
					break;
					case FIELD_EHANDLE:
						entityArray[j] = EntityIndex( (CBaseEntity *)(((EHANDLE *)pOutputData)[j]) );
					break;
				}
			}
			WriteInt( pTest->fieldName, entityArray, pTest->fieldSize );
		break;
		case FIELD_POSITION_VECTOR:
			WritePositionVector( pTest->fieldName, (float *)pOutputData, pTest->fieldSize );
		break;
		case FIELD_VECTOR:
			WriteVector( pTest->fieldName, (float *)pOutputData, pTest->fieldSize );
		break;

		case FIELD_BOOLEAN:
		case FIELD_INTEGER:
			WriteInt( pTest->fieldName, (int *)pOutputData, pTest->fieldSize );
		break;

		case FIELD_SHORT:
			WriteData( pTest->fieldName, 2 * pTest->fieldSize, ((char *)pOutputData) );
		break;

		case FIELD_CHARACTER:
			WriteData( pTest->fieldName, pTest->fieldSize, ((char *)pOutputData) );
		break;

		// For now, just write the address out, we're not going to change memory while doing this yet!
		case FIELD_POINTER:
			WriteInt( pTest->fieldName, (int *)(char *)pOutputData, pTest->fieldSize );
		break;

		case FIELD_FUNCTION:
			WriteFunction( pTest->fieldName, (void **)pOutputData, pTest->fieldSize );
		break;
		default:
			ALERT( at_error, "Bad field type\n" );
		}
	}

	return 1;
}


// [SDK score 1.0] CSave::BufferString
void CSave :: BufferString( char *pdata, int len )
{
	char c = 0;

	BufferData( pdata, len );		// Write the string
	BufferData( &c, 1 );			// Write a null terminator
}


// [SDK score 1.0] CSave::DataEmpty
int CSave :: DataEmpty( const char *pdata, int size )
{
	for ( int i = 0; i < size; i++ )
	{
		if ( pdata[i] )
			return 0;
	}
	return 1;
}


// [SDK score 1.0] CSave::BufferField
void CSave :: BufferField( const char *pname, int size, const char *pdata )
{
	BufferHeader( pname, size );
	BufferData( pdata, size );
}


// [SDK score 1.0] CSave::BufferHeader
void CSave :: BufferHeader( const char *pname, int size )
{
	short	hashvalue = TokenHash( pname );
	if ( size > 1<<(sizeof(short)*8) )
		ALERT( at_error, "CSave :: BufferHeader() size parameter exceeds 'short'!" );
	BufferData( (const char *)&size, sizeof(short) );
	BufferData( (const char *)&hashvalue, sizeof(short) );
}


// [SDK score 1.0] CSave::BufferData
void CSave :: BufferData( const char *pdata, int size )
{
	if ( !m_pdata )
		return;

	if ( m_pdata->size + size > m_pdata->bufferSize )
	{
		ALERT( at_error, "Save/Restore overflow!" );
		m_pdata->size = m_pdata->bufferSize;
		return;
	}

	memcpy( m_pdata->pCurrentData, pdata, size );
	m_pdata->pCurrentData += size;
	m_pdata->size += size;
}



// [SDK score 1.0] CRestore::ReadField
// --------------------------------------------------------------
//
// CRestore
//
// --------------------------------------------------------------

int CRestore::ReadField( void *pBaseData, TYPEDESCRIPTION *pFields, int fieldCount, int startField, int size, char *pName, void *pData )
{
	int i, j, stringCount, fieldNumber, entityIndex;
	TYPEDESCRIPTION *pTest;
	float	time, timeData;
	Vector	position;
	edict_t	*pent;
	char	*pString;

	time = 0;
	position = Vector(0,0,0);

	if ( m_pdata )
	{
		time = m_pdata->time;
		if ( m_pdata->fUseLandmark )
			position = m_pdata->vecLandmarkOffset;
	}

	for ( i = 0; i < fieldCount; i++ )
	{
		fieldNumber = (i+startField)%fieldCount;
		pTest = &pFields[ fieldNumber ];
		if ( pTest->fieldName && !stricmp( pTest->fieldName, pName ) )
		{
			if ( !m_global || !(pTest->flags & FTYPEDESC_GLOBAL) )
			{
				for ( j = 0; j < pTest->fieldSize; j++ )
				{
					void *pOutputData = ((char *)pBaseData + pTest->fieldOffset + (j*gSizes[pTest->fieldType]) );
					void *pInputData = (char *)pData + j * gSizes[pTest->fieldType];

					switch( pTest->fieldType )
					{
					case FIELD_TIME:
						timeData = *(float *)pInputData;
						// Re-base time variables
						timeData += time;
						*((float *)pOutputData) = timeData;
					break;
					case FIELD_FLOAT:
						*((float *)pOutputData) = *(float *)pInputData;
					break;
					case FIELD_MODELNAME:
					case FIELD_SOUNDNAME:
					case FIELD_STRING:
						// Skip over j strings
						pString = (char *)pData;
						for ( stringCount = 0; stringCount < j; stringCount++ )
						{
							while (*pString)
								pString++;
							pString++;
						}
						pInputData = pString;
						if ( strlen( (char *)pInputData ) == 0 )
							*((int *)pOutputData) = 0;
						else
						{
							int string;

							string = ALLOC_STRING( (char *)pInputData );
							
							*((int *)pOutputData) = string;

							if ( !FStringNull( string ) && m_precache )
							{
								if ( pTest->fieldType == FIELD_MODELNAME )
									PRECACHE_MODEL( (char *)STRING( string ) );
								else if ( pTest->fieldType == FIELD_SOUNDNAME )
									PRECACHE_SOUND( (char *)STRING( string ) );
							}
						}
					break;
					case FIELD_EVARS:
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						if ( pent )
							*((entvars_t **)pOutputData) = VARS(pent);
						else
							*((entvars_t **)pOutputData) = NULL;
					break;
					case FIELD_CLASSPTR:
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						if ( pent )
							*((CBaseEntity **)pOutputData) = CBaseEntity::Instance(pent);
						else
							*((CBaseEntity **)pOutputData) = NULL;
					break;
					case FIELD_EDICT:
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						*((edict_t **)pOutputData) = pent;
					break;
					case FIELD_EHANDLE:
						// Input and Output sizes are different!
						pOutputData = (char *)pOutputData + j*(sizeof(EHANDLE) - gSizes[pTest->fieldType]);
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						if ( pent )
							*((EHANDLE *)pOutputData) = CBaseEntity::Instance(pent);
						else
							*((EHANDLE *)pOutputData) = NULL;
					break;
					case FIELD_ENTITY:
						entityIndex = *( int *)pInputData;
						pent = EntityFromIndex( entityIndex );
						if ( pent )
							*((EOFFSET *)pOutputData) = OFFSET(pent);
						else
							*((EOFFSET *)pOutputData) = 0;
					break;
					case FIELD_VECTOR:
						((float *)pOutputData)[0] = ((float *)pInputData)[0];
						((float *)pOutputData)[1] = ((float *)pInputData)[1];
						((float *)pOutputData)[2] = ((float *)pInputData)[2];
					break;
					case FIELD_POSITION_VECTOR:
						((float *)pOutputData)[0] = ((float *)pInputData)[0] + position.x;
						((float *)pOutputData)[1] = ((float *)pInputData)[1] + position.y;
						((float *)pOutputData)[2] = ((float *)pInputData)[2] + position.z;
					break;

					case FIELD_BOOLEAN:
					case FIELD_INTEGER:
						*((int *)pOutputData) = *( int *)pInputData;
					break;

					case FIELD_SHORT:
						*((short *)pOutputData) = *( short *)pInputData;
					break;

					case FIELD_CHARACTER:
						*((char *)pOutputData) = *( char *)pInputData;
					break;

					case FIELD_POINTER:
						*((int *)pOutputData) = *( int *)pInputData;
					break;
					case FIELD_FUNCTION:
						if ( strlen( (char *)pInputData ) == 0 )
							*((int *)pOutputData) = 0;
						else
							*((int *)pOutputData) = FUNCTION_FROM_NAME( (char *)pInputData );
					break;

					default:
						ALERT( at_error, "Bad field type\n" );
					}
				}
			}
#if 0
			else
			{
				ALERT( at_console, "Skipping global field %s\n", pName );
			}
#endif
			return fieldNumber;
		}
	}

	return -1;
}


// [SDK score 1.0] CRestore::ReadEntVars
int CRestore::ReadEntVars( const char *pname, entvars_t *pev )
{
	return ReadFields( pname, pev, gEntvarsDescription, ENTVARS_COUNT );
}


// [SDK score 1.0] CRestore::ReadFields
int CRestore::ReadFields( const char *pname, void *pBaseData, TYPEDESCRIPTION *pFields, int fieldCount )
{
	unsigned short	i, token;
	int		lastField, fileCount;
	HEADER	header;

	i = ReadShort();
	ASSERT( i == sizeof(int) );			// First entry should be an int

	token = ReadShort();

	// Check the struct name
	if ( token != TokenHash(pname) )			// Field Set marker
	{
//		ALERT( at_error, "Expected %s found %s!\n", pname, BufferPointer() );
		BufferRewind( 2*sizeof(short) );
		return 0;
	}

	// Skip over the struct name
	fileCount = ReadInt();						// Read field count

	lastField = 0;								// Make searches faster, most data is read/written in the same order

	// Clear out base data
	for ( i = 0; i < fieldCount; i++ )
	{
		// Don't clear global fields
		if ( !m_global || !(pFields[i].flags & FTYPEDESC_GLOBAL) )
			memset( ((char *)pBaseData + pFields[i].fieldOffset), 0, pFields[i].fieldSize * gSizes[pFields[i].fieldType] );
	}

	for ( i = 0; i < fileCount; i++ )
	{
		BufferReadHeader( &header );
		lastField = ReadField( pBaseData, pFields, fieldCount, lastField, header.size, m_pdata->pTokens[header.token], header.pData );
		lastField++;
	}
	
	return 1;
}


// [SDK score 1.0] CRestore::BufferReadHeader
void CRestore::BufferReadHeader( HEADER *pheader )
{
	ASSERT( pheader!=NULL );
	pheader->size = ReadShort();				// Read field size
	pheader->token = ReadShort();				// Read field name token
	pheader->pData = BufferPointer();			// Field Data is next
	BufferSkipBytes( pheader->size );			// Advance to next field
}


// [SDK score 1.0] CRestore::ReadShort
short	CRestore::ReadShort( void )
{
	short tmp = 0;

	BufferReadBytes( (char *)&tmp, sizeof(short) );

	return tmp;
}

// [SDK score 1.0] CRestore::ReadInt
int	CRestore::ReadInt( void )
{
	int tmp = 0;

	BufferReadBytes( (char *)&tmp, sizeof(int) );

	return tmp;
}

// [SDK score 1.0] CRestore::ReadNamedInt
int CRestore::ReadNamedInt( const char *pName )
{
	HEADER header;

	BufferReadHeader( &header );
	return ((int *)header.pData)[0];
}

// [SDK score 1.0] CRestore::ReadNamedString
char *CRestore::ReadNamedString( const char *pName )
{
	HEADER header;

	BufferReadHeader( &header );
#ifdef TOKENIZE
	return (char *)(m_pdata->pTokens[*(short *)header.pData]);
#else
	return (char *)header.pData;
#endif
}


// [SDK score 1.0] CRestore::BufferPointer
char *CRestore::BufferPointer( void )
{
	if ( !m_pdata )
		return NULL;

	return m_pdata->pCurrentData;
}

// [SDK score 1.0] CRestore::BufferReadBytes
void CRestore::BufferReadBytes( char *pOutput, int size )
{
	ASSERT( m_pdata !=NULL );

	if ( !m_pdata || Empty() )
		return;

	if ( (m_pdata->size + size) > m_pdata->bufferSize )
	{
		ALERT( at_error, "Restore overflow!" );
		m_pdata->size = m_pdata->bufferSize;
		return;
	}

	if ( pOutput )
		memcpy( pOutput, m_pdata->pCurrentData, size );
	m_pdata->pCurrentData += size;
	m_pdata->size += size;
}


// [SDK score 1.0] CRestore::BufferSkipBytes
void CRestore::BufferSkipBytes( int bytes )
{
	BufferReadBytes( NULL, bytes );
}

// [SDK score 1.0] CRestore::BufferSkipZString
int CRestore::BufferSkipZString( void )
{
	char *pszSearch;
	int	 len;

	if ( !m_pdata )
		return 0;

	int maxLen = m_pdata->bufferSize - m_pdata->size;

	len = 0;
	pszSearch = m_pdata->pCurrentData;
	while ( *pszSearch++ && len < maxLen )
		len++;

	len++;

	BufferSkipBytes( len );

	return len;
}

// [SDK score 1.0] CRestore::BufferCheckZString
int	CRestore::BufferCheckZString( const char *string )
{
	if ( !m_pdata )
		return 0;

	int maxLen = m_pdata->bufferSize - m_pdata->size;
	int len = strlen( string );
	if ( len <= maxLen )
	{
		if ( !strncmp( string, m_pdata->pCurrentData, len ) )
			return 1;
	}
	return 0;
}

