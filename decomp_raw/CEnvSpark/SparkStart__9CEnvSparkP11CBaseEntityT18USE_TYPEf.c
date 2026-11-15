// SparkStart__9CEnvSparkP11CBaseEntityT18USE_TYPEf @0x98cc0 size=128
typedef struct st_498cc0_1 {
    char padding_0[260];
    float field_104;
} st_498cc0_1;

typedef struct st_498cc0_2 {
    struct st_498cc0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[8];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[64];
    unsigned int field_64;
} st_498cc0_2;

typedef struct st_498cc0_0 {
    float field_0;
} st_498cc0_0;

typedef struct st_498cc0_3 {
    unsigned int field_0;
} st_498cc0_3;

extern char SparkThink__9CEnvSpark;
extern char SparkStop__9CEnvSparkP11CBaseEntityT18USE_TYPEf;
extern st_498cc0_3 *g_engfuncs.pfnRandomFloat;
extern st_498cc0_0 *gpGlobals;

unsigned int * SparkStart__9CEnvSparkP11CBaseEntityT18USE_TYPEf(double a0, st_498cc0_2 *a1)
{
    unsigned int v1;  // eax

    v1 = _INSERT(0, 0, 0) | 0xffff0000;
    a1->field_1c = v1;
    a1->field_20 = &SparkStop__9CEnvSparkP11CBaseEntityT18USE_TYPEf;
    a1->field_c = _INSERT(v1, 0, 0) | 0xffff0000;
    a1->field_10 = &SparkThink__9CEnvSpark;
    g_engfuncs.pfnRandomFloat(0, *(float *)&a1->field_64);
    a1->field_0->field_104 = (float)(a0 + 0.1 + *(float *)gpGlobals);
    return gpGlobals;
}

