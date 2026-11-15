// OpenBotCFGFile__11CBotManager @0x141560 size=419
typedef struct st_541560_0 {
    unsigned int field_0;
    char padding_4[8];
    unsigned int field_c;
    char padding_10[36];
    float field_34;
    unsigned int field_38;
    char field_3c;
    char padding_3d[91];
    unsigned int field_98;
} st_541560_0;

typedef struct st_541560_3 {
    char padding_0[244];
    struct st_541560_2 *field_f4;
} st_541560_3;

typedef struct st_541560_2 {
    unsigned int field_0;
} st_541560_2;

typedef struct st_541560_1 {
    float field_0;
    char padding_4[8];
    unsigned int field_c;
    char padding_10[36];
    unsigned int field_34;
    unsigned int field_38;
    char field_3c;
    char padding_3d[91];
    unsigned int field_98;
} st_541560_1;

extern st_541560_3 g_engfuncs;
extern st_541560_2 *g_engfuncs.pfnAlertMessage;
extern st_541560_2 *g_engfuncs.pfnIsDedicatedServer;
extern st_541560_1 *gpGlobals;
extern st_541560_0 BotManager;
extern char BotManager+60;

st_541560_0 * OpenBotCFGFile__11CBotManager(st_541560_0 *a0)
{
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    st_541560_3 *v0;  // [bp-0x258]
    char v1;  // [bp-0x244]
    char v2;  // [bp-0x144]
    char v3;  // [bp-0x104]

    if (!BotManager+60)
        return &BotManager.field_0;
    a0->field_3c = 0;
    strcpy@GLIBC_2.0(&v2, gpGlobals->field_c + gpGlobals->field_98);
    strcat@GLIBC_2.0(&v2, "_bot.cfg");
    BuildBotFileName(&v3, "maps", &v2);
    v4 = fopen@GLIBC_2.1(&v3, "r");
    a0->field_38 = v4;
    if (v4)
    {
        sprintf@GLIBC_2.0(&v1, "Executing %s\n", &v3);
        g_engfuncs.pfnAlertMessage(1, &v1);
    }
    else
    {
        BuildBotFileName(&v3, "bot.cfg", 0);
        sprintf@GLIBC_2.0(&v1, "Executing %s\n", &v3);
        v0 = &g_engfuncs.padding_0[0];
        g_engfuncs.pfnAlertMessage(1, &v1);
        v5 = fopen@GLIBC_2.1(&v3, "r");
        a0->field_38 = v5;
        if (!v5)
            v0->field_f4(1, "bot.cfg file not found\n");
    }
    if (!g_engfuncs.pfnIsDedicatedServer())
    {
        a0->field_34 = (float)(20.0 + gpGlobals->field_0);
        return gpGlobals;
    }
    a0->field_34 = (float)(5.0 + gpGlobals->field_0);
    return a0;
}

