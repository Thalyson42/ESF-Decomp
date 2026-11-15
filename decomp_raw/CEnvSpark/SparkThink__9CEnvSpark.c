// SparkThink__9CEnvSpark @0x98c50 size=101
typedef struct st_498c50_0 {
    char padding_0[260];
    float field_104;
} st_498c50_0;

typedef struct st_498c50_1 {
    struct st_498c50_0 *field_0;
    char padding_4[96];
    float field_64;
} st_498c50_1;

typedef struct st_498c50_3 {
    float field_0;
} st_498c50_3;

typedef struct st_498c50_2 {
    unsigned int field_0;
} st_498c50_2;

extern st_498c50_2 *g_engfuncs.pfnRandomFloat;
extern st_498c50_3 *gpGlobals;

int SparkThink__9CEnvSpark(double a0, st_498c50_1 *a1)
{
    g_engfuncs.pfnRandomFloat(0, a1->field_64);
    a1->field_0->field_104 = (float)(a0 + 0.1 + *(float *)gpGlobals);
    return DoSpark(a1->field_0, &a1->field_0->padding_0[8]);
}

