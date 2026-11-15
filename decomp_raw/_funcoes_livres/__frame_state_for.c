// __frame_state_for @0x196a24 size=381
unsigned int * __frame_state_for(unsigned int a0, unsigned int *a1)
{
    unsigned int *iter;  // edi
    unsigned int v13;  // ecx
    int v14;  // edi
    unsigned int v15;  // edi
    unsigned int *k;  // esi
    unsigned int v17;  // ecx
    unsigned int *node;  // edi
    int v0;  // [bp-0xcc]
    int v1;  // [bp-0xc8]
    int v2;  // [bp-0xc4]
    int j;  // [bp-0xb4], Other Possible Types: unsigned int
    unsigned int *v4;  // [bp-0xb0]
    unsigned int v5;  // [bp-0xac]
    char v6;  // [bp-0xa8], Other Possible Types: unsigned int
    unsigned int v7;  // [bp-0xa4]
    unsigned short v8;  // [bp-0x4a]
    char *v9;  // [bp-0x24], Other Possible Types: char
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x14]

    sub_596a20(v0, v1, v2);
    v4 = find_fde(a0);
    if (!v4)
        return NULL;
    j = extract_cie_info(v4, &v9);
    if (j)
    {
        iter = &v7;
        for (v13 = 29; v13; iter += 1)
        {
            v13 -= 1;
            *iter = 0;
        }
        v8 = v11;
        (&v7)[1] = v10;
        v14 = (char *)v4 - v4[1] + *(int *)((char *)v4 - v4[1] + 4) + 8;
        if ((unsigned int)j < (unsigned int)v14)
        {
            do
            {
                j = execute_cfa_insn(j, &v7, &v9, 0);
            } while ((unsigned int)j < (unsigned int)v14);
        }
        j = v4 + 4;
        if (*v9 == 122)
        {
            j = decode_uleb128(j, &v6);
            j += v6;
        }
        v15 = (char *)v4 + *v4 + 4;
        v5 = v4[2];
        if (j < v15 && v4[2] <= a0)
        {
            do
            {
                j = execute_cfa_insn(j, &v7, &v9, &v5);
            } while (j < v15 && v5 <= a0);
        }
        k = &v7;
        v17 = 28;
        for (node = a1; v17; k += 1)
        {
            v17 -= 1;
            *node = *k;
            node += 1;
        }
        return a1;
    }
    return NULL;
}

