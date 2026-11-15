// _._14CRecoverHPTask @0x186c60 size=51
typedef struct st_586c60_0 {
    char padding_0[20];
    unsigned int field_14;
} st_586c60_0;

extern char __vt_14CRecoverHPTask;

int _._14CRecoverHPTask(st_586c60_0 *a0, int a1)
{
    a0->field_14 = &__vt_14CRecoverHPTask;
    return _._9CBaseTask(a0, a1);
}

