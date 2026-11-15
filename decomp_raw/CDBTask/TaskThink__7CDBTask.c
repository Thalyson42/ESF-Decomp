// TaskThink__7CDBTask @0x185b30 size=187
int TaskThink__7CDBTask(float idx)
{
    int v7;  // eax
    int v0;  // [bp-0x48]
    int v1;  // [bp-0x3c]
    int v2;  // [bp-0x38]
    int v3;  // [bp-0x24]
    unsigned short v4;  // [bp-0x20]
    unsigned short v5;  // [bp-0x1e]

    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)*(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 608);
    if (v3 <= 249)
    {
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 8) + 4200) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
        return v3;
    }
    v7 = (!(char)UTIL_DBsAreGathered(v1, v2) ? (!*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 1888) ? CDBTask::GoToDB(idx) : CDBTask::GoToDBSpot(idx)) : CDBTask::GoToGatheredSpot(idx));
    if ((char)v7)
    {
        *(unsigned short *)&v0 = 1;
        return CBot::ToggleTurbo(*(int *)(*(unsigned int *)&idx + 8), v0);
    }
    *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
    return v7;
}

