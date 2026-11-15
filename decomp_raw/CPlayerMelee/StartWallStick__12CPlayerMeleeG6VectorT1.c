// StartWallStick__12CPlayerMeleeG6VectorT1 @0x1029d0 size=283
typedef struct st_5029d0_0 {
    struct st_5029d0_1 *field_0;
    char padding_4[1872];
    unsigned int field_754;
} st_5029d0_0;

typedef struct st_5029d0_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[220];
    unsigned int field_108;
} st_5029d0_1;

typedef struct st_5029d0_2 {
    char padding_0[32];
    unsigned int field_20;
    char padding_24[40];
    unsigned int field_4c;
    unsigned int field_50;
    unsigned int field_54;
    char padding_58[12];
    unsigned int field_64;
    char padding_68[188];
    struct st_5029d0_0 *field_124;
} st_5029d0_2;

typedef struct st_5029d0_3 {
    float field_0;
} st_5029d0_3;

extern st_5029d0_3 *gpGlobals;

int StartWallStick__12CPlayerMeleeG6VectorT1(st_5029d0_2 *a0, int a1, float *a2)
{
    unsigned int *v8;  // edx
    int v0;  // [bp-0x54]
    int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x24]
    float v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    float v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]
    float v7;  // [bp-0x1c]

    a0->field_124->field_0->field_108 = 0;
    *(float *)&a0->field_124->field_0[1].padding_0[16] = 1.0000000116860974e-07f;
    a0->field_124->field_754 = 0;
    a0->field_64 = 3;
    *(float *)&a0->field_4c = *a2;
    *(float *)&a0->field_50 = a2[1];
    *(float *)&a0->field_54 = a2[2];
    *(float *)&a0->field_20 = *(float *)gpGlobals;
    v1 = a1;
    sub_48db50(a0->field_124->field_0, v1);
    v8 = a0->field_124->field_0;
    v2 = 0;
    v4 = 0;
    v6 = 0;
    v8[8] = v2;
    v8[9] = v4;
    v8[10] = v6;
    v3 = *a2;
    v5 = a2[1];
    v7 = a2[2];
    *(unsigned short *)&v0 = 1;
    sub_488dc0(a0, &v3, v0, *(float *)gpGlobals, "wall_collide");
    *(unsigned short *)&v1 = 1;
    return sub_4898e0(a0, v1, "wall_idle");
}

