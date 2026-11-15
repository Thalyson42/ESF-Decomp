// GetChatTextFromTextMsg__10CChatClassPCcPc @0x148b60 size=240
int GetChatTextFromTextMsg__10CChatClassPCcPc(unsigned int a0, char *a1, char *a2)
{
    char *v1;  // esi
    unsigned int v2;  // ecx
    char *v3;  // edi
    unsigned int v4;  // esi
    char *v5;  // edx
    unsigned int v6;  // ecx
    char *v7;  // edi
    char *v8;  // edi
    unsigned int v9;  // eax
    char v0;  // [bp-0x104]

    if (a1 && *a1 && *a1 == 2)
    {
        v0 = 0;
        memset@GLIBC_2.0(&v0 + 1, 0, 0xff);
        v1 = &v0;
        strcpy@GLIBC_2.0(&v0, a1 + 1);
        v2 = 0xffffffff;
        do
        {
            v3 = v1;
        } while (v2 && (v2 -= 1, v1 = v3 + 1, *v3));
        v4 = 0;
        if (v2 != 0xfffffffe && *&v0 && *&v0 != 58)
        {
            v5 = &v0;
            do
            {
                v4 += 1;
                v6 = 0xffffffff;
                v7 = v5;
                do
                {
                    v8 = v7;
                } while (v6 && (v6 -= 1, v7 = v8 + 1, *v8));
            } while (v4 < ~v6 - 1 && (&v0)[v4] && (&v0)[v4] != 58);
        }
        return strcpy@GLIBC_2.0(a2, &(&v0)[2 + v4]);
    }
    *(char *)&v9 = 0;
    *a2 = 0;
    return v9;
}

