// SENTENCEG_PlayRndSz__FP7edict_sPCcffii @0x11d010 size=183
typedef struct st_51d010_0 {
    unsigned int field_0;
} st_51d010_0;

extern unsigned int fSentencesInit;
extern st_51d010_0 *g_6168b4;

int SENTENCEG_PlayRndSz__FP7edict_sPCcffii(int a0, int a1, float a2, float a3, int a4, int a5)
{
    int v1;  // eax
    int v2;  // esi
    char v0;  // [bp-0x44]

    if (!fSentencesInit)
        return -0x1;
    v0 = 0;
    v1 = sub_487db0(a1);
    if (v1 < 0)
    {
        g_6168b4(1, "No such sentence group %s\n", a1);
        return -0x1;
    }
    v2 = sub_48a9b0(v1, &v0);
    if (v2 < 0 || !v0)
        return v2;
    sub_489390(a0, 2, &v0, a2, a3, a4, a5);
    return v2;
}

