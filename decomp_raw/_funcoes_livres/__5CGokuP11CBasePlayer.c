// __5CGokuP11CBasePlayer @0xc6d30 size=56
typedef struct st_4c6d30_0 {
    char padding_0[4];
    unsigned int field_4;
} st_4c6d30_0;

extern char __vt_5CGoku;

st_4c6d30_0 * __5CGokuP11CBasePlayer(st_4c6d30_0 *a0, int a1)
{
    __10CBaseClassP11CBasePlayer(a0, a1);
    a0->field_4 = &__vt_5CGoku;
    return a0;
}

