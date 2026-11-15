// BufferReadBytes__8CRestorePci @0x136ae0 size=173
typedef struct st_536ae0_0 {
    unsigned int field_0;
    int field_4;
    struct st_536ae0_0 *field_8;
    struct st_536ae0_0 *field_c;
} st_536ae0_0;

typedef struct st_536ae0_1 {
    unsigned int field_0;
} st_536ae0_1;

extern st_536ae0_1 *g_6168b4;

st_536ae0_0 * BufferReadBytes__8CRestorePci(st_536ae0_0 **a0, int a1, int a2)
{
    st_536ae0_0 *v1;  // eax
    st_536ae0_0 *v2;  // eax
    st_536ae0_0 *v3;  // eax
    st_536ae0_0 *v4;  // eax
    unsigned int v0;  // [bp-0x8]

    if (!*a0)
        return v4;
    v0 = 0;
    if (!*a0 || (v1 = *a0, (int)(v1->field_4 - v1->field_0) >= v1->field_c))
        v0 = 1;
    if (v0)
    {
        return v1;
    }
    else if (a2 + (char *)*a0->field_8 > *a0->field_c)
    {
        g_6168b4(4, "Restore overflow!");
        v2 = *a0->field_c;
        *a0->field_8 = v2;
        return v2;
    }
    else
    {
        if (a1)
            sub_48c4b0(a1, *a0->field_4, a2);
        *a0->field_4 = *a0->field_4 + a2;
        v3 = *a0;
        v3->field_8 = (char *)v3->field_8 + a2;
        return v3;
    }
}

