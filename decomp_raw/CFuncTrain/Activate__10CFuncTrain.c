// Activate__10CFuncTrain @0xea2e0 size=334
typedef struct st_4ea2e0_7 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[12];
    unsigned int field_18;
    unsigned int field_1c;
    char padding_20[152];
    char field_b8;
    char padding_b9[39];
    unsigned int field_e0;
    unsigned int field_e4;
} st_4ea2e0_7;

typedef struct st_4ea2e0_2 {
    struct st_4ea2e0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[248];
    struct st_4ea2e0_1 *field_10c;
    char padding_110[4];
    unsigned int field_114;
} st_4ea2e0_2;

typedef struct st_4ea2e0_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[108];
    char field_80;
    char padding_81[327];
    unsigned int field_1c8;
} st_4ea2e0_3;

typedef struct st_4ea2e0_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[108];
    char field_80;
    char padding_81[327];
    unsigned int field_1c8;
} st_4ea2e0_1;

typedef struct st_4ea2e0_0 {
    char padding_0[220];
    unsigned int field_dc;
    unsigned int field_e0;
    unsigned int field_e4;
    unsigned int field_e8;
    unsigned int field_ec;
    unsigned int field_f0;
    char padding_f4[12];
    unsigned int field_100;
    float field_104;
    char padding_108[152];
    char field_1a0;
    char padding_1a1[39];
    unsigned int field_1c8;
    unsigned int field_1cc;
} st_4ea2e0_0;

typedef struct st_4ea2e0_4 {
    char padding_0[220];
    unsigned int field_dc;
    unsigned int field_e0;
    unsigned int field_e4;
    unsigned int field_e8;
    unsigned int field_ec;
    unsigned int field_f0;
    char padding_f4[12];
    unsigned int field_100;
    unsigned int field_104;
    char padding_108[152];
    char field_1a0;
    char padding_1a1[39];
    unsigned int field_1c8;
    unsigned int field_1cc;
} st_4ea2e0_4;

typedef struct st_4ea2e0_5 {
    char padding_0[152];
    unsigned int field_98;
} st_4ea2e0_5;

typedef struct st_4ea2e0_6 {
    unsigned int field_0;
} st_4ea2e0_6;

extern char Next__10CFuncTrain;
extern st_4ea2e0_6 *g_6167f8;
extern st_4ea2e0_5 *gpGlobals;

st_4ea2e0_4 * Activate__10CFuncTrain(st_4ea2e0_2 *a0)
{
    st_4ea2e0_3 *v9;  // eax
    st_4ea2e0_3 *v10;  // esi
    st_4ea2e0_0 *v19;  // eax
    st_4ea2e0_4 *v20;  // eax
    st_4ea2e0_0 *v11;  // ecx
    unsigned int *v12;  // edx
    st_4ea2e0_7 *v13;  // eax
    double v14;  // mm5
    double v15;  // mm5
    unsigned int *v16;  // eax
    st_4ea2e0_0 *v17;  // eax
    unsigned int v18;  // eax
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    if (a0->field_114)
        return v20;
    a0->field_114 = 1;
    v9 = g_6167f8(0, "targetname", a0->field_0->field_1c8 + gpGlobals->field_98);
    v10 = (!v9 ? NULL : (struct st_4ea2e0_3 *)&v9->field_80);
    a0->field_0->field_1c8 = v10->field_1c8;
    a0->field_10c = v10;
    v11 = a0->field_0;
    v12 = &v11->field_dc;
    v13 = &v11->field_e8;
    v0 = *(float *)&v11->field_dc + *(float *)&v11->field_e8;
    v1 = *(float *)&v12[1] + *(float *)&v13->field_4;
    v2 = *(float *)&v12[2] + *(float *)&v13->field_8;
    v14 = 0.5 * v0;
    v3 = (float)v14;
    v15 = 0.5 * v1;
    v4 = (float)v15;
    v5 = (float)(0.5 * v2);
    v16 = &v10->field_8;
    v6 = (float)(v10->field_8 - v14);
    v7 = (float)(*(float *)&v16[1] - v15);
    v8 = *(float *)&v16[2] - v5;
    sub_48db50(v11, &v6);
    v17 = a0->field_0;
    if (v17->field_1cc)
    {
        v19 = a0->field_0;
        v19->field_1a0 = v19->field_1a0 | 1;
        return v19;
    }
    v17->field_104 = (float)(0.1 + *(float *)&v17->field_100);
    v18 = _INSERT(v17, 0, 0);
    a0->field_c = v18 | 0xffff0000;
    a0->field_10 = &Next__10CFuncTrain;
    return v18 | 0xffff0000;
}

