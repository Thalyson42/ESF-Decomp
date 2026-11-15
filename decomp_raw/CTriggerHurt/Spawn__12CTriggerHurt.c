// Spawn__12CTriggerHurt @0x12c5a0 size=228
typedef struct st_52c5a0_1 {
    float field_0;
} st_52c5a0_1;

typedef struct st_52c5a0_0 {
    unsigned int field_0;
} st_52c5a0_0;

extern char RadiationThink__12CTriggerHurt;
extern char ToggleUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf;
extern char HurtTouch__12CBaseTriggerP11CBaseEntity;
extern st_52c5a0_0 *g_61692c;
extern st_52c5a0_1 *gpGlobals;

int Spawn__12CTriggerHurt(float idx)
{
    unsigned int *v2;  // eax

    *(unsigned int *)(*(unsigned int *)&idx + 20) = _INSERT(sub_489e50(idx), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 24) = &HurtTouch__12CBaseTriggerP11CBaseEntity;
    v2 = *(int *)idx;
    if (v2[115])
    {
        v2 = _INSERT(v2, 0, 0) | 0xffff0000;
        *(unsigned int **)(*(unsigned int *)&idx + 28) = v2;
        *(char **)(*(unsigned int *)&idx + 32) = &ToggleUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 28) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 32) = 0;
    }
    if (*(char *)(*(unsigned int *)&idx + 254) & 4)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v2, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &RadiationThink__12CTriggerHurt;
        g_61692c(0, 0.5f);
        *(float *)(*(int *)idx + 260) = (float)(0.5 + *(float *)gpGlobals);
    }
    if (*(char *)(*(int *)idx + 416) & 2)
        *(unsigned int *)(*(int *)idx + 268) = 0;
    return sub_48db50(*(int *)idx, *(int *)idx + 8);
}

