// PlaySentence__12CBaseMonsterPCcfff @0xd9d00 size=134
typedef struct st_4d9d00_1 {
    char padding_0[140];
    struct st_4d9d00_2 *field_8c;
} st_4d9d00_1;

typedef struct st_4d9d00_2 {
    unsigned int field_0;
} st_4d9d00_2;

typedef struct st_4d9d00_0 {
    char padding_0[520];
    int field_208;
} st_4d9d00_0;

typedef struct st_4d9d00_3 {
    struct st_4d9d00_0 *field_0;
    char padding_4[92];
    struct st_4d9d00_1 *field_60;
} st_4d9d00_3;

unsigned int PlaySentence__12CBaseMonsterPCcfff(st_4d9d00_3 *a0, char *a1, unsigned int a2, int a3, int a4)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!a1)
        return v1;
    v0 = a0->field_60->field_8c(a0);
    if (!v0)
    {
        return v0;
    }
    else if (*a1 == 33)
    {
        return EMIT_SOUND_DYN(a0->field_0->field_208, 2, a1, a3, a4, 0, 100);
    }
    else
    {
        return SENTENCEG_PlayRndSz(a0->field_0->field_208, a1, a3, a4, 0, 100);
    }
}

