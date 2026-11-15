// Spawn__13CMonsterMaker @0xd3500 size=261
typedef struct st_4d3500_0 {
    float field_0;
} st_4d3500_0;

extern unsigned int CyclicUse__13CMonsterMakerP11CBaseEntityT18USE_TYPEf;
extern unsigned int ToggleUse__13CMonsterMakerP11CBaseEntityT18USE_TYPEf;
extern unsigned int MakerThink__13CMonsterMaker;
extern unsigned int SUB_DoNothing__11CBaseEntity;
extern st_4d3500_0 *gpGlobals;

short Spawn__13CMonsterMaker(float idx)
{
    unsigned int *v1;  // eax
    unsigned int v3;  // eax
    unsigned int v4;  // edx
    unsigned int *v6;  // eax
    unsigned int v8;  // eax
    unsigned int v9;  // edx

    *(unsigned int *)(*(int *)idx + 268) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 688) = 0;
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    v1 = *(int *)idx;
    if (v1[115])
    {
        if ((char)v1[104] & 4)
        {
            v3 = _INSERT(v1, 0, 0) | 0xffff0000;
            v4 = &CyclicUse__13CMonsterMakerP11CBaseEntityT18USE_TYPEf;
        }
        else
        {
            v3 = _INSERT(v1, 0, 0) | 0xffff0000;
            v4 = &ToggleUse__13CMonsterMakerP11CBaseEntityT18USE_TYPEf;
        }
        *(unsigned int *)(*(unsigned int *)&idx + 28) = v3;
        *(unsigned int *)(*(unsigned int *)&idx + 32) = v4;
        v6 = *(int *)idx;
        if ((char)v6[104] & 1)
            goto LABEL_4d35b5;
        *(unsigned int *)(*(unsigned int *)&idx + 700) = 0;
        v8 = _INSERT(v6, 0, 0) | 0xffff0000;
        v9 = &SUB_DoNothing__11CBaseEntity;
    }
    else
    {
        v6 = gpGlobals;
        *(float *)(*(int *)idx + 260) = *(float *)gpGlobals + *(float *)(*(unsigned int *)&idx + 100);
LABEL_4d35b5:
        *(unsigned int *)(*(unsigned int *)&idx + 700) = 1;
        v8 = _INSERT(v6, 0, 0) | 0xffff0000;
        v9 = &MakerThink__13CMonsterMaker;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 12) = v8;
    *(unsigned int *)(*(unsigned int *)&idx + 16) = v9;
    if (*(int *)(*(unsigned int *)&idx + 684) == 1)
        *(unsigned int *)(*(unsigned int *)&idx + 704) = 0;
    else
        *(unsigned int *)(*(unsigned int *)&idx + 704) = 1;
    *(unsigned int *)(*(unsigned int *)&idx + 696) = 0;
    return v8;
}

