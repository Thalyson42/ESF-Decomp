// usermsgs_esf.cpp -- LinkUserMessages do ESF (58 mensagens de usuario). [OK] nomes/tamanhos lidos de LinkUserMessages @0xef0c0.
// A versao do SDK (sdk/player.cpp) foi renomeada para LinkUserMessages_SDK e nao e mais chamada.
#include "extdll.h"
#include "util.h"
#include "cbase.h"

// variaveis novas do ESF (as do SDK ja estao em sdk/player.cpp)
int gmsgVGUIMenu = 0;
int gmsgChangeView = 0;
int gmsgCharge = 0;
int gmsgMaxHealth = 0;
int gmsgPowerLevel = 0;
int gmsgExplosion = 0;
int gmsgPowerStruggle = 0;
int gmsgBlockStruggle = 0;
int gmsgWeaponUpdate = 0;
int gmsgSpectator = 0;
int gmsgAllowSpec = 0;
int gmsgAddEffect = 0;
int gmsgRemoveEffect = 0;
int gmsgSensuBean = 0;
int gmsgSBCTrail = 0;
int gmsgEntEntTrail = 0;
int gmsgFlare = 0;
int gmsgBall = 0;
int gmsgKillTrail = 0;
int gmsgDragonBallEnt = 0;
int gmsgPowerupFX = 0;
int gmsgStopPowerupFX = 0;
int gmsgTransform = 0;
int gmsgDetachTrail = 0;
int gmsgBoundingBox = 0;
int gmsgFog = 0;
int gmsgTransformFX = 0;
int gmsgStopTransformFX = 0;
int gmsgMeleeFX = 0;
int gmsgBlobStart = 0;
int gmsgBlobUpdate = 0;
int gmsgBlobKill = 0;
int gmsgManipModel = 0;
int gmsgMeleeAtkHud = 0;
int gmsgMeleeTxtHud = 0;
int gmsgAfterFX = 0;
int gmsgInitHUDMap = 0;

extern int gmsgCurWeapon, gmsgDeathMsg, gmsgFade, gmsgGameMode, gmsgHealth, gmsgHideWeapon, gmsgHudText, gmsgInitHUD, gmsgMOTD, gmsgResetHUD, gmsgSayText, gmsgScoreInfo, gmsgServerName, gmsgSetFOV, gmsgShake, gmsgShowMenu, gmsgTeamInfo, gmsgTeamNames, gmsgTeamScore, gmsgTextMsg, gmsgWeaponList;

void LinkUserMessages(void)
{
	if (gmsgCurWeapon)
		return;   // ja registrado
	gmsgCurWeapon = REG_USER_MSG("CurWeapon", 3);
	gmsgHealth = REG_USER_MSG("Health", 1);
	gmsgHudText = REG_USER_MSG("HudText", -1);
	gmsgSayText = REG_USER_MSG("SayText", -1);
	gmsgTextMsg = REG_USER_MSG("TextMsg", -1);
	gmsgWeaponList = REG_USER_MSG("WeaponList", -1);
	gmsgResetHUD = REG_USER_MSG("ResetHUD", 1);
	gmsgInitHUD = REG_USER_MSG("InitHUD", 0);
	gmsgDeathMsg = REG_USER_MSG("DeathMsg", -1);
	gmsgScoreInfo = REG_USER_MSG("ScoreInfo", 11);
	gmsgTeamInfo = REG_USER_MSG("TeamInfo", -1);
	gmsgTeamScore = REG_USER_MSG("TeamScore", -1);
	gmsgGameMode = REG_USER_MSG("GameMode", 2);
	gmsgMOTD = REG_USER_MSG("MOTD", -1);
	gmsgServerName = REG_USER_MSG("ServerName", -1);
	gmsgHideWeapon = REG_USER_MSG("HideWeapon", 1);
	gmsgSetFOV = REG_USER_MSG("SetFOV", 1);
	gmsgShowMenu = REG_USER_MSG("ShowMenu", -1);
	gmsgShake = REG_USER_MSG("ScreenShake", 6);
	gmsgFade = REG_USER_MSG("ScreenFade", 10);
	gmsgTeamNames = REG_USER_MSG("TeamNames", -1);
	gmsgVGUIMenu = REG_USER_MSG("VGUIMenu", 1);
	gmsgChangeView = REG_USER_MSG("ChangeView", 2);
	gmsgCharge = REG_USER_MSG("Charge", 1);
	gmsgMaxHealth = REG_USER_MSG("MaxHealth", 1);
	gmsgPowerLevel = REG_USER_MSG("PowerLevel", 5);
	gmsgExplosion = REG_USER_MSG("Explosion", 11);
	gmsgPowerStruggle = REG_USER_MSG("PowerStrug", 1);
	gmsgBlockStruggle = REG_USER_MSG("BlockStrug", 4);
	gmsgWeaponUpdate = REG_USER_MSG("WeapUpdate", 1);
	gmsgSpectator = REG_USER_MSG("Spectator", 2);
	gmsgAllowSpec = REG_USER_MSG("AllowSpec", 1);
	gmsgAddEffect = REG_USER_MSG("AddEffect", -1);
	gmsgRemoveEffect = REG_USER_MSG("RemEffect", 2);
	gmsgSensuBean = REG_USER_MSG("SensuBean", 1);
	gmsgSBCTrail = REG_USER_MSG("SBCTrail", 20);
	gmsgEntEntTrail = REG_USER_MSG("EETrail", 27);
	gmsgFlare = REG_USER_MSG("Flare", 20);
	gmsgBall = REG_USER_MSG("Ball", 6);
	gmsgKillTrail = REG_USER_MSG("KillTrail", 4);
	gmsgDragonBallEnt = REG_USER_MSG("DBEnt", 3);
	gmsgPowerupFX = REG_USER_MSG("Powerup", 4);
	gmsgStopPowerupFX = REG_USER_MSG("StopPowerup", 1);
	gmsgTransform = REG_USER_MSG("Transform", 5);
	gmsgDetachTrail = REG_USER_MSG("DetachTrail", 4);
	gmsgBoundingBox = REG_USER_MSG("BoundingBox", 4);
	gmsgFog = REG_USER_MSG("Fog", 7);
	gmsgTransformFX = REG_USER_MSG("TransformFX", 3);
	gmsgStopTransformFX = REG_USER_MSG("StopTransFX", 1);
	gmsgMeleeFX = REG_USER_MSG("MeleeFX", 2);
	gmsgBlobStart = REG_USER_MSG("BlobStart", 11);
	gmsgBlobUpdate = REG_USER_MSG("BlobUpdate", 4);
	gmsgBlobKill = REG_USER_MSG("BlobKill", 4);
	gmsgManipModel = REG_USER_MSG("ManipModel", -1);
	gmsgMeleeAtkHud = REG_USER_MSG("MeleeAtkHud", -1);
	gmsgMeleeTxtHud = REG_USER_MSG("MeleeTxtHud", 2);
	gmsgAfterFX = REG_USER_MSG("AfterFX", 7);
	gmsgInitHUDMap = REG_USER_MSG("InitHUDMap", 0);
}
