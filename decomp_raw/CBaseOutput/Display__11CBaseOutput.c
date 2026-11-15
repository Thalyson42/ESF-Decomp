// Display__11CBaseOutput @0x16cbf0 size=174
extern int g_5aeddc;

unsigned int Display__11CBaseOutput(char *a0)
{
    char *v3;  // esi
    unsigned int v4;  // eax
    unsigned int v5;  // ecx
    char *v6;  // edi
    char *v7;  // edi
    unsigned int v8;  // eax
    char v0;  // [bp-0x84]
    char v1;  // [bp-0x83]
    char v2;  // [bp-0x5]

    v3 = a0;
    v4 = strcmp@GLIBC_2.0(v3, &g_5aeddc);
    if (!v4)
        return v4;
    v0 = 0;
    memset@GLIBC_2.0(&v1, 0, 127);
    v5 = 0xffffffff;
    v6 = v3;
    do
    {
        v7 = v6;
    } while (v5 && (v5 -= 1, v6 = v7 + 1, *v7));
    if (~v5 - 1 <= 126)
    {
        strcpy@GLIBC_2.0(&v0, v3);
    }
    else
    {
        strncpy@GLIBC_2.0(&v0, v3, 127);
        v2 = 0;
    }
    v8 = _INSERT(UTIL_Printf(&v0, 1, 0), 0, 0);
    *v3 = 0;
    return v8;
}

