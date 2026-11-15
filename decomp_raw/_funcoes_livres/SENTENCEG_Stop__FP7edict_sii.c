// SENTENCEG_Stop__FP7edict_sii @0x11d170 size=157
extern unsigned int fSentencesInit;
extern char rgsentenceg;

unsigned int * SENTENCEG_Stop__FP7edict_sii(int a0, int a1, int a2)
{
    char v0;  // [bp-0x4c]
    unsigned short v1;  // [bp-0x44]

    if (!fSentencesInit)
    {
        return &fSentencesInit;
    }
    else if (a1 < 0)
    {
        return &fSentencesInit;
    }
    else if (a2 >= 0)
    {
        v1 = 33;
        strcat@GLIBC_2.0(&v1, &(&rgsentenceg)[52 * a1]);
        sprintf@GLIBC_2.0(&v0, "%d", a2);
        strcat@GLIBC_2.0(&v1, &v0);
        return EMIT_SOUND_DYN(a0, 2, &v1, 0, 0, 32, 100);
    }
    else
    {
        return &fSentencesInit;
    }
}

