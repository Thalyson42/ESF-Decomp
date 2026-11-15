// SENTENCEG_PlaySequentialSz__FP7edict_sPCcffiiii @0x11d0d0 size=150
extern unsigned int fSentencesInit;

int SENTENCEG_PlaySequentialSz__FP7edict_sPCcffiiii(int a0, int a1, float a2, float a3, int a4, int a5, int a6, int a7)
{
    int v1;  // edx
    int v2;  // esi
    char v0;  // [bp-0x44]

    if (fSentencesInit)
    {
        v0 = 0;
        v1 = sub_487db0(a1);
        if (v1 >= 0)
        {
            v2 = sub_48c2b0(v1, &v0, a6, a7);
            if (v2 < 0 || !v0)
                return v2;
            sub_489390(a0, 2, &v0, a2, a3, a4, a5);
            return v2;
        }
    }
    return -0x1;
}

