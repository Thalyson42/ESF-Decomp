// GetSenderNameFromTextMsg__10CChatClassPCcPc @0x148c50 size=280
unsigned int GetSenderNameFromTextMsg__10CChatClassPCcPc(unsigned int a0, char *a1, char *a2)
{
    char *v2;  // edx
    int v3;  // ecx
    char *v4;  // edi
    int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    int v0;  // [bp-0x108]
    char v1;  // [bp-0x104]

    if (a1 && *a1)
    {
        if (*a1 == 2)
        {
            v0 = 0;
            v1 = 0;
            memset@GLIBC_2.0(&v1 + 1, 0, 0xff);
            strcpy@GLIBC_2.0(&v1, a1 + 1);
            v2 = &v1;
            v3 = -0x1;
            do
            {
                v4 = v2;
            } while (v3 && (v3 -= 1, v2 = v4 + 1, *v4));
            v5 = ~v3 - 1;
            if (v0 < v5 && *&v1 && *&v1 != 58)
            {
                do
                {
                    v0 += 1;
                } while (v0 < v5 && (&v1)[v0] && (&v1)[v0] != 58 && v0 <= 31);
            }
            v6 = strncpy@GLIBC_2.0(a2, &v1, v0);
            a2[v0] = 0;
            return v6;
        }
        else
        {
            *(char *)&v7 = 0;
            *a2 = 0;
            return v7;
        }
    }
    *(char *)&v8 = 0;
    *a2 = 0;
    return v8;
}

