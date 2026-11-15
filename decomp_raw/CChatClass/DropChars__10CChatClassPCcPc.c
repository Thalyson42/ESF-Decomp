// DropChars__10CChatClassPCcPc @0x1489e0 size=265
typedef struct st_5489e0_0 {
    unsigned int field_0;
} st_5489e0_0;

extern st_5489e0_0 *g_engfuncs.pfnRandomLong;

char DropChars__10CChatClassPCcPc(unsigned int a0, int a1, char *a2)
{
    char *v3;  // esi
    unsigned int v4;  // ecx
    char *v5;  // edi
    char *v6;  // edi
    unsigned int v7;  // eax
    char *v8;  // edi
    unsigned int v9;  // eax
    char *v10;  // edx
    char *iter;  // ecx
    char v0;  // [bp-0xd]
    int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    v3 = a2;
    v1 = 0;
    strcpy@GLIBC_2.0(v3, a1);
    v4 = 0xffffffff;
    v5 = v3;
    do
    {
        v6 = v5;
    } while (v4 && (v4 -= 1, v5 = v6 + 1, *v6));
    v7 = ~v4;
    v2 = v7 - 1;
    v8 = g_engfuncs.pfnRandomLong(1, v7 - 2);
    v0 = 0;
    v9 = isalpha@GLIBC_2.0(*(char *)(v8 + v3));
    if (!v9 || *(char *)(v3 + v8 - 1) == 37)
        v0 = 1;
    if (v0)
    {
        if (v1 <= 19)
        {
            v3 = v3;
            do
            {
                v8 = g_engfuncs.pfnRandomLong(1, v2 - 1);
                v0 = 0;
                v9 = isalpha@GLIBC_2.0(*(char *)(v8 + v3));
                if (!v9 || *(char *)(v3 + v8 - 1) == 37)
                    v0 = 1;
            } while ((v1 += 1, v0 && v1 <= 19));
        }
        else
        {
            return v9;
        }
    }
    if (v1 > 19)
        return v9;
    v10 = v3 + v8 + 1;
    iter = v8 + v3;
    if (*v10)
    {
        do
        {
            *iter = *v10;
            v10 += 1;
            iter += 1;
        } while (*v10);
    }
    *(char *)&v9 = *v10;
    *iter = *v10;
    return v9;
}

