// _._11CCombatTask @0x159b10 size=51
typedef struct st_559b10_0 {
    char padding_0[20];
    unsigned int field_14;
} st_559b10_0;

extern char __vt_11CCombatTask;

int _._11CCombatTask(st_559b10_0 *a0, int a1)
{
    a0->field_14 = &__vt_11CCombatTask;
    return _._9CBaseTask(a0, a1);
}

