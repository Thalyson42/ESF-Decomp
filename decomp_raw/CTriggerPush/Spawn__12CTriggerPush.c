// Spawn__12CTriggerPush @0x12e710 size=226
extern char ToggleUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf;
extern float g_vecZero;
extern float g_616790;
extern float g_616794;

short Spawn__12CTriggerPush(float idx)
{
    unsigned int *v1;  // ecx
    unsigned int v2;  // edi
    unsigned int *v3;  // eax

    v1 = *(int *)idx + 80;
    v2 = 0;
    if (g_vecZero == *(float *)(*(int *)idx + 80) && g_616790 == *(float *)&v1[1])
        v2 = g_616794 == *(float *)&v1[2];
    if (v2)
        *(float *)(*(int *)idx + 84) = 360.0f;
    sub_489e50(idx);
    if (*(float *)(*(int *)idx + 504) == 0.0f)
        *(float *)(*(int *)idx + 504) = 100.0f;
    v3 = *(int *)idx;
    if ((char)v3[104] & 2)
        v3[67] = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 28) = _INSERT(v3, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 32) = &ToggleUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf;
    return sub_48db50(*(int *)idx, *(int *)idx + 8);
}

