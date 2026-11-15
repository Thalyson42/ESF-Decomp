// __8CPiccoloP11CBasePlayer @0xe79e0 size=56
typedef struct st_4e79e0_0 {
    char padding_0[4];
    unsigned int field_4;
} st_4e79e0_0;

extern char __vt_8CPiccolo;

st_4e79e0_0 * __8CPiccoloP11CBasePlayer(st_4e79e0_0 *a0, int a1)
{
    sub_48b790(a0, a1);
    a0->field_4 = &__vt_8CPiccolo;
    return a0;
}

