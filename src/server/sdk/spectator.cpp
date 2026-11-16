// sdk/spectator.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/spectator.cpp. Conferir contra decomp_raw ao compilar.
#include	"extdll.h"
#include	"util.h"
#include	"cbase.h"
#include	"monsters.h"
#include	"spectator.h"

// [SDK score 1.0] CBaseSpectator::SpectatorConnect
void CBaseSpectator::SpectatorConnect(void)
{
	pev->flags = FL_SPECTATOR;
	pev->solid = SOLID_NOT;
	pev->movetype = MOVETYPE_NOCLIP;
	
	m_pGoalEnt = NULL;
}

// [SDK score 1.0] CBaseSpectator::SpectatorDisconnect
void CBaseSpectator::SpectatorDisconnect(void)
{
}

// [SDK score 1.0] CBaseSpectator::SpectatorThink
void  CBaseSpectator::SpectatorThink(void)
{
	if (!(pev->flags & FL_SPECTATOR))
	{
		pev->flags = FL_SPECTATOR;
	}

	pev->solid	   = SOLID_NOT;
	pev->movetype  = MOVETYPE_NOCLIP;

	if (pev->impulse)
		SpectatorImpulseCommand();
}

// [SDK score 1.0] CBaseSpectator::Spawn
void CBaseSpectator::Spawn()
{
	pev->flags = FL_SPECTATOR;
	pev->solid = SOLID_NOT;
	pev->movetype = MOVETYPE_NOCLIP;
	
	m_pGoalEnt = NULL;
}
