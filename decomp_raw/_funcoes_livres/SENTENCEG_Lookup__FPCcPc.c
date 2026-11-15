// SENTENCEG_Lookup__FPCcPc @0x11d640 size=154
extern int gcallsentences;
extern char gszallsentencenames;

int SENTENCEG_Lookup__FPCcPc(int a0, unsigned short *a1)
{
    int v1;  // esi
    char v0;  // [bp-0xc]

    v1 = 0;
    if (0 < gcallsentences)
    {
        do
        {
            if (!strcasecmp@GLIBC_2.0(&(&gszallsentencenames)[16 * v1], a0 + 1))
            {
                if (!a1)
                    return v1;
                *a1 = 33;
                sprintf@GLIBC_2.0(&v0, "%d", v1);
                strcat@GLIBC_2.0(a1, &v0);
                return v1;
            }
        } while ((v1 += 1, v1 < gcallsentences));
    }
    return -0x1;
}

