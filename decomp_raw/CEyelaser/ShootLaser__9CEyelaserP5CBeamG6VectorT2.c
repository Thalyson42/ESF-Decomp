// ShootLaser__9CEyelaserP5CBeamG6VectorT2 @0xbc860 size=923
typedef struct st_4bc860_6 {
    char padding_0[128];
    struct st_4bc860_7 *field_80;
} st_4bc860_6;

typedef struct st_4bc860_2 {
    char padding_0[52];
    struct st_4bc860_3 *field_34;
    char padding_38[104];
    struct st_4bc860_3 *field_a0;
} st_4bc860_2;

typedef struct st_4bc860_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4bc860_0;

typedef struct st_4bc860_7 {
    struct st_4bc860_5 *field_0;
} st_4bc860_7;

typedef struct st_4bc860_3 {
    unsigned int field_0;
} st_4bc860_3;

typedef struct st_4bc860_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4bc860_1;

typedef struct st_4bc860_5 {
    char padding_0[124];
    struct st_4bc860_4 *field_7c;
    char field_80;
    char padding_81[279];
    unsigned int field_198;
    char padding_19c[108];
    int field_208;
} st_4bc860_5;

typedef struct st_4bc860_4 {
    struct st_4bc860_1 *field_0;
    char padding_4[92];
    struct st_4bc860_2 *field_60;
    char padding_64[896];
    unsigned int field_3e4;
} st_4bc860_4;

extern st_4bc860_3 *g_engfuncs.pfnMessageBegin;
extern st_4bc860_3 *g_engfuncs.pfnMessageEnd;
extern st_4bc860_3 *g_engfuncs.pfnWriteByte;
extern st_4bc860_3 *g_engfuncs.pfnWriteShort;
extern st_4bc860_3 *g_engfuncs.pfnWriteCoord;
extern st_4bc860_3 *g_engfuncs.pfnPEntityOfEntOffset;
extern short g_sModelIndexSmoke;
extern char g_800000;

double ShootLaser__9CEyelaserP5CBeamG6VectorT2(st_4bc860_6 *a0, st_4bc860_0 **a1, float *a2, float *a3)
{
    float v22;  // 112
    float v23;  // 112
    double v32;  // mm7
    st_4bc860_5 *v33;  // eax
    st_4bc860_4 *v34;  // eax
    st_4bc860_4 *v35;  // edi
    unsigned int v36;  // eax
    float v24;  // 112
    double v25;  // mm7
    double v26;  // mm6
    double v27;  // mm7
    st_4bc860_5 *v28;  // ecx
    double v29;  // mm5
    double v30;  // mm5
    unsigned int *v31;  // edx
    unsigned int v0;  // [bp-0xdc]
    float v1;  // [bp-0xb8]
    float v2;  // [bp-0xa4]
    float v3;  // [bp-0xa0], Other Possible Types: unsigned int
    float v4;  // [bp-0x9c]
    float v5;  // [bp-0x98]
    float v6;  // [bp-0x94]
    float v7;  // [bp-0x90]
    float v8;  // [bp-0x8c]
    float v9;  // [bp-0x88]
    float v10;  // [bp-0x84]
    float v11;  // [bp-0x80]
    float v12;  // [bp-0x7c], Other Possible Types: unsigned int
    float v13;  // [bp-0x64]
    float v14;  // [bp-0x60]
    float v15;  // [bp-0x5c]
    char v16;  // [bp-0x44]
    float v17;  // [bp-0x34]
    unsigned int v18;  // [bp-0x30]
    unsigned int v19;  // [bp-0x2c]
    float v20;  // [bp-0x28]
    st_4bc860_5 *v21;  // [bp-0x14]

    v22 = *a3 - *a2;
    v13 = v22;
    v23 = a3[1] - a2[1];
    v14 = v23;
    v24 = a3[2] - a2[2];
    v15 = v24;
    v25 = v22 * v22 + v23 * v23 + v24 * v24;
    v26 = sqrt(v25);
    if (isnan(v26))
        sqrt(*(unsigned int *)&v25);
    else
        v25 = v26;
    v5 = (float)v25;
    if (v5 == 0.0f)
    {
        v10 = 0.0f;
        v11 = 0.0f;
        v12 = 0x3f800000;
    }
    else
    {
        v27 = 1.0 / v5;
        v10 = (float)(v27 * v13);
        v11 = (float)(v27 * v14);
        v12 = (float)(v27 * v15);
    }
    v28 = *(int *)a0->field_80;
    v2 = *a2;
    v3 = a2[1];
    v4 = a2[2];
    v29 = 500.0 * v13;
    v8 = (float)v29;
    v30 = 500.0 * v14;
    v9 = (float)v30;
    v10 = (float)(500.0 * v15);
    v5 = (float)(v29 + *a2);
    v6 = (float)(v30 + a2[1]);
    v7 = a2[2] + v10;
    do
    {
        UTIL_TraceLine(&v2, &v5, 0, v28->field_208, &v16);
        *(unsigned int *)&v2 = v18;
        v3 = v19;
        v4 = v20;
    } while ((v28 = (!v21 ? NULL : (struct st_4bc860_5 *)&v21->field_80), (!v28->field_198 ? 0 : v28->field_198 + 128) == *(int *)a0->field_80 && 1.0 > v17));
    v31 = *a1;
    v31[2] = v18;
    v31[3] = v19;
    *(float *)&v31[4] = v20;
    g_engfuncs.pfnMessageBegin(4, 23, &v18, 0);
    g_engfuncs.pfnWriteByte(5);
    g_engfuncs.pfnWriteCoord(v18);
    g_engfuncs.pfnWriteCoord(v19);
    v32 = v20;
    g_engfuncs.pfnWriteCoord((float)v32);
    g_engfuncs.pfnWriteShort(g_sModelIndexSmoke);
    g_engfuncs.pfnWriteByte(2);
    v0 = 5;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    UTIL_DecalTrace(&v16, 0);
    v33 = v21;
    if (v33 || (v33 = g_engfuncs.pfnPEntityOfEntOffset(0), v33))
        v34 = v33->field_7c;
    else
        v34 = NULL;
    v35 = v34;
    v1 = 1.0;
    if (v35 && v35->field_60->field_a0(v35) && v35->field_3e4)
    {
        v36 = 0;
        if (v35->field_3e4 == 3 || v35->field_3e4 == 5 || v35->field_3e4 == 4)
            v36 = 1;
        if (v36)
        {
            v1 = 0;
        }
        else
        {
            v32 = 0.5;
            v1 = 0.5f;
        }
    }
    v0 = &g_800000;
    CBasePlayerWeapon::GetPowerRatio(a0);
    v35->field_60->field_34(v35, *(int *)a0->field_80, *(int *)a0->field_80, (float)(v32 * 3.0 * (1.0 - v17) * v1));
    EMIT_SOUND_DYN(v35->field_0->field_208, 1, "weapons/melt.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return 0.800000011920929;
}

