// GoToIntermission__18CHalfLifeMultiplay @0xddbf0 size=292
typedef struct st_4ddbf0_1 {
    char padding_0[72];
    float field_48;
    unsigned int field_4c;
} st_4ddbf0_1;

typedef struct st_4ddbf0_2 {
    float field_0;
} st_4ddbf0_2;

typedef struct st_4ddbf0_0 {
    unsigned int field_0;
} st_4ddbf0_0;

extern float g_5bd158;
extern unsigned int g_flIntermissionStartTime;
extern unsigned int g_fGameOver;
extern st_4ddbf0_0 *g_616878;
extern st_4ddbf0_0 *g_61687c;
extern st_4ddbf0_0 *g_6168a4;
extern st_4ddbf0_0 *g_6168b0;
extern st_4ddbf0_2 *gpGlobals;

float GoToIntermission__18CHalfLifeMultiplay(st_4ddbf0_1 *a0)
{
    double v3;  // mm7
    unsigned int v4;  // eax
    unsigned long long v5;  // mm7
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    if (g_fGameOver)
        return v5;
    g_616878(2, 30, 0, 0);
    g_61687c();
    g_6168a4("mp_chattime");
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)v3;
    if (v0 <= 0)
    {
        g_6168b0("mp_chattime", "1");
    }
    else if (v0 > 120)
    {
        v4 = sub_48a560(120);
        g_6168b0("mp_chattime", v4);
    }
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)g_5bd158;
    a0->field_48 = (float)((double)v0 + *(float *)gpGlobals);
    *(float *)&g_flIntermissionStartTime = *(float *)gpGlobals;
    g_fGameOver = 1;
    a0->field_4c = 0;
    return *(float *)&g_flIntermissionStartTime;
}

