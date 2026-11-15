// Shoot__9CEnvModelG6Vectorff @0xb9120 size=332
typedef struct st_4b9120_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[48];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[160];
    unsigned int field_108;
    char padding_10c[212];
    float field_1e0;
} st_4b9120_0;

typedef struct st_4b9120_1 {
    struct st_4b9120_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[652];
    unsigned int field_2a8;
    char padding_2ac[16];
    unsigned int field_2bc;
} st_4b9120_1;

extern char ExplodeTouch__9CEnvModelP11CBaseEntity;

short Shoot__9CEnvModelG6Vectorff(st_4b9120_1 *a0, float *a1, float a2, float a3)
{
    st_4b9120_0 *v12;  // edx
    double v13;  // mm6
    double v14;  // mm5
    st_4b9120_0 *v15;  // edx
    double v16;  // mm4
    double v17;  // mm2
    double v18;  // mm2
    unsigned int v19;  // eax
    unsigned int v20;  // eax
    float v0;  // [bp-0x54]
    float v1;  // [bp-0x50]
    float v2;  // [bp-0x4c]
    unsigned int v3;  // [bp-0x24]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0x1c]
    float v9;  // [bp-0x18]
    float v10;  // [bp-0x14]
    float v11;  // [bp-0x10]

    v12 = a0->field_0;
    v3 = 0;
    v6 = 0;
    v8 = 0;
    v12->field_5c = v3;
    v12->field_60 = v6;
    v12->field_64 = v8;
    v13 = 20.0 / *(float *)&a0->field_2bc;
    if (1.0 < v13)
        v13 = 1.0;
    v14 = *(float *)&a0->field_2bc / 100.0;
    if (1.0 < v14)
        v14 = 1.0;
    v15 = a0->field_0;
    v16 = a2 * 2000.0;
    v17 = v16 * *a1;
    v0 = (float)v17;
    v18 = v16 * a1[1];
    v1 = (float)v18;
    v2 = (float)(v16 * a1[2]);
    v9 = (float)(v17 * a3);
    v10 = (float)(v18 * a3);
    v11 = a3 * v2;
    v4 = (float)(v13 * v9);
    v5 = (float)(v13 * v10);
    v7 = (float)(v13 * v11);
    *(float *)&v15->field_20 = v4;
    *(float *)&v15->field_24 = v5;
    *(float *)&v15->field_28 = v7;
    a0->field_0->field_108 = 5;
    a0->field_0->field_1e0 = (float)(v14 * 5.0);
    v19 = CEnvModel::SetBoundingBox(a0);
    a0->field_c = 0;
    a0->field_10 = 0;
    v20 = _INSERT(v19, 0, 0);
    a0->field_14 = v20 | 0xffff0000;
    a0->field_18 = &ExplodeTouch__9CEnvModelP11CBaseEntity;
    a0->field_2a8 = 0;
    return v20;
}

