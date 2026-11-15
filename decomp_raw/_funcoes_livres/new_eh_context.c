// new_eh_context @0x1949e8 size=74
unsigned int * new_eh_context(void)
{
    unsigned int *v4;  // esi
    unsigned int v5;  // ecx
    unsigned int *iter;  // edi
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]
    int v2;  // [bp-0x14]

    sub_5949e4(v0, v1, v2);
    v4 = malloc@GLIBC_2.0(24);
    if (!v4)
        __terminate();
    v5 = 6;
    for (iter = v4; v5; iter += 1)
    {
        v5 -= 1;
        *iter = 0;
    }
    v4[1] = v4 + 4;
    return v4;
}

