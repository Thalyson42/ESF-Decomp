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
        sub_48c150(&v1, &(&rgsentenceg)[52 * a1]);
        sub_48d990(&v0, "%d", a2);
        sub_48c150(&v1, &v0);
        return sub_489390(a0, 2, &v1, 0, 0, 32, 100);
    }
    else
    {
        return &fSentencesInit;
    }
}

