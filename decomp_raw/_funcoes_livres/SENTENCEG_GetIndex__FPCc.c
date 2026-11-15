// SENTENCEG_GetIndex__FPCc @0x11cf00 size=131
extern unsigned int fSentencesInit;
extern char rgsentenceg;
extern unsigned int g_61f3b0[4];

unsigned int SENTENCEG_GetIndex__FPCc(int a0)
{
    unsigned int v0;  // esi

    if (fSentencesInit && a0)
    {
        v0 = 0;
        if (g_61f3b0)
        {
            do
            {
                if (!sub_488af0(a0, &(&rgsentenceg)[52 * v0]))
                    return v0;
            } while ((v0 += 1, g_61f3b0[13 * v0]));
        }
    }
    return 0xffffffff;
}

