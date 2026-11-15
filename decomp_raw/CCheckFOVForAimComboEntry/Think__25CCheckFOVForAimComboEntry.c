// Think__25CCheckFOVForAimComboEntry @0x15c5c0 size=168
typedef struct st_55c5c0_1 {
    unsigned int field_0;
    struct st_55c5c0_0 *field_4;
    char padding_8[12];
    float field_14;
} st_55c5c0_1;

typedef struct st_55c5c0_0 {
    char padding_0[2584];
    short field_a18;
    char padding_a1a[338];
    int field_b6c;
} st_55c5c0_0;

typedef struct st_55c5c0_2 {
    unsigned int field_0;
} st_55c5c0_2;

extern st_55c5c0_2 *gpGlobals;

unsigned int Think__25CCheckFOVForAimComboEntry(st_55c5c0_1 *a0)
{
    unsigned int v0;  // eax

    if (a0->field_4->field_b6c && a0->field_4->field_a18 <= 99 && a0->field_14 >= *(float *)gpGlobals && !(char)EntIsInFieldOfView(a0->field_4, a0->field_4->field_b6c))
    {
        v0 = EntIsInFieldOfView(a0->field_4->field_b6c, a0->field_4);
        if (!(char)v0)
        {
            CBot::ResetMoveSpeed(a0->field_4);
            CBot::AimAtEnemy(a0->field_4, a0->field_4->field_b6c);
            return v0;
        }
    }
    a0->field_0 = 2;
    return v0;
}

