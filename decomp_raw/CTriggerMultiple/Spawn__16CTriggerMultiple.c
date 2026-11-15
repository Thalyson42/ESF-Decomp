// Spawn__16CTriggerMultiple @0x12cd60 size=93
extern char MultiTouch__12CBaseTriggerP11CBaseEntity;

short Spawn__16CTriggerMultiple(float idx)
{
    unsigned int v1;  // eax

    if (*(float *)(*(unsigned int *)&idx + 140) == 0.0f)
        *(float *)(*(unsigned int *)&idx + 140) = 0.20000000298023224f;
    v1 = _INSERT(sub_489e50(idx), 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 20) = v1 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 24) = &MultiTouch__12CBaseTriggerP11CBaseEntity;
    return v1;
}

