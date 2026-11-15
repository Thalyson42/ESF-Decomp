// SearchDBGatherSpot__4CBot @0x16a0d0 size=414
extern float g_vecZero;
extern float g_616790;
extern float g_616794;
extern unsigned int GatherDBPosForTeamGood;
extern unsigned int g_625c24;
extern unsigned int g_625c28;
extern unsigned int GatherDBPosForTeamEvil;
extern unsigned int g_625c30;
extern unsigned int g_625c34;
extern unsigned int num_waypoints;

char SearchDBGatherSpot__4CBot(float idx)
{
    unsigned int v4;  // edi
    unsigned int v5;  // edi
    unsigned int v6;  // eax
    unsigned int *v7;  // edx
    int v8;  // edi
    unsigned int *v9;  // edx
    unsigned int *v10;  // eax
    int v11;  // edx
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v4 = 0;
    if (g_vecZero == *(float *)&GatherDBPosForTeamGood && g_616790 == *(float *)&g_625c24)
        v4 = g_616794 == *(float *)&g_625c28;
    if (v4)
        return 0;
    v5 = 0;
    if (g_vecZero == *(float *)&GatherDBPosForTeamEvil && g_616790 == *(float *)&g_625c30)
        v5 = g_616794 == *(float *)&g_625c34;
    if (!v5 && *(int *)(*(unsigned int *)&idx + 1888))
    {
        if (*(int *)(*(int *)idx + 428) == 1)
        {
            v6 = *(int *)(*(unsigned int *)&idx + 96);
            v7 = &GatherDBPosForTeamGood;
        }
        else
        {
            v6 = *(int *)(*(unsigned int *)&idx + 96);
            v7 = &GatherDBPosForTeamEvil;
        }
        if ((*(int *)(v6 + 228))(idx, v7))
            return 1;
        v8 = -0x1;
        if (num_waypoints)
            v8 = sub_48c690(idx);
        if (v8 != -0x1)
        {
            v9 = *(int *)idx;
            v10 = v9 + 2;
            *(float *)&v0 = *(float *)&v9[2];
            *(float *)&v1 = *(float *)&v10[1];
            *(float *)&v2 = *(float *)&v10[2];
            v11 = sub_48a280(&v0, v9[130], 1750.0f, v9[107]);
            if (v11 != -0x1 && (unsigned short)sub_48cef0(v11, v8, *(int *)(*(int *)idx + 428)) != 0xffff)
            {
                *(int *)(*(unsigned int *)&idx + 4132) = v8;
                return 1;
            }
        }
    }
    return 0;
}

