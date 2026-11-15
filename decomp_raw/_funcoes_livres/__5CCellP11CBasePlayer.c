// __5CCellP11CBasePlayer @0x9e590 size=56
typedef struct st_49e590_0 {
    char padding_0[4];
    unsigned int field_4;
} st_49e590_0;

extern char __vt_5CCell;

st_49e590_0 * __5CCellP11CBasePlayer(st_49e590_0 *a0, int a1)
{
    __10CBaseClassP11CBasePlayer(a0, a1);
    a0->field_4 = &__vt_5CCell;
    return a0;
}

