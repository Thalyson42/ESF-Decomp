// sdk/maprules.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/maprules.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "eiface.h"
#include "util.h"
#include "gamerules.h"
#include "maprules.h"
#include "cbase.h"
#include "player.h"

// [SDK score 1.0] CRuleEntity::Spawn
void CRuleEntity::Spawn( void )
{
	pev->solid			= SOLID_NOT;
	pev->movetype		= MOVETYPE_NONE;
	pev->effects		= EF_NODRAW;
}

// [SDK score 1.0] CRuleEntity::KeyValue
void CRuleEntity::KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "master"))
	{
		SetMaster( ALLOC_STRING(pkvd->szValue) );
		pkvd->fHandled = TRUE;
	}
	else
		CBaseEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CRuleEntity::CanFireForActivator
BOOL CRuleEntity::CanFireForActivator( CBaseEntity *pActivator )
{
	if ( m_iszMaster )
	{
		if ( UTIL_IsMasterTriggered( m_iszMaster, pActivator ) )
			return TRUE;
		else
			return FALSE;
	}
	
	return TRUE;
}

// [SDK score 1.0] CRulePointEntity::Spawn
void CRulePointEntity::Spawn( void )
{
	CRuleEntity::Spawn();
	pev->frame			= 0;
	pev->model			= 0;
}

// [SDK score 1.0] CRuleBrushEntity::Spawn
void CRuleBrushEntity::Spawn( void )
{
	SET_MODEL( edict(), STRING(pev->model) );
	CRuleEntity::Spawn();
}

// [SDK score 1.0] CGameScore::Spawn
void CGameScore::Spawn( void )
{
	CRulePointEntity::Spawn();
}

// [SDK score 1.0] CGameScore::KeyValue
void CGameScore::KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "points"))
	{
		SetPoints( atoi(pkvd->szValue) );
		pkvd->fHandled = TRUE;
	}
	else
		CRulePointEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CGameScore::Use
void CGameScore::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !CanFireForActivator( pActivator ) )
		return;

	// Only players can use this
	if ( pActivator->IsPlayer() )
	{
		if ( AwardToTeam() )
		{
			pActivator->AddPointsToTeam( Points(), AllowNegativeScore() );
		}
		else
		{
			pActivator->AddPoints( Points(), AllowNegativeScore() );
		}
	}
}

// [SDK score 1.0] CGameEnd::Use
void CGameEnd::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !CanFireForActivator( pActivator ) )
		return;

	g_pGameRules->EndMultiplayerGame();
}

// [SDK score 0.91] CGameText::KeyValue
void CGameText::KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "channel"))
	{
		m_textParms.channel = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "x"))
	{
		m_textParms.x = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "y"))
	{
		m_textParms.y = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "effect"))
	{
		m_textParms.effect = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "color"))
	{
		int color[4];
		UTIL_StringToIntArray( color, 4, pkvd->szValue );
		m_textParms.r1 = color[0];
		m_textParms.g1 = color[1];
		m_textParms.b1 = color[2];
		m_textParms.a1 = color[3];
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "color2"))
	{
		int color[4];
		UTIL_StringToIntArray( color, 4, pkvd->szValue );
		m_textParms.r2 = color[0];
		m_textParms.g2 = color[1];
		m_textParms.b2 = color[2];
		m_textParms.a2 = color[3];
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "fadein"))
	{
		m_textParms.fadeinTime = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "fadeout"))
	{
		m_textParms.fadeoutTime = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "holdtime"))
	{
		m_textParms.holdTime = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "fxtime"))
	{
		m_textParms.fxTime = atof( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
		CRulePointEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CGameText::Use
void CGameText::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !CanFireForActivator( pActivator ) )
		return;

	if ( MessageToAll() )
	{
		UTIL_HudMessageAll( m_textParms, MessageGet() );
	}
	else
	{
		if ( pActivator->IsNetClient() )
		{
			UTIL_HudMessage( pActivator, m_textParms, MessageGet() );
		}
	}
}

// [SDK score 1.0] CGameTeamMaster::KeyValue
void CGameTeamMaster::KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "teamindex"))
	{
		m_teamIndex = atoi( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "triggerstate"))
	{
		int type = atoi( pkvd->szValue );
		switch( type )
		{
		case 0:
			triggerType = USE_OFF;
			break;
		case 2:
			triggerType = USE_TOGGLE;
			break;
		default:
			triggerType = USE_ON;
			break;
		}
		pkvd->fHandled = TRUE;
	}
	else
		CRulePointEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CGameTeamMaster::Use
void CGameTeamMaster::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !CanFireForActivator( pActivator ) )
		return;

	if ( useType == USE_SET )
	{
		if ( value < 0 )
		{
			m_teamIndex = -1;
		}
		else
		{
			m_teamIndex = g_pGameRules->GetTeamIndex( pActivator->TeamID() );
		}
		return;
	}

	if ( TeamMatch( pActivator ) )
	{
		SUB_UseTargets( pActivator, triggerType, value );
		if ( RemoveOnFire() )
			UTIL_Remove( this );
	}
}

// [SDK score 1.0] CGameTeamMaster::IsTriggered
BOOL CGameTeamMaster::IsTriggered( CBaseEntity *pActivator )
{
	return TeamMatch( pActivator );
}

// [SDK score 1.0] CGameTeamMaster::TeamID
const char *CGameTeamMaster::TeamID( void )
{
	if ( m_teamIndex < 0 )		// Currently set to "no team"
		return "";

	return g_pGameRules->GetIndexedTeamName( m_teamIndex );		// UNDONE: Fill this in with the team from the "teamlist"
}

// [SDK score 1.0] CGameTeamMaster::TeamMatch
BOOL CGameTeamMaster::TeamMatch( CBaseEntity *pActivator )
{
	if ( m_teamIndex < 0 && AnyTeam() )
		return TRUE;

	if ( !pActivator )
		return FALSE;

	return UTIL_TeamsMatch( pActivator->TeamID(), TeamID() );
}

// [SDK score 1.0] CGameTeamSet::Use
void CGameTeamSet::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !CanFireForActivator( pActivator ) )
		return;

	if ( ShouldClearTeam() )
	{
		SUB_UseTargets( pActivator, USE_SET, -1 );
	}
	else
	{
		SUB_UseTargets( pActivator, USE_SET, 0 );
	}

	if ( RemoveOnFire() )
	{
		UTIL_Remove( this );
	}
}

// [SDK score 1.0] CGamePlayerZone::KeyValue
void CGamePlayerZone::KeyValue( KeyValueData *pkvd )
{
	if (FStrEq(pkvd->szKeyName, "intarget"))
	{
		m_iszInTarget = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "outtarget"))
	{
		m_iszOutTarget = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "incount"))
	{
		m_iszInCount = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "outcount"))
	{
		m_iszOutCount = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
		CRuleBrushEntity::KeyValue( pkvd );
}

// [SDK score 1.0] CGamePlayerZone::Use
void CGamePlayerZone::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	int playersInCount = 0;
	int playersOutCount = 0;

	if ( !CanFireForActivator( pActivator ) )
		return;

	CBaseEntity *pPlayer = NULL;

	for ( int i = 1; i <= gpGlobals->maxClients; i++ )
	{
		pPlayer = UTIL_PlayerByIndex( i );
		if ( pPlayer )
		{
			TraceResult trace;
			int			hullNumber;

			hullNumber = human_hull;
			if ( pPlayer->pev->flags & FL_DUCKING )
			{
				hullNumber = head_hull;
			}

			UTIL_TraceModel( pPlayer->pev->origin, pPlayer->pev->origin, hullNumber, edict(), &trace );

			if ( trace.fStartSolid )
			{
				playersInCount++;
				if ( m_iszInTarget )
				{
					FireTargets( STRING(m_iszInTarget), pPlayer, pActivator, useType, value );
				}
			}
			else
			{
				playersOutCount++;
				if ( m_iszOutTarget )
				{
					FireTargets( STRING(m_iszOutTarget), pPlayer, pActivator, useType, value );
				}
			}
		}
	}

	if ( m_iszInCount )
	{
		FireTargets( STRING(m_iszInCount), pActivator, this, USE_SET, playersInCount );
	}

	if ( m_iszOutCount )
	{
		FireTargets( STRING(m_iszOutCount), pActivator, this, USE_SET, playersOutCount );
	}
}

// [SDK score 1.0] CGamePlayerHurt::Use
void CGamePlayerHurt::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !CanFireForActivator( pActivator ) )
		return;

	if ( pActivator->IsPlayer() )
	{
		if ( pev->dmg < 0 )
			pActivator->TakeHealth( -pev->dmg, DMG_GENERIC );
		else
			pActivator->TakeDamage( pev, pev, pev->dmg, DMG_GENERIC );
	}
	
	SUB_UseTargets( pActivator, useType, value );

	if ( RemoveOnFire() )
	{
		UTIL_Remove( this );
	}
}

// [SDK score 1.0] CGameCounter::Spawn
void CGameCounter::Spawn( void )
{
	// Save off the initial count
	SetInitialValue( CountValue() );
	CRulePointEntity::Spawn();
}

// [SDK score 1.0] CGameCounter::Use
void CGameCounter::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !CanFireForActivator( pActivator ) )
		return;

	switch( useType )
	{
	case USE_ON:
	case USE_TOGGLE:
		CountUp();
		break;
	
	case USE_OFF:
		CountDown();
		break;

	case USE_SET:
		SetCountValue( (int)value );
		break;
	}
	
	if ( HitLimit() )
	{
		SUB_UseTargets( pActivator, USE_TOGGLE, 0 );
		if ( RemoveOnFire() )
		{
			UTIL_Remove( this );
		}
		
		if ( ResetOnFire() )
		{
			ResetCount();
		}
	}
}

// [SDK score 1.0] CGameCounterSet::Use
void CGameCounterSet::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !CanFireForActivator( pActivator ) )
		return;

	SUB_UseTargets( pActivator, USE_SET, pev->frags );

	if ( RemoveOnFire() )
	{
		UTIL_Remove( this );
	}
}

// [SDK score 1.0] CGamePlayerEquip::KeyValue
void CGamePlayerEquip::KeyValue( KeyValueData *pkvd )
{
	CRulePointEntity::KeyValue( pkvd );

	if ( !pkvd->fHandled )
	{
		for ( int i = 0; i < MAX_EQUIP; i++ )
		{
			if ( !m_weaponNames[i] )
			{
				char tmp[128];

				UTIL_StripToken( pkvd->szKeyName, tmp, sizeof( tmp ) );

				m_weaponNames[i] = ALLOC_STRING(tmp);
				m_weaponCount[i] = atoi(pkvd->szValue);
				m_weaponCount[i] = max(1,m_weaponCount[i]);
				pkvd->fHandled = TRUE;
				break;
			}
		}
	}
}

// [SDK score 1.0] CGamePlayerEquip::Touch
void CGamePlayerEquip::Touch( CBaseEntity *pOther )
{
	if ( !CanFireForActivator( pOther ) )
		return;

	if ( UseOnly() )
		return;

	EquipPlayer( pOther );
}

// [SDK score 1.0] CGamePlayerEquip::EquipPlayer
void CGamePlayerEquip::EquipPlayer( CBaseEntity *pEntity )
{
	CBasePlayer *pPlayer = NULL;

	if ( pEntity->IsPlayer() )
	{
		pPlayer = (CBasePlayer *)pEntity;
	}

	if ( !pPlayer )
		return;

	for ( int i = 0; i < MAX_EQUIP; i++ )
	{
		if ( !m_weaponNames[i] )
			break;
		for ( int j = 0; j < m_weaponCount[i]; j++ )
		{
 			pPlayer->GiveNamedItem( STRING(m_weaponNames[i]) );
		}
	}
}

// [SDK score 1.0] CGamePlayerEquip::Use
void CGamePlayerEquip::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	EquipPlayer( pActivator );
}

// [SDK score 1.0] CGamePlayerTeam::TargetTeamName
const char *CGamePlayerTeam::TargetTeamName( const char *pszTargetName )
{
	CBaseEntity *pTeamEntity = NULL;

	while ((pTeamEntity = UTIL_FindEntityByTargetname( pTeamEntity, pszTargetName )) != NULL)
	{
		if ( FClassnameIs( pTeamEntity->pev, "game_team_master" ) )
			return pTeamEntity->TeamID();
	}

	return NULL;
}

// [SDK score 1.0] CGamePlayerTeam::Use
void CGamePlayerTeam::Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if ( !CanFireForActivator( pActivator ) )
		return;

	if ( pActivator->IsPlayer() )
	{
		const char *pszTargetTeam = TargetTeamName( STRING(pev->target) );
		if ( pszTargetTeam )
		{
			CBasePlayer *pPlayer = (CBasePlayer *)pActivator;
			g_pGameRules->ChangePlayerTeam( pPlayer, pszTargetTeam, ShouldKillPlayer(), ShouldGibPlayer() );
		}
	}
	
	if ( RemoveOnFire() )
	{
		UTIL_Remove( this );
	}
}
