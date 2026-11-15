// UTIL_PlayerDecalTrace__FP11TraceResultiii @0x133ae0 size=294
typedef struct st_533ae0_1 {
    char padding_0[16];
    float field_10;
    float field_14;
    float field_18;
    float field_1c;
    char padding_20[16];
    unsigned int field_30;
} st_533ae0_1;

typedef struct st_533ae0_2 {
    unsigned int field_0;
} st_533ae0_2;

typedef struct st_533ae0_0 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_533ae0_0;

extern st_533ae0_0 gDecals+4;
extern st_533ae0_2 *g_engfuncs.pfnMessageBegin;
extern st_533ae0_2 *g_engfuncs.pfnMessageEnd;
extern st_533ae0_2 *g_engfuncs.pfnWriteByte;
extern st_533ae0_2 *g_engfuncs.pfnWriteShort;
extern st_533ae0_2 *g_engfuncs.pfnWriteCoord;
extern st_533ae0_2 *g_engfuncs.pfnIndexOfEdict;

unsigned int UTIL_PlayerDecalTrace__FP11TraceResultiii(st_533ae0_1 *a0, unsigned int a1, int a2, unsigned int a3)
{
    int idx;  // edx
    int v1;  // edi
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    unsigned short v4;  // ax
    unsigned int v5;  // eax

    idx = a2;
    if (a3)
    {
        v1 = idx;
    }
    else if (idx >= 0)
    {
        v1 = (&gDecals+4.field_0)[2 * idx];
        if ((&gDecals+4.field_0)[2 * idx] < 0)
            return v2;
    }
    else
    {
        return v3;
    }
    if (a0->field_10 == 1.0f)
        return v5;
    g_engfuncs.pfnMessageBegin(0, 23, 0, 0);
    g_engfuncs.pfnWriteByte(112);
    g_engfuncs.pfnWriteByte(a1);
    g_engfuncs.pfnWriteCoord(a0->field_14);
    g_engfuncs.pfnWriteCoord(a0->field_18);
    g_engfuncs.pfnWriteCoord(a0->field_1c);
    v4 = g_engfuncs.pfnIndexOfEdict(a0->field_30);
    g_engfuncs.pfnWriteShort(v4);
    g_engfuncs.pfnWriteByte(v1);
    v5 = g_engfuncs.pfnMessageEnd();
    return v5;
}

