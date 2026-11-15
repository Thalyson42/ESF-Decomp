// IScheduleFlags__12CBaseMonster @0x111e30 size=40
typedef struct st_511e30_1 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[132];
    struct st_511e30_0 *field_18c;
} st_511e30_1;

typedef struct st_511e30_0 {
    char padding_0[8];
    unsigned int field_8;
} st_511e30_0;

unsigned int IScheduleFlags__12CBaseMonster(st_511e30_1 *a0)
{
    return (!a0->field_18c ? 0 : a0->field_104 & a0->field_18c->field_8);
}

