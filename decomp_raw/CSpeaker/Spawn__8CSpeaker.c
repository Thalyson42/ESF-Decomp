// Spawn__8CSpeaker @0x11e470 size=274
typedef struct st_51e470_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_51e470_0;

typedef struct st_51e470_1 {
    unsigned int field_0;
} st_51e470_1;

extern char ToggleUse__15CAmbientGenericP11CBaseEntityT18USE_TYPEf;
extern char SpeakerThink__8CSpeaker;
extern char SUB_Remove__11CBaseEntity;
extern st_51e470_1 *g_6168b4;
extern st_51e470_0 *gpGlobals;

unsigned int Spawn__8CSpeaker(float idx)
{
    char *v3;  // edx
    unsigned int v4;  // ecx
    char *v5;  // edi
    unsigned int *v6;  // eax
    unsigned int v7;  // eax
    unsigned int *v8;  // eax
    unsigned int *v10;  // eax
    float v0;  // [bp-0x3c]
    float v1;  // [bp-0x34]

    v3 = gpGlobals->field_98 + *(int *)(*(int *)idx + 468);
    if (*(int *)(*(unsigned int *)&idx + 100))
    {
        *(unsigned int *)(*(int *)idx + 268) = 0;
        v8 = *(int *)idx;
        v8[66] = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v8, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &SpeakerThink__8CSpeaker;
        v10 = *(int *)idx;
        v10[65] = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 28) = _INSERT(v10, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 32) = &ToggleUse__15CAmbientGenericP11CBaseEntityT18USE_TYPEf;
        return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    }
    if (*(int *)(*(int *)idx + 468))
    {
        v4 = 0xffffffff;
        do
        {
            v5 = v3;
        } while (v4 && (v4 -= 1, v3 = v5 + 1, *v5));
        if (v4 != 0xfffffffe)
        {
            *(unsigned int *)(*(int *)idx + 268) = 0;
            v8 = *(int *)idx;
            v8[66] = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v8, 0, 0) | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 16) = &SpeakerThink__8CSpeaker;
            v10 = *(int *)idx;
            v10[65] = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 28) = _INSERT(v10, 0, 0) | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 32) = &ToggleUse__15CAmbientGenericP11CBaseEntityT18USE_TYPEf;
            return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
        }
    }
    v6 = *(int *)idx;
    v1 = *(float *)&v6[4];
    v0 = *(float *)&v6[3];
    g_6168b4(4, "SPEAKER with no Level/Sentence! at: %f, %f, %f\n", (unsigned int)(*(float *)&v6[2] >> 0));
    *(float *)(*(int *)idx + 260) = (float)(0.1 + gpGlobals->field_0);
    v7 = _INSERT(gpGlobals, 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = v7 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &SUB_Remove__11CBaseEntity;
    return v7 | 0xffff0000;
}

