// StartKnockPreStruggle__12CPlayerMelee @0x10b880 size=768
typedef struct st_50b880_10 {
    char padding_0[272];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
} st_50b880_10;

typedef struct st_50b880_3 {
    char padding_0[292];
    struct st_50b880_2 *field_124;
} st_50b880_3;

typedef struct st_50b880_11 {
    char padding_0[168];
    float field_a8;
    char padding_ac[120];
    struct st_50b880_1 *field_124;
} st_50b880_11;

typedef struct st_50b880_5 {
    char padding_0[292];
    struct st_50b880_6 *field_124;
    struct st_50b880_6 *field_128;
} st_50b880_5;

typedef struct st_50b880_9 {
    char padding_0[256];
    unsigned int field_100;
    char padding_104[12];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    char padding_11c[8];
    struct st_50b880_1 *field_124;
    struct st_50b880_6 *field_128;
    char padding_12c[4];
    struct st_50b880_10 *field_130;
} st_50b880_9;

typedef struct st_50b880_12 {
    char padding_0[304];
    int field_130;
} st_50b880_12;

typedef struct st_50b880_6 {
    struct st_50b880_4 *field_0;
} st_50b880_6;

typedef struct st_50b880_1 {
    unsigned int field_0;
} st_50b880_1;

typedef struct st_50b880_4 {
    char padding_0[520];
    unsigned int field_208;
} st_50b880_4;

typedef struct st_50b880_0 {
    char padding_0[52];
    struct st_50b880_1 *field_34;
} st_50b880_0;

typedef struct st_50b880_2 {
    char padding_0[96];
    struct st_50b880_0 *field_60;
} st_50b880_2;

typedef struct st_50b880_7 {
    float field_0;
    char padding_4[36];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
} st_50b880_7;

extern unsigned int g_400000;
extern st_50b880_1 *g_6168dc;
extern st_50b880_7 *gpGlobals;

unsigned int StartKnockPreStruggle__12CPlayerMelee(double a0, float a1)
{
    st_50b880_3 *v19;  // edx
    double v20;  // mm7
    double v29;  // mm6
    double v30;  // mm6
    unsigned int *v31;  // edx
    st_50b880_12 *v33;  // esi
    unsigned int v21;  // eax
    st_50b880_5 *v22;  // esi
    st_50b880_11 *v24;  // eax
    unsigned int v25;  // ecx
    st_50b880_9 *v26;  // esi
    unsigned int *v27;  // edx
    double v28;  // mm6
    char *v0;  // [bp-0xcc]
    int v1;  // [bp-0xc8], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0xbc]
    int v3;  // [bp-0xb8], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0xa8]
    unsigned int v5;  // [bp-0xa4]
    float v6;  // [bp-0x7c]
    float v7;  // [bp-0x78]
    float v8;  // [bp-0x74]
    float v9;  // [bp-0x5c]
    float v10;  // [bp-0x58]
    float v11;  // [bp-0x54]
    float v12;  // [bp-0x3c]
    float v13;  // [bp-0x38]
    float v14;  // [bp-0x34]
    int v15;  // [bp-0xc]
    unsigned short v16;  // [bp-0x8]
    unsigned short v17;  // [bp-0x6]

    sub_48dc30(a1);
    v19 = (st_50b880_3 *)a1;
    v2 = &g_400000;
    sub_48c080(v19, v19->field_124);
    v17 = __fnstcw();
    v16 = v17 | 0xc00;
    v15 = (int)(v20 * 7.0);
    v1 = *(int *)*(int *)(*(unsigned int *)&a1 + 296);
    v19->field_124->field_60->field_34(*(int *)(*(unsigned int *)&a1 + 292), v1, *(int *)*(int *)(*(unsigned int *)&a1 + 296), (float)v15);
    v21 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a1 + 292) + 96) + 140))(*(int *)(*(unsigned int *)&a1 + 292));
    if (!v21)
        return v21;
    v5 = 11;
    v22 = (st_50b880_5 *)a1;
    v4 = g_6168dc(*(int *)(*(int *)v22->field_128 + 520));
    v3 = *(int *)(*(int *)v22->field_124 + 520);
    sub_48dc20(g_6168dc(v3));
    *(unsigned short *)&v1 = 1;
    sub_48b670(*(int *)(*(unsigned int *)&a1 + 304), v1, gpGlobals->field_0, 1, "blow_kick_front");
    *(unsigned short *)&v3 = 1;
    sub_48b670(a1, v3, gpGlobals->field_0, 1, "hit_blow_back");
    v24 = (st_50b880_11 *)a1;
    v24->field_a8 = (float)(0.75 + gpGlobals->field_0);
    sub_48a800(*(int *)v24->field_124 + 116);
    v25 = gpGlobals->field_28;
    v26 = (st_50b880_9 *)a1;
    v26->field_110 = v25;
    v26->field_114 = gpGlobals->field_2c;
    v26->field_118 = gpGlobals->field_30;
    v27 = v26->field_130;
    v27[0x44] = v25;
    v27[69] = v26->field_114;
    v27[70] = v26->field_118;
    v26->field_100 = 1;
    v28 = -*(float *)&v26->field_110;
    v12 = (float)v28;
    v13 = -*(float *)&v26->field_114;
    v14 = -*(float *)&v26->field_118;
    v29 = v28 * 9.0;
    v6 = (float)v29;
    v30 = 9.0 * v13;
    v7 = (float)v30;
    v8 = (float)(9.0 * v14);
    v31 = *(int *)v26->field_128 + 8;
    v9 = (float)(v29 + *(float *)(*(int *)v26->field_128 + 8));
    v10 = (float)(v30 + *(float *)&v31[1]);
    v11 = *(float *)&v31[2] + v8;
    sub_48db50(*(int *)v26->field_124, &v9);
    sub_488860(&v6, &v12);
    v0 = &v6;
    sub_487b20(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&a1 + 292) + 520)));
    sub_488530(a1, 15, 0);
    v33 = (st_50b880_12 *)a1;
    sub_488530(v33, 16, 0);
    sub_488530(v33->field_130, 15, 0);
    return sub_488530(v33->field_130, 16, 0);
}

