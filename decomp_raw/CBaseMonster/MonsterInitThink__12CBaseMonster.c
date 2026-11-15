// MonsterInitThink__12CBaseMonster @0xd76c0 size=44
typedef struct st_4d76c0_0 {
    char padding_0[272];
    struct st_4d76c0_1 *field_110;
} st_4d76c0_0;

typedef struct st_4d76c0_1 {
    unsigned int field_0;
} st_4d76c0_1;

typedef struct st_4d76c0_2 {
    char padding_0[96];
    struct st_4d76c0_0 *field_60;
} st_4d76c0_2;

int MonsterInitThink__12CBaseMonster(st_4d76c0_2 *a0)
{
    return a0->field_60->field_110(a0);
}

