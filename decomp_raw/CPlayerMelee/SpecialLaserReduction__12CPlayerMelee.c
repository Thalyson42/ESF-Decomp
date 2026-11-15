// SpecialLaserReduction__12CPlayerMelee @0x10c8e0 size=35
typedef struct st_50c8e0_0 {
    char padding_0[100];
    unsigned int field_64;
} st_50c8e0_0;

unsigned int SpecialLaserReduction__12CPlayerMelee(st_50c8e0_0 *a0)
{
    if (a0->field_64 != 3 && a0->field_64 != 5 && a0->field_64 != 4)
        return 0;
    return 1;
}

