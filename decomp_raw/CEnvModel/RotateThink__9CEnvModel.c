// RotateThink__9CEnvModel @0xb97a0 size=764
typedef struct st_4b97a0_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[96];
    char field_74;
    char padding_75[255];
    float field_174;
    float field_178;
    float field_17c;
} st_4b97a0_2;

typedef struct st_4b97a0_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    char padding_18[156];
    unsigned int field_b4;
    char padding_b8[144];
    struct st_4b97a0_0 *field_148;
    char padding_14c[108];
    unsigned int field_1b8;
} st_4b97a0_5;

typedef struct st_4b97a0_0 {
    char padding_0[128];
    char field_80;
    char padding_81[7];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[352];
    unsigned int field_1f4;
    unsigned int field_1f8;
    unsigned int field_1fc;
} st_4b97a0_0;

typedef struct st_4b97a0_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    float field_50;
    float field_54;
    float field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[156];
    float field_104;
    char padding_108[144];
    struct st_4b97a0_0 *field_198;
    char padding_19c[108];
    int field_208;
} st_4b97a0_1;

typedef struct st_4b97a0_3 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4b97a0_3;

typedef struct st_4b97a0_4 {
    unsigned int field_0;
} st_4b97a0_4;

extern st_4b97a0_4 *g_engfuncs.pfnAlertMessage;
extern st_4b97a0_3 *gpGlobals;

double RotateThink__9CEnvModel(st_4b97a0_1 **a0)
{
    st_4b97a0_2 *v22;  // esi
    unsigned int *v23;  // edx
    st_4b97a0_1 *v32;  // edx
    st_4b97a0_5 *v33;  // eax
    double v34;  // mm5
    double v35;  // mm7
    double v36;  // mm7
    unsigned int *v24;  // eax
    double v25;  // mm5
    double v26;  // mm5
    unsigned int *v27;  // edx
    double v28;  // mm7
    double v29;  // mm6
    double v30;  // mm7
    double v31;  // mm6
    float v0;  // [bp-0xc4]
    float v1;  // [bp-0xc0]
    float v2;  // [bp-0xbc]
    float v3;  // [bp-0xb8]
    float v4;  // [bp-0xb4]
    float v5;  // [bp-0xb0]
    float v6;  // [bp-0xac]
    float v7;  // [bp-0xa8]
    float v8;  // [bp-0xa4]
    float v9;  // [bp-0xa0]
    float v10;  // [bp-0x9c]
    float v11;  // [bp-0x98]
    char v12;  // [bp-0x84]
    float v13;  // [bp-0x70]
    float v14;  // [bp-0x6c]
    float v15;  // [bp-0x68]
    float v16;  // [bp-0x44]
    float v17;  // [bp-0x40]
    float v18;  // [bp-0x3c]
    float v19;  // [bp-0x24]
    float v20;  // [bp-0x20]
    float v21;  // [bp-0x1c]

    if (!*a0->field_198)
    {
        g_engfuncs.pfnAlertMessage(1, "Invalid owner for envmodel");
        return v36;
    }
    v22 = (!*a0->field_198 ? NULL : (struct st_4b97a0_0 *)&*a0->field_198->field_80);
    UTIL_MakeVectors(&v22->field_74);
    v23 = &gpGlobals->field_28;
    v19 = gpGlobals->field_28;
    v20 = *(float *)&v23[1];
    v21 = *(float *)&v23[2];
    v24 = &v22->field_8;
    v16 = v22->field_8 + v22->field_174;
    v17 = *(float *)&v24[1] + v22->field_178;
    v18 = *(float *)&v24[2] + v22->field_17c;
    v25 = 8192.0 * v19;
    v0 = (float)v25;
    v26 = 8192.0 * v20;
    v1 = (float)v26;
    v2 = (float)(8192.0 * v21);
    v8 = (float)(v25 + v16);
    v9 = (float)(v26 + v17);
    v10 = v18 + v2;
    UTIL_TraceLine(&v16, &v8, 0, *a0->field_208, &v12);
    v27 = &*a0->field_8;
    v0 = v13 - *a0->field_8;
    v1 = v14 - *(float *)&v27[1];
    v2 = v15 - *(float *)&v27[2];
    v19 = v0;
    v20 = v1;
    v21 = v2;
    v28 = v19 * v19 + v20 * v20 + v21 * v21;
    v29 = sqrt(v28);
    if (isnan(v29))
        sqrt(*(unsigned int *)&v28);
    else
        v28 = v29;
    v6 = (float)v28;
    if (v6 == 0.0f)
    {
        v0 = 0.0f;
        v1 = 0.0f;
        v2 = 1.0;
    }
    else
    {
        v30 = 1.0 / v6;
        v0 = (float)(v30 * v19);
        v1 = (float)(v30 * v20);
        v2 = (float)(v30 * v21);
    }
    v19 = v0;
    v20 = v1;
    v21 = v2;
    UTIL_VecToAngles(&v0, &v19);
    v3 = v0;
    v31 = v1 - 90.0;
    v4 = (float)v31;
    v5 = 90.0f;
    v32 = *a0;
    v33 = &v32->field_50;
    v9 = v3 - v32->field_50;
    v34 = v31 - *(float *)&v33->field_4;
    v10 = (float)v34;
    v11 = v5 - *(float *)&v33->field_8;
    v6 = (float)(v9 / 0.10000000149011612);
    v7 = (float)(v34 / 0.10000000149011612);
    v8 = (float)(v11 / 0.10000000149011612);
    *(float *)&v32->field_5c = v6;
    *(float *)&v32->field_60 = v7;
    *(float *)&v32->field_64 = v8;
    v35 = 0.1 + gpGlobals->field_0;
    *a0->field_104 = (float)v35;
    return v35;
}

