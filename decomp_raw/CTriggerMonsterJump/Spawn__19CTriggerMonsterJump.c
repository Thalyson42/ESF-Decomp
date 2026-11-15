// Spawn__19CTriggerMonsterJump @0x12bec0 size=149
extern char ToggleUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf;

int Spawn__19CTriggerMonsterJump(float idx)
{
    unsigned int *v1;  // eax
    unsigned int v2;  // eax

    sub_48ccb0(*(int *)idx);
    sub_489e50(idx);
    *(unsigned int *)(*(int *)idx + 260) = 0;
    *(float *)(*(int *)idx + 504) = 200.0f;
    *(float *)(*(unsigned int *)&idx + 208) = 150.0f;
    v1 = *(int *)idx;
    if (!v1[115])
        return v1;
    v1[67] = 0;
    v2 = _INSERT(sub_48db50(*(int *)idx, *(int *)idx + 8), 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 28) = v2 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 32) = &ToggleUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf;
    return v2 | 0xffff0000;
}

