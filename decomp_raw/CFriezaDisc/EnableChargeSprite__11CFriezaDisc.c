// EnableChargeSprite__11CFriezaDisc @0xc0d40 size=117
typedef struct st_4c0d40_1 {
    unsigned int field_0;
} st_4c0d40_1;

typedef struct st_4c0d40_3 {
    char padding_0[128];
    struct st_4c0d40_2 *field_80;
    char padding_84[64];
    int field_c4;
    int field_c8;
    char padding_cc[268];
    unsigned int field_1d8;
} st_4c0d40_3;

typedef struct st_4c0d40_0 {
    char padding_0[480];
    struct st_4c0d40_1 *field_1e0;
} st_4c0d40_0;

typedef struct st_4c0d40_2 {
    int field_0;
    char padding_4[92];
    struct st_4c0d40_0 *field_60;
} st_4c0d40_2;

unsigned int EnableChargeSprite__11CFriezaDisc(st_4c0d40_3 *a0)
{
    unsigned int v2;  // eax
    float v0;  // [bp-0x2c]
    char v1;  // [bp-0x24]

    a0->field_80->field_60->field_1e0(&v1, a0->field_80);
    v0 = (float)((double)a0->field_c4 * 0.5 / (double)a0->field_c8);
    v2 = sub_489060(a0->field_80->field_0, &v1, v0);
    a0->field_1d8 = v2;
    return v2;
}

