// CBotManager.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBotManager {
public:
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    struct bot_restore_list_s *m_pRestoreList;  // +0x0: fila de bots a recriar [?]
    char f_004;  // +0x4 (4)
    char f_005;  // +0x5 (5)
    float f_008;  // +0x8 (8)
    int f_00c;  // +0xc (12)
    float f_010;  // +0x10 (16)
    char f_014;  // +0x14 (20)
    char f_015;  // +0x15 (21)
    char f_016;  // +0x16 (22)
    char f_017;  // +0x17 (23)
    char f_018;  // +0x18 (24)
    short f_01a;  // +0x1a (26)
    short f_01c;  // +0x1c (28)
    float f_020;  // +0x20 (32)
    char f_024;  // +0x24 (36)
    char f_025;  // +0x25 (37)
    int f_028;  // +0x28 (40)
    char f_02c;  // +0x2c (44)
    float f_030;  // +0x30 (48)
    float f_034;  // +0x34 (52)
    int f_038;  // +0x38 (56)
    char f_03c;  // +0x3c (60)
    short f_03e;  // +0x3e (62)
    int f_098;  // +0x98 (152)
    char f_d24;  // +0xd24 (3364)
    short f_d2c;  // +0xd2c (3372)
    float f_d38;  // +0xd38 (3384)
    float f_d3c;  // +0xd3c (3388)
    float f_d40;  // +0xd40 (3392)
    char f_d44;  // +0xd44 (3396)
    char f_d45;  // +0xd45 (3397)
    char f_d47;  // +0xd47 (3399)
    char f_d49;  // +0xd49 (3401)
    char f_d4c;  // +0xd4c (3404)
    char f_d4d;  // +0xd4d (3405)
    int f_d84;  // +0xd84 (3460)
    short f_f6c;  // +0xf6c (3948)
    short f_fac;  // +0xfac (4012)
    char f_fae;  // +0xfae (4014)
    char f_faf;  // +0xfaf (4015)
    char f_fb0;  // +0xfb0 (4016)
    short f_ff0;  // +0xff0 (4080)
    char f_ff2;  // +0xff2 (4082)
    char f_ff3;  // +0xff3 (4083)
    char f_ff4;  // +0xff4 (4084)
    short f_1034;  // +0x1034 (4148)
    char f_1036;  // +0x1036 (4150)
    char f_1037;  // +0x1037 (4151)
    char f_1038;  // +0x1038 (4152)
    short f_1078;  // +0x1078 (4216)
    char f_107a;  // +0x107a (4218)
    char f_107b;  // +0x107b (4219)
    char f_107c;  // +0x107c (4220)
    short f_10bc;  // +0x10bc (4284)
    char f_10be;  // +0x10be (4286)
    char f_10bf;  // +0x10bf (4287)
    char f_10c0;  // +0x10c0 (4288)

    // ---- metodos (implementados em src/bot/botmanager.cpp) ----
    BOOL IsAddingMultipleBots(void);
    void FillServer(void);
    void FillATeam(unsigned char ucTeam);
    void FillAHalfTeam(unsigned char ucTeam);
    void HandleBotDebugCommands(void);
    void GameInit(void);
    void SetMaxBots(short sMax);
    void SetMinBots(short sMin);
    void CalcMSec(void);
    void LoadBotNames(void);
    void CreateBotPersonalities(void);
    void CreateSuperbotSettings(void);
    void CreateSkillData(void);
    void InitSkillDate(void);
    void BotBalanceTeamsThink(void);
    void BotFillThink(void);
    void BotCFGFileThink(void);
    void OpenBotCFGFile(void);
    void Think(void);
    void MapInit(void);
    void DisconnectPlayer(edict_t *pEdict);
    void ChangeBotBoolSetting(bool &bSetting, short sValue, const char *szName);
    void SBotRulesThink(void);
    void ChangeSBotLaserPercent(short sPercent);
    void ChangePersoPercentSetting(int iMemberOffset, short sPercent, const char *szName);   // [?] original: ponteiro para membro de bot_personality_s (offset+1)
    void ChangeAggressionLevel(int iLevel);
    void PickBotName(char *szName);
    void PlayerConnect(const char *szAddress);
    void KickLastBot(bool bMsg);
    void KickBots(short sTeam);
    void ChangeBotSkill(short sSkill);
    void MapFree(void);
    void MakeRandomPersonalities(void);
    BOOL HandleBotCommands(edict_t *pEntity);
    void HandleNonDedBotCommands(void);
    void SaveCustomGatherDBSpots(void);
    void CreateDBGatherSpots(void);
    void InitCustomGatherDBSpots(void);
    short GetNearestDBSpotIndex(CBasePlayer *pPlayer, float flMaxDist);
    short GetRandomDBSpotIndex(short sTeam);
    void DeleteDBGatherSpot(void);
    void PlaceNewDBGatherSpot(void);
    void RestoreBots(void);
    void CreateBot(short sTeam, short sClass, const char *szName, short sSkill, short sPersonality);
    void CreateSuperBot(short sClass, const char *szName, short sSkill, short sSBotLevel);
};
