// Think__19CTeleportComboEntry @0x15c0c0 size=188
typedef struct st_55c0c0_0 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[2316];
    short field_a18;
    char padding_a1a[338];
    struct st_55c0c0_1 *field_b6c;
} st_55c0c0_0;

typedef struct st_55c0c0_2 {
    unsigned int field_0;
    struct st_55c0c0_0 *field_4;
    char padding_8[12];
    float field_14;
    int field_18;
    char field_1c;
    char field_1d;
    char field_1e;
} st_55c0c0_2;

typedef struct st_55c0c0_1 {
    struct st_55c0c0_0 *field_0;
} st_55c0c0_1;

typedef struct st_55c0c0_3 {
    unsigned int field_0;
} st_55c0c0_3;

extern st_55c0c0_3 *gpGlobals;

st_55c0c0_0 * Think__19CTeleportComboEntry(st_55c0c0_2 *a0)
{
    st_55c0c0_0 *v0;  // eax
    st_55c0c0_0 *v1;  // edx

    v0 = a0->field_4;
    if (a0->field_4->field_b6c || !a0->field_1d)
    {
        if (a0->field_14 <= *(float *)gpGlobals || a0->field_4->field_a18 > 159)
        {
            v0 = CBasePlayer::Teleport(a0->field_4);
        }
        else
        {
            v1 = a0->field_4;
            if (!v1->field_b6c)
                return CBot::SetMoveDir(a0->field_4, a0->field_18);
            if (a0->field_1c)
                CBot::AimAtEnemy(v1, v1->field_b6c);
            if (!a0->field_1e)
                return CBot::SetMoveDir(a0->field_4, a0->field_18);
            v0 = *(int *)a0->field_4->field_b6c;
            if (*(int *)(*(int *)a0->field_4->field_b6c + 264) != 11)
                return CBot::SetMoveDir(a0->field_4, a0->field_18);
        }
    }
    a0->field_0 = 2;
    return v0;
}

