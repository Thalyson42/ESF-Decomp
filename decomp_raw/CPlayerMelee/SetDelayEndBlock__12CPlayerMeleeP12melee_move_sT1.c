// SetDelayEndBlock__12CPlayerMeleeP12melee_move_sT1 @0x109e10 size=125
typedef struct st_509e10_0 {
    char padding_0[172];
    float field_ac;
    char padding_b0[88];
    unsigned int field_108;
} st_509e10_0;

typedef struct st_509e10_1 {
    float field_0;
} st_509e10_1;

extern st_509e10_1 *gpGlobals;

int SetDelayEndBlock__12CPlayerMeleeP12melee_move_sT1(st_509e10_0 *a0, int a1, int a2)
{
    int v0;  // eax

    if ((int)sub_48bdd0(a0, a1) <= 3)
    {
        v0 = sub_48bdd0(a0, a1);
        if (v0 > (int)sub_48bdd0(a0, a2) && a0->field_ac + 1.0 > *(float *)gpGlobals)
            a0->field_108 = 1;
    }
    return a0->field_108;
}

