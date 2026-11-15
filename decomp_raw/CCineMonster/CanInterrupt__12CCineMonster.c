// CanInterrupt__12CCineMonster @0x1158c0 size=76
typedef struct st_5158c0_1 {
    char padding_0[368];
    unsigned int field_170;
} st_5158c0_1;

typedef struct st_5158c0_0 {
    char padding_0[728];
    unsigned int field_2d8;
} st_5158c0_0;

unsigned int CanInterrupt__12CCineMonster(st_5158c0_0 *a0)
{
    st_5158c0_1 **v0;  // eax

    if (a0->field_2d8)
    {
        v0 = EHANDLE::__opP11CBaseEntity(&a0->padding_0[272]);
        if (v0 && !*v0->field_170)
            return 1;
    }
    return 0;
}

