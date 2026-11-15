// UTIL_StringToIntArray__FPiiPCc @0x134090 size=397
typedef struct st_534090_0 {
    struct st_534090_0 *field_0;
} st_534090_0;

st_534090_0 ** UTIL_StringToIntArray__FPiiPCc(st_534090_0 **a0, int a1, int a2)
{
    st_534090_0 **iter;  // esi
    st_534090_0 **v3;  // eax
    int node;  // edi
    char *v0;  // [bp-0x88]
    char v1;  // [bp-0x84]

    iter = &v1;
    strcpy@GLIBC_2.0(&v1, a2);
    v3 = &v1;
    node = 0;
    if (0 < a1)
    {
        while (1)
        {
            v0 = &v1;
            v3 = __strtol_internal@GLIBC_2.0(v3, 0, 10, 0);
            a0[node] = v3;
            while (1)
            {
                if (!*(char *)iter)
                    goto LABEL_53420a;
                if (*(char *)iter == 32)
                    break;
                iter = (char *)iter + 1;
            }
        }
    }
    while (1)
    {
LABEL_53420a:
        node += 1;
        if (node >= a1)
            break;
        v3 = a0;
        v3[node] = 0;
    }
    return v3;
}

