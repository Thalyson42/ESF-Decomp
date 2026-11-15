// __12CPowerUpTaskP4CBot @0x186390 size=56
typedef struct st_586390_0 {
    char padding_0[20];
    unsigned int field_14;
} st_586390_0;

extern char __vt_12CPowerUpTask;

st_586390_0 * __12CPowerUpTaskP4CBot(st_586390_0 *a0, int a1)
{
    __9CBaseTaskP4CBot(a0, a1);
    a0->field_14 = &__vt_12CPowerUpTask;
    return a0;
}

