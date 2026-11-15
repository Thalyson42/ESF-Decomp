// Spawn__9CEnvSpark @0x988c0 size=259
typedef struct st_4988c0_1 {
    float field_0;
} st_4988c0_1;

typedef struct st_4988c0_0 {
    unsigned int field_0;
} st_4988c0_0;

extern char SparkThink__9CEnvSpark;
extern char SparkStart__9CEnvSparkP11CBaseEntityT18USE_TYPEf;
extern char SparkStop__9CEnvSparkP11CBaseEntityT18USE_TYPEf;
extern st_4988c0_0 *g_engfuncs.pfnRandomFloat;
extern st_4988c0_1 *gpGlobals;

int Spawn__9CEnvSpark(double a0, float idx)
{
    unsigned int v2;  // eax
    unsigned int v4;  // eax
    float v0;  // [bp-0x18]

    *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 28) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 32) = 0;
    v2 = *(int *)idx;
    if (!(*(char *)(v2 + 416) & 32))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v2, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &SparkThink__9CEnvSpark;
    }
    else if (*(char *)(v2 + 416) & 64)
    {
        v4 = _INSERT(v2, 0, 0) | 0xffff0000;
        *(unsigned int *)(*(unsigned int *)&idx + 12) = v4;
        *(char **)(*(unsigned int *)&idx + 16) = &SparkThink__9CEnvSpark;
        *(unsigned int *)(*(unsigned int *)&idx + 28) = _INSERT(v4, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 32) = &SparkStop__9CEnvSparkP11CBaseEntityT18USE_TYPEf;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 28) = _INSERT(v2, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 32) = &SparkStart__9CEnvSparkP11CBaseEntityT18USE_TYPEf;
    }
    v0 = 1.5f;
    g_engfuncs.pfnRandomFloat(0, 1.5f);
    *(float *)(*(int *)idx + 260) = (float)(a0 + 0.1 + *(float *)gpGlobals);
    if (0.0 >= *(float *)(*(unsigned int *)&idx + 100))
        *(float *)(*(unsigned int *)&idx + 100) = v0;
    return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
}

