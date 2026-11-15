// EndSectionUse__18CTriggerEndSectionP11CBaseEntityT18USE_TYPEf @0x12eda0 size=138
typedef struct st_52eda0_0 {
    char padding_0[164];
    struct st_52eda0_1 *field_a4;
} st_52eda0_0;

typedef struct st_52eda0_4 {
    struct st_52eda0_3 *field_0;
    char padding_4[24];
    unsigned int field_1c;
    unsigned int field_20;
} st_52eda0_4;

typedef struct st_52eda0_1 {
    unsigned int field_0;
} st_52eda0_1;

typedef struct st_52eda0_3 {
    char padding_0[468];
    unsigned int field_1d4;
} st_52eda0_3;

typedef struct st_52eda0_2 {
    char padding_0[96];
    struct st_52eda0_0 *field_60;
} st_52eda0_2;

typedef struct st_52eda0_5 {
    char padding_0[152];
    unsigned int field_98;
} st_52eda0_5;

extern st_52eda0_1 *g_engfuncs.pfnEndSection;
extern st_52eda0_5 *gpGlobals;

unsigned int EndSectionUse__18CTriggerEndSectionP11CBaseEntityT18USE_TYPEf(st_52eda0_4 *a0, st_52eda0_2 *a1)
{
    unsigned int v0;  // eax

    if (a1)
    {
        v0 = a1->field_60->field_a4(a1);
        if (!v0)
            return v0;
    }
    a0->field_1c = 0;
    a0->field_20 = 0;
    if (a0->field_0->field_1d4)
        g_engfuncs.pfnEndSection(a0->field_0->field_1d4 + gpGlobals->field_98);
    return UTIL_Remove(a0);
}

