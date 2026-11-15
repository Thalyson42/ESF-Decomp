// HasMemory__12CBaseMonsteri @0xdab80 size=41
typedef struct st_4dab80_0 {
    char padding_0[584];
    unsigned int field_248;
} st_4dab80_0;

unsigned int HasMemory__12CBaseMonsteri(st_4dab80_0 *a0, unsigned int a1)
{
    return (!(a1 & a0->field_248) ? 0 : 1);
}

