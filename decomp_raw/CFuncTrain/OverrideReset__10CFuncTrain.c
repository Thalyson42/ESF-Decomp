// OverrideReset__10CFuncTrain @0xea5b0 size=249
extern char Next__10CFuncTrain;
extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;

int OverrideReset__10CFuncTrain(float idx)
{
    unsigned int *v1;  // ecx
    unsigned int v2;  // edi
    unsigned int *v3;  // edx
    unsigned int v4;  // eax
    unsigned int *v5;  // ecx

    v1 = *(int *)idx + 32;
    v2 = 0;
    if (g_vecZero == *(float *)(*(int *)idx + 32) && g_vecZero+4 == *(float *)&v1[1])
        v2 = g_vecZero+8 == *(float *)&v1[2];
    if (v2)
        return g_vecZero+8;
    v3 = *(int *)idx;
    if (*(float *)&v3[65] != 0.0f)
    {
        v3[114] = v3[117];
        v4 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 172))(idx);
        if (!v4)
        {
            *(unsigned int *)(*(int *)idx + 260) = 0;
            v5 = *(int *)idx;
            *(float *)&v5[8] = g_vecZero;
            *(float *)&v5[9] = g_vecZero+4;
            *(float *)&v5[10] = g_vecZero+8;
        }
        else
        {
            *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v4, 0, 0) | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 16) = &Next__10CFuncTrain;
            *(float *)(*(int *)idx + 260) = (float)(0.1 + *(float *)(*(int *)idx + 0x100));
        }
    }
    return g_vecZero+8;
}

