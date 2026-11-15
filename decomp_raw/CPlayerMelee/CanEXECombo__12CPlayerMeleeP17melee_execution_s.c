// CanEXECombo__12CPlayerMeleeP17melee_execution_s @0x105290 size=114
typedef struct st_505290_0 {
    char padding_0[68];
    unsigned int field_44;
    char padding_48[4];
    unsigned int field_4c;
    char padding_50[4];
    unsigned int field_54;
    char padding_58[772];
    struct st_505290_0 *field_35c;
} st_505290_0;

extern float melee_percentblocked+12;

int CanEXECombo__12CPlayerMeleeP17melee_execution_s(unsigned int a0, st_505290_0 *iter)
{
    int v1;  // ecx
    int v2;  // edx
    int v0;  // [bp-0x8]

    v1 = 0;
    for (v2 = 0; iter; iter = iter->field_35c)
    {
        if (iter->field_44)
            iter = iter->field_35c;
        v1 += 1;
        if (iter->field_54 == 1)
            v2 += 1;
        if (iter->field_4c == 1)
            break;
    }
    v0 = v2 / v1;
    return (double)v0 <= melee_percentblocked+12;
}

