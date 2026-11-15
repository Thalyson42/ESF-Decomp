// USENTENCEG_PickSequential__FiPcii @0x11cd20 size=189
extern unsigned int fSentencesInit;
extern char rgsentenceg;
extern char rgsentenceg+16[4];

int USENTENCEG_PickSequential__FiPcii(int a0, unsigned short *a1, int a2, unsigned int a3)
{
    int v2;  // esi
    unsigned int v3;  // eax
    int v4;  // eax
    char v0;  // [bp-0xd]
    char v1;  // [bp-0xc]

    v2 = a2;
    if (!fSentencesInit || a0 < 0)
        return -0x1;
    v3 = a0 * 52;
    v0 = rgsentenceg+16[v3];
    if (rgsentenceg+16[v3])
    {
        v4 = v0;
        if (v2 >= v4)
            v2 = v4 - 1;
        *a1 = 33;
        strcat@GLIBC_2.0(a1, &(&rgsentenceg)[v3]);
        sprintf@GLIBC_2.0(&v1, "%d", v2);
        strcat@GLIBC_2.0(a1, &v1);
        return (v2 < v0 ? v2 + 1 : !a3 ? v0 : 0);
    }
    return -0x1;
}

