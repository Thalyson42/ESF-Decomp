// ShootAttack__11CFriezaDisc @0xc1190 size=289
typedef struct st_4c1190_2 {
    unsigned int field_0;
    char padding_4[92];
    struct st_4c1190_0 *field_60;
    char padding_64[728];
    unsigned int field_33c;
    unsigned int field_340;
    char padding_344[1040];
    unsigned int field_754;
} st_4c1190_2;

typedef struct st_4c1190_1 {
    unsigned int field_0;
} st_4c1190_1;

typedef struct st_4c1190_3 {
    char padding_0[128];
    struct st_4c1190_2 *field_80;
    char padding_84[336];
    unsigned int field_1d4;
    int field_1d8;
} st_4c1190_3;

typedef struct st_4c1190_0 {
    char padding_0[480];
    struct st_4c1190_1 *field_1e0;
} st_4c1190_0;

typedef struct st_4c1190_4 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4c1190_4;

extern st_4c1190_4 *gpGlobals;

double ShootAttack__11CFriezaDisc(st_4c1190_3 *a0)
{
    double v15;  // mm5
    unsigned int *v16;  // edx
    double v17;  // mm2
    double v18;  // mm2
    double v19;  // mm2
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    float v3;  // [bp-0x58]
    float v4;  // [bp-0x54]
    float v5;  // [bp-0x50]
    float v6;  // [bp-0x4c]
    float v7;  // [bp-0x48]
    char v8;  // [bp-0x44]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]

    a0->field_1d4 = 1;
    UTIL_MakeVectors(a0->field_80->field_0 + 116);
    a0->field_80->field_60->field_1e0(&v8, a0->field_80);
    v0 = 0;
    v1 = 0;
    v2 = 2.0f;
    v12 = v9 + v0;
    v13 = v10 + v1;
    v15 = 2.0 + v11;
    v14 = (float)v15;
    v16 = &gpGlobals->field_28;
    v17 = 1000.0 * gpGlobals->field_28;
    v0 = (float)v17;
    v18 = 1000.0 * *(float *)&v16[1];
    v1 = (float)v18;
    v19 = 1000.0 * *(float *)&v16[2];
    v2 = (float)v19;
    v3 = v12;
    v4 = v13;
    v5 = (float)v15;
    v6 = (float)v17;
    v7 = (float)v18;
    v9 = (float)v19;
    CFriezaDiscAttack::Shoot(a0->field_1d8, &v3, &v6);
    a0->field_80->field_340 = 0;
    a0->field_80->field_33c = 1;
    a0->field_80->field_754 = 0;
    return v19;
}

