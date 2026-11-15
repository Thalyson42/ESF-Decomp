// SpeakerThink__8CSpeaker @0x11e600 size=593
typedef struct st_51e600_0 {
    char padding_0[8];
    char field_8;
    char padding_9[251];
    unsigned int field_104;
    char padding_108[88];
    float field_160;
    char padding_164[112];
    unsigned int field_1d4;
    char padding_1d8[48];
    int field_208;
} st_51e600_0;

typedef struct st_51e600_1 {
    struct st_51e600_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_51e600_1;

typedef struct st_51e600_2 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_51e600_2;

typedef struct st_51e600_3 {
    unsigned int field_0;
} st_51e600_3;

extern unsigned int _12CTalkMonster.g_talkWaitTime;
extern char _GLOBAL_OFFSET_TABLE_;
extern st_51e600_3 *g_engfuncs.pfnAlertMessage;
extern st_51e600_3 *g_engfuncs.pfnRandomFloat;
extern st_51e600_2 *gpGlobals;

double SpeakerThink__8CSpeaker(st_51e600_1 *a0)
{
    double v2;  // mm7
    char *v3;  // esi
    double v4;  // mm7
    float v0;  // [bp-0x8]

    v0 = (float)(0.1 * a0->field_0->field_160);
    if ((isunordered(gpGlobals->field_0, *(float *)&_12CTalkMonster.g_talkWaitTime) ? 0x44 : gpGlobals->field_0 == *(float *)&_12CTalkMonster.g_talkWaitTime ? 63 : gpGlobals->field_0 < *(float *)&_12CTalkMonster.g_talkWaitTime ? 0 : 0xff) < 64)
    {
        g_engfuncs.pfnRandomFloat(5.0f, 10.0f);
        v2 = 5.0 + *(float *)&_12CTalkMonster.g_talkWaitTime;
        *(float *)&a0->field_0->field_104 = (float)v2;
        return v2;
    }
    if (!a0->field_64)
    {
        v3 = gpGlobals->field_98 + a0->field_0->field_1d4;
    }
    else if (a0->field_64 - 1 <= 11)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_64] - 1004576)]));
    }
    if (*v3 == 33)
    {
        UTIL_EmitAmbientSound(a0->field_0->field_208, &a0->field_0->field_8, v3, v0, 0.30000001192092896f, 0, 100);
        a0->field_0->field_104 = 0;
        return v0;
    }
    if ((int)SENTENCEG_PlayRndSz(a0->field_0->field_208, v3, v0, 0.30000001192092896f, 0, 100) < 0)
        g_engfuncs.pfnAlertMessage(1, "Level Design Error!\nSPEAKER has bad sentence group name: %s\n", v3);
    g_engfuncs.pfnRandomFloat(15.0f, 135.0f);
    *(float *)&a0->field_0->field_104 = (float)(15.0 + gpGlobals->field_0);
    v4 = gpGlobals->field_0 + 5.0;
    *(float *)&_12CTalkMonster.g_talkWaitTime = (float)v4;
    return v4;
}

