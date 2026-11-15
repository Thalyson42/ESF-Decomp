// CheckBotMiscThings__4CBot @0x1820f0 size=635
typedef struct st_5820f0_0 {
    float field_0;
} st_5820f0_0;

typedef struct st_5820f0_1 {
    unsigned int field_0;
} st_5820f0_1;

extern st_5820f0_1 *g_engfuncs.pfnRandomLong;
extern st_5820f0_1 *g_engfuncs.pfnRandomFloat;
extern st_5820f0_0 *gpGlobals;
extern char BotManager+3398;
extern char BotManager+3405;
extern int ChatClass;

double CheckBotMiscThings__4CBot(float idx)
{
    unsigned int v4;  // eax
    double v5;  // mm7
    double v6;  // mm7
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    v2 = 0;
    *((char *)&v1 + 3) = 0;
    if (*(int *)(*(unsigned int *)&idx + 4196))
        v2 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 4196) + 20) + 24))(*(int *)(*(unsigned int *)&idx + 4196));
    else
        *((char *)&v1 + 3) = 1;
    if (((char)v2 & 2 || *(char *)((void*)&v1 + 3)) && BotManager+3398 && !(v4 = CBot::GetBestEnemyFromList(idx), *(unsigned int *)(*(unsigned int *)&idx + 2924) = v4, !v4))
    {
        v0 = 5;
    }
    else
    {
        if (((char)v2 & 4 || *(char *)((void*)&v1 + 3)) && BotManager+3405)
        {
            v5 = *(float *)(*(unsigned int *)&idx + 3144);
            if (v5 < *(float *)gpGlobals)
            {
                *(unsigned short *)&v1 = g_engfuncs.pfnRandomLong(1, 100);
                if (*(float *)(*(unsigned int *)&idx + 3420) < *(float *)gpGlobals)
                {
                    if ((short)v1 <= *(short *)(*(int *)(*(unsigned int *)&idx + 2564) + 24))
                        CChatClass::LetBotCheckForReply(&ChatClass, idx);
                    g_engfuncs.pfnRandomFloat(5.5f, 15.0f);
                    *(float *)(*(unsigned int *)&idx + 3420) = (float)(5.5 + *(float *)gpGlobals);
                }
                v5 = *(float *)(*(unsigned int *)&idx + 3404);
                if (v5 < *(float *)gpGlobals)
                {
                    if ((short)v1 <= *(short *)(*(int *)(*(unsigned int *)&idx + 2564) + 24))
                        CChatClass::LetBotSaySomething(&ChatClass, idx);
                    g_engfuncs.pfnRandomFloat(15.0f, 40.0f);
                    v5 = 15.0 + *(float *)gpGlobals;
                    *(float *)(*(unsigned int *)&idx + 3404) = (float)v5;
                }
            }
        }
        if (((char)v2 & 16 || *(char *)((void*)&v1 + 3)) && (char)CBot::CheckForHuntEnemy(idx))
        {
            v0 = 29;
        }
        else
        {
            if (!((char)v2 & 32) && !*(char *)((void*)&v1 + 3))
                return v5;
            v5 = *(float *)(*(unsigned int *)&idx + 2796);
            if (v5 >= *(float *)gpGlobals)
            {
                return v5;
            }
            else if ((char)CBot::BotShouldMakeKameTorps(idx))
            {
                v0 = 19;
            }
            else
            {
                g_engfuncs.pfnRandomFloat(22.0f, 40.0f);
                v6 = 22.0 + *(float *)gpGlobals;
                *(float *)(*(unsigned int *)&idx + 2796) = (float)v6;
                return v6;
            }
        }
    }
    CBot::MakeTask(idx);
    return v5;
}

