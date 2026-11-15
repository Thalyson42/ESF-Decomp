// WritePositionVector__5CSavePCcPCfi @0x135910 size=217
typedef struct st_535910_0 {
    char padding_0[1324];
    unsigned int field_52c;
    char padding_530[20];
    float field_544;
    float field_548;
    float field_54c;
} st_535910_0;

unsigned int WritePositionVector__5CSavePCcPCfi(st_535910_0 **a0, int a1, float *iter, int a3)
{
    unsigned int v6;  // eax
    int v7;  // edi
    st_535910_0 *v8;  // eax
    unsigned int v9;  // eax
    float v0;  // [bp-0x84]
    float v1;  // [bp-0x80]
    float v2;  // [bp-0x7c]
    float v3;  // [bp-0x64]
    float v4;  // [bp-0x60]
    float v5;  // [bp-0x5c]

    v6 = sub_487bf0(a0, a1, a3 * 12);
    v7 = 0;
    if (0 >= a3)
        return v6;
    do
    {
        v3 = *iter;
        v4 = iter[1];
        v5 = iter[2];
        if (*a0 && !(v8 = *a0, !v8->field_52c))
        {
            v0 = *iter - v8->field_544;
            v1 = iter[1] - v8->field_548;
            v2 = iter[2] - v8->field_54c;
            v3 = v0;
            v4 = v1;
            v5 = v2;
        }
    } while ((v9 = sub_488670(a0, &v3, 12), iter += 3, v7 += 1, v7 < a3));
    return sub_488670(a0, &v3, 12);
}

