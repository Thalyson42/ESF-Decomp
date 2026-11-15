// __6CGohanP11CBasePlayer @0xc67b0 size=56
typedef struct st_4c67b0_0 {
    char padding_0[4];
    unsigned int field_4;
} st_4c67b0_0;

extern char __vt_6CGohan;

st_4c67b0_0 * __6CGohanP11CBasePlayer(st_4c67b0_0 *a0, int a1)
{
    __10CBaseClassP11CBasePlayer(a0, a1);
    a0->field_4 = &__vt_6CGohan;
    return a0;
}

