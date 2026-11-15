// UTIL_StringToVector__FPfPCc @0x133f00 size=385
void* UTIL_StringToVector__FPfPCc(void* a0, int a1)
{
    void* iter;  // esi
    void* v3;  // eax
    int node;  // edi
    double v5;  // mm7
    char *v0;  // [bp-0x8c]
    char v1;  // [bp-0x84]

    iter = &v1;
    strcpy@GLIBC_2.0(&v1, a1);
    v3 = &v1;
    node = 0;
    while (1)
    {
        v0 = &v1;
        __strtod_internal@GLIBC_2.0(v3, 0, 0);
        v3 = a0;
        *(float *)((char *)v3 + 4 * node) = (float)v5;
        while (1)
        {
            if (!*(char *)iter)
            {
LABEL_53405d:
                if (node > 1)
                    return v3;
                while (1)
                {
                    node += 1;
                    if (node > 2)
                        break;
                    *(unsigned int *)((char *)a0 + 4 * node) = 0;
                }
                return v3;
            }
            else if (*(char *)iter != 32)
            {
                iter += 1;
            }
            else if (*(char *)iter && (iter += 1, v3 = iter, node += 1, node <= 2))
            {
                break;
            }
            else
            {
                goto LABEL_53405d;
            }
        }
    }
}

