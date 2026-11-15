// ReactOnDanger__22CShootScatterShotsTaskP13danger_info_s @0x1790d0 size=226
typedef struct st_5790d0_3 {
    char padding_0[800];
    unsigned int field_320;
    char padding_324[1760];
    struct st_5790d0_2 *field_a04;
    char padding_a08[8];
    char field_a10;
    char padding_a11[3];
    float field_a14;
} st_5790d0_3;

typedef struct st_5790d0_0 {
    char padding_0[24];
    short field_18;
} st_5790d0_0;

typedef struct st_5790d0_2 {
    char padding_0[38];
    short field_26;
} st_5790d0_2;

typedef struct st_5790d0_4 {
    char padding_0[8];
    struct st_5790d0_3 *field_8;
} st_5790d0_4;

typedef struct st_5790d0_5 {
    float field_0;
} st_5790d0_5;

typedef struct st_5790d0_1 {
    unsigned int field_0;
} st_5790d0_1;

extern st_5790d0_1 *g_engfuncs.pfnRandomLong;
extern st_5790d0_1 *g_engfuncs.pfnRandomFloat;
extern st_5790d0_5 *gpGlobals;

char ReactOnDanger__22CShootScatterShotsTaskP13danger_info_s(st_5790d0_4 *a0, st_5790d0_0 *a1)
{
    int v0;  // eax

    if (a1->field_18 > 59)
    {
        v0 = g_engfuncs.pfnRandomLong(1, 100);
        if (v0 <= a0->field_8->field_a04->field_26)
        {
            CBasePlayer::Teleport(a0->field_8);
        }
        else if ((char)CBot::BotShouldFallDown(a0->field_8))
        {
            if (a0->field_8->field_320)
                CBasePlayer::StopFly(a0->field_8);
            a0->field_8->field_a10 = 0;
            g_engfuncs.pfnRandomFloat(0.800000011920929f, 1.2000000476837158f);
            a0->field_8->field_a14 = (float)(0.800000011920929 + *(float *)gpGlobals);
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

