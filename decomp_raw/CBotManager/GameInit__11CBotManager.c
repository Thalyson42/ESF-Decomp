// GameInit__11CBotManager @0x143260 size=189
typedef struct st_543260_0 {
    unsigned int field_0;
} st_543260_0;

extern char ShowInGameBotHelpWindow__Fv;
extern char HandleNormalBotCommands__Fv;
extern char _11CBotManager.sv_num_bots;
extern char _11CBotManager.sv_bot_skill;
extern st_543260_0 *g_engfuncs.pfnCVarRegister;
extern st_543260_0 *g_engfuncs.pfnVoice_GetClientListening;
extern int ChatClass;

int GameInit__11CBotManager(int a0)
{
    g_engfuncs.pfnCVarRegister(&_11CBotManager.sv_num_bots);
    g_engfuncs.pfnCVarRegister(&_11CBotManager.sv_bot_skill);
    CBotManager::LoadBotNames(a0);
    CChatClass::ReadChatFile(&ChatClass);
    CBotManager::CreateBotPersonalities(a0);
    CBotManager::CreateSuperbotSettings(a0);
    CBotManager::CreateSkillData(a0);
    g_engfuncs.pfnVoice_GetClientListening("esf_bot", &HandleNormalBotCommands__Fv);
    return g_engfuncs.pfnVoice_GetClientListening("bot_help", &ShowInGameBotHelpWindow__Fv);
}

