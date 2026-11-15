// __7CTrunksP11CBasePlayer @0x130c00 size=56
typedef struct st_530c00_0 {
    char padding_0[4];
    unsigned int field_4;
} st_530c00_0;

extern char __vt_7CTrunks;

st_530c00_0 * __7CTrunksP11CBasePlayer(st_530c00_0 *a0, int a1)
{
    sub_48b790(a0, a1);
    a0->field_4 = &__vt_7CTrunks;
    return a0;
}

