// CanPlaySequence__12CBaseMonsterii @0xd96e0 size=123
typedef struct st_4d96e0_0 {
    char padding_0[140];
    struct st_4d96e0_1 *field_8c;
} st_4d96e0_0;

typedef struct st_4d96e0_1 {
    unsigned int field_0;
} st_4d96e0_1;

typedef struct st_4d96e0_2 {
    char padding_0[96];
    struct st_4d96e0_0 *field_60;
    char padding_64[284];
    unsigned int field_180;
    unsigned int field_184;
    char padding_188[284];
    unsigned int field_2a4;
} st_4d96e0_2;

unsigned int CanPlaySequence__12CBaseMonsterii(st_4d96e0_2 *a0, unsigned int a1, int a2)
{
    if (!a0->field_2a4 && a0->field_60->field_8c(a0) && a0->field_180 != 5 && (a1 || a0->field_180 <= 1 || a0->field_184 == 1 || a0->field_180 == 3 && a2 > 0))
        return 1;
    return 0;
}

