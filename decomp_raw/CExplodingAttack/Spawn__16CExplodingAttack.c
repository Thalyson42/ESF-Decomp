// Spawn__16CExplodingAttack @0xba9d0 size=123
typedef struct st_4ba9d0_0 {
    char padding_0[12];
    struct st_4ba9d0_1 *field_c;
} st_4ba9d0_0;

typedef struct st_4ba9d0_1 {
    unsigned int field_0;
} st_4ba9d0_1;

typedef struct st_4ba9d0_2 {
    char padding_0[96];
    struct st_4ba9d0_0 *field_60;
    char padding_64[584];
    unsigned int field_2ac;
    unsigned int field_2b0;
    unsigned int field_2b4;
    char padding_2b8[8];
    unsigned int field_2c0;
    unsigned int field_2c4;
    unsigned int field_2c8;
    unsigned int field_2cc;
} st_4ba9d0_2;

int Spawn__16CExplodingAttack(st_4ba9d0_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_2ac = 0;
    a0->field_2b0 = 0;
    a0->field_2c8 = 1;
    a0->field_2c4 = 0;
    a0->field_2cc = 0;
    a0->field_2b4 = 0;
    a0->field_2c0 = 0;
    return sub_4896b0(a0);
}

