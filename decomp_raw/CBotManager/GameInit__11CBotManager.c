// GameInit__11CBotManager @0x143260 size=189
typedef struct st_543260_0 {
    unsigned int field_0;
} st_543260_0;

extern char ShowInGameBotHelpWindow__Fv;
extern char HandleNormalBotCommands__Fv;
extern char _11CBotManager.sv_num_bots;
extern char _11CBotManager.sv_bot_skill;
extern st_543260_0 *g_6168a0;
extern st_543260_0 *g_6169f0;
extern int ChatClass;

int GameInit__11CBotManager(int a0)
{
    g_6168a0(&_11CBotManager.sv_num_bots);
    g_6168a0(&_11CBotManager.sv_bot_skill);
    sub_48c180(a0);
    sub_48e0c0(&ChatClass);
    sub_48ae40(a0);
    sub_48a2e0(a0);
    sub_48d270(a0);
    g_6169f0("esf_bot", &HandleNormalBotCommands__Fv);
    return g_6169f0("bot_help", &ShowInGameBotHelpWindow__Fv);
}

