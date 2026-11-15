// Forget__12CBaseMonsteri @0xdab60 size=21
typedef struct st_4dab60_0 {
    char padding_0[584];
    unsigned int field_248;
} st_4dab60_0;

int Forget__12CBaseMonsteri(st_4dab60_0 *a0, unsigned int a1)
{
    a0->field_248 = a0->field_248 & ~a1;
    return ~a1;
}

