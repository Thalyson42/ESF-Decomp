// game_esf.cpp -- game.cpp do ESF: definicao e registro dos cvars do mod.
// [OK] valores lidos da secao .data de hl_i386.so (struct cvar_t: name, string, flags, value, next); GameDLLInit @0x4a2e00
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "CBotManager.h"

cvar_t *g_psv_gravity = NULL;
cvar_t *g_footsteps = NULL;
extern CBotManager BotManager;

// cvar_t { nome, valor padrao, flags, value, next } -- a ordem de declaracao e a do binario
cvar_t displaysoundlist = { "displaysoundlist", "0", 0 };
cvar_t gamemode = { "mp_gamemode", "0", FCVAR_SERVER };
cvar_t lockmodels = { "mp_lockmodels", "1", FCVAR_SERVER };
cvar_t wishlimit = { "mp_wishlimit", "0", FCVAR_SERVER };
cvar_t multipleps = { "mp_multipleps", "0", FCVAR_SERVER };
cvar_t dbrespawntime = { "mp_dbrespawntime", "25", FCVAR_SERVER };
cvar_t allowsensubeans = { "mp_allowsensubeans", "1", FCVAR_SERVER };
cvar_t plcatchup = { "mp_plcatchup", "1", FCVAR_SERVER };
cvar_t realteams = { "mp_realteams", "0", FCVAR_SERVER };
cvar_t allowspectator = { "mp_allowspectator", "1", FCVAR_SERVER };
cvar_t ceasefire = { "mp_ceasefire", "0", FCVAR_SERVER };
cvar_t characterlimit = { "mp_characterlimit", "0", FCVAR_SERVER };
cvar_t fraglimit = { "mp_fraglimit", "0", FCVAR_SERVER };
cvar_t timelimit = { "mp_timelimit", "0", FCVAR_SERVER };
cvar_t fragsleft = { "mp_fragsleft", "0", FCVAR_SERVER | FCVAR_UNLOGGED };
cvar_t timeleft = { "mp_timeleft", "0", FCVAR_SERVER | FCVAR_UNLOGGED };
cvar_t friendlyfire = { "mp_friendlyfire", "0", FCVAR_SERVER };
cvar_t weaponstay = { "mp_weaponstay", "0", FCVAR_SERVER };
cvar_t forcerespawn = { "mp_forcerespawn", "1", FCVAR_SERVER };
cvar_t decalfrequency = { "decalfrequency", "30", FCVAR_SERVER };
cvar_t teamlist = { "mp_teamlist", "Good;Evil", FCVAR_SERVER };
cvar_t teamoverride = { "mp_teamoverride", "1", 0 };
cvar_t defaultteam = { "mp_defaultteam", "0", 0 };
cvar_t allowmonsters = { "mp_allowmonsters", "0", FCVAR_SERVER };
cvar_t mp_chattime = { "mp_chattime", "10", FCVAR_SERVER };
cvar_t laydowntime = { "mp_laydowntime", "1.5", FCVAR_SERVER };
cvar_t nomeleehittime = { "mp_nomeleehittime", "1.0", FCVAR_SERVER };
cvar_t meleeallowed = { "mp_melee", "1.0", FCVAR_SERVER };
cvar_t simplemelee = { "mp_simplemelee", "0.0", FCVAR_SERVER };
cvar_t melee_skill = { "am_skill", "2", FCVAR_SERVER };
cvar_t melee_percentblocked = { "am_percentblocked", "0.75", FCVAR_SERVER };
cvar_t melee_prepunch_delay = { "am_prepunch_delay", "0.2", FCVAR_SERVER };
cvar_t melee_prepunch_delaystruggle = { "am_prepunch_delaystruggle", "0.1", FCVAR_SERVER };
cvar_t melee_prepunch_driftspeed = { "am_prepunch_driftspeed", "280", FCVAR_SERVER };
cvar_t melee_prepunch_max = { "am_prepunch_max", "12", FCVAR_SERVER };
cvar_t melee_prepunch_maxstun = { "am_prepunch_maxstun", "6", FCVAR_SERVER };
cvar_t melee_prepunch_mincombo = { "am_prepunch_mincombo", "3", FCVAR_SERVER };
cvar_t melee_maxextanges = { "am_maxextanges", "4", FCVAR_SERVER };
cvar_t melee_wallstick_canstick = { "am_wallstick_canstick", "1", FCVAR_SERVER };
cvar_t melee_wallstick_mintime = { "am_wallstick_mintime", "1", FCVAR_SERVER };
cvar_t melee_wallstick_maxtime = { "am_wallstick_maxtime", "2.0", FCVAR_SERVER };
cvar_t melee_swoop_minstrugtime = { "am_swoop_minstrugtime", "0.35", FCVAR_SERVER };
cvar_t spawn_invulnerable_time = { "mp_spawn_invulnerable_time", "4.0", FCVAR_SERVER };
cvar_t melee_struggle_maxarrows = { "am_struggle_maxarrows", "6", FCVAR_SERVER };
cvar_t melee_struggle_arrowtime = { "am_struggle_arrowtime", "0.4", FCVAR_SERVER };
cvar_t melee_struggle_startdelay = { "am_struggle_startdelay", "1.25", FCVAR_SERVER };
cvar_t melee_struggle_enddelay = { "am_struggle_enddelay", "1.5", FCVAR_SERVER };
cvar_t melee_struggle_maxextanges = { "am_struggle_maxextanges", "2", FCVAR_SERVER };

// Pega sv_gravity/mp_footsteps da engine, registra os cvars do ESF e inicializa o BotManager.
void GameDLLInit(void)
{
    g_psv_gravity = CVAR_GET_POINTER("sv_gravity");
    g_footsteps = CVAR_GET_POINTER("mp_footsteps");

    CVAR_REGISTER(&displaysoundlist);
    CVAR_REGISTER(&gamemode);
    CVAR_REGISTER(&lockmodels);
    CVAR_REGISTER(&wishlimit);
    CVAR_REGISTER(&multipleps);
    CVAR_REGISTER(&dbrespawntime);
    CVAR_REGISTER(&allowsensubeans);
    CVAR_REGISTER(&plcatchup);
    CVAR_REGISTER(&realteams);
    CVAR_REGISTER(&allowspectator);
    CVAR_REGISTER(&ceasefire);
    CVAR_REGISTER(&characterlimit);
    CVAR_REGISTER(&fraglimit);
    CVAR_REGISTER(&timelimit);
    CVAR_REGISTER(&fragsleft);
    CVAR_REGISTER(&timeleft);
    CVAR_REGISTER(&friendlyfire);
    CVAR_REGISTER(&weaponstay);
    CVAR_REGISTER(&forcerespawn);
    CVAR_REGISTER(&decalfrequency);
    CVAR_REGISTER(&teamlist);
    CVAR_REGISTER(&teamoverride);
    CVAR_REGISTER(&defaultteam);
    CVAR_REGISTER(&allowmonsters);
    CVAR_REGISTER(&mp_chattime);
    CVAR_REGISTER(&laydowntime);
    CVAR_REGISTER(&nomeleehittime);
    CVAR_REGISTER(&meleeallowed);
    CVAR_REGISTER(&simplemelee);
    CVAR_REGISTER(&melee_skill);
    CVAR_REGISTER(&melee_percentblocked);
    CVAR_REGISTER(&melee_prepunch_delay);
    CVAR_REGISTER(&melee_prepunch_delaystruggle);
    CVAR_REGISTER(&melee_prepunch_driftspeed);
    CVAR_REGISTER(&melee_prepunch_max);
    CVAR_REGISTER(&melee_prepunch_maxstun);
    CVAR_REGISTER(&melee_prepunch_mincombo);
    CVAR_REGISTER(&melee_maxextanges);
    CVAR_REGISTER(&melee_wallstick_canstick);
    CVAR_REGISTER(&melee_wallstick_mintime);
    CVAR_REGISTER(&melee_wallstick_maxtime);
    CVAR_REGISTER(&melee_swoop_minstrugtime);
    CVAR_REGISTER(&spawn_invulnerable_time);
    CVAR_REGISTER(&melee_struggle_maxarrows);
    CVAR_REGISTER(&melee_struggle_arrowtime);
    CVAR_REGISTER(&melee_struggle_startdelay);
    CVAR_REGISTER(&melee_struggle_enddelay);
    CVAR_REGISTER(&melee_struggle_maxextanges);

    BotManager.GameInit();
}
