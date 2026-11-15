// ExtractCommandString__FPcT0 @0xde4e0 size=251
unsigned int ExtractCommandString__FPcT0(char *a0, int a1)
{
    char *iter;  // esi
    unsigned int v4;  // eax
    char *iter1;  // edx
    char *v6;  // esi
    char *node;  // edx
    char *v8;  // edi
    unsigned int v9;  // ecx
    char *v10;  // edi
    char *v0;  // [bp-0x408]
    char v1;  // [bp-0x404]
    char v2;  // [bp-0x204]

    iter = a0;
    if (*iter == 92)
        iter += 1;
    while (1)
    {
        iter1 = &v2;
        if (*iter != 92)
        {
            do
            {
                if (!*iter)
                    return v4;
            } while ((*(char *)&v4 = *iter, *iter1 = *iter, iter += 1, iter1 += 1, *iter != 92));
        }
        *iter1 = 0;
        v6 = iter + 1;
        node = &v1;
        if (*v6 != 92 && *v6)
        {
            if (*v6)
            {
                do
                {
                    *node = *v6;
                    v6 += 1;
                    node += 1;
                } while (*v6 != 92 && *v6);
            }
            else
            {
                return v4;
            }
        }
        *node = 0;
        strcat@GLIBC_2.0(a1, &v2);
        v0 = &v1;
        v8 = &v1;
        v9 = 0xffffffff;
        do
        {
            v10 = v8;
        } while (v9 && (v9 -= 1, v8 = v10 + 1, *v10));
        if (v9 != 0xfffffffe)
        {
            strcat@GLIBC_2.0(a1, " ");
            strcat@GLIBC_2.0(a1, v0);
        }
        v4 = strcat@GLIBC_2.0(a1, "\n");
        if (!*v6)
            return v4;
        iter = v6 + 1;
    }
}

