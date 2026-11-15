// ShootGuidedMagic__13CGuidedAttackP9entvars_sG6VectorT2iPcfisssssifii @0xc7930 size=1182
typedef struct st_4c7930_1 {
    char padding_0[124];
    struct st_4c7930_2 *field_7c;
} st_4c7930_1;

typedef struct st_4c7930_2 {
    struct st_4c7930_0 *field_0;
} st_4c7930_2;

typedef struct st_4c7930_5 {
    unsigned int field_0;
} st_4c7930_5;

typedef struct st_4c7930_3 {
    unsigned int field_0;
    char padding_4[28];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[168];
    unsigned int field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[136];
    struct st_4c7930_1 *field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    int field_208;
} st_4c7930_3;

typedef struct st_4c7930_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4c7930_0;

typedef struct st_4c7930_7 {
    char padding_0[520];
    struct st_4c7930_1 *field_208;
} st_4c7930_7;

typedef struct st_4c7930_6 {
    struct st_4c7930_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4c7930_4 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[24];
    unsigned int field_2c4;
    unsigned int field_2c8;
    unsigned int field_2cc;
    unsigned int field_2d0;
    unsigned int field_2d4;
    char padding_2d8[4];
    unsigned int field_2dc;
    float field_2e0;
} st_4c7930_6;

typedef struct st_4c7930_4 {
    char padding_0[8];
    struct st_4c7930_5 *field_8;
} st_4c7930_4;

typedef struct st_4c7930_8 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4c7930_8;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char FollowThink__13CGuidedAttack;
extern st_4c7930_5 *g_6167c8;
extern st_4c7930_5 *g_6168d4;
extern st_4c7930_5 *g_6168dc;
extern st_4c7930_8 *gpGlobals;

st_4c7930_6 * ShootGuidedMagic__13CGuidedAttackP9entvars_sG6VectorT2iPcfisssssifii(st_4c7930_7 *a0, float *a1, float *a2, int a3, unsigned int a4, float a5, unsigned int a6, short a7, short a8, short a9, short a10, short a11, unsigned int a12, float a13, unsigned int a14, unsigned int a15)
{
    st_4c7930_6 *v28;  // edi
    double v29;  // mm7
    st_4c7930_3 *v38;  // edx
    float *v39;  // ecx
    double v40;  // mm7
    double v41;  // mm6
    unsigned int v42;  // eax
    float *v44;  // eax
    st_4c7930_1 *v45;  // eax
    st_4c7930_0 **v46;  // eax
    double v30;  // mm6
    double v31;  // mm7
    float *v32;  // edx
    float *v33;  // ecx
    float v34;  // 128
    float *v35;  // edx
    float v36;  // 128
    double v37;  // mm7
    unsigned int v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xf4]
    unsigned int v2;  // [bp-0xf0]
    unsigned int v3;  // [bp-0xec]
    unsigned int v4;  // [bp-0xe8]
    unsigned int v5;  // [bp-0xe4]
    int v6;  // [bp-0xe0]
    unsigned int v7;  // [bp-0xdc]
    char *v8;  // [bp-0xd8]
    st_4c7930_3 *v9;  // [bp-0xb4]
    char *v10;  // [bp-0xb0]
    float v11;  // [bp-0xac]
    int v12;  // [bp-0x9c]
    unsigned short v13;  // [bp-0x98]
    unsigned short v14;  // [bp-0x96]
    char v15;  // [bp-0x94]
    float v16;  // [bp-0x84]
    float v17;  // [bp-0x54]
    float v18;  // [bp-0x50]
    float v19;  // [bp-0x4c]
    float v20;  // [bp-0x48]
    int v21;  // [bp-0x24]
    float v22;  // [bp-0x24]
    float v23;  // [bp-0x20]
    float v24;  // [bp-0x1c]
    float v25;  // [bp-0x18]
    float v26;  // [bp-0x14]
    float v27;  // [bp-0x10]

    v28 = sub_48da40(0);
    v28->field_60->field_8(v28);
    v28->field_0->field_108 = 5;
    v28->field_0->field_10c = 1;
    g_6167c8(v28->field_0->field_208, "sprites/null.spr");
    if (a3 > 9999)
        a3 = 9999;
    v21 = a3;
    v28->field_0->field_1e0 = (float)v21;
    v11 = (float)(50.0 * a5 * 0.25);
    v29 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v30 = sqrt(v29);
    if (isnan(v30))
        sub_487dc0(*(unsigned int *)&v29);
    else
        v29 = v30;
    v20 = (float)v29;
    if (v20 == 0.0f)
    {
        v25 = 0.0f;
        v26 = 0.0f;
        v27 = 1.0;
    }
    else
    {
        v31 = 1.0 / v20;
        v32 = a2;
        v25 = (float)(v31 * *v32);
        v26 = (float)(v31 * v32[1]);
        v27 = (float)(v31 * v32[2]);
    }
    v22 = v11 * v25;
    v23 = v11 * v26;
    v24 = v11 * v27;
    v33 = a1;
    v25 = *v33 + v22;
    v26 = v33[1] + v23;
    v27 = v33[2] + v24;
    v10 = &v25;
    sub_487b80(a1, v10, 1, a0->field_208, &v15);
    v34 = v16;
    v17 = v34 * v22;
    v18 = v34 * v23;
    v19 = v34 * v24;
    v35 = a1;
    v25 = v17 + *v35;
    v26 = v18 + v35[1];
    v27 = v35[2] + v19;
    *v35 = v25;
    v35[1] = v26;
    v35[2] = v27;
    sub_48db50(v28->field_0, v35);
    v36 = v11;
    v25 = v36;
    v26 = v36;
    v27 = v36;
    v37 = -v36;
    v17 = (float)v37;
    v18 = (float)v37;
    v19 = (float)v37;
    sub_48a0d0(v28->field_0, &v17, v10);
    v38 = v28->field_0;
    v39 = a2;
    *(float *)&v38->field_20 = *v39;
    *(float *)&v38->field_24 = v39[1];
    *(float *)&v38->field_28 = v39[2];
    v40 = *v39 * *v39 + v39[1] * v39[1] + v39[2] * v39[2];
    v41 = sqrt(v40);
    if (isnan(v41))
        sub_487dc0(*(unsigned int *)&v40);
    else
        v40 = v41;
    v28->field_2a8 = (float)v40;
    v9 = v28->field_0;
    sub_488860(&v25, a2);
    *(float *)&v9->field_50 = v25;
    *(float *)&v9->field_54 = v26;
    *(float *)&v9->field_58 = v27;
    v28->field_0->field_198 = a0->field_208;
    v42 = a4 - gpGlobals->field_98;
    v28->field_0->field_0 = v42;
    v28->field_2c4 = 0;
    v28->field_2c8 = 0;
    v28->field_2dc = 0;
    v28->field_2cc = 0;
    v28->field_14 = _INSERT(v42, 0, 0) | 0xffff0000;
    v28->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    v44 = a1;
    v25 = *v44;
    v26 = v44[1];
    v27 = v44[2];
    v8 = &v25;
    v7 = a15;
    v14 = __fnstcw();
    v13 = v14 | 0xc00;
    v12 = (int)(50.0 * a5);
    v6 = v12;
    v5 = a7;
    v4 = a11;
    v3 = a10;
    v2 = a9;
    v1 = a8;
    v0 = a14;
    v45 = a0->field_208;
    if (a0->field_208 || (v45 = g_6168d4(0), v45))
        v46 = v45->field_7c;
    else
        v46 = NULL;
    v28->field_c = _INSERT(sub_4891b0(v28, g_6168dc(*v46->field_208)), 0, 0) | 0xffff0000;
    v28->field_10 = &FollowThink__13CGuidedAttack;
    v28->field_2d0 = a12;
    v28->field_2d4 = a6;
    v28->field_2e0 = a13;
    sub_489390(v28->field_0->field_208, 1, "weapons/beamhead.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    *(float *)&v28->field_0->field_104 = gpGlobals->field_0;
    return v28;
}

