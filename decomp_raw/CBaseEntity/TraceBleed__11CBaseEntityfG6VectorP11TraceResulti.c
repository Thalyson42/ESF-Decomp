// TraceBleed__11CBaseEntityfG6VectorP11TraceResulti @0xa6dd0 size=618
typedef struct st_4a6dd0_2 {
    unsigned int field_0;
} st_4a6dd0_2;

typedef struct st_4a6dd0_0 {
    char padding_0[520];
    int field_208;
} st_4a6dd0_0;

typedef struct st_4a6dd0_1 {
    char padding_0[64];
    struct st_4a6dd0_2 *field_40;
} st_4a6dd0_1;

typedef struct st_4a6dd0_3 {
    struct st_4a6dd0_0 *field_0;
    char padding_4[92];
    struct st_4a6dd0_1 *field_60;
} st_4a6dd0_3;

extern st_4a6dd0_2 *g_engfuncs.pfnRandomFloat;

float TraceBleed__11CBaseEntityfG6VectorP11TraceResulti(st_4a6dd0_3 *a0, float a1, float *a2, float *a3, unsigned int a4)
{
    unsigned int *v18;  // edi
    double v19;  // mm6
    unsigned long long v28;  // mm7
    double v20;  // mm6
    double v21;  // mm6
    double v22;  // mm4
    double v23;  // mm4
    unsigned long long v25;  // mm7
    unsigned long long v26;  // mm7
    unsigned long long v27;  // mm7
    char *v0;  // [bp-0xac]
    char *v1;  // [bp-0xa8]
    float v2;  // [bp-0xa4]
    int v3;  // [bp-0xa0]
    int v4;  // [bp-0x9c]
    float v5;  // [bp-0x98]
    float v6;  // [bp-0x84]
    char v7;  // [bp-0x84]
    float v8;  // [bp-0x80]
    float v9;  // [bp-0x7c]
    float v10;  // [bp-0x78]
    float v11;  // [bp-0x74]
    float v12;  // [bp-0x70]
    float v13;  // [bp-0x64]
    float v14;  // [bp-0x60]
    float v15;  // [bp-0x5c]
    char v16;  // [bp-0x44]
    float v17;  // [bp-0x34]

    if (a0->field_60->field_40(a0) == 0xffffffff)
        return v28;
    if (a1 == 0.0f || !(a4 & 8388805))
        return v27;
    if (a1 < 10.0f)
    {
        v5 = 0.10000000149011612f;
        v4 = 1;
    }
    else if (a1 < 25.0f)
    {
        v5 = 0.20000000298023224f;
        v4 = 2;
    }
    else
    {
        v5 = 0.30000001192092896f;
        v4 = 4;
    }
    v3 = 0;
    if (v3 >= v4)
        return v26;
    v2 = -v5;
    v18 = a3 + 5;
    v1 = &v7;
    v0 = &v16;
    do
    {
        v6 = (float)(-1.0 * *a2);
        v19 = -1.0 * a2[2];
        v8 = (float)(-1.0 * a2[1]);
        v9 = (float)v19;
        v13 = v6;
        v14 = v8;
        v15 = v9;
        g_engfuncs.pfnRandomFloat(v2, v5);
        v20 = v19 + v13;
        v13 = (float)v20;
        g_engfuncs.pfnRandomFloat(v2, v5);
        v21 = v20 + v14;
        v14 = (float)v21;
        g_engfuncs.pfnRandomFloat(v2, v5);
        v15 = (float)(v21 + v15);
        v22 = -172.0 * v13;
        v10 = (float)v22;
        v23 = -172.0 * v14;
        v11 = (float)v23;
        v12 = (float)(-172.0 * v15);
        v6 = (float)(v22 + a3[5]);
        v8 = (float)(v23 + *(float *)&v18[1]);
        v9 = *(float *)&v18[2] + v12;
        UTIL_TraceLine(v18, v1, 1, a0->field_0->field_208, v0);
        if (v17 != 1.0f)
            UTIL_BloodDecalTrace(v0, a0->field_60->field_40(a0));
    } while ((v3 += 1, v3 < v4));
    return v25;
    return v27;
}

