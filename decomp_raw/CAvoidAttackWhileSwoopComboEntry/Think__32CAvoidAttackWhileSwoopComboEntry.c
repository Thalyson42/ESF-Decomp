// Think__32CAvoidAttackWhileSwoopComboEntry @0x15c850 size=126
typedef struct st_55c850_0 {
    char padding_0[264];
    unsigned int field_108;
} st_55c850_0;

typedef struct st_55c850_2 {
    struct st_55c850_0 *field_0;
} st_55c850_2;

typedef struct st_55c850_1 {
    unsigned int field_0;
    struct st_55c850_2 *field_4;
} st_55c850_1;

st_55c850_0 * Think__32CAvoidAttackWhileSwoopComboEntry(st_55c850_1 *a0)
{
    st_55c850_0 *v0;  // eax

    v0 = *(int *)a0->field_4;
    if (*(int *)(*(int *)a0->field_4 + 264) == 11)
    {
        CBot::SetSwoopButton(a0->field_4);
        v0 = CBot::GetNearestHostileAttack(a0->field_4, 50.0f, 750.0f);
        if (v0)
        {
            v0 = UTIL_GetHeadingPercentage(a0->field_4, v0);
            if ((short)(unsigned short)v0 > 64)
                return v0;
        }
    }
    a0->field_0 = 2;
    return v0;
}

