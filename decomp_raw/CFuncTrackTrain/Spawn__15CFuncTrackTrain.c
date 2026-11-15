// Spawn__15CFuncTrackTrain @0xec5b0 size=530
typedef struct st_4ec5b0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4ec5b0_1;

typedef struct st_4ec5b0_0 {
    unsigned int field_0;
} st_4ec5b0_0;

extern char Find__15CFuncTrackTrain;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4ec5b0_0 *g_engfuncs.pfnSetModel;
extern st_4ec5b0_0 *g_engfuncs.pfnAlertMessage;
extern st_4ec5b0_1 *gpGlobals;

short Spawn__15CFuncTrackTrain(float idx)
{
    unsigned int *v5;  // edx
    unsigned int *v6;  // edx
    unsigned int *v7;  // edx
    unsigned int *v8;  // eax
    unsigned int *v9;  // edx
    float v0;  // [bp-0x10]
    int v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0x8]
    unsigned short v3;  // [bp-0x6]

    *(float *)(*(unsigned int *)&idx + 112) = (float)(0.0 == *(float *)(*(int *)idx + 504) ? 100.0 : *(float *)(*(int *)idx + 504));
    *(unsigned int *)(*(int *)idx + 504) = 0;
    v5 = *(int *)idx;
    v5[8] = g_vecZero;
    v5[9] = g_vecZero+4;
    v5[10] = g_vecZero+8;
    v6 = *(int *)idx;
    v6[23] = g_vecZero;
    v6[24] = g_vecZero+4;
    v6[25] = g_vecZero+8;
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v1 = (int)*(float *)(*(unsigned int *)&idx + 112);
    *(int *)(*(int *)idx + 388) = v1;
    *(unsigned int *)(*(unsigned int *)&idx + 116) = 0x3f800000;
    if (!*(int *)(*(int *)idx + 456))
        g_engfuncs.pfnAlertMessage(1, "FuncTrain with no target");
    if (*(char *)(*(int *)idx + 416) & 8)
        *(unsigned int *)(*(int *)idx + 268) = 0;
    else
        *(unsigned int *)(*(int *)idx + 268) = 4;
    *(unsigned int *)(*(int *)idx + 264) = 7;
    g_engfuncs.pfnSetModel(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    v7 = *(int *)idx;
    UTIL_SetSize(v7, v7 + 55, v7 + 58);
    UTIL_SetOrigin(*(int *)idx, *(int *)idx + 8);
    v8 = *(int *)idx;
    v8[5] = v8[2];
    v8[6] = v8[3];
    v8[7] = v8[4];
    v9 = *(int *)idx;
    *(unsigned int *)(*(unsigned int *)&idx + 124) = v9[55];
    *(unsigned int *)(*(unsigned int *)&idx + 128) = v9[56];
    *(unsigned int *)(*(unsigned int *)&idx + 132) = v9[57];
    *(unsigned int *)(*(unsigned int *)&idx + 0x88) = v9[58];
    *(unsigned int *)(*(unsigned int *)&idx + 140) = v9[59];
    *(unsigned int *)(*(unsigned int *)&idx + 144) = v9[60];
    *(float *)(*(unsigned int *)&idx + 144) = (float)(*(float *)(*(unsigned int *)&idx + 144) + 72.0);
    v0 = (float)(0.1 + *(float *)&v9[64]);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(CFuncTrackTrain::NextThink(idx, v0, 0), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &Find__15CFuncTrackTrain;
    return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
}

