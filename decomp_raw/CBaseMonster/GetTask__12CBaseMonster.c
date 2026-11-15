// GetTask__12CBaseMonster @0x114060 size=57
typedef struct st_514060_1 {
    char padding_0[396];
    struct st_514060_0 *field_18c;
    int field_190;
} st_514060_1;

typedef struct st_514060_0 {
    unsigned int field_0;
    int field_4;
} st_514060_0;

unsigned int GetTask__12CBaseMonster(st_514060_1 *a0)
{
    if (a0->field_190 >= 0 && a0->field_190 < a0->field_18c->field_4)
        return a0->field_190 * 8 + a0->field_18c->field_0;
    return 0;
}

