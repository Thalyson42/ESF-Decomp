// ShootBurningBeam__12CBurningBeamP9entvars_sG6VectorT2iPcfisssssifi @0x94760 size=1160
typedef struct st_494760_1 {
    char padding_0[124];
    struct st_494760_2 *field_7c;
} st_494760_1;

typedef struct st_494760_2 {
    struct st_494760_0 *field_0;
} st_494760_2;

typedef struct st_494760_5 {
    unsigned int field_0;
} st_494760_5;

typedef struct st_494760_3 {
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
    struct st_494760_1 *field_198;
    char padding_19c[68];
    float field_1e0;
    char padding_1e4[36];
    int field_208;
} st_494760_3;

typedef struct st_494760_0 {
    char padding_0[520];
    unsigned int field_208;
} st_494760_0;

typedef struct st_494760_7 {
    char padding_0[520];
    struct st_494760_1 *field_208;
} st_494760_7;

typedef struct st_494760_6 {
    struct st_494760_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_494760_4 *field_60;
    char padding_64[580];
    float field_2a8;
    char padding_2ac[28];
    unsigned int field_2c8;
    char padding_2cc[4];
    unsigned int field_2d0;
    unsigned int field_2d4;
    char padding_2d8[8];
    float field_2e0;
} st_494760_6;

typedef struct st_494760_4 {
    char padding_0[8];
    struct st_494760_5 *field_8;
} st_494760_4;

typedef struct st_494760_8 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_494760_8;

extern char ExplodeTouch__16CExplodingAttackP11CBaseEntity;
extern char FollowThink__13CGuidedAttack;
extern st_494760_5 *g_6167c8;
extern st_494760_5 *g_6168d4;
extern st_494760_5 *g_6168dc;
extern st_494760_8 *gpGlobals;

st_494760_6 * ShootBurningBeam__12CBurningBeamP9entvars_sG6VectorT2iPcfisssssifi(st_494760_7 *a0, float *a1, float *a2, unsigned int a3, unsigned int a4, float a5, unsigned int a6, short a7, short a8, short a9, short a10, short a11, unsigned int a12, float a13, unsigned int a14)
{
    st_494760_6 *v30;  // edi
    st_494760_3 *v31;  // edx
    float *v40;  // edx
    float v41;  // 128
    double v42;  // mm7
    unsigned int v44;  // eax
    float *v46;  // eax
    st_494760_1 *v47;  // eax
    st_494760_0 **v48;  // eax
    double v32;  // mm7
    double v33;  // mm6
    double v34;  // mm7
    double v35;  // mm6
    double v36;  // mm7
    float *v37;  // edx
    float v38;  // 128
    float *v39;  // eax
    unsigned int v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xf4]
    unsigned int v2;  // [bp-0xf0]
    unsigned int v3;  // [bp-0xec]
    unsigned int v4;  // [bp-0xe8]
    unsigned int v5;  // [bp-0xe4]
    int v6;  // [bp-0xe0]
    unsigned int v7;  // [bp-0xdc]
    char *v8;  // [bp-0xd8]
    char *v9;  // [bp-0xb4]
    float v10;  // [bp-0xb0]
    st_494760_3 *v11;  // [bp-0xac]
    int v12;  // [bp-0x9c]
    unsigned short v13;  // [bp-0x98]
    unsigned short v14;  // [bp-0x96]
    char v15;  // [bp-0x94]
    float v16;  // [bp-0x84]
    float v17;  // [bp-0x54]
    float v18;  // [bp-0x50]
    float v19;  // [bp-0x4c]
    float v20;  // [bp-0x48]
    unsigned int v21;  // [bp-0x24]
    float v22;  // [bp-0x24]
    float v23;  // [bp-0x20]
    unsigned int v24;  // [bp-0x20]
    float v25;  // [bp-0x1c]
    unsigned int v26;  // [bp-0x1c]
    float v27;  // [bp-0x18]
    float v28;  // [bp-0x14]
    float v29;  // [bp-0x10]

    v30 = sub_48df70(0);
    v30->field_60->field_8(v30);
    v30->field_2c8 = 0;
    v30->field_0->field_108 = 5;
    v30->field_0->field_10c = 1;
    g_6167c8(v30->field_0->field_208, "sprites/null.spr");
    v30->field_2d0 = a12;
    v30->field_2d4 = 4;
    v30->field_2e0 = a13;
    if ((int)a3 > 9999)
        a3 = 9999;
    v21 = a3;
    v30->field_0->field_1e0 = (float)(int)v21;
    v31 = v30->field_0;
    *(float *)&v31->field_20 = *a2;
    *(float *)&v31->field_24 = a2[1];
    *(float *)&v31->field_28 = a2[2];
    v32 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v33 = sqrt(v32);
    if (isnan(v33))
        sub_487dc0(*(unsigned int *)&v32);
    else
        v32 = v33;
    v30->field_2a8 = (float)v32;
    v11 = v30->field_0;
    sub_488860(&v21, &v11->field_20);
    v11->field_50 = v21;
    v11->field_54 = v24;
    v11->field_58 = v26;
    v30->field_0->field_198 = a0->field_208;
    v30->field_0->field_0 = a4 - gpGlobals->field_98;
    v10 = (float)(50.0 * a5 * 0.25);
    v34 = *a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2];
    v35 = sqrt(v34);
    if (isnan(v35))
        sub_487dc0(*(unsigned int *)&v34);
    else
        v34 = v35;
    v20 = (float)v34;
    if (v20 == 0.0f)
    {
        v27 = 0.0f;
        v28 = 0.0f;
        v29 = 1.0;
    }
    else
    {
        v36 = 1.0 / v20;
        v27 = (float)(v36 * *a2);
        v28 = (float)(v36 * a2[1]);
        v29 = (float)(v36 * a2[2]);
    }
    v22 = v10 * v27;
    v23 = v10 * v28;
    v25 = v10 * v29;
    v37 = a1;
    v27 = *v37 + v22;
    v28 = v37[1] + v23;
    v29 = v37[2] + v25;
    v9 = &v27;
    sub_487b80(a1, v9, 1, a0->field_208, &v15);
    v38 = v16;
    v17 = v38 * v22;
    v18 = v38 * v23;
    v19 = v38 * v25;
    v39 = a1;
    v27 = v17 + *v39;
    v28 = v18 + v39[1];
    v29 = v39[2] + v19;
    v40 = a1;
    *v40 = v27;
    v40[1] = v28;
    v40[2] = v29;
    sub_48db50(v30->field_0, v40);
    v41 = v10;
    v27 = v41;
    v28 = v41;
    v29 = v41;
    v42 = -v41;
    v17 = (float)v42;
    v18 = (float)v42;
    v19 = (float)v42;
    v44 = _INSERT(sub_48a0d0(v30->field_0, &v17, v9), 0, 0) | 0xffff0000;
    v30->field_14 = v44;
    v30->field_18 = &ExplodeTouch__16CExplodingAttackP11CBaseEntity;
    v30->field_c = _INSERT(v44, 0, 0) | 0xffff0000;
    v30->field_10 = &FollowThink__13CGuidedAttack;
    *(float *)&v30->field_0->field_104 = gpGlobals->field_0;
    sub_489390(v30->field_0->field_208, 1, "weapons/beamhead.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    v46 = a1;
    v27 = *v46;
    v28 = v46[1];
    v29 = v46[2];
    v8 = v9;
    v7 = 2;
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
    v47 = a0->field_208;
    if (a0->field_208 || (v47 = g_6168d4(0), v47))
        v48 = v47->field_7c;
    else
        v48 = NULL;
    sub_4891b0(v30, g_6168dc(*v48->field_208));
    return v30;
}

