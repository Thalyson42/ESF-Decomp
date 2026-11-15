// SENTENCEG_GetIndex__FPCc @0x11cf00 size=131
extern unsigned int fSentencesInit;
extern char rgsentenceg;
extern unsigned int rgsentenceg+16[4];

unsigned int SENTENCEG_GetIndex__FPCc(int a0)
{
    unsigned int v0;  // esi

    if (fSentencesInit && a0)
    {
        v0 = 0;
        if (rgsentenceg+16)
        {
            do
            {
                if (!strcmp@GLIBC_2.0(a0, &(&rgsentenceg)[52 * v0]))
                    return v0;
            } while ((v0 += 1, rgsentenceg+16[13 * v0]));
        }
    }
    return 0xffffffff;
}

