// SpawnStickyGibs__4CGibP9entvars_sG6Vectori @0xa3570 size=878
typedef struct st_4a3570_5 {
    char padding_0[124];
    struct st_4a3570_4 *field_7c;
} st_4a3570_5;

typedef struct st_4a3570_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[48];
    float field_5c;
    float field_60;
    char padding_64[164];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[4];
    unsigned int field_114;
} st_4a3570_0;

typedef struct st_4a3570_2 {
    unsigned int field_0;
} st_4a3570_2;

typedef struct st_4a3570_6 {
    char padding_0[520];
    struct st_4a3570_5 *field_208;
} st_4a3570_6;

typedef struct st_4a3570_3 {
    char padding_0[64];
    struct st_4a3570_2 *field_40;
} st_4a3570_3;

typedef struct st_4a3570_1 {
    struct st_4a3570_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[652];
    unsigned int field_2a8;
} st_4a3570_1;

typedef struct st_4a3570_4 {
    char padding_0[96];
    struct st_4a3570_3 *field_60;
} st_4a3570_4;

extern char StickyGibTouch__4CGibP11CBaseEntity;
extern float g_vecAttackDir;
extern float g_616784;
extern float g_616788;
extern unsigned int g_Language;
extern st_4a3570_2 *g_6168d4;
extern st_4a3570_2 *g_616928;
extern st_4a3570_2 *g_61692c;

unsigned int * SpawnStickyGibs__4CGibP9entvars_sG6Vectori(st_4a3570_6 *a0, float *a1, unsigned int *a2)
{
    double v10;  // mm7
    st_4a3570_0 *v19;  // edx
    unsigned int *v20;  // eax
    double v21;  // mm7
    st_4a3570_5 *v22;  // eax
    st_4a3570_4 *v23;  // edx
    st_4a3570_0 *v24;  // edx
    unsigned int *v25;  // eax
    double v26;  // mm7
    unsigned int *v27;  // eax
    double v28;  // mm6
    st_4a3570_1 *v11;  // esi
    unsigned int *v30;  // eax
    unsigned int v12;  // eax
    double v13;  // mm7
    double v14;  // mm7
    st_4a3570_0 *v15;  // edx
    double v16;  // mm7
    double v17;  // mm7
    double v18;  // mm7
    unsigned int *v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    float v2;  // [bp-0x24]
    unsigned int v3;  // [bp-0x20]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]
    unsigned int v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0x18]
    unsigned int v8;  // [bp-0x14]
    unsigned int v9;  // [bp-0x10]

    if (g_Language == 1)
        return &g_Language;
    v0 = NULL;
    if (v0 >= a2)
        return a2;
    do
    {
        v11 = sub_48a010(0);
        sub_48d700(v11, "models/stickygib.mdl");
        v12 = g_616928(0, 2);
        v11->field_0->field_114 = v12;
        if (!a0)
            continue;
        g_61692c(0xc0400000, 0x40400000);
        v13 = v10 + *a1;
        v11->field_0->field_8 = (float)v13;
        g_61692c(0xc0400000, 0x40400000);
        v14 = v13 + a1[1];
        v11->field_0->field_c = (float)v14;
        g_61692c(0xc0400000, 0x40400000);
        v11->field_0->field_10 = (float)(v14 + a1[2]);
        v15 = v11->field_0;
        v2 = (float)(-1.0 * g_vecAttackDir);
        v16 = -1.0 * g_616788;
        v4 = (float)(-1.0 * g_616784);
        v5 = (float)v16;
        v15->field_20 = v2;
        v15->field_24 = v4;
        v15->field_28 = v5;
        g_61692c(3189348762, 1041865114);
        v17 = v16 + v11->field_0->field_20;
        v11->field_0->field_20 = (float)v17;
        g_61692c(3189348762, 1041865114);
        v18 = v17 + v11->field_0->field_24;
        v11->field_0->field_24 = (float)v18;
        g_61692c(3189348762, 1041865114);
        v11->field_0->field_28 = (float)(v18 + v11->field_0->field_28);
        v19 = v11->field_0;
        v20 = &v19->field_20;
        v2 = (float)(900.0 * v19->field_20);
        v21 = 900.0 * *(float *)&v20[2];
        v4 = (float)(900.0 * *(float *)&v20[1]);
        v5 = (float)v21;
        v19->field_20 = v2;
        v19->field_24 = v4;
        v19->field_28 = v5;
        g_61692c(0x437a0000, 0x43c80000);
        v11->field_0->field_5c = (float)v21;
        g_61692c(0x437a0000, 0x43c80000);
        v11->field_0->field_60 = (float)v21;
        v22 = a0->field_208;
        if (a0->field_208 || (v22 = g_6168d4(0), v22))
            v23 = v22->field_7c;
        else
            v23 = NULL;
        v11->field_2a8 = v23->field_60->field_40(v23);
        if (-50.0f < *(float *)&a0->padding_0[352])
        {
            v24 = v11->field_0;
            v25 = &v24->field_20;
            v26 = 0.699999988079071;
        }
        else if (-200.0f < *(float *)&a0->padding_0[352])
        {
            v24 = v11->field_0;
            v27 = &v24->field_20;
            v28 = *(float *)&v27[1] + *(float *)&v27[1];
            v10 = *(float *)&v27[2] + *(float *)&v27[2];
            v2 = v24->field_20 + v24->field_20;
            goto LABEL_4a3827;
        }
        else
        {
            v24 = v11->field_0;
            v25 = &v24->field_20;
            v26 = 4.0;
        }
        v2 = (float)(v26 * v24->field_20);
        v28 = v26 * *(float *)&v25[1];
        v10 = v26 * *(float *)&v25[2];
LABEL_4a3827:
        v4 = (float)v28;
        v5 = (float)v10;
        v24->field_20 = v2;
        v24->field_24 = v4;
        v24->field_28 = v5;
        v11->field_0->field_108 = 6;
        v11->field_0->field_10c = 2;
        v1 = 0;
        v3 = 0;
        v6 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        v11->field_14 = _INSERT(sub_48a0d0(v11->field_0, &v7, &v1), 0, 0) | 0xffff0000;
        v11->field_18 = &StickyGibTouch__4CGibP11CBaseEntity;
        v11->field_c = 0;
        v11->field_10 = 0;
    } while ((v30 = sub_487e00(v11), v0 = (char *)v0 + 1, v0 < a2));
    return sub_487e00(v11);
}

