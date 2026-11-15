// DropBall__17CCariedDragonBall @0xaeef0 size=216
typedef struct st_4aeef0_6 {
    char padding_0[128];
    struct st_4aeef0_2 *field_80;
} st_4aeef0_6;

typedef struct st_4aeef0_2 {
    struct st_4aeef0_3 *field_0;
    char padding_4[92];
    struct st_4aeef0_0 *field_60;
    char padding_64[1788];
    unsigned int field_760;
} st_4aeef0_2;

typedef struct st_4aeef0_1 {
    unsigned int field_0;
} st_4aeef0_1;

typedef struct st_4aeef0_3 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_4aeef0_3;

typedef struct st_4aeef0_0 {
    char padding_0[480];
    struct st_4aeef0_1 *field_1e0;
} st_4aeef0_0;

typedef struct st_4aeef0_7 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4aeef0_7;

extern st_4aeef0_7 *gpGlobals;

st_4aeef0_2 * DropBall__17CCariedDragonBall(st_4aeef0_6 *a0)
{
    st_4aeef0_2 *v7;  // eax
    st_4aeef0_2 *v8;  // ecx
    unsigned int *v9;  // edx
    double v10;  // mm5
    double v11;  // mm5
    unsigned int *v12;  // edx
    st_4aeef0_2 *v13;  // eax
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    char v6;  // [bp-0x24]

    v7 = a0->field_80;
    if (!v7->field_760)
        return v7;
    sub_48a800(&v7->field_0[2].padding_0[28]);
    a0->field_80->field_60->field_1e0(&v6, a0->field_80);
    v8 = a0->field_80;
    v9 = &gpGlobals->field_28;
    v10 = 200.0 * gpGlobals->field_28;
    v0 = (float)v10;
    v11 = 200.0 * *(float *)&v9[1];
    v1 = (float)v11;
    v2 = (float)(200.0 * *(float *)&v9[2]);
    v12 = &v8->field_0->field_20;
    v3 = (float)(v10 + *(float *)&v8->field_0->field_20);
    v4 = (float)(v11 + *(float *)&v12[1]);
    v5 = *(float *)&v12[2] + v2;
    sub_4885c0(v8->field_0, &v6, &v3, v8->field_760);
    v13 = a0->field_80;
    v13->field_760 = 0;
    return v13;
}

