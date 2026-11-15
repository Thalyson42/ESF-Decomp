// HandleDelayedBlock__12CPlayerMeleeP12melee_move_sT1 @0x109da0 size=111
typedef struct st_509da0_0 {
    char padding_0[172];
    float field_ac;
} st_509da0_0;

typedef struct st_509da0_1 {
    float field_0;
} st_509da0_1;

extern st_509da0_1 *gpGlobals;

unsigned int HandleDelayedBlock__12CPlayerMeleeP12melee_move_sT1(st_509da0_0 *a0, int a1, int a2)
{
    unsigned int v0;  // eax

    v0 = sub_48bdd0(a0, a1);
    if (v0 != sub_48bdd0(a0, a2) && a0->field_ac + 1.0 >= *(float *)gpGlobals)
        return 0;
    return 1;
}

