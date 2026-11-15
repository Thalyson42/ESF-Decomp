// SENTENCEG_PlayRndI__FP7edict_siffii @0x11cf90 size=121
extern unsigned int fSentencesInit;

int SENTENCEG_PlayRndI__FP7edict_siffii(int a0, int a1)
{
    int v5;  // esi
    char v0;  // [bp-0x44]
    int v1;  // [bp+0xc]
    int v2;  // [bp+0x10]
    int v3;  // [bp+0x14]
    int v4;  // [bp+0x18]

    if (!fSentencesInit)
        return -0x1;
    v0 = 0;
    v5 = sub_48a9b0(a1, &v0);
    if (v5 <= 0)
        return v5;
    sub_489390(a0, 2, &v0, v1, v2, v3, v4);
    return v5;
}

