// Wait__10CFuncTrain @0xe9d40 size=515
typedef struct st_4e9d40_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4e9d40_0;

extern char Next__10CFuncTrain;
extern st_4e9d40_0 *gpGlobals;

int Wait__10CFuncTrain(float idx)
{
    unsigned int *v1;  // eax
    unsigned int *v2;  // esi
    unsigned int *v3;  // edx
    unsigned int v4;  // eax
    unsigned int *v5;  // esi
    unsigned int *v6;  // edx
    unsigned int *v7;  // eax

    if (*(int *)(*(int *)(*(unsigned int *)&idx + 268) + 468))
    {
        FireTargets(*(int *)(*(int *)(*(unsigned int *)&idx + 268) + 468) + gpGlobals->field_98, idx, idx, 3, 0);
        if (*(char *)(*(int *)(*(unsigned int *)&idx + 268) + 416) & 4)
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 268) + 468) = 0;
    }
    if (!(*(char *)(*(int *)(*(unsigned int *)&idx + 268) + 416) & 1) && !(*(char *)(*(int *)idx + 416) & 1))
    {
        if (*(float *)(*(unsigned int *)&idx + 140) != 0.0f)
        {
            v1 = *(int *)idx;
            *(float *)&v1[65] = *(float *)(*(unsigned int *)&idx + 140) + *(float *)&v1[64];
            v2 = *(int *)idx;
            if (v2[122])
                v1 = EMIT_SOUND_DYN(v2[130], 6, v2[122] + gpGlobals->field_98, 0, 0, 32, 100);
            v3 = *(int *)idx;
            if (v3[123])
                v1 = EMIT_SOUND_DYN(v3[130], 2, v3[123] + gpGlobals->field_98, *(float *)(*(unsigned int *)&idx + 264), 0.800000011920929f, 0, 100);
            v4 = _INSERT(v1, 0, 0);
            *(unsigned int *)(*(unsigned int *)&idx + 12) = v4 | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 16) = &Next__10CFuncTrain;
            return v4 | 0xffff0000;
        }
        else
        {
            return CFuncTrain::Next(idx);
        }
    }
    *(char *)(*(int *)idx + 416) = *(char *)(*(int *)idx + 416) | 1;
    v5 = *(int *)idx;
    if (v5[122])
        EMIT_SOUND_DYN(v5[130], 6, v5[122] + gpGlobals->field_98, 0, 0, 32, 100);
    v6 = *(int *)idx;
    if (v6[123])
        EMIT_SOUND_DYN(v6[130], 2, v6[123] + gpGlobals->field_98, *(float *)(*(unsigned int *)&idx + 264), 0.800000011920929f, 0, 100);
    v7 = *(int *)idx;
    v7[65] = 0;
    return v7;
}

