// Think__9CSprayCan @0xfbe20 size=468
typedef struct st_4fbe20_2 {
    char padding_0[8];
    char field_8;
    char padding_9[295];
    unsigned int field_130;
    char padding_134[100];
    unsigned int field_198;
} st_4fbe20_2;

typedef struct st_4fbe20_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4fbe20_0;

typedef struct st_4fbe20_1 {
    unsigned int field_0;
} st_4fbe20_1;

extern st_4fbe20_1 *g_engfuncs.pfnIndexOfEdict;
extern st_4fbe20_0 *gpGlobals;

unsigned int * Think__9CSprayCan(float a0)
{
    int v13;  // eax
    unsigned int *v14;  // edx
    double v15;  // mm5
    double v16;  // mm5
    st_4fbe20_2 *v17;  // eax
    unsigned int *v18;  // edx
    unsigned int v19;  // 128
    unsigned int v0;  // [bp-0xa4]
    int v1;  // [bp-0xa0]
    int v2;  // [bp-0x8c], Other Possible Types: unsigned int
    unsigned short v3;  // [bp-0x88]
    unsigned short v4;  // [bp-0x86]
    float v5;  // [bp-0x84]
    float v6;  // [bp-0x80]
    float v7;  // [bp-0x7c]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    char v11;  // [bp-0x44]

    v13 = (!*(int *)(*(int *)a0 + 408) ? 0 : *(int *)(*(int *)(*(int *)a0 + 408) + 124));
    v0 = (!v13 ? 0xffffffff : CBasePlayer::GetCustomDecalFrames(v13));
    v0 = v0;
    v1 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)a0 + 408));
    UTIL_MakeVectors(*(int *)a0 + 80);
    v14 = &gpGlobals->field_28;
    v15 = 128.0 * gpGlobals->field_28;
    v5 = (float)v15;
    v16 = 128.0 * *(float *)&v14[1];
    v6 = (float)v16;
    v7 = (float)(128.0 * *(float *)&v14[2]);
    v17 = *(int *)a0;
    v18 = &v17->field_8;
    v8 = (float)(v15 + *(float *)&v17->field_8);
    v9 = (float)(v16 + *(float *)&v18[1]);
    v10 = *(float *)&v18[2] + v7;
    UTIL_TraceLine(v18, &v8, 1, v17->field_198, &v11);
    if (v0 == 0xffffffff)
    {
        UTIL_DecalTrace(&v11, 10);
        UTIL_Remove(a0);
    }
    else
    {
        v4 = __fnstcw();
        v3 = v4 | 0xc00;
        v2 = (int)*(float *)(*(int *)a0 + 304);
        UTIL_PlayerDecalTrace(&v11, v1, v2, 1);
        v19 = *(unsigned int *)&*(float *)(*(int *)a0 + 304);
        v2 = v0 - 1;
        *(float *)(*(int *)a0 + 304) = (float)(1.0 + __int_as_float(v19));
        if ((double)(int)v2 <= __int_as_float(v19))
            UTIL_Remove(a0);
    }
    *(float *)(*(int *)a0 + 260) = (float)(0.1 + gpGlobals->field_0);
    return gpGlobals;
}

