// __7CVegetaP11CBasePlayer @0x136c90 size=56
typedef struct st_536c90_0 {
    char padding_0[4];
    unsigned int field_4;
} st_536c90_0;

extern char __vt_7CVegeta;

st_536c90_0 * __7CVegetaP11CBasePlayer(st_536c90_0 *a0, int a1)
{
    sub_48b790(a0, a1);
    a0->field_4 = &__vt_7CVegeta;
    return a0;
}

