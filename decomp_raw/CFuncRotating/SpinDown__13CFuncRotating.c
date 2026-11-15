// SpinDown__13CFuncRotating @0x925f0 size=491
typedef struct st_4925f0_2 {
    char padding_0[24];
    unsigned int field_18;
} st_4925f0_2;

typedef struct st_4925f0_1 {
    char padding_0[68];
    char field_44;
    char padding_45[23];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
} st_4925f0_1;

typedef struct st_4925f0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4925f0_0;

extern char Rotate__13CFuncRotating;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4925f0_0 *gpGlobals;

short SpinDown__13CFuncRotating(float idx)
{
    st_4925f0_1 *v13;  // edx
    float v14;  // 128
    st_4925f0_2 *v15;  // eax
    unsigned int *v16;  // eax
    st_4925f0_1 *v17;  // edx
    double v18;  // mm7
    unsigned int v19;  // fc3210
    unsigned int v20;  // fc3210
    st_4925f0_1 *v21;  // ecx
    int v0;  // [bp-0x7c]
    unsigned short v1;  // [bp-0x78]
    unsigned short v2;  // [bp-0x76]
    float v3;  // [bp-0x74]
    float v4;  // [bp-0x70]
    float v5;  // [bp-0x6c]
    float v6;  // [bp-0x54]
    float v7;  // [bp-0x50]
    float v8;  // [bp-0x4c]
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]

    *(float *)(*(int *)idx + 260) = (float)(0.1 + *(float *)(*(int *)idx + 0x100));
    v13 = *(int *)idx;
    v14 = *(float *)&v13[4].padding_45[19] * *(float *)(*(unsigned int *)&idx + 100);
    v15 = &v13->field_44;
    v3 = v14 * *(float *)&v13->field_44;
    v4 = v14 * *(float *)&v15->padding_0[4];
    v5 = v14 * *(float *)&v15->padding_0[8];
    v16 = &v13->field_5c;
    v6 = *(float *)&v13->field_5c - v3;
    v7 = *(float *)&v16[1] - v4;
    v8 = *(float *)&v16[2] - v5;
    *(float *)&v13->field_5c = v6;
    *(float *)&v13->field_60 = v7;
    *(float *)&v13->field_64 = v8;
    v17 = *(int *)idx;
    v9 = v17->field_5c;
    v10 = v17->field_60;
    v11 = v17->field_64;
    v18 = *(float *)&v17->field_44;
    if (v18 == 0.0)
    {
        v18 = *(float *)(*(int *)idx + 72);
        if (v18 == 0.0)
            v18 = *(float *)(*(int *)idx + 76);
    }
    if (0.0 < v18 && 0.0 >= *(float *)&v9 && 0.0 >= *(float *)&v10 && 0.0 >= *(float *)&v11)
    {
LABEL_492739:
        v21 = *(int *)idx;
        v21->field_5c = g_vecZero;
        v21->field_60 = g_vecZero+4;
        v21->field_64 = g_vecZero+8;
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)*(float *)(*(unsigned int *)&idx + 112);
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(EMIT_SOUND_DYN(*(int *)(*(int *)idx + 520), 6, *(int *)(*(int *)idx + 500) + gpGlobals->field_98, 0, 0, 32, v0), 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &Rotate__13CFuncRotating;
        return CFuncRotating::Rotate(idx);
    }
    if (0.0 > v18 && !(v19 = (isnan(*(float *)&v9) ? 0x4500 : 0.0 == *(float *)&v9 ? 0x4000 : 0.0 < *(float *)&v9 ? 0x100 : 0), (isnan(*(float *)&v9) ? 0x44 : 0.0 == *(float *)&v9 ? 63 : 0.0 < *(float *)&v9 ? 0 : 0xff) >= 64 || (v20 = (isnan(*(float *)&v10) ? 0x4500 : 0.0 == *(float *)&v10 ? 0x4000 : 0.0 < *(float *)&v10 ? 0x100 : 0), (isnan(*(float *)&v10) ? 0x44 : 0.0 == *(float *)&v10 ? 63 : 0.0 < *(float *)&v10 ? 0 : 0xff) >= 64)) && 0.0 <= *(float *)&v11)
        goto LABEL_492739;
    return CFuncRotating::RampPitchVol(idx, 0);
}

