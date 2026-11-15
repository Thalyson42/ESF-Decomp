// __11CCombatTaskP4CBot @0x159ad0 size=56
typedef struct st_559ad0_0 {
    char padding_0[20];
    unsigned int field_14;
} st_559ad0_0;

extern char __vt_11CCombatTask;

st_559ad0_0 * __11CCombatTaskP4CBot(st_559ad0_0 *a0, int a1)
{
    __9CBaseTaskP4CBot(a0, a1);
    a0->field_14 = &__vt_11CCombatTask;
    return a0;
}

