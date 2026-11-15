// CallMonsterThink__12CBaseMonster @0xda750 size=44
typedef struct st_4da750_0 {
    char padding_0[252];
    struct st_4da750_1 *field_fc;
} st_4da750_0;

typedef struct st_4da750_1 {
    unsigned int field_0;
} st_4da750_1;

typedef struct st_4da750_2 {
    char padding_0[96];
    struct st_4da750_0 *field_60;
} st_4da750_2;

int CallMonsterThink__12CBaseMonster(st_4da750_2 *a0)
{
    return a0->field_60->field_fc(a0);
}

