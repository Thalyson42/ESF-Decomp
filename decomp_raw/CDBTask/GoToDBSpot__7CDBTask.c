// GoToDBSpot__7CDBTask @0x16c270 size=579
extern float g_vecZero;
extern float g_616790;
extern float g_616794;
extern unsigned int GatherDBPosForTeamGood;
extern unsigned int g_625c24;
extern unsigned int g_625c28;
extern unsigned int GatherDBPosForTeamEvil;
extern unsigned int g_625c30;
extern unsigned int g_625c34;

int GoToDBSpot__7CDBTask(float index)
{
    unsigned int v16;  // edi
    unsigned int v17;  // edi
    unsigned int idx;  // esi
    unsigned int v19;  // eax
    unsigned int v20;  // eax
    unsigned int v0;  // [bp-0x64]
    unsigned int v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x5c]
    unsigned int v3;  // [bp-0x58]
    unsigned int v4;  // [bp-0x54]
    unsigned int v5;  // [bp-0x50]
    char v6;  // [bp-0x44], Other Possible Types: unsigned int
    unsigned int v7;  // [bp-0x40]
    unsigned int v8;  // [bp-0x3c]
    char v9;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v10;  // [bp-0x34]
    unsigned int v11;  // [bp-0x30]
    unsigned int v12;  // [bp-0x24]
    unsigned int v13;  // [bp-0x20]
    unsigned int v14;  // [bp-0x1c]

    v16 = 0;
    if (g_vecZero == *(float *)&GatherDBPosForTeamGood && g_616790 == *(float *)&g_625c24)
        v16 = g_616794 == *(float *)&g_625c28;
    if (v16)
        return v20;
    v17 = 0;
    if (g_vecZero == *(float *)&GatherDBPosForTeamEvil && g_616790 == *(float *)&g_625c30)
        v17 = g_616794 == *(float *)&g_625c34;
    if (!v17)
    {
        if (*(int *)(*(int *)(*(unsigned int *)&index + 12) + 556) == 1)
        {
            if (!(*(int *)(*(int *)(*(int *)(*(unsigned int *)&index + 8) + 96) + 228))(*(int *)(*(unsigned int *)&index + 8), &GatherDBPosForTeamGood))
                goto LABEL_56c490;
            if (*(int *)(*(int *)(*(unsigned int *)&index + 8) + 4104) != 0xffffffff)
                *(unsigned int *)(*(int *)(*(unsigned int *)&index + 8) + 4104) = 0xffffffff;
            if ((char)sub_48abc0(index))
                goto LABEL_56c42a;
            *(float *)&v12 = *(float *)&GatherDBPosForTeamGood;
            *(float *)&v13 = *(float *)&g_625c24;
            *(float *)&v14 = *(float *)&g_625c28;
            idx = *(int *)(*(unsigned int *)&index + 8);
            *(float *)&v0 = *(float *)&GatherDBPosForTeamGood;
            *(float *)&v1 = *(float *)&g_625c24;
            *(float *)&v2 = *(float *)&g_625c28;
            sub_48a170(&v6, idx, &v0);
            *(unsigned int *)(idx + 3088) = v6;
            *(unsigned int *)(idx + 3092) = v7;
            v19 = v8;
            goto LABEL_56c483;
        }
        else if ((*(int *)(*(int *)(*(int *)(*(unsigned int *)&index + 8) + 96) + 228))(*(int *)(*(unsigned int *)&index + 8), &GatherDBPosForTeamEvil))
        {
            if (*(int *)(*(int *)(*(unsigned int *)&index + 8) + 4104) != 0xffffffff)
                *(unsigned int *)(*(int *)(*(unsigned int *)&index + 8) + 4104) = 0xffffffff;
            if ((char)sub_48abc0(index))
            {
LABEL_56c42a:
                v19 = sub_4898c0(*(int *)(*(unsigned int *)&index + 8));
            }
            else
            {
                *(float *)&v0 = *(float *)&GatherDBPosForTeamEvil;
                *(float *)&v1 = *(float *)&g_625c30;
                *(float *)&v2 = *(float *)&g_625c34;
                idx = *(int *)(*(unsigned int *)&index + 8);
                *(float *)&v3 = *(float *)&GatherDBPosForTeamEvil;
                *(float *)&v4 = *(float *)&g_625c30;
                *(float *)&v5 = *(float *)&g_625c34;
                sub_48a170(&v9, idx, &v3);
                *(unsigned int *)(idx + 3088) = v9;
                *(unsigned int *)(idx + 3092) = v10;
                v19 = v11;
LABEL_56c483:
                *(unsigned int *)(idx + 3096) = v19;
            }
            v20 = _INSERT(v19, 0, 1);
            return v20;
        }
        else
        {
LABEL_56c490:
            if (*(int *)(*(int *)(*(unsigned int *)&index + 8) + 4132) != 0xffffffff)
            {
                sub_48bf80(index);
                return v20;
            }
        }
    }
    return v20;
}

