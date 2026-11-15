// SearchNearestWPForDBSpot__4CBot @0x16a680 size=299
typedef struct st_56a680_0 {
    char padding_0[428];
    int field_1ac;
    char padding_1b0[88];
    int field_208;
} st_56a680_0;

extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;
extern unsigned int GatherDBPosForTeamGood[3];
extern unsigned int GatherDBPosForTeamGood+4;
extern unsigned int GatherDBPosForTeamGood+8;
extern unsigned int GatherDBPosForTeamEvil[3];
extern unsigned int GatherDBPosForTeamEvil+4;
extern unsigned int GatherDBPosForTeamEvil+8;

unsigned int SearchNearestWPForDBSpot__4CBot(st_56a680_0 **a0)
{
    unsigned int v6;  // edi
    unsigned int v7;  // edi
    unsigned int *v8;  // edx
    unsigned int v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]

    v6 = 0;
    if (g_vecZero == *(float *)&GatherDBPosForTeamGood && g_vecZero+4 == *(float *)&GatherDBPosForTeamGood+4)
        v6 = g_vecZero+8 == *(float *)&GatherDBPosForTeamGood+8;
    if (v6)
        return 0xffffffff;
    v7 = 0;
    if (g_vecZero == *(float *)&GatherDBPosForTeamEvil && g_vecZero+4 == *(float *)&GatherDBPosForTeamEvil+4)
        v7 = g_vecZero+8 == *(float *)&GatherDBPosForTeamEvil+8;
    if (!v7)
    {
        v8 = (*a0->field_1ac == 1 ? &GatherDBPosForTeamGood[0] : &GatherDBPosForTeamEvil[0]);
        v3 = *v8;
        v4 = v8[1];
        v5 = v8[2];
        v0 = v3;
        v1 = v4;
        v2 = v5;
        return WaypointFindNearest(&v0, *a0->field_208, 1000.0f, *a0->field_1ac);
    }
    return 0xffffffff;
}

