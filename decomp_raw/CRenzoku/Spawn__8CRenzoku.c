// Spawn__8CRenzoku @0x10e130 size=140
typedef struct st_50e130_0 {
    char padding_0[12];
    struct st_50e130_1 *field_c;
} st_50e130_0;

typedef struct st_50e130_2 {
    char padding_0[96];
    struct st_50e130_0 *field_60;
    char padding_64[36];
    unsigned int field_88;
    char padding_8c[36];
    unsigned int field_b0;
    char padding_b4[12];
    unsigned int field_c0;
    char padding_c4[4];
    unsigned int field_c8;
    unsigned int field_cc;
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
} st_50e130_2;

typedef struct st_50e130_1 {
    unsigned int field_0;
} st_50e130_1;

int Spawn__8CRenzoku(st_50e130_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_88 = 30;
    a0->field_c0 = 0;
    a0->field_b0 = 0xffffffff;
    a0->field_c8 = 9;
    a0->field_d0 = 60;
    a0->field_cc = 0x3f800000;
    a0->field_d4 = 2054055282;
    a0->field_d8 = 7695215;
    return sub_48cf50(a0);
}

