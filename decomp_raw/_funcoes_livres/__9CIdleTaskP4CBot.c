// __9CIdleTaskP4CBot @0x186da0 size=56
typedef struct st_586da0_0 {
    char padding_0[20];
    unsigned int field_14;
} st_586da0_0;

extern char __vt_9CIdleTask;

st_586da0_0 * __9CIdleTaskP4CBot(st_586da0_0 *a0, int a1)
{
    sub_48ce80(a0, a1);
    a0->field_14 = &__vt_9CIdleTask;
    return a0;
}

