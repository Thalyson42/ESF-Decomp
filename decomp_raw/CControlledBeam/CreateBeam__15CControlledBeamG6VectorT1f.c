// CreateBeam__15CControlledBeamG6VectorT1f @0xa8380 size=253
typedef struct st_4a8380_1 {
    int field_0;
} st_4a8380_1;

typedef struct st_4a8380_0 {
    char padding_0[128];
    struct st_4a8380_1 *field_80;
    char padding_84[68];
    unsigned int field_c8;
    short field_cc;
    short field_ce;
    short field_d0;
    short field_d2;
    short field_d4;
    char padding_d6[2];
    unsigned int field_d8;
    char padding_dc[12];
    unsigned int field_e8;
    unsigned int field_ec;
    char padding_f0[4];
    char field_f4;
    char padding_f5[255];
    unsigned int field_1f4;
    unsigned int field_1f8;
    unsigned int field_1fc;
} st_4a8380_0;

unsigned int CreateBeam__15CControlledBeamG6VectorT1f(double a0, st_4a8380_0 *a1, float *a2, float *a3, float a4)
{
    unsigned int v21;  // eax
    unsigned int *v0;  // [bp-0x8c]
    float v1;  // [bp-0x88]
    unsigned int v2;  // [bp-0x84]
    unsigned int v3;  // [bp-0x80]
    unsigned int v4;  // [bp-0x7c]
    unsigned int v5;  // [bp-0x78]
    unsigned int v6;  // [bp-0x74]
    unsigned int v7;  // [bp-0x70]
    unsigned int v8;  // [bp-0x6c]
    unsigned int v9;  // [bp-0x68]
    unsigned int v10;  // [bp-0x64]
    unsigned int v11;  // [bp-0x60]
    unsigned short v12;  // [bp-0x4c]
    unsigned short v13;  // [bp-0x4a]
    int v14;  // [bp-0x48], Other Possible Types: unsigned int
    float v15;  // [bp-0x44]
    float v16;  // [bp-0x40]
    float v17;  // [bp-0x3c]
    float v18;  // [bp-0x24]
    float v19;  // [bp-0x20]
    float v20;  // [bp-0x1c]

    v18 = *a2;
    v19 = a2[1];
    v20 = a2[2];
    v15 = *a3;
    v16 = a3[1];
    v17 = a3[2];
    v11 = 2;
    v10 = a1->field_1f8;
    *(float *)&v9 = *(float *)&a1->field_1f4;
    v8 = a1->field_ec;
    v7 = a1->field_d0;
    v6 = a1->field_ce;
    v5 = a1->field_d4;
    v4 = a1->field_d2;
    v3 = a1->field_cc;
    v2 = a1->field_1fc;
    v1 = a4;
    v0 = &a1->field_f4;
    CBasePlayerWeapon::GetPowerRatio(a1);
    v14 = a1->field_e8 * a1->field_d8;
    v13 = __fnstcw();
    v12 = v13 | 0xc00;
    v14 = (int)(a0 * (double)(int)v14);
    v21 = CGuidedAttack::ShootGuidedMagic(*(int *)a1->field_80, &v18, &v15, v14);
    a1->field_c8 = v21;
    return v21;
}

