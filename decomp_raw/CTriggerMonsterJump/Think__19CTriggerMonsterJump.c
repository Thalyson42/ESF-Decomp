// Think__19CTriggerMonsterJump @0x12bf60 size=73
typedef struct st_52bf60_1 {
    struct st_52bf60_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_52bf60_1;

typedef struct st_52bf60_0 {
    char padding_0[268];
    unsigned int field_10c;
} st_52bf60_0;

unsigned int Think__19CTriggerMonsterJump(st_52bf60_1 *a0)
{
    unsigned int v0;  // eax

    a0->field_0->field_10c = 0;
    v0 = UTIL_SetOrigin(a0->field_0, &a0->field_0->padding_0[8]);
    a0->field_c = 0;
    a0->field_10 = 0;
    return v0;
}

