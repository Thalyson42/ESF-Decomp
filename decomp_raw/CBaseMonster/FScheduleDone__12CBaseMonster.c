// FScheduleDone__12CBaseMonster @0x111d00 size=41
typedef struct st_511d00_1 {
    char padding_0[396];
    struct st_511d00_0 *field_18c;
    unsigned int field_190;
} st_511d00_1;

typedef struct st_511d00_0 {
    char padding_0[4];
    unsigned int field_4;
} st_511d00_0;

unsigned int FScheduleDone__12CBaseMonster(st_511d00_1 *a0)
{
    return (a0->field_190 == a0->field_18c->field_4 ? 1 : 0);
}

