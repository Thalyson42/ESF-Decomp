// __10CBlockTaskP4CBot @0x186490 size=63
typedef struct st_586490_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    float field_18;
} st_586490_0;

extern char __vt_10CBlockTask;

st_586490_0 * __10CBlockTaskP4CBot(st_586490_0 *a0, int a1)
{
    __9CBaseTaskP4CBot(a0, a1);
    a0->field_14 = &__vt_10CBlockTask;
    a0->field_18 = (float)(1.0 + *(float *)&a0->field_0);
    return a0;
}

