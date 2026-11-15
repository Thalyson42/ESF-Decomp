// Spawn__11CBaseButton @0x96a70 size=867
typedef struct st_496a70_4 {
    char padding_0[68];
    char field_44;
    char padding_45[195];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[92];
    unsigned int field_16c;
} st_496a70_4;

typedef struct st_496a70_3 {
    char padding_0[96];
    unsigned int field_60;
} st_496a70_3;

typedef struct st_496a70_2 {
    char padding_0[108];
    unsigned int field_6c;
} st_496a70_2;

typedef struct st_496a70_1 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_496a70_1;

typedef struct st_496a70_0 {
    unsigned int field_0;
} st_496a70_0;

extern char ButtonSpark__11CBaseButton;
extern char ButtonUse__11CBaseButtonP11CBaseEntityT18USE_TYPEf;
extern char ButtonTouch__11CBaseButtonP11CBaseEntity;
extern st_496a70_0 *g_6167c4;
extern st_496a70_0 *g_6167c8;
extern st_496a70_0 *g_6168cc;
extern st_496a70_1 *gpGlobals;

short Spawn__11CBaseButton(float idx)
{
    unsigned int v10;  // esi
    unsigned int v11;  // eax
    float v20;  // 112
    float v21;  // 112
    float v22;  // 112
    double v23;  // mm7
    double v24;  // mm6
    st_496a70_4 *v25;  // eax
    unsigned int v27;  // eax
    unsigned int v12;  // eax
    st_496a70_4 *v13;  // ecx
    unsigned int v14;  // eax
    st_496a70_4 *v15;  // edx
    float v16;  // 128
    unsigned int *v17;  // edx
    st_496a70_2 *v18;  // edx
    st_496a70_3 *v19;  // eax
    char v0;  // [bp-0x55]
    float v1;  // [bp-0x54]
    float v2;  // [bp-0x50]
    float v3;  // [bp-0x4c]
    float v4;  // [bp-0x3c]
    float v5;  // [bp-0x34]
    float v6;  // [bp-0x30]
    float v7;  // [bp-0x2c]
    float v8;  // [bp-0x8]

    v10 = sub_487cb0(*(int *)(*(unsigned int *)&idx + 312));
    g_6167c4(v10);
    v11 = g_6168cc(v10);
    *(unsigned int *)(*(int *)idx + 488) = v11;
    v12 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    v13 = *(int *)idx;
    if (v13[1].padding_0[48] & 64)
    {
        v14 = _INSERT(v12, 0, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 12) = v14 | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &ButtonSpark__11CBaseButton;
        *(float *)&v13->padding_45[191] = (float)(0.5 + gpGlobals->field_0);
    }
    sub_48ccb0(*(int *)idx);
    *(unsigned int *)(*(int *)idx + 264) = 7;
    *(unsigned int *)(*(int *)idx + 268) = 4;
    g_6167c8(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    if (*(float *)(*(int *)idx + 504) == 0.0f)
        *(float *)(*(int *)idx + 504) = 40.0f;
    if (0.0 < *(float *)(*(int *)idx + 352))
        *(unsigned int *)(*(int *)idx + 364) = 0x3f800000;
    if (*(float *)(*(unsigned int *)&idx + 140) == 0.0f)
        *(unsigned int *)(*(unsigned int *)&idx + 140) = 0x3f800000;
    if (*(float *)(*(unsigned int *)&idx + 144) == 0.0f)
        *(float *)(*(unsigned int *)&idx + 144) = 4.0f;
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 1;
    v15 = *(int *)idx;
    *(int *)(*(unsigned int *)&idx + 156) = *(int *)&v15->padding_0[8];
    *(int *)(*(unsigned int *)&idx + 160) = *(int *)&v15->padding_0[12];
    *(int *)(*(unsigned int *)&idx + 164) = *(int *)&v15->padding_0[16];
    v8 = (float)(fabs((*(float *)&v15->padding_45[183] - 2.0) * *(float *)&v15->padding_45[7]) + fabs((*(float *)&v15->padding_45[179] - 2.0) * *(float *)&v15->padding_45[3]) + fabs((*(float *)&v15->padding_45[175] - 2.0) * *(float *)&v15->field_44) - *(float *)(*(unsigned int *)&idx + 144));
    v16 = v8;
    v17 = *(int *)idx + 0x44;
    v1 = v16 * *(float *)(*(int *)idx + 0x44);
    v2 = v16 * *(float *)&v17[1];
    v3 = v16 * *(float *)&v17[2];
    v18 = *(unsigned int *)&idx + 156;
    v5 = v1 + *(float *)(*(unsigned int *)&idx + 156);
    v6 = v2 + *(float *)&v18->padding_0[4];
    v7 = *(float *)&v18->padding_0[8] + v3;
    *(float *)(*(unsigned int *)&idx + 168) = v5;
    *(float *)(*(unsigned int *)&idx + 172) = v6;
    *(float *)(*(unsigned int *)&idx + 176) = v7;
    v0 = 0;
    v19 = *(unsigned int *)&idx + 168;
    v20 = *(float *)(*(unsigned int *)&idx + 168) - *(float *)(*(unsigned int *)&idx + 156);
    v1 = v20;
    v21 = *(float *)&v19->padding_0[4] - *(float *)&v18->padding_0[4];
    v2 = v21;
    v22 = *(float *)&v19->padding_0[8] - *(float *)&v18->padding_0[8];
    v3 = v22;
    v23 = v20 * v20 + v21 * v21 + v22 * v22;
    v24 = sqrt(v23);
    if (isnan(v24))
        sub_487dc0(*(unsigned int *)&v23);
    else
        v23 = v24;
    v4 = (float)v23;
    if (1.0 > v4 || *(char *)(*(int *)idx + 416) & 1)
        v0 = 1;
    if (v0)
    {
        *(int *)(*(unsigned int *)&idx + 168) = *(int *)(*(unsigned int *)&idx + 156);
        *(int *)(*(unsigned int *)&idx + 172) = *(int *)(*(unsigned int *)&idx + 160);
        *(int *)(*(unsigned int *)&idx + 176) = *(int *)(*(unsigned int *)&idx + 164);
    }
    *(unsigned int *)(*(unsigned int *)&idx + 260) = -1.0 == *(float *)(*(unsigned int *)&idx + 140);
    *(unsigned int *)(*(unsigned int *)&idx + 264) = 0;
    v25 = *(int *)idx;
    if (v25[1].padding_0[49] & 1)
    {
        v27 = _INSERT(v25, 0, 0) | 0xffff0000;
        *(unsigned int *)(*(unsigned int *)&idx + 20) = v27;
        *(char **)(*(unsigned int *)&idx + 24) = &ButtonTouch__11CBaseButtonP11CBaseEntity;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
        v27 = _INSERT(v25, 0, 0) | 0xffff0000;
        *(unsigned int *)(*(unsigned int *)&idx + 28) = v27;
        *(char **)(*(unsigned int *)&idx + 32) = &ButtonUse__11CBaseButtonP11CBaseEntityT18USE_TYPEf;
    }
    return v27;
}

