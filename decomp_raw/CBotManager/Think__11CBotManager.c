// Think__11CBotManager @0x13ded0 size=612
typedef struct st_53ded0_6 {
    char padding_0[124];
    unsigned int field_7c;
} st_53ded0_6;

typedef struct st_53ded0_0 {
    unsigned int field_0;
    char padding_4[140];
    struct st_53ded0_0 *field_90;
} st_53ded0_0;

typedef struct st_53ded0_4 {
    char padding_0[164];
    struct st_53ded0_2 *field_a4;
} st_53ded0_4;

typedef struct st_53ded0_2 {
    unsigned int field_0;
} st_53ded0_2;

typedef struct st_53ded0_3 {
    char padding_0[421];
    char field_1a5;
} st_53ded0_3;

typedef struct st_53ded0_5 {
    struct st_53ded0_3 *field_0;
    char padding_4[92];
    struct st_53ded0_4 *field_60;
} st_53ded0_5;

typedef struct st_53ded0_1 {
    float field_0;
    char padding_4[140];
    struct st_53ded0_1 *field_90;
} st_53ded0_1;

extern char PrintingInGameHelp;
extern float _11CBotManager.sv_bot_skill+12;
extern char g_waypoint_on;
extern st_53ded0_2 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_53ded0_2 *g_engfuncs.pfnIsDedicatedServer;
extern st_53ded0_1 *gpGlobals;

st_53ded0_0 * Think__11CBotManager(float idx)
{
    st_53ded0_6 *v10;  // eax
    unsigned int v11;  // eax
    st_53ded0_6 *v12;  // eax
    unsigned int v13;  // eax
    st_53ded0_5 *v14;  // esi
    int v0;  // [bp-0x58]
    int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    char v4;  // [bp-0x1e]
    char v5;  // [bp-0x1d]
    int v6;  // [bp-0x1c]
    unsigned short v7;  // [bp-0x18]
    unsigned short v8;  // [bp-0x16]

    CBotManager::CalcMSec(idx);
    CBotManager::BotFillThink(idx);
    CBotManager::BotBalanceTeamsThink(idx);
    CBotManager::SBotRulesThink(idx);
    if (PrintingInGameHelp)
        ShowInGameBotHelpWindow();
    if (*(int *)(*(unsigned int *)&idx + 56) && 1.0 <= *(float *)(*(unsigned int *)&idx + 52) && *(float *)(*(unsigned int *)&idx + 52) <= gpGlobals->field_0)
        CBotManager::BotCFGFileThink(idx);
    if (g_waypoint_on)
    {
        *(unsigned short *)&v3 = 0;
        *(unsigned short *)&v2 = 0;
        if (!g_engfuncs.pfnIsDedicatedServer(v2, v3) && !(v10 = *(int *)(*(unsigned int *)&idx + 12), !*(int *)(*(unsigned int *)&idx + 12) && !(v0 = 0, v10 = g_engfuncs.pfnPEntityOfEntOffset(v0), v10)))
            v11 = v10->field_7c;
        else
            v11 = 0;
        if ((char)UTIL_IsValidPlayer(v11))
        {
            if (!g_engfuncs.pfnIsDedicatedServer() && !(v12 = *(int *)(*(unsigned int *)&idx + 12), !*(int *)(*(unsigned int *)&idx + 12) && !(v0 = 0, v12 = g_engfuncs.pfnPEntityOfEntOffset(v0), v12)))
                v13 = v12->field_7c;
            else
                v13 = 0;
            WaypointThink(*(int *)(*(int *)v13 + 520));
        }
    }
    if (_11CBotManager.sv_bot_skill+12 != (double)*(short *)(*(unsigned int *)&idx + 3372))
    {
        v8 = __fnstcw();
        v7 = v8 | 0xc00;
        v6 = (int)(1.0 + _11CBotManager.sv_bot_skill+12);
        CBotManager::ChangeBotSkill(idx, (short)v6);
        v8 = __fnstcw();
        v7 = v8 | 0xc00;
        v6 = (int)_11CBotManager.sv_bot_skill+12;
        *(unsigned short *)(*(unsigned int *)&idx + 3372) = v6;
    }
    v5 = 1;
    if (gpGlobals->field_90 <= NULL)
        return gpGlobals;
    do
    {
        v14 = UTIL_PlayerByIndex(v5);
        *(unsigned short *)&v1 = 0;
        *(unsigned short *)&v0 = 0;
        if ((char)UTIL_IsValidPlayer(v14, v0, v1))
        {
            v4 = 0;
            if (!v14->field_60->field_a4(v14))
                v4 = (v14->field_0->field_1a5 & 32) != 0;
            if (v4)
            {
                CBot::BotPreThink(v14);
                CBot::BotThink(v14);
            }
        }
    } while ((v5 += 1, v5 <= gpGlobals->field_90));
    return v5;
}

