// Spawn__11CSpiritBomb @0x120b50 size=93
typedef struct st_520b50_0 {
    char padding_0[12];
    struct st_520b50_1 *field_c;
} st_520b50_0;

typedef struct st_520b50_2 {
    char padding_0[96];
    struct st_520b50_0 *field_60;
    char padding_64[36];
    unsigned int field_88;
    char padding_8c[36];
    unsigned int field_b0;
    char padding_b4[12];
    unsigned int field_c0;
    char padding_c4[4];
    unsigned int field_c8;
} st_520b50_2;

typedef struct st_520b50_1 {
    unsigned int field_0;
} st_520b50_1;

int Spawn__11CSpiritBomb(st_520b50_2 *a0)
{
    a0->field_60->field_c(a0);
    a0->field_88 = 12;
    a0->field_c8 = 0;
    a0->field_c0 = 0;
    a0->field_b0 = 0xffffffff;
    return sub_48cf50(a0);
}

