// __7CFriezaP11CBasePlayer @0xbf870 size=56
typedef struct st_4bf870_0 {
    char padding_0[4];
    unsigned int field_4;
} st_4bf870_0;

extern char __vt_7CFrieza;

st_4bf870_0 * __7CFriezaP11CBasePlayer(st_4bf870_0 *a0, int a1)
{
    __10CBaseClassP11CBasePlayer(a0, a1);
    a0->field_4 = &__vt_7CFrieza;
    return a0;
}

