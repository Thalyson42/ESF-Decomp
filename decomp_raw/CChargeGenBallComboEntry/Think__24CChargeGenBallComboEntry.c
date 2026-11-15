// Think__24CChargeGenBallComboEntry @0x15c930 size=170
typedef struct st_55c930_1 {
    char padding_0[136];
    unsigned int field_88;
} st_55c930_1;

typedef struct st_55c930_2 {
    struct st_55c930_0 *field_0;
    char padding_4[1740];
    int field_6d0;
    char padding_6d4[660];
    struct st_55c930_1 *field_968;
    char padding_96c[172];
    short field_a18;
    char padding_a1a[338];
    int field_b6c;
} st_55c930_2;

typedef struct st_55c930_0 {
    char padding_0[385];
    char field_181;
} st_55c930_0;

typedef struct st_55c930_3 {
    unsigned int field_0;
    struct st_55c930_2 *field_4;
} st_55c930_3;

st_55c930_2 * Think__24CChargeGenBallComboEntry(st_55c930_3 *a0)
{
    st_55c930_2 *v0;  // eax
    st_55c930_2 *v1;  // edx

    v0 = a0->field_4;
    if (!v0->field_b6c)
    {
        a0->field_0 = 2;
        return v0;
    }
    else if (v0->field_a18 <= 99)
    {
        v1 = a0->field_4;
        if (v1->field_968 && v1->field_968->field_88 != 4)
        {
            CBasePlayer::SelectItem(v1, "weapon_genericbeam");
        }
        else
        {
            v0 = a0->field_4;
            if (a0->field_4->field_6d0 > 59)
            {
                a0->field_0 = 2;
                return v0;
            }
        }
        CBot::AimAtEnemy(a0->field_4, a0->field_4->field_b6c);
        a0->field_4->field_0->field_181 = a0->field_4->field_0->field_181 | 8;
        return CBot::SetMoveDir(a0->field_4, 8);
    }
    else
    {
        a0->field_0 = 2;
        return v0;
    }
}

