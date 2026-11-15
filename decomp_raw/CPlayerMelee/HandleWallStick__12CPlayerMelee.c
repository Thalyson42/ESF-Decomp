// HandleWallStick__12CPlayerMelee @0x102af0 size=771
typedef struct st_502af0_3 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[204];
    struct st_502af0_4 *field_d8;
} st_502af0_3;

typedef struct st_502af0_2 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[220];
    unsigned int field_108;
} st_502af0_2;

typedef struct st_502af0_4 {
    struct st_502af0_2 *field_0;
} st_502af0_4;

typedef struct st_502af0_0 {
    float field_0;
    char padding_4[48];
    float field_34;
    float field_38;
    float field_3c;
} st_502af0_0;

typedef struct st_502af0_1 {
    unsigned int field_0;
} st_502af0_1;

extern float g_5bd2e8;
extern float g_5bd2fc;
extern st_502af0_1 *g_6168dc;
extern st_502af0_0 *gpGlobals;

unsigned int HandleWallStick__12CPlayerMelee(float idx)
{
    unsigned int *v24;  // edx
    st_502af0_3 *v25;  // eax
    int v34;  // eax
    unsigned int *v26;  // ecx
    unsigned int *v27;  // edx
    double v28;  // mm5
    double v29;  // mm5
    unsigned int v31;  // eax
    unsigned int *v32;  // edx
    st_502af0_3 *v33;  // eax
    int v0;  // [bp-0xb8]
    st_502af0_0 **v1;  // [bp-0x88]
    float v2;  // [bp-0x84]
    unsigned int v3;  // [bp-0x84]
    float v4;  // [bp-0x80]
    unsigned int v5;  // [bp-0x80]
    float v6;  // [bp-0x7c]
    unsigned int v7;  // [bp-0x7c]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    unsigned int v14;  // [bp-0x24]
    unsigned int v15;  // [bp-0x20]
    unsigned int v16;  // [bp-0x1c]
    float v17;  // [bp-0x18]
    unsigned int v18;  // [bp-0x18]
    float v19;  // [bp-0x14]
    unsigned int v20;  // [bp-0x14]
    float v21;  // [bp-0x10]
    unsigned int v22;  // [bp-0x10]

    v24 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v24[8] = v14;
    v24[9] = v15;
    v24[10] = v16;
    *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 264) = 0;
    v1 = &gpGlobals;
    if (gpGlobals->field_0 - g_5bd2e8 < *(float *)(*(unsigned int *)&idx + 32))
        return v31;
    if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 384) & 2 && sub_48c980(*(int *)(*(unsigned int *)&idx + 292), 100))
    {
        v25 = *(unsigned int *)&idx + 76;
        *(float *)&v14 = *(float *)(*(unsigned int *)&idx + 76);
        *(float *)&v15 = *(float *)&v25->field_4;
        *(float *)&v16 = *(float *)&v25->field_8;
        sub_48d400(idx);
        sub_48a800(&v14);
        v26 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
        v8 = (float)(0.6499999761581421 * *(float *)&v14);
        v9 = (float)(0.6499999761581421 * *(float *)&v15);
        v10 = (float)(0.6499999761581421 * *(float *)&v16);
        v27 = &*v1->field_34;
        v28 = 0.3499999940395355 * *v1->field_34;
        v2 = (float)v28;
        v29 = 0.3499999940395355 * *(float *)&v27[1];
        v4 = (float)v29;
        v6 = (float)(0.3499999940395355 * *(float *)&v27[2]);
        v11 = (float)(v28 + v8);
        v12 = (float)(v29 + v9);
        v13 = v10 + v6;
        v17 = (float)(1200.0 * v11);
        v19 = (float)(1200.0 * v12);
        v21 = (float)(1200.0 * v13);
        *(float *)&v26[8] = v17;
        *(float *)&v26[9] = v19;
        *(float *)&v26[10] = v21;
        v18 = v14;
        v20 = v15;
        v22 = v16;
        *(unsigned short *)&v0 = 0;
        sub_48be10(idx, 3, sub_488dc0(idx, &v18, v0, *v1->field_0, "wall_recover"));
        v31 = sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520), 4, "weapons/jump.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        return v31;
    }
    if (*(float *)(*(unsigned int *)&idx + 32) + g_5bd2fc >= gpGlobals->field_0)
        return v31;
    sub_48c960(idx);
    *(float *)(*(unsigned int *)&idx + 20) = gpGlobals->field_0 - *(float *)(*(unsigned int *)&idx + 32) + *(float *)(*(unsigned int *)&idx + 20);
    v32 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
    v33 = *(unsigned int *)&idx + 76;
    v2 = (float)(100.0 * *(float *)(*(unsigned int *)&idx + 76));
    v4 = (float)(100.0 * *(float *)&v33->field_4);
    v6 = (float)(100.0 * *(float *)&v33->field_8);
    *(float *)&v32[8] = v2;
    *(float *)&v32[9] = v4;
    *(float *)&v32[10] = v6;
    v3 = 0;
    v5 = 0;
    v7 = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 76) = v3;
    *(unsigned int *)(*(unsigned int *)&idx + 80) = v5;
    *(unsigned int *)(*(unsigned int *)&idx + 84) = v7;
    *(unsigned int *)(*(unsigned int *)&idx + 32) = 0;
    v34 = g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520));
    sub_48b090(v34);
    sub_4887c0(idx);
    *(float *)(*(unsigned int *)&idx + 36) = gpGlobals->field_0;
    return v31;
}

