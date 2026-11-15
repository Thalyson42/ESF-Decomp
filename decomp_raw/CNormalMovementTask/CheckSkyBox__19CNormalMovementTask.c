// CheckSkyBox__19CNormalMovementTask @0x172270 size=329
typedef struct st_572270_1 {
    char padding_0[8];
    struct st_572270_2 *field_8;
    struct st_572270_3 *field_c;
} st_572270_1;

typedef struct st_572270_2 {
    char padding_0[2796];
    float field_aec;
    char padding_af0[664];
    float field_d88;
} st_572270_2;

typedef struct st_572270_3 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[96];
    float field_f4;
    float field_f8;
    float field_fc;
    char padding_100[244];
    float field_1f4;
    float field_1f8;
    float field_1fc;
} st_572270_3;

typedef struct st_572270_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_572270_0;

extern st_572270_0 *gpGlobals;

unsigned int * CheckSkyBox__19CNormalMovementTask(st_572270_1 *a0)
{
    unsigned int *v11;  // edx
    float *v12;  // eax
    unsigned int *v13;  // edx
    unsigned int *v14;  // edx
    double v15;  // mm5
    double v16;  // mm5
    float *v17;  // eax
    st_572270_0 **v0;  // [bp-0x78]
    float v1;  // [bp-0x64]
    float v2;  // [bp-0x60]
    float v3;  // [bp-0x5c]
    float v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    float v7;  // [bp-0x38]
    float v8;  // [bp-0x34]
    float v9;  // [bp-0x30]
    char v10;  // [bp-0x24]

    v0 = &gpGlobals;
    if (a0->field_8->field_d88 > gpGlobals->field_0)
        return v17;
    v11 = &a0->field_c->field_f4;
    v4 = a0->field_c->field_f4;
    v5 = *(float *)&v11[1];
    v6 = *(float *)&v11[2];
    sub_489120(&v10, &v4);
    sub_48a800(&v10);
    v12 = a0->field_c;
    v13 = v12 + 0x22;
    v7 = v12[0x22] + v12[125];
    v8 = *(float *)&v13[1] + v12[126];
    v9 = *(float *)&v13[2] + v12[127];
    v14 = &*v0->field_28;
    v15 = 400.0 * *v0->field_28;
    v1 = (float)v15;
    v16 = 400.0 * *(float *)&v14[1];
    v2 = (float)v16;
    v3 = (float)(400.0 * *(float *)&v14[2]);
    v4 = (float)(v15 + v7);
    v5 = (float)(v16 + v8);
    v6 = v9 + v3;
    if (sub_48ae20(&v4) != 0xfffffffa)
        return v17;
    sub_4898c0(a0->field_8);
    a0->field_8->field_d88 = (float)(1.0 + *v0->field_0);
    v17 = a0->field_8;
    v17[699] = (float)(1.5 + v17[699]);
    return v17;
}

