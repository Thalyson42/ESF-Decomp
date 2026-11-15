// RunAI__12CBaseMonster @0xdacb0 size=443
typedef struct st_4dacb0_1 {
    char padding_0[120];
    unsigned int field_78;
} st_4dacb0_1;

typedef struct st_4dacb0_0 {
    unsigned int field_0;
} st_4dacb0_0;

extern st_4dacb0_0 *g_engfuncs.pfnFindClientInPVS;
extern st_4dacb0_0 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_4dacb0_0 *g_engfuncs.pfnRandomLong;

unsigned int RunAI__12CBaseMonster(float idx)
{
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    st_4dacb0_1 *v8;  // esi
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    int v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0x8]
    unsigned short v4;  // [bp-0x6]

    if ((*(int *)(*(unsigned int *)&idx + 384) == 1 || *(int *)(*(unsigned int *)&idx + 384) == 3) && !g_engfuncs.pfnRandomLong(0, 99) && !(*(char *)(*(int *)idx + 420) & 2))
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 492))(idx);
    if (*(int *)(*(unsigned int *)&idx + 384) && *(int *)(*(unsigned int *)&idx + 384) != 5 && *(int *)(*(unsigned int *)&idx + 384) != 8)
    {
        v6 = g_engfuncs.pfnFindClientInPVS(*(int *)(*(int *)idx + 520));
        v1 = 0;
        if (!v6 || !g_engfuncs.pfnEntOffsetOfPEntity(v6))
            v1 = 1;
        if (!v1 || *(int *)(*(unsigned int *)&idx + 384) == 2)
        {
            v4 = __fnstcw();
            v3 = v4 | 0xc00;
            v2 = (int)*(float *)(*(unsigned int *)&idx + 648);
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 236))(idx, v2);
            CBaseMonster::Listen(idx);
            v7 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 420))(idx);
            *(unsigned int *)(*(unsigned int *)&idx + 260) = *(int *)(*(unsigned int *)&idx + 260) & ~v7;
            CBaseMonster::GetEnemy(idx);
        }
        v8 = *(unsigned int *)&idx + 264;
        if (EHANDLE::__opi(v8))
        {
            v0 = *(int *)(*(unsigned int *)&idx + 96);
            v9 = EHANDLE::__opP11CBaseEntity(v8);
            (*(int *)(v0 + 384))(idx, v9);
        }
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 416))(idx);
    }
    CBaseMonster::FCheckAITrigger(idx);
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 456))(idx);
    v10 = CBaseMonster::MaintainSchedule(idx);
    *(char *)(*(unsigned int *)&idx + 261) = *(char *)(*(unsigned int *)&idx + 261) & 252;
    return v10;
}

