// TaskThink__9CIdleTask @0x184550 size=129
typedef struct st_584550_1 {
    char padding_0[868];
    unsigned int field_364;
    char padding_368[20];
    unsigned int field_37c;
    char padding_380[100];
    unsigned int field_3e4;
    char padding_3e8[180];
    unsigned int field_49c;
} st_584550_1;

typedef struct st_584550_0 {
    char padding_0[4];
    unsigned int field_4;
    struct st_584550_1 *field_8;
} st_584550_0;

extern char BotManager+3403;

unsigned int TaskThink__9CIdleTask(st_584550_0 *a0)
{
    char v0;  // cl
    unsigned int *v1;  // edx
    unsigned int v2;  // eax

    v0 = 0;
    if (BotManager+3403 || a0->field_8->field_364)
        v0 = 1;
    if (!v0)
    {
        v1 = a0->field_8;
        v2 = v1[295] - 9;
        if (v2 <= 1 || v1[249] == 4 && v1[223])
            v0 = 1;
        if (!v0)
        {
            a0->field_4 = 2;
            return v2;
        }
    }
    return CBot::ResetMoveSpeed(a0->field_8);
}

