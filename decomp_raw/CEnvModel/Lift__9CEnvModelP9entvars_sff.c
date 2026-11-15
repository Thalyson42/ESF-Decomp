// Lift__9CEnvModelP9entvars_sff @0xb9390 size=860
typedef struct st_4b9390_2 {
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
    char padding_180[136];
    unsigned int field_208;
} st_4b9390_2;

typedef struct st_4b9390_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[156];
    unsigned int field_104;
    unsigned int field_108;
    char padding_10c[140];
    unsigned int field_198;
    char padding_19c[108];
    int field_208;
} st_4b9390_0;

typedef struct st_4b9390_1 {
    struct st_4b9390_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[652];
    unsigned int field_2a8;
    char padding_2ac[16];
    unsigned int field_2bc;
} st_4b9390_1;

typedef struct st_4b9390_4 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4b9390_4;

typedef struct st_4b9390_3 {
    unsigned int field_0;
} st_4b9390_3;

extern char RotateThink__9CEnvModel;
extern st_4b9390_3 *g_6168b4;
extern st_4b9390_4 *gpGlobals;

float Lift__9CEnvModelP9entvars_sff(st_4b9390_1 *a0, st_4b9390_2 *a1, float a2, float a3)
{
    st_4b9390_0 *v23;  // edx
    unsigned int *v24;  // edx
    st_4b9390_0 *v34;  // edx
    unsigned int *v35;  // eax
    float v36;  // 128
    unsigned int *v25;  // eax
    double v26;  // mm5
    double v27;  // mm5
    unsigned int *v28;  // edx
    double v29;  // mm7
    double v30;  // mm6
    double v31;  // mm7
    st_4b9390_0 *v32;  // eax
    float v0;  // [bp-0xb4]
    float v1;  // [bp-0xb0]
    float v2;  // [bp-0xac]
    float v3;  // [bp-0xa8]
    float v4;  // [bp-0xa4]
    float v5;  // [bp-0xa0]
    float v6;  // [bp-0x9c]
    float v7;  // [bp-0x98]
    float v8;  // [bp-0x94]
    float v9;  // [bp-0x90]
    float v10;  // [bp-0x8c]
    char v11;  // [bp-0x74]
    float v12;  // [bp-0x60]
    float v13;  // [bp-0x5c]
    float v14;  // [bp-0x58]
    unsigned int v15;  // [bp-0x34]
    float v16;  // [bp-0x34]
    unsigned int v17;  // [bp-0x30]
    float v18;  // [bp-0x30]
    float v19;  // [bp-0x2c]
    float v20;  // [bp-0x28]
    float v21;  // [bp-0x24]
    float v22;  // [bp-0x20]

    g_6168b4(1, "Size %f\n", (unsigned int)(*(float *)&a0->field_2bc >> 0));
    v23 = a0->field_0;
    v15 = 0;
    v17 = 0;
    v19 = a2;
    v23->field_20 = v15;
    v23->field_24 = v17;
    *(float *)&v23->field_28 = v19;
    a0->field_14 = 0;
    a0->field_18 = 0;
    a0->field_0->field_108 = 8;
    sub_48a800(&a1->field_74);
    v24 = &gpGlobals->field_28;
    v16 = gpGlobals->field_28;
    v18 = *(float *)&v24[1];
    v19 = *(float *)&v24[2];
    v25 = &a1->field_8;
    v20 = a1->field_8 + a1->field_174;
    v21 = *(float *)&v25[1] + a1->field_178;
    v22 = *(float *)&v25[2] + a1->field_17c;
    v26 = 8192.0 * v16;
    v0 = (float)v26;
    v27 = 8192.0 * v18;
    v1 = (float)v27;
    v2 = (float)(8192.0 * v19);
    v8 = (float)(v26 + v20);
    v9 = (float)(v27 + v21);
    v10 = v22 + v2;
    sub_487b80(&v20, &v8, 0, a0->field_0->field_208, &v11);
    v28 = &a0->field_0->field_8;
    v0 = v12 - *(float *)&a0->field_0->field_8;
    v1 = v13 - *(float *)&v28[1];
    v2 = v14 - *(float *)&v28[2];
    v16 = v0;
    v18 = v1;
    v19 = v2;
    v29 = v16 * v16 + v18 * v18 + v19 * v19;
    v30 = sqrt(v29);
    if (isnan(v30))
        sub_487dc0(*(unsigned int *)&v29);
    else
        v29 = v30;
    v6 = (float)v29;
    if (v6 == 0.0f)
    {
        v0 = 0.0f;
        v1 = 0.0f;
        v2 = 1.0;
    }
    else
    {
        v31 = 1.0 / v6;
        v0 = (float)(v31 * v16);
        v1 = (float)(v31 * v18);
        v2 = (float)(v31 * v19);
    }
    v16 = v0;
    v18 = v1;
    v19 = v2;
    sub_488860(&v0, &v16);
    v3 = v0;
    v4 = (float)(v1 - 90.0);
    v5 = 90.0f;
    *(float *)&a0->field_0->padding_10c[16] = 1.0000000116860974e-07f;
    v32 = a0->field_0;
    v32->field_198 = a1->field_208;
    a0->field_c = _INSERT(v32, 0, 0) | 0xffff0000;
    a0->field_10 = &RotateThink__9CEnvModel;
    v34 = a0->field_0;
    v35 = &v34->field_50;
    v6 = (v3 - *(float *)&v34->field_50) / a3;
    v7 = (v4 - *(float *)&v35[1]) / a3;
    v8 = (v5 - *(float *)&v35[2]) / a3;
    *(float *)&v34->field_5c = v6;
    *(float *)&v34->field_60 = v7;
    *(float *)&v34->field_64 = v8;
    v36 = a3 + gpGlobals->field_0;
    *(float *)&a0->field_0->field_104 = v36;
    a0->field_2a8 = 1;
    return v36;
}

