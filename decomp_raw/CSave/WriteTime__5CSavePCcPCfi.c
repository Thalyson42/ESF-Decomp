// WriteTime__5CSavePCcPCfi @0x135670 size=132
typedef struct st_535670_0 {
    char padding_0[1360];
    float field_550;
} st_535670_0;

unsigned int WriteTime__5CSavePCcPCfi(st_535670_0 **a0, int a1, float *iter, int a3)
{
    unsigned int v1;  // eax
    int v2;  // esi
    unsigned int v3;  // eax
    float v0;  // [bp-0x48]

    v1 = sub_487bf0(a0, a1, a3 * 4);
    v2 = 0;
    if (0 >= a3)
        return v1;
    do
    {
        v0 = *iter;
        if (*a0)
            v0 = *iter - *a0->field_550;
    } while ((v3 = sub_488670(a0, &v0, 4), iter += 1, v2 += 1, v2 < a3));
    return sub_488670(a0, &v0, 4);
}

