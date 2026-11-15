// USENTENCEG_Pick__FiPc @0x11cde0 size=279
extern unsigned int fSentencesInit;
extern char rgsentenceg;
extern char rgsentenceg+16[4];
extern char rgsentenceg+20[4];

unsigned int USENTENCEG_Pick__FiPc(int a0, unsigned short *a1)
{
    unsigned int v5;  // edi
    unsigned int v6;  // eax
    unsigned int v7;  // esi
    char v8;  // dl
    char v9;  // dl
    char *v10;  // eax
    char *v0;  // [bp-0x18]
    char v1;  // [bp-0x12]
    char v2;  // [bp-0x11]
    int v3;  // [bp-0x10]
    char v4;  // [bp-0xc]

    v5 = 0;
    if (!fSentencesInit || a0 < 0)
        return 0xffffffff;
    v6 = a0 * 52;
    v3 = &(&rgsentenceg)[v6];
    v2 = rgsentenceg+16[v6];
    v7 = &rgsentenceg+20[v6];
    v0 = &v4;
    do
    {
        v8 = 0;
        if (0 < v2)
        {
            if (*(char *)v7 != 0xff)
            {
                v1 = *(char *)v7;
                *(char *)v7 = 0xff;
                goto LABEL_51ce90;
            }
            else
            {
                while (1)
                {
                    v9 = v8 + 1;
                    if (v8 + 1 >= v2)
                        break;
                    v10 = v9;
                    v8 = v9;
                    if (v10[v7] != 0xff)
                    {
                        v1 = v10[v7];
                        v10[v7] = 0xff;
                        v5 = 1;
                        break;
                    }
                }
            }
        }
        if (v5)
        {
LABEL_51ce90:
            *a1 = 33;
            strcat@GLIBC_2.0(a1, v3);
            sprintf@GLIBC_2.0(v0, "%d", v1);
            strcat@GLIBC_2.0(a1, v0);
            return v1;
        }
    } while ((USENTENCEG_InitLRU(v7, v2), 1));
    return 0xffffffff;
}

