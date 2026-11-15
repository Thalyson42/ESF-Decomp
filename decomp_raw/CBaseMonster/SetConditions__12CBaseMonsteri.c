// SetConditions__12CBaseMonsteri @0xda950 size=19
typedef struct st_4da950_0 {
    char padding_0[260];
    unsigned int field_104;
} st_4da950_0;

st_4da950_0 * SetConditions__12CBaseMonsteri(st_4da950_0 *a0, unsigned int a1)
{
    a0->field_104 = a0->field_104 | a1;
    return a0;
}

