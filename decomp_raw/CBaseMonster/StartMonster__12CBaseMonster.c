// StartMonster__12CBaseMonster @0xd76f0 size=781
typedef struct st_4d76f0_2 {
    char padding_0[124];
    unsigned int field_7c;
} st_4d76f0_2;

typedef struct st_4d76f0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4d76f0_1;

typedef struct st_4d76f0_0 {
    unsigned int field_0;
} st_4d76f0_0;

extern char CallMonsterThink__12CBaseMonster;
extern st_4d76f0_0 *g_engfuncs.pfnFindEntityByString;
extern st_4d76f0_0 *g_engfuncs.pfnDropToFloor;
extern st_4d76f0_0 *g_engfuncs.pfnWalkMove;
extern st_4d76f0_0 *g_engfuncs.pfnAlertMessage;
extern st_4d76f0_0 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4d76f0_0 *g_engfuncs.pfnRandomFloat;
extern st_4d76f0_1 *gpGlobals;

int StartMonster__12CBaseMonster(double a0, float idx)
{
    unsigned int *v4;  // eax
    unsigned int *v5;  // eax
    st_4d76f0_2 *v6;  // eax
    unsigned int v7;  // eax
    unsigned int *v8;  // edx
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (CBaseAnimating::LookupActivity(idx, 28) != 0xffffffff)
        *(char *)(*(unsigned int *)&idx + 609) = *(char *)(*(unsigned int *)&idx + 609) | 8;
    if (CBaseAnimating::LookupActivity(idx, 29) != 0xffffffff)
        *(char *)(*(unsigned int *)&idx + 609) = *(char *)(*(unsigned int *)&idx + 609) | 16;
    if (CBaseAnimating::LookupActivity(idx, 30) != 0xffffffff)
        *(char *)(*(unsigned int *)&idx + 609) = *(char *)(*(unsigned int *)&idx + 609) | 32;
    if (CBaseAnimating::LookupActivity(idx, 31) != 0xffffffff)
        *(char *)(*(unsigned int *)&idx + 609) = *(char *)(*(unsigned int *)&idx + 609) | 64;
    v4 = *(int *)idx;
    if (v4[66] != 5 && (int)v4[104] >= 0)
    {
        *(float *)&v4[4] = (float)(1.0 + *(float *)&v4[4]);
        g_engfuncs.pfnDropToFloor(*(int *)(*(int *)idx + 520));
        if (!g_engfuncs.pfnWalkMove(*(int *)(*(int *)idx + 520), 0, 0, 0))
        {
            g_engfuncs.pfnAlertMessage(4, "Monster %s stuck in wall--level design error", *(int *)*(int *)idx + gpGlobals->field_98);
            *(unsigned int *)(*(int *)idx + 280) = 1;
        }
    }
    else
    {
        *(char *)(*(int *)idx + 421) = *(char *)(*(int *)idx + 421) & 253;
    }
    v5 = *(int *)idx;
    if (v5[114])
    {
        v6 = g_engfuncs.pfnFindEntityByString(0, "targetname", gpGlobals->field_98 + v5[114]);
        if (v6 || (v6 = g_engfuncs.pfnPEntityOfEntOffset(0), v6))
            v7 = v6->field_7c;
        else
            v7 = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 4) = v7;
        if (!v7)
        {
            v5 = g_engfuncs.pfnAlertMessage(4, "ReadyMonster()--%s couldn't find target %s", *(int *)*(int *)idx + gpGlobals->field_98, *(int *)(*(int *)idx + 456) + gpGlobals->field_98);
        }
        else
        {
            v8 = *(int *)*(int *)(*(unsigned int *)&idx + 4) + 8;
            *(float *)&v0 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 4) + 8);
            *(float *)&v1 = *(float *)&v8[1];
            *(float *)&v2 = *(float *)&v8[2];
            CBaseMonster::MakeIdealYaw(idx, &v0);
            *(unsigned int *)(*(unsigned int *)&idx + 532) = 16;
            if (*(int *)(*(int *)idx + 264) == 5)
                *(unsigned int *)(*(unsigned int *)&idx + 556) = 5;
            else
                *(unsigned int *)(*(unsigned int *)&idx + 556) = 3;
            if (!CBaseMonster::FRefreshRoute(idx))
                g_engfuncs.pfnAlertMessage(2, "Can't Create Route!\n");
            CBaseMonster::SetState(idx, 1);
            v5 = CBaseMonster::ChangeSchedule(idx, (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 340))(idx, 2));
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v5, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &CallMonsterThink__12CBaseMonster;
    g_engfuncs.pfnRandomFloat(0.10000000149011612f, 0.4000000059604645f);
    *(float *)(*(int *)idx + 260) = (float)(0.10000000149011612 + *(float *)(*(int *)idx + 260));
    if (!*(int *)(*(int *)idx + 460))
        return *(int *)idx;
    CBaseMonster::SetState(idx, 1);
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 376))(idx, 1);
    return CBaseMonster::ChangeSchedule(idx, (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 340))(idx, 0x22));
}

