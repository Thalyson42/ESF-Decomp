// sdk/playermonster.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/playermonster.cpp. Conferir contra decomp_raw ao compilar.
#include	"extdll.h"
#include	"util.h"
#include	"cbase.h"
#include	"monsters.h"
#include	"schedule.h"

// [SDK score 1.0] CPlayerMonster::Classify
int	CPlayerMonster :: Classify ( void )
{
	return	CLASS_PLAYER_ALLY;
}

// [SDK score 1.0] CPlayerMonster::SetYawSpeed
void CPlayerMonster :: SetYawSpeed ( void )
{
	int ys;

	switch ( m_Activity )
	{
	case ACT_IDLE:
	default:
		ys = 90;
	}

	pev->yaw_speed = ys;
}

// [SDK score 1.0] CPlayerMonster::HandleAnimEvent
void CPlayerMonster :: HandleAnimEvent( MonsterEvent_t *pEvent )
{
	switch( pEvent->event )
	{
	case 0:
	default:
		CBaseMonster::HandleAnimEvent( pEvent );
		break;
	}
}

// [SDK score 1.0] CPlayerMonster::ISoundMask
int CPlayerMonster :: ISoundMask ( void )
{
	return	NULL;
}

// [SDK score 1.0] CPlayerMonster::Spawn
void CPlayerMonster :: Spawn()
{
	Precache( );

	SET_MODEL(ENT(pev), "models/player.mdl");
	UTIL_SetSize(pev, VEC_HULL_MIN, VEC_HULL_MAX);

	pev->solid			= SOLID_SLIDEBOX;
	pev->movetype		= MOVETYPE_STEP;
	m_bloodColor		= BLOOD_COLOR_RED;
	pev->health			= 8;
	m_flFieldOfView		= 0.5;// indicates the width of this monster's forward view cone ( as a dotproduct result )
	m_MonsterState		= MONSTERSTATE_NONE;


	MonsterInit();
	if ( pev->spawnflags & SF_MONSTERPLAYER_NOTSOLID )
	{
		pev->solid = SOLID_NOT;
		pev->takedamage = DAMAGE_NO;
	}
}

// [SDK score 1.0] CPlayerMonster::Precache
void CPlayerMonster :: Precache()
{
	PRECACHE_MODEL("models/player.mdl");
}
