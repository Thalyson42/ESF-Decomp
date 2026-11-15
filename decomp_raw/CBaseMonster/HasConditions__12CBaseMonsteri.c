// HasConditions__12CBaseMonsteri @0xda990 size=41
typedef struct st_4da990_0 {
    char padding_0[260];
    unsigned int field_104;
} st_4da990_0;

unsigned int HasConditions__12CBaseMonsteri(st_4da990_0 *a0, unsigned int a1)
{
    return (!(a1 & a0->field_104) ? 0 : 1);
}

