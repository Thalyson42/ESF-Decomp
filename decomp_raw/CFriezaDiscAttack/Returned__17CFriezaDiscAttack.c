// Returned__17CFriezaDiscAttack @0xbff90 size=332
typedef struct st_4bff90_1 {
    float field_0;
} st_4bff90_1;

typedef struct st_4bff90_0 {
    unsigned int field_0;
} st_4bff90_0;

extern char AuraCheck__11CDiscAttack;
extern st_4bff90_0 *g_engfuncs.pfnIndexOfEdict;
extern st_4bff90_1 *gpGlobals;

int Returned__17CFriezaDiscAttack(float idx)
{
    unsigned int *v5;  // edx
    unsigned int *v6;  // edx
    unsigned int *v7;  // eax
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    int v3;  // [bp-0x8]

    if (*(int *)(*(int *)idx + 408))
    {
        UTIL_SetOrigin(*(int *)idx, (!*(int *)(*(int *)idx + 408) ? 0 : *(int *)(*(int *)idx + 408) + 128) + 8);
        v3 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)idx + 408));
        *(float *)(*(int *)idx + 336) = (float)v3;
    }
    *(char *)(*(int *)idx + 280) = *(char *)(*(int *)idx + 280) & 251;
    v5 = *(int *)idx;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v5[8] = v0;
    v5[9] = v1;
    v5[10] = v2;
    v6 = *(int *)idx;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v6[20] = v0;
    v6[21] = v1;
    v6[22] = v2;
    v7 = *(int *)idx;
    *(float *)&v7[81] = (float)(0.5 * *(float *)&v7[81]);
    *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v7, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &AuraCheck__11CDiscAttack;
    *(float *)(*(int *)idx + 260) = *(float *)gpGlobals;
    CDiscAttack::AuraCheck(idx);
    return EMIT_SOUND_DYN(*(int *)(*(int *)idx + 520), 1, "weapons/rotating.wav", 0, 0, 32, 100);
}

