// HasAllConditions__12CBaseMonsteri @0xda9c0 size=41
typedef struct st_4da9c0_0 {
    char padding_0[260];
    unsigned int field_104;
} st_4da9c0_0;

unsigned int HasAllConditions__12CBaseMonsteri(st_4da9c0_0 *a0, unsigned int a1)
{
    return ((a1 & a0->field_104) == a1 ? 1 : 0);
}

