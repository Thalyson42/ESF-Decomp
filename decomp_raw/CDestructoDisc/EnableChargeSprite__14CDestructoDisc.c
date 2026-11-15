// EnableChargeSprite__14CDestructoDisc @0xaa410 size=139
typedef struct st_4aa410_1 {
    unsigned int field_0;
} st_4aa410_1;

typedef struct st_4aa410_3 {
    char padding_0[128];
    struct st_4aa410_2 *field_80;
    char padding_84[64];
    int field_c4;
    int field_c8;
    char padding_cc[264];
    unsigned int field_1d4;
} st_4aa410_3;

typedef struct st_4aa410_0 {
    char padding_0[480];
    struct st_4aa410_1 *field_1e0;
} st_4aa410_0;

typedef struct st_4aa410_2 {
    int field_0;
    char padding_4[92];
    struct st_4aa410_0 *field_60;
} st_4aa410_2;

unsigned int EnableChargeSprite__14CDestructoDisc(st_4aa410_3 *a0)
{
    unsigned int v7;  // eax
    float v0;  // [bp-0x4c]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x3c]
    char v4;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]

    a0->field_80->field_60->field_1e0(&v4, a0->field_80);
    v1 = v4;
    v2 = v5;
    v3 = v6;
    v0 = (float)((double)a0->field_c4 * 0.5 / (double)a0->field_c8);
    v7 = sub_48a1e0(a0->field_80->field_0, &v1, v0);
    a0->field_1d4 = v7;
    return v7;
}

