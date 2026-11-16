// sdk/voice_gamemgr.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/game_shared/voice_gamemgr.cpp. Conferir contra decomp_raw ao compilar.
#include "archtypes.h"     // DAL
#include "voice_gamemgr.h"
#include <string.h>
#include <assert.h>
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"

// [SDK score 1.0] CVoiceGameMgr::Init
bool CVoiceGameMgr::Init(
	IVoiceGameMgrHelper *pHelper,
	int maxClients)
{		  
	m_pHelper = pHelper;
	m_nMaxPlayers = VOICE_MAX_PLAYERS < maxClients ? VOICE_MAX_PLAYERS : maxClients;
	g_engfuncs.pfnPrecacheModel("sprites/voiceicon.spr");

	m_msgPlayerVoiceMask = REG_USER_MSG( "VoiceMask", VOICE_MAX_PLAYERS_DW*4 * 2 );
	m_msgRequestState = REG_USER_MSG( "ReqState", 0 );
	
	// register voice_serverdebug if it hasn't been registered already
	if ( !CVAR_GET_POINTER( "voice_serverdebug" ) )
		CVAR_REGISTER( &voice_serverdebug );

	if( !CVAR_GET_POINTER( "sv_alltalk" ) )
		CVAR_REGISTER( &sv_alltalk );

	return true;
}

// [SDK score 1.0] CVoiceGameMgr::SetHelper
void CVoiceGameMgr::SetHelper(IVoiceGameMgrHelper *pHelper)
{
	m_pHelper = pHelper;
}

// [SDK score 1.0] CVoiceGameMgr::Update
void CVoiceGameMgr::Update(double frametime)
{
	// Only update periodically.
	m_UpdateInterval += frametime;
	if(m_UpdateInterval < UPDATE_INTERVAL)
		return;

	UpdateMasks();
}
