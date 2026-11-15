// BufferData__5CSavePCci @0x136350 size=119
typedef struct st_536350_0 {
    char padding_0[4];
    int field_4;
    struct st_536350_0 *field_8;
    struct st_536350_0 *field_c;
} st_536350_0;

typedef struct st_536350_1 {
    unsigned int field_0;
} st_536350_1;

extern st_536350_1 *g_6168b4;

st_536350_0 * BufferData__5CSavePCci(st_536350_0 **a0, int a1, int a2)
{
    st_536350_0 *v0;  // eax
    st_536350_0 *v1;  // eax
    st_536350_0 *v2;  // eax

    if (!*a0)
    {
        return v2;
    }
    else if (&*a0->field_8->padding_0[a2] > *a0->field_c)
    {
        g_6168b4(4, "Save/Restore overflow!");
        v0 = *a0->field_c;
        *a0->field_8 = v0;
        return v0;
    }
    else
    {
        sub_48c4b0(*a0->field_4, a1, a2);
        *a0->field_4 = *a0->field_4 + a2;
        v1 = *a0;
        v1->field_8 = &v1->field_8->padding_0[a2];
        return v1;
    }
}

