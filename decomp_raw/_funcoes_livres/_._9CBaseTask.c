// _._9CBaseTask @0x1823d0 size=74
typedef struct st_5823d0_0 {
    char padding_0[20];
    unsigned int field_14;
} st_5823d0_0;

extern unsigned int __vt_9CBaseTask;

unsigned int _._9CBaseTask(st_5823d0_0 *a0, char a1)
{
    unsigned int v0;  // eax

    v0 = &__vt_9CBaseTask;
    a0->field_14 = &__vt_9CBaseTask;
    memset(&a0->padding_0[8], 0, 12);
    if (a1 & 1)
        v0 = __builtin_delete(a0);
    return v0;
}

