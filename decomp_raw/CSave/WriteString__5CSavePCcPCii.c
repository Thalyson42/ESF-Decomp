// WriteString__5CSavePCcPCii @0x135750 size=181
typedef struct st_535750_0 {
    char padding_0[152];
    unsigned int field_98;
} st_535750_0;

extern st_535750_0 *gpGlobals;

unsigned int WriteString__5CSavePCcPCii(int a0, int a1, unsigned int *a2, int a3)
{
    int idx;  // esi
    char *v2;  // edi
    unsigned int v11;  // eax
    unsigned int v3;  // ecx
    char *v4;  // edi
    unsigned int v5;  // eax
    int index;  // esi
    char *v7;  // edx
    int v8;  // ecx
    char *v9;  // edi
    char *v10;  // edi
    int v0;  // [bp-0x8]

    v0 = 0;
    idx = 0;
    if (0 < a3)
    {
        do
        {
            v2 = gpGlobals->field_98 + a2[idx];
            v3 = 0xffffffff;
            do
            {
                v4 = v2;
            } while (v3 && (v3 -= 1, v2 = v4 + 1, *v4));
            v0 += ~v3;
            idx += 1;
        } while (idx < a3);
    }
    v5 = sub_487bf0(a0, a1, v0);
    index = 0;
    if (0 >= a3)
        return v5;
    do
    {
        v7 = a2[index] + gpGlobals->field_98;
        v8 = -0x1;
        v9 = v7;
        do
        {
            v10 = v9;
        } while (v8 && (v8 -= 1, v9 = v10 + 1, *v10));
        v11 = sub_488670(a0, v7, ~v8);
        index += 1;
    } while (index < a3);
    return v11;
}

