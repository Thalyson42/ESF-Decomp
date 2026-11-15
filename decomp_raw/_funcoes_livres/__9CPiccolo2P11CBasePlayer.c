// __9CPiccolo2P11CBasePlayer @0xe7b60 size=56
typedef struct st_4e7b60_0 {
    char padding_0[4];
    unsigned int field_4;
} st_4e7b60_0;

extern char __vt_9CPiccolo2;

st_4e7b60_0 * __9CPiccolo2P11CBasePlayer(st_4e7b60_0 *a0, int a1)
{
    __8CPiccoloP11CBasePlayer(a0, a1);
    a0->field_4 = &__vt_9CPiccolo2;
    return a0;
}

