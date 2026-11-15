// DestroyMapCycle__FP10mapcycle_s @0xddd20 size=98
typedef struct st_4ddd20_0 {
    struct st_4ddd20_0 *field_0;
} st_4ddd20_0;

typedef struct st_4ddd20_1 {
    struct st_4ddd20_0 *field_0;
    unsigned int field_4;
} st_4ddd20_1;

st_4ddd20_1 * DestroyMapCycle__FP10mapcycle_s(st_4ddd20_1 *a0)
{
    st_4ddd20_0 **i;  // edi
    st_4ddd20_0 **v1;  // eax
    st_4ddd20_0 **v2;  // eax

    if (a0->field_0)
    {
        i = a0->field_0;
        v1 = *i;
        if (*i != i)
        {
            do
            {
                v2 = v1;
                __builtin_delete(v2);
                v1 = *v2;
            } while (*v2 != i);
        }
        __builtin_delete(a0->field_0);
    }
    a0->field_0 = NULL;
    a0->field_4 = 0;
    return a0;
}

