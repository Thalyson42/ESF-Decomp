// Stop__12CBaseMonster @0xda790 size=53
typedef struct st_4da790_0 {
    char padding_0[304];
    struct st_4da790_1 *field_130;
} st_4da790_0;

typedef struct st_4da790_2 {
    char padding_0[96];
    struct st_4da790_0 *field_60;
    char padding_64[276];
    unsigned int field_178;
} st_4da790_2;

typedef struct st_4da790_1 {
    unsigned int field_0;
} st_4da790_1;

unsigned int Stop__12CBaseMonster(st_4da790_2 *a0)
{
    unsigned int v0;  // eax

    v0 = a0->field_60->field_130(a0);
    a0->field_178 = v0;
    return v0;
}

