// GoToDBSpot__7CDBTask @0x16c270 size=579
extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;
extern unsigned int GatherDBPosForTeamGood;
extern unsigned int GatherDBPosForTeamGood+4;
extern unsigned int GatherDBPosForTeamGood+8;
extern unsigned int GatherDBPosForTeamEvil;
extern unsigned int GatherDBPosForTeamEvil+4;
extern unsigned int GatherDBPosForTeamEvil+8;

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
    if (g_vecZero == *(float *)&GatherDBPosForTeamGood && g_vecZero+4 == *(float *)&GatherDBPosForTeamGood+4)
        v16 = g_vecZero+8 == *(float *)&GatherDBPosForTeamGood+8;
    if (v16)
        return v20;
    v17 = 0;
    if (g_vecZero == *(float *)&GatherDBPosForTeamEvil && g_vecZero+4 == *(float *)&GatherDBPosForTeamEvil+4)
        v17 = g_vecZero+8 == *(float *)&GatherDBPosForTeamEvil+8;
    if (!v17)
    {
        if (*(int *)(*(int *)(*(unsigned int *)&index + 12) + 556) == 1)
        {
            if (!(*(int *)(*(int *)(*(int *)(*(unsigned int *)&index + 8) + 96) + 228))(*(int *)(*(unsigned int *)&index + 8), &GatherDBPosForTeamGood))
                goto LABEL_56c490;
            if (*(int *)(*(int *)(*(unsigned int *)&index + 8) + 4104) != 0xffffffff)
                *(unsigned int *)(*(int *)(*(unsigned int *)&index + 8) + 4104) = 0xffffffff;
            if ((char)CDBTask::CheckThrowToDBSpot(index))
                goto LABEL_56c42a;
            *(float *)&v12 = *(float *)&GatherDBPosForTeamGood;
            *(float *)&v13 = *(float *)&GatherDBPosForTeamGood+4;
            *(float *)&v14 = *(float *)&GatherDBPosForTeamGood+8;
            idx = *(int *)(*(unsigned int *)&index + 8);
            *(float *)&v0 = *(float *)&GatherDBPosForTeamGood;
            *(float *)&v1 = *(float *)&GatherDBPosForTeamGood+4;
            *(float *)&v2 = *(float *)&GatherDBPosForTeamGood+8;
            CBot::GetAimAngles(&v6, idx, &v0);
            *(unsigned int *)(idx + 3088) = v6;
            *(unsigned int *)(idx + 3092) = v7;
            v19 = v8;
            goto LABEL_56c483;
        }
        else if ((*(int *)(*(int *)(*(int *)(*(unsigned int *)&index + 8) + 96) + 228))(*(int *)(*(unsigned int *)&index + 8), &GatherDBPosForTeamEvil))
        {
            if (*(int *)(*(int *)(*(unsigned int *)&index + 8) + 4104) != 0xffffffff)
                *(unsigned int *)(*(int *)(*(unsigned int *)&index + 8) + 4104) = 0xffffffff;
            if ((char)CDBTask::CheckThrowToDBSpot(index))
            {
LABEL_56c42a:
                v19 = CBot::TurnAround(*(int *)(*(unsigned int *)&index + 8));
            }
            else
            {
                *(float *)&v0 = *(float *)&GatherDBPosForTeamEvil;
                *(float *)&v1 = *(float *)&GatherDBPosForTeamEvil+4;
                *(float *)&v2 = *(float *)&GatherDBPosForTeamEvil+8;
                idx = *(int *)(*(unsigned int *)&index + 8);
                *(float *)&v3 = *(float *)&GatherDBPosForTeamEvil;
                *(float *)&v4 = *(float *)&GatherDBPosForTeamEvil+4;
                *(float *)&v5 = *(float *)&GatherDBPosForTeamEvil+8;
                CBot::GetAimAngles(&v9, idx, &v3);
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
                CDBTask::HeadToNextDBWP(index);
                return v20;
            }
        }
    }
    return v20;
}

