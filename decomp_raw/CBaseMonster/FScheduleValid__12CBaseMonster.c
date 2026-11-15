// FScheduleValid__12CBaseMonster @0x111e60 size=54
typedef struct st_511e60_1 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[132];
    struct st_511e60_0 *field_18c;
} st_511e60_1;

typedef struct st_511e60_0 {
    char padding_0[8];
    unsigned int field_8;
} st_511e60_0;

unsigned int FScheduleValid__12CBaseMonster(st_511e60_1 *a0)
{
    if (a0->field_18c && !((a0->field_18c->field_8 | 0xc0000000) & a0->field_104))
        return 1;
    return 0;
}

