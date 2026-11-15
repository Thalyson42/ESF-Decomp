// HasAllMemories__12CBaseMonsteri @0xdabb0 size=41
typedef struct st_4dabb0_0 {
    char padding_0[584];
    unsigned int field_248;
} st_4dabb0_0;

unsigned int HasAllMemories__12CBaseMonsteri(st_4dabb0_0 *a0, unsigned int a1)
{
    return ((a1 & a0->field_248) == a1 ? 1 : 0);
}

