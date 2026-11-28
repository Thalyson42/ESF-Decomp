// sdk/teamplay_gamerules.cpp -- arquivo do HL SDK com SÓ as funções que o hl_i386.so do ESF reproduz (score >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/teamplay_gamerules.cpp. As demais funções do arquivo foram removidas.
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
//
// teamplay_gamerules.cpp
//
#include	"extdll.h"
#include	"util.h"
#include	"cbase.h"
#include	"player.h"
#include	"weapons.h"
#include	"gamerules.h"
#include	"teamplay_gamerules.h"
#include	"game.h"

static char team_names[MAX_TEAMS][MAX_TEAMNAME_LENGTH];
int team_scores[MAX_TEAMS];   // [ESF] sem static: gamerules_esf.cpp tambem usa
int num_teams = 0;   // [ESF] sem static: gamerules_esf.cpp tambem usa

extern DLL_GLOBAL BOOL		g_fGameOver;

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] CHalfLifeTeamplay :: CHalfLifeTeamplay()

extern cvar_t timeleft, fragsleft;

#include "voice_gamemgr.h"
extern CVoiceGameMgr	g_VoiceGameMgr;

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void CHalfLifeTeamplay :: Think ( void )

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] //========================================================= // ClientCommand // the user h

extern int gmsgGameMode;
extern int gmsgSayText;
extern int gmsgTeamInfo;
extern int gmsgTeamNames;
extern int gmsgScoreInfo;

// [SDK score 1.0] CHalfLifeTeamplay::UpdateGameMode
void CHalfLifeTeamplay :: UpdateGameMode( CBasePlayer *pPlayer )
{
	MESSAGE_BEGIN( MSG_ONE, gmsgGameMode, NULL, pPlayer->edict() );
		WRITE_BYTE( 1 );  // game mode teamplay
	MESSAGE_END();
}


// [SDK score 1.0] CHalfLifeTeamplay::SetDefaultPlayerTeam
const char *CHalfLifeTeamplay::SetDefaultPlayerTeam( CBasePlayer *pPlayer )
{
	// copy out the team name from the model
	char *mdls = g_engfuncs.pfnInfoKeyValue( g_engfuncs.pfnGetInfoKeyBuffer( pPlayer->edict() ), "model" );
	strncpy( pPlayer->m_szTeamName, mdls, TEAM_NAME_LENGTH );

	RecountTeams();

	// update the current player of the team he is joining
	if ( pPlayer->m_szTeamName[0] == '\0' || !IsValidTeam( pPlayer->m_szTeamName ) || defaultteam.value )
	{
		const char *pTeamName = NULL;
		
		if ( defaultteam.value )
		{
			pTeamName = team_names[0];
		}
		else
		{
			pTeamName = TeamWithFewestPlayers();
		}
		strncpy( pPlayer->m_szTeamName, pTeamName, TEAM_NAME_LENGTH );
	}

	return pPlayer->m_szTeamName;
}


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] //========================================================= // InitHUD //=================


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] void CHalfLifeTeamplay::ChangePlayerTeam( CBasePlayer *pPlayer, const char *pTeamName, BOO


// [fora desta etapa: diferente do SDK ou definida em outro arquivo] //========================================================= // ClientUserInfoChanged //===

extern int gmsgDeathMsg;

// [SDK score 1.0] CHalfLifeTeamplay::DeathNotice
//=========================================================
// Deathnotice. 
//=========================================================
void CHalfLifeTeamplay::DeathNotice( CBasePlayer *pVictim, entvars_t *pKiller, entvars_t *pevInflictor )
{
	if ( m_DisableDeathMessages )
		return;
	
	if ( pVictim && pKiller && pKiller->flags & FL_CLIENT )
	{
		CBasePlayer *pk = (CBasePlayer*) CBaseEntity::Instance( pKiller );

		if ( pk )
		{
			if ( (pk != pVictim) && (PlayerRelationship( pVictim, pk ) == GR_TEAMMATE) )
			{
				MESSAGE_BEGIN( MSG_ALL, gmsgDeathMsg );
					WRITE_BYTE( ENTINDEX(ENT(pKiller)) );		// the killer
					WRITE_BYTE( ENTINDEX(pVictim->edict()) );	// the victim
					WRITE_STRING( "teammate" );		// flag this as a teammate kill
				MESSAGE_END();
				return;
			}
		}
	}

	CHalfLifeMultiplay::DeathNotice( pVictim, pKiller, pevInflictor );
}

// [SDK score 1.0] CHalfLifeTeamplay::PlayerKilled
//=========================================================
//=========================================================
void CHalfLifeTeamplay :: PlayerKilled( CBasePlayer *pVictim, entvars_t *pKiller, entvars_t *pInflictor )
{
	if ( !m_DisableDeathPenalty )
	{
		CHalfLifeMultiplay::PlayerKilled( pVictim, pKiller, pInflictor );
		RecountTeams();
	}
}


// [SDK score 1.0] CHalfLifeTeamplay::IsTeamplay
//=========================================================
// IsTeamplay
//=========================================================
BOOL CHalfLifeTeamplay::IsTeamplay( void )
{
	return TRUE;
}

// [SDK score 1.0] CHalfLifeTeamplay::FPlayerCanTakeDamage
BOOL CHalfLifeTeamplay::FPlayerCanTakeDamage( CBasePlayer *pPlayer, CBaseEntity *pAttacker )
{
	if ( pAttacker && PlayerRelationship( pPlayer, pAttacker ) == GR_TEAMMATE )
	{
		// my teammate hit me.
		if ( (friendlyfire.value == 0) && (pAttacker != pPlayer) )
		{
			// friendly fire is off, and this hit came from someone other than myself,  then don't get hurt
			return FALSE;
		}
	}

	return CHalfLifeMultiplay::FPlayerCanTakeDamage( pPlayer, pAttacker );
}

// [SDK score 1.0] CHalfLifeTeamplay::PlayerRelationship
//=========================================================
//=========================================================
int CHalfLifeTeamplay::PlayerRelationship( CBaseEntity *pPlayer, CBaseEntity *pTarget )
{
	// half life multiplay has a simple concept of Player Relationships.
	// you are either on another player's team, or you are not.
	if ( !pPlayer || !pTarget || !pTarget->IsPlayer() )
		return GR_NOTTEAMMATE;

	if ( (*GetTeamID(pPlayer) != '\0') && (*GetTeamID(pTarget) != '\0') && !stricmp( GetTeamID(pPlayer), GetTeamID(pTarget) ) )
	{
		return GR_TEAMMATE;
	}

	return GR_NOTTEAMMATE;
}

// [SDK score 1.0] CHalfLifeTeamplay::ShouldAutoAim
//=========================================================
//=========================================================
BOOL CHalfLifeTeamplay::ShouldAutoAim( CBasePlayer *pPlayer, edict_t *target )
{
	// always autoaim, unless target is a teammate
	CBaseEntity *pTgt = CBaseEntity::Instance( target );
	if ( pTgt && pTgt->IsPlayer() )
	{
		if ( PlayerRelationship( pPlayer, pTgt ) == GR_TEAMMATE )
			return FALSE; // don't autoaim at teammates
	}

	return CHalfLifeMultiplay::ShouldAutoAim( pPlayer, target );
}

// [SDK score 1.0] CHalfLifeTeamplay::IPointsForKill
//=========================================================
//=========================================================
int CHalfLifeTeamplay::IPointsForKill( CBasePlayer *pAttacker, CBasePlayer *pKilled )
{
	if ( !pKilled )
		return 0;

	if ( !pAttacker )
		return 1;

	if ( pAttacker != pKilled && PlayerRelationship( pAttacker, pKilled ) == GR_TEAMMATE )
		return -1;

	return 1;
}

// [SDK score 1.0] CHalfLifeTeamplay::GetTeamID
//=========================================================
//=========================================================
const char *CHalfLifeTeamplay::GetTeamID( CBaseEntity *pEntity )
{
	if ( pEntity == NULL || pEntity->pev == NULL )
		return "";

	// return their team name
	return pEntity->TeamID();
}


// [SDK score 1.0] CHalfLifeTeamplay::GetTeamIndex
int CHalfLifeTeamplay::GetTeamIndex( const char *pTeamName )
{
	if ( pTeamName && *pTeamName != 0 )
	{
		// try to find existing team
		for ( int tm = 0; tm < num_teams; tm++ )
		{
			if ( !stricmp( team_names[tm], pTeamName ) )
				return tm;
		}
	}
	
	return -1;	// No match
}


// [SDK score 1.0] CHalfLifeTeamplay::GetIndexedTeamName
const char *CHalfLifeTeamplay::GetIndexedTeamName( int teamIndex )
{
	if ( teamIndex < 0 || teamIndex >= num_teams )
		return "";

	return team_names[ teamIndex ];
}


// [SDK score 1.0] CHalfLifeTeamplay::IsValidTeam
BOOL CHalfLifeTeamplay::IsValidTeam( const char *pTeamName ) 
{
	if ( !m_teamLimit )	// Any team is valid if the teamlist isn't set
		return TRUE;

	return ( GetTeamIndex( pTeamName ) != -1 ) ? TRUE : FALSE;
}

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] const char *CHalfLifeTeamplay::TeamWithFewestPlayers( void )


// [SDK score 1.0] CHalfLifeTeamplay::RecountTeams
//=========================================================
//=========================================================
void CHalfLifeTeamplay::RecountTeams( bool bResendInfo )
{
	char	*pName;
	char	teamlist[TEAMPLAY_TEAMLISTLENGTH];

	// loop through all teams, recounting everything
	num_teams = 0;

	// Copy all of the teams from the teamlist
	// make a copy because strtok is destructive
	strcpy( teamlist, m_szTeamList );
	pName = teamlist;
	pName = strtok( pName, ";" );
	while ( pName != NULL && *pName )
	{
		if ( GetTeamIndex( pName ) < 0 )
		{
			strcpy( team_names[num_teams], pName );
			num_teams++;
		}
		pName = strtok( NULL, ";" );
	}

	if ( num_teams < 2 )
	{
		num_teams = 0;
		m_teamLimit = FALSE;
	}

	// Sanity check
	memset( team_scores, 0, sizeof(team_scores) );

	// loop through all clients
	for ( int i = 1; i <= gpGlobals->maxClients; i++ )
	{
		CBaseEntity *plr = UTIL_PlayerByIndex( i );

		if ( plr )
		{
			const char *pTeamName = plr->TeamID();
			// try add to existing team
			int tm = GetTeamIndex( pTeamName );
			
			if ( tm < 0 ) // no team match found
			{ 
				if ( !m_teamLimit )
				{
					// add to new team
					tm = num_teams;
					num_teams++;
					team_scores[tm] = 0;
					strncpy( team_names[tm], pTeamName, MAX_TEAMNAME_LENGTH );
				}
			}

			if ( tm >= 0 )
			{
				team_scores[tm] += plr->pev->frags;
			}

			if ( bResendInfo ) //Someone's info changed, let's send the team info again.
			{
				if ( plr && IsValidTeam( plr->TeamID() ) )
				{
					MESSAGE_BEGIN( MSG_ALL, gmsgTeamInfo, NULL );
						WRITE_BYTE( plr->entindex() );
						WRITE_STRING( plr->TeamID() );
					MESSAGE_END();
				}
			}
		}
	}
}

// ===================== ESF: funcoes novas do CHalfLifeTeamplay (nao existem no SDK) =====================
#include "esf_classes.h"
#include "CBotManager.h"
extern cvar_t realteams;                // "mp_realteams" (game_esf.cpp)
extern int gmsgVGUIMenu;
extern CBotManager BotManager;

// Time com menos jogadores (sem contar pExcluded); empate: o de menor pontuacao (frags - mortes); empate total: sorteio.  [OK] 0x128b00
const char *CHalfLifeTeamplay :: WeakestTeam( CBasePlayer *pExcluded )
{
	int teamCount[ MAX_TEAMS ];
	int teamScore[ MAX_TEAMS ];
	memset( teamCount, 0, sizeof( teamCount ) );
	memset( teamScore, 0, sizeof( teamScore ) );

	for ( int i = 1; i <= gpGlobals->maxClients; i++ )
	{
		CBasePlayer *pl = (CBasePlayer *)UTIL_PlayerByIndex( i );
		if ( !pl )
			continue;
		int team = GetTeamIndex( pl->TeamID() );        // vfunc +0xa8 / +0xcc
		if ( team >= 0 && pl != pExcluded )
		{
			teamCount[ team ]++;
			teamScore[ team ] = (int)( teamScore[ team ] + pl->pev->frags - *(int *)( (char *)pl + 0x984 ) );   // +0x984: mortes [?]
		}
	}

	int iFewest = 100, iBest = 0;
	const char *pBestName = NULL;
	for ( int i = 0; i < num_teams; i++ )
	{
		if ( teamCount[ i ] < iFewest )
		{
			iFewest = teamCount[ i ];
			pBestName = team_names[ i ];
			iBest = i;
			continue;
		}
		if ( teamCount[ i ] != iFewest )
			continue;
		if ( teamScore[ i ] >= teamScore[ iBest ] )
		{
			if ( teamScore[ i ] != teamScore[ iBest ] || !( RANDOM_FLOAT( 0, 1 ) > 0.5 ) )
				continue;
			iFewest = teamCount[ i ];
		}
		pBestName = team_names[ i ];
		iBest = i;
	}
	return pBestName;
}

// Entra num time (Good/Evil): avisa, registra no log, troca o time e (em realteams) manda o jogador observar ate renascer.  [OK] 0x129070
void CHalfLifeTeamplay :: JoinTeam( CBasePlayer *pPlayer, const char *pTeamName )
{
	if ( !strcmp( pPlayer->m_szTeamName, pTeamName ) )
		return;                                       // ja esta nesse time

	if ( BotManager.f_02c )                           // ha superbots em jogo: so bots entram no time Evil
	{
		BOOL bBot = FALSE;
		if ( !pPlayer->IsNetClient() )                // vfunc +0xa4
			bBot = ( pPlayer->pev->flags & FL_FAKECLIENT ) != 0;
		if ( !bBot && !strcmp( pTeamName, "Evil" ) )
		{
			UTIL_SayText( "Cannot join team evil when there are superbots ingame\n", pPlayer );
			return;
		}
	}

	BOOL bObserver = ( pPlayer->m_afPhysicsFlags & PFLAG_OBSERVER ) != 0;
	char szText[ 1024 ];

	*(int *)( (char *)pPlayer + 0x34c ) = 0;          // [?] campos ESF
	if ( *(int *)( (char *)pPlayer + 0x350 ) )
	{
		*(int *)( (char *)pPlayer + 0x350 ) = 0;
		pPlayer->pev->rendermode = 0;
		pPlayer->pev->renderfx = 0;
		if ( !bObserver && realteams.value != 1.0f && !pPlayer->pev->iuser1 )
			pPlayer->m_pClass->AddAllAttacks();       // vfunc +0x30
	}

	if ( !bObserver && realteams.value != 1.0f && !pPlayer->pev->iuser1 )
	{
		sprintf( szText, "* %s has joined %s\n", STRING( pPlayer->pev->netname ), pTeamName );
		UTIL_SayText( szText, pPlayer );
		UTIL_LogPrintf( "\"%s<%i>\" has joined %s\n", STRING( pPlayer->pev->netname ), GETPLAYERUSERID( pPlayer->edict() ), pTeamName );
		ChangePlayerTeam( pPlayer, pTeamName, FALSE, FALSE );     // vfunc +0xd8
		RecountTeams( false );
		return;
	}

	sprintf( szText, "* %s has joined %s\n", STRING( pPlayer->pev->netname ), pTeamName );
	UTIL_SayText( szText, pPlayer );
	UTIL_LogPrintf( "\"%s<%i>\" has joined %s\n", STRING( pPlayer->pev->netname ), GETPLAYERUSERID( pPlayer->edict() ), pTeamName );

	int iMenu;
	if ( realteams.value == 1.0f )
	{
		if ( bObserver )
		{
			ChangePlayerTeam( pPlayer, pTeamName, FALSE, FALSE );
		}
		else
		{
			ChangePlayerTeam( pPlayer, pTeamName, TRUE, FALSE );  // mata o jogador
			pPlayer->pev->playerclass = 0;
			pPlayer->StartObserving();
		}
		iMenu = 33;
	}
	else
	{
		ChangePlayerTeam( pPlayer, pTeamName, FALSE, FALSE );
		iMenu = 3;
	}
	MESSAGE_BEGIN( MSG_ONE, gmsgVGUIMenu, NULL, pPlayer->edict() );
		WRITE_BYTE( iMenu );
	MESSAGE_END();
	RecountTeams( false );
}
