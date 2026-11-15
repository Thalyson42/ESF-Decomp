// Use__15CFuncTrackTrainP11CBaseEntityT18USE_TYPEf @0xeb0f0 size=483
typedef struct st_4eb0f0_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[48];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[312];
    char field_1a0;
    char padding_1a1[43];
    unsigned int field_1cc;
    char padding_1d0[40];
    float field_1f8;
} st_4eb0f0_0;

typedef struct st_4eb0f0_1 {
    struct st_4eb0f0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[92];
    float field_70;
    float field_74;
} st_4eb0f0_1;

typedef struct st_4eb0f0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4eb0f0_2;

typedef struct st_4eb0f0_3 {
    unsigned int field_0;
} st_4eb0f0_3;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4eb0f0_3 *g_engfuncs.pfnAlertMessage;
extern st_4eb0f0_2 *gpGlobals;

unsigned int Use__15CFuncTrackTrainP11CBaseEntityT18USE_TYPEf(st_4eb0f0_1 *a0, unsigned int a1, unsigned int a2, int a3, float a4)
{
    unsigned int v5;  // eax
    st_4eb0f0_0 *v6;  // edx
    st_4eb0f0_0 *v7;  // edx
    unsigned int v8;  // eax
    double v9;  // mm7
    double v10;  // mm6
    float v0;  // [bp-0x10]
    int v1;  // [bp-0xc]
    int v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0x8]
    unsigned short v4;  // [bp-0x6]

    if (a3 != 2)
    {
        v5 = CBaseEntity::ShouldToggle(a0, a3, 0.0 != a0->field_0->field_1f8);
        if (!v5)
        {
            return v5;
        }
        else if (a0->field_0->field_1f8 == 0.0)
        {
            a0->field_0->field_1f8 = a0->field_70 * a0->field_74;
            return CFuncTrackTrain::Next(a0);
        }
        else
        {
            a0->field_0->field_1f8 = 0;
            v6 = a0->field_0;
            v6->field_20 = g_vecZero;
            v6->field_24 = g_vecZero+4;
            v6->field_28 = g_vecZero+8;
            v7 = a0->field_0;
            v7->field_5c = g_vecZero;
            v7->field_60 = g_vecZero+4;
            v7->field_64 = g_vecZero+8;
            v8 = CFuncTrackTrain::StopSound(a0);
            a0->field_c = 0;
            a0->field_10 = 0;
            return v8;
        }
    }
    else
    {
        v4 = __fnstcw();
        v3 = v4 | 0xc00;
        v1 = (int)(a0->field_0->field_1f8 * 4.0);
        v4 = __fnstcw();
        v3 = v4 | 0xc00;
        v2 = (int)a0->field_70;
        v1 /= v2;
        v0 = (float)((double)v1 * 0.25 + 0.25 * a4);
        v9 = v0;
        v10 = 1.0;
        if (1.0 < v9 || (v10 = -1.0, -1.0 > v9))
        {
        }
        else
        {
            v10 = v9;
        }
        if (a0->field_0->field_1a0 & 4 && 0.0 > v10)
            v10 = 0.0;
        a0->field_0->field_1f8 = (float)(v10 * a0->field_70);
        CFuncTrackTrain::Next(a0);
        return g_engfuncs.pfnAlertMessage(2, "TRAIN(%s), speed to %.2f\n", a0->field_0->field_1cc + gpGlobals->field_98, (unsigned int)(a0->field_0->field_1f8 >> 0));
    }
}

