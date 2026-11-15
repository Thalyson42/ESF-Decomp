// Spawn__12CTelekinesis @0x129da0 size=149
typedef struct st_529da0_0 {
    char padding_0[12];
    struct st_529da0_1 *field_c;
} st_529da0_0;

typedef struct st_529da0_2 {
    char padding_0[96];
    struct st_529da0_0 *field_60;
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
    unsigned int field_dc;
} st_529da0_2;

typedef struct st_529da0_1 {
    unsigned int field_0;
} st_529da0_1;

int Spawn__12CTelekinesis(st_529da0_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_88 = 33;
    a0->field_c0 = 0;
    a0->field_b0 = 0xffffffff;
    a0->field_c8 = 9;
    a0->field_d0 = 2;
    a0->field_cc = 0;
    a0->field_d4 = 1701602676;
    a0->field_d8 = 1701734763;
    a0->field_dc = 7563635;
    return sub_48cf50(a0);
}

