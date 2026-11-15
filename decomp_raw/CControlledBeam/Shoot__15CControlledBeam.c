// Shoot__15CControlledBeam @0xa7fc0 size=952
typedef struct st_4a7fc0_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4a7fc0_0;

typedef struct st_4a7fc0_1 {
    unsigned int field_0;
} st_4a7fc0_1;

extern st_4a7fc0_1 *g_engfuncs.pfnIndexOfEdict;
extern st_4a7fc0_0 *gpGlobals;

int Shoot__15CControlledBeam(float idx)
{
    unsigned int *v19;  // edx
    unsigned int *v20;  // edx
    float v21;  // 128
    double v22;  // mm5
    double v23;  // mm5
    double v24;  // mm7
    unsigned int *v25;  // edx
    float v0;  // [bp-0xa4]
    float v1;  // [bp-0xa0]
    float v2;  // [bp-0x9c]
    float v3;  // [bp-0x98]
    float v4;  // [bp-0x94]
    float v5;  // [bp-0x90]
    float v6;  // [bp-0x8c]
    float v7;  // [bp-0x88]
    float v8;  // [bp-0x84]
    float v9;  // [bp-0x80]
    float v10;  // [bp-0x7c]
    float v11;  // [bp-0x78]
    char v12;  // [bp-0x64]
    float v13;  // [bp-0x54]
    char v14;  // [bp-0x24]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    CBasePlayer::DrawChargeBar(*(int *)(*(unsigned int *)&idx + 128), 0);
    EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
    if (*(int *)(*(unsigned int *)&idx + 216) < *(int *)(*(unsigned int *)&idx + 220) / 3)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
        return EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    }
    *(unsigned int *)(*(unsigned int *)&idx + 196) = 2;
    if (!(*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 421) & 2))
        CBasePlayer::StartFly(*(int *)(*(unsigned int *)&idx + 128));
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 828) = 1;
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 372))(idx);
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx);
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 352))(idx);
    UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v14, *(int *)(*(unsigned int *)&idx + 128));
    v19 = &gpGlobals->field_28;
    v0 = 10.0f * gpGlobals->field_28;
    v1 = 10.0f * *(float *)&v19[1];
    v2 = 10.0f * *(float *)&v19[2];
    v8 = v15 + v0;
    v9 = v16 + v1;
    v10 = v17 + v2;
    UTIL_TraceLine(&v14, &v8, 1, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), &v12);
    v20 = &gpGlobals->field_28;
    v9 = 10.0f * gpGlobals->field_28;
    v10 = 10.0f * *(float *)&v20[1];
    v11 = 10.0f * *(float *)&v20[2];
    v21 = v13;
    v6 = v21 * v9;
    v7 = v21 * v10;
    v8 = v21 * v11;
    v22 = 0.8999999761581421 * v6;
    v3 = (float)v22;
    v23 = 0.8999999761581421 * v7;
    v4 = (float)v23;
    v5 = (float)(0.8999999761581421 * v8);
    v0 = (float)(v22 + v15);
    v1 = (float)(v23 + v16);
    v2 = v17 + v5;
    v15 = v0;
    v16 = v1;
    v17 = v2;
    v24 = (double)*(int *)(*(unsigned int *)&idx + 224);
    v25 = &gpGlobals->field_28;
    v0 = (float)(v24 * gpGlobals->field_28);
    v1 = (float)(v24 * *(float *)&v25[1]);
    v2 = (float)(v24 * *(float *)&v25[2]);
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0;
    v3 = v15;
    v4 = v16;
    v5 = v17;
    v6 = v0;
    v7 = v1;
    v8 = v2;
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 348))(idx, &v3, &v6, (float)((double)*(int *)(*(unsigned int *)&idx + 216) / (double)*(int *)(*(unsigned int *)&idx + 220)));
    return UTIL_Model_FixAngles(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520)));
}

