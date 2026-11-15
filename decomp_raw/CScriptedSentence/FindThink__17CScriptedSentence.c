// FindThink__17CScriptedSentence @0x116b40 size=175
typedef struct st_516b40_0 {
    float field_0;
} st_516b40_0;

extern char DelayThink__17CScriptedSentence;
extern st_516b40_0 *gpGlobals;

unsigned int * FindThink__17CScriptedSentence(float idx)
{
    int v1;  // eax
    unsigned int v2;  // eax

    v1 = sub_48a7d0(idx);
    if (!v1)
    {
        *(float *)(*(int *)idx + 260) = (float)(*(float *)gpGlobals + *(float *)(*(unsigned int *)&idx + 276) + 0.5);
        return gpGlobals;
    }
    sub_489560(idx, v1);
    v2 = *(int *)idx;
    if (*(char *)(*(int *)idx + 416) & 1)
        v2 = sub_48cc00(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v2, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &DelayThink__17CScriptedSentence;
    *(float *)(*(int *)idx + 260) = *(float *)gpGlobals + *(float *)(*(unsigned int *)&idx + 272) + *(float *)(*(unsigned int *)&idx + 276);
    *(unsigned int *)(*(unsigned int *)&idx + 288) = 0;
    return gpGlobals;
}

