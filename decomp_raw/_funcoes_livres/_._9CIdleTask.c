// _._9CIdleTask @0x186de0 size=51
typedef struct st_586de0_0 {
    char padding_0[20];
    unsigned int field_14;
} st_586de0_0;

extern char __vt_9CIdleTask;

int _._9CIdleTask(st_586de0_0 *a0, int a1)
{
    a0->field_14 = &__vt_9CIdleTask;
    return _._9CBaseTask(a0, a1);
}

