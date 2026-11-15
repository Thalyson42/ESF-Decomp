// memfgets__FPUciRiPci @0x11d970 size=172
typedef struct st_51d970_0 {
    char field_0;
} st_51d970_0;

int memfgets__FPUciRiPci(unsigned int a0, char *a1, st_51d970_0 **a2, int a3, int a4)
{
    char *v0;  // esi
    unsigned int v1;  // eax
    int v2;  // edi

    if (!a0 || !a3 || *a2 >= a1)
        return 0;
    v0 = *a2;
    if (a1 - v0 > a4 - 1)
        a1 = &v0[a4] - 1;
    v1 = 0;
    if (v0 < a1)
    {
        do
        {
            if (v0[a0] == 10)
                v1 = 1;
        } while ((v0 += 1, v0 < a1 && !v1));
    }
    if (v0 != *a2)
    {
        v2 = v0 - *a2;
        memcpy@GLIBC_2.0(a3, &(*a2)[a0], v2);
        if (v2 < a4)
            *(char *)(v2 + a3) = 0;
        *a2 = v0;
        return a3;
    }
    return 0;
}

