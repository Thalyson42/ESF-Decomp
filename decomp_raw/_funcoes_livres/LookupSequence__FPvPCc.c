// LookupSequence__FPvPCc @0x8f060 size=120
typedef struct st_48f060_0 {
    char padding_0[164];
    int field_a4;
    unsigned int field_a8;
} st_48f060_0;

int LookupSequence__FPvPCc(st_48f060_0 *a0, int a1)
{
    int v1;  // esi
    st_48f060_0 *v0;  // [bp-0x8]

    if (!a0)
        return 0;
    v0 = &a0->padding_0[a0->field_a8];
    v1 = 0;
    if (NULL >= a0->field_a4)
        return -0x1;
    do
    {
        if (!strcasecmp@GLIBC_2.0(176 * v1 + (char *)v0, a1))
            return v1;
    } while ((v1 += 1, v1 < a0->field_a4));
    return -0x1;
}

