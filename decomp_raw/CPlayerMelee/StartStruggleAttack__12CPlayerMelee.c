// StartStruggleAttack__12CPlayerMelee @0x10abb0 size=774
typedef struct st_50abb0_1 {
    char padding_0[108];
    unsigned int field_6c;
    unsigned int field_70;
    char padding_74[4];
    unsigned int field_78;
    unsigned int field_7c;
} st_50abb0_1;

typedef struct st_50abb0_5 {
    char padding_0[272];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
} st_50abb0_5;

typedef struct st_50abb0_7 {
    char padding_0[272];
    float field_110;
    float field_114;
    float field_118;
    char padding_11c[8];
    struct st_50abb0_8 *field_124;
} st_50abb0_7;

typedef struct st_50abb0_4 {
    char padding_0[276];
    unsigned int field_114;
    unsigned int field_118;
    char padding_11c[20];
    struct st_50abb0_5 *field_130;
} st_50abb0_4;

typedef struct st_50abb0_0 {
    char padding_0[108];
    unsigned int field_6c;
    char padding_70[4];
    char field_74;
    char padding_75[79];
    unsigned int field_c4;
    char padding_c8[104];
    struct st_50abb0_1 *field_130;
} st_50abb0_0;

typedef struct st_50abb0_8 {
    struct st_50abb0_6 *field_0;
} st_50abb0_8;

typedef struct st_50abb0_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    int field_208;
} st_50abb0_6;

typedef struct st_50abb0_3 {
    float field_0;
    char padding_4[36];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
} st_50abb0_3;

typedef struct st_50abb0_2 {
    unsigned int field_0;
} st_50abb0_2;

extern float g_5bd298;
extern st_50abb0_2 *g_6168dc;
extern st_50abb0_3 *gpGlobals;

unsigned int * StartStruggleAttack__12CPlayerMelee(float idx)
{
    unsigned int v18;  // esi
    double v27;  // mm5
    unsigned int *v28;  // edx
    st_50abb0_0 *v30;  // esi
    unsigned int *v31;  // eax
    st_50abb0_4 *v19;  // edx
    unsigned int *v20;  // edx
    unsigned int *v21;  // esi
    float *v22;  // eax
    st_50abb0_7 *v24;  // esi
    st_50abb0_6 **v25;  // ecx
    double v26;  // mm5
    int v0;  // [bp-0xc8]
    char *v1;  // [bp-0xbc]
    int v2;  // [bp-0xb8], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0xa8]
    float v4;  // [bp-0x84]
    float v5;  // [bp-0x80]
    float v6;  // [bp-0x7c]
    float v7;  // [bp-0x64]
    float v8;  // [bp-0x60]
    float v9;  // [bp-0x5c]
    float v10;  // [bp-0x44]
    float v11;  // [bp-0x40]
    float v12;  // [bp-0x3c]
    float v13;  // [bp-0x34]
    char v14;  // [bp-0x30]
    char v15;  // [bp-0x24]

    v3 = g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520));
    v2 = *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520);
    sub_48ccd0(g_6168dc(v2));
    *(unsigned short *)&v0 = 1;
    sub_48b670(idx, v0, gpGlobals->field_0, 1, "ref_grapple");
    *(unsigned short *)&v2 = 1;
    sub_48b670(*(int *)(*(unsigned int *)&idx + 304), v2, gpGlobals->field_0, 1, "ref_grapple");
    sub_48a800(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 116);
    v18 = gpGlobals->field_28;
    *(unsigned int *)(*(unsigned int *)&idx + 272) = v18;
    v19 = (st_50abb0_4 *)idx;
    v19->field_114 = gpGlobals->field_2c;
    v19->field_118 = gpGlobals->field_30;
    v20 = v19->field_130;
    v20[0x44] = v18;
    v21 = (unsigned int *)idx;
    v20[69] = v21[69];
    v20[70] = v21[70];
    *(float *)&v21[28] = gpGlobals->field_0 + g_5bd298;
    v22 = (float *)idx;
    v10 = -v22[0x44];
    v11 = -v22[69];
    v12 = -v22[70];
    sub_488860(&v15, &v10);
    v1 = &v15;
    sub_487b20(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    v24 = (st_50abb0_7 *)idx;
    v25 = v24->field_124;
    v26 = 11.0 * v24->field_110;
    v4 = (float)v26;
    v27 = 11.0 * v24->field_114;
    v5 = (float)v27;
    v6 = (float)(11.0 * v24->field_118);
    v28 = &*v25->field_8;
    v7 = (float)(*v25->field_8 - v26);
    v8 = (float)(*(float *)&v28[1] - v27);
    v9 = *(float *)&v28[2] - v6;
    sub_488460(&*v25->field_8, &v7, 0, 1, *v25->field_208, &v10);
    if (v13 == 1.0f)
        sub_48db50(*(int *)v24->field_124, &v14);
    sub_489390(sub_48be70(idx), 4, "weapons/meleestruggleinit.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    v30 = (st_50abb0_0 *)idx;
    sub_488530(v30, 15, 0);
    sub_488530(v30->field_130, 15, 0);
    v30->field_c4 = 0;
    v30->field_6c = 0;
    memset(&v30->field_74, 0, 12);
    v30->field_130->field_6c = 0;
    v30->field_130->field_70 = 0;
    v30->field_130->field_78 = 0;
    v31 = v30->field_130;
    v31[31] = 0;
    return v31;
}

