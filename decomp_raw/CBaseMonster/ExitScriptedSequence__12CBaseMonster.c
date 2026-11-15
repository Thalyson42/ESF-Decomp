// ExitScriptedSequence__12CBaseMonster @0x115840 size=84
typedef struct st_515840_0 {
    char padding_0[368];
    unsigned int field_170;
} st_515840_0;

typedef struct st_515840_1 {
    struct st_515840_0 *field_0;
    char padding_4[384];
    unsigned int field_184;
    char padding_188[284];
    int field_2a4;
} st_515840_1;

unsigned int ExitScriptedSequence__12CBaseMonster(st_515840_1 *a0)
{
    if (a0->field_0->field_170 == 1)
    {
        a0->field_184 = 8;
        return 0;
    }
    if (!a0->field_2a4)
        return 1;
    CCineMonster::CancelScript(a0->field_2a4);
    return 1;
}

