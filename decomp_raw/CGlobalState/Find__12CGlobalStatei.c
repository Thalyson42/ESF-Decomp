// Find__12CGlobalStatei @0x139c80 size=100
typedef struct st_539c80_0 {
    char padding_0[100];
    struct st_539c80_0 *field_64;
} st_539c80_0;

typedef struct st_539c80_1 {
    char padding_0[152];
    unsigned int field_98;
} st_539c80_1;

extern st_539c80_1 *gpGlobals;

st_539c80_0 * Find__12CGlobalStatei(st_539c80_0 **a0, unsigned int a1)
{
    st_539c80_0 *iter;  // esi

    if (!a1)
        return NULL;
    iter = *a0;
    if (iter)
    {
        do
        {
        } while (sub_488af0(a1 + gpGlobals->field_98, iter) && (iter = iter->field_64, iter));
    }
    return iter;
}

