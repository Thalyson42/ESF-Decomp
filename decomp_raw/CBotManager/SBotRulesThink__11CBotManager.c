// SBotRulesThink__11CBotManager @0x13e140 size=126
typedef struct st_53e140_0 {
    char padding_0[44];
    char field_2c;
    char padding_2d[3];
    float field_30;
} st_53e140_0;

typedef struct st_53e140_1 {
    unsigned int field_0;
} st_53e140_1;

extern st_53e140_1 *g_6168a4;
extern st_53e140_1 *g_6168ac;
extern st_53e140_1 *gpGlobals;

double SBotRulesThink__11CBotManager(st_53e140_0 *a0)
{
    double v0;  // 128
    double v1;  // mm0

    v0 = a0->field_30;
    if (v0 > *(float *)gpGlobals)
    {
        return v0;
    }
    else if (a0->field_2c)
    {
        a0->field_30 = (float)(0.75 + *(float *)gpGlobals);
        g_6168a4("mp_plcatchup");
        if (v1 != 1.0)
            return 1.0;
        g_6168ac("mp_plcatchup", 0);
        return 1.0;
    }
    else
    {
        return v0;
    }
}

