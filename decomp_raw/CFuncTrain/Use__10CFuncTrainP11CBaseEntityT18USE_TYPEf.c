// Use__10CFuncTrainP11CBaseEntityT18USE_TYPEf @0xe9c60 size=216
typedef struct st_4e9c60_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4e9c60_0;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4e9c60_0 *gpGlobals;

unsigned int Use__10CFuncTrainP11CBaseEntityT18USE_TYPEf(float a0)
{
    unsigned int *v1;  // eax
    unsigned int v2;  // eax
    unsigned int *v3;  // edx
    unsigned int *v4;  // ecx
    unsigned int *v5;  // edx

    v1 = *(int *)a0;
    if ((char)v1[104] & 1)
    {
        *(char *)&v1[104] = (char)v1[104] & 254;
        v2 = CFuncTrain::Next(a0);
    }
    else
    {
        *(char *)(*(int *)a0 + 416) = *(char *)(*(int *)a0 + 416) | 1;
        v3 = *(int *)a0;
        if (v3[100])
            v3[114] = *(int *)(v3[100] + 588);
        *(unsigned int *)(*(int *)a0 + 260) = 0;
        v4 = *(int *)a0;
        v4[8] = g_vecZero;
        v4[9] = g_vecZero+4;
        v2 = g_vecZero+8;
        v4[10] = g_vecZero+8;
        v5 = *(int *)a0;
        if (v5[123])
            v2 = EMIT_SOUND_DYN(v5[130], 2, v5[123] + gpGlobals->field_98, *(float *)(*(unsigned int *)&a0 + 264), 0.800000011920929f, 0, 100);
    }
    return v2;
}

