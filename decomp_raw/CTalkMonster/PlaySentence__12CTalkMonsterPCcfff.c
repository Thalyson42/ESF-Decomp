// PlaySentence__12CTalkMonsterPCcfff @0x126950 size=181
typedef struct st_526950_0 {
    char padding_0[520];
    int field_208;
} st_526950_0;

typedef struct st_526950_1 {
    struct st_526950_0 *field_0;
    char padding_4[676];
    char field_2a8;
} st_526950_1;

typedef struct st_526950_2 {
    float field_0;
} st_526950_2;

extern unsigned int _12CTalkMonster.g_talkWaitTime;
extern st_526950_2 *gpGlobals;

unsigned int PlaySentence__12CTalkMonsterPCcfff(st_526950_1 *a0, char *a1, float a2, int a3, int a4)
{
    int v0;  // eax
    unsigned int v1;  // eax
    int v2;  // eax
    unsigned int v3;  // eax

    if (!a1)
        return v3;
    CTalkMonster::Talk(a0, a2);
    *(float *)&_12CTalkMonster.g_talkWaitTime = (float)(a2 + *(float *)gpGlobals + 2.0);
    if (*a1 == 33)
    {
        v0 = CTalkMonster::GetVoicePitch(a0);
        v1 = EMIT_SOUND_DYN(a0->field_0->field_208, 2, a1, a3, a4, 0, v0);
    }
    else
    {
        v2 = CTalkMonster::GetVoicePitch(a0);
        v1 = SENTENCEG_PlayRndSz(a0->field_0->field_208, a1, a3, a4, 0, v2);
    }
    a0->field_2a8 = a0->field_2a8 | 8;
    return v1;
}

