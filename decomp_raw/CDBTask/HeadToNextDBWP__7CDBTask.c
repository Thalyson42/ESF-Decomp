// HeadToNextDBWP__7CDBTask @0x16c9e0 size=214
typedef struct st_56c9e0_1 {
    char padding_0[8];
    struct st_56c9e0_2 *field_8;
    struct st_56c9e0_0 *field_c;
} st_56c9e0_1;

typedef struct st_56c9e0_2 {
    char padding_0[4088];
    unsigned int field_ff8;
    unsigned int field_ffc;
    unsigned int field_1000;
    unsigned int field_1004;
    unsigned int field_1008;
} st_56c9e0_2;

typedef struct st_56c9e0_0 {
    char padding_0[556];
    int field_22c;
} st_56c9e0_0;

typedef struct st_56c9e0_3 {
    float field_0;
} st_56c9e0_3;

extern st_56c9e0_3 *gpGlobals;
extern unsigned int waypoints+4[4];

char HeadToNextDBWP__7CDBTask(st_56c9e0_1 *a0)
{
    unsigned int v1;  // edx
    unsigned int *v2;  // esi
    unsigned int v3;  // edx
    char v0;  // [bp-0x5]

    v0 = 0;
    if ((char)CBot::ReachedGoalWP(a0->field_8))
        return 0;
    if (!(char)CBot::CurrentWPIsValid(a0->field_8))
    {
        v1 = WaypointFindReachable(a0->field_c, 1250.0f, a0->field_c->field_22c);
        if (v1 == 0xffffffff)
            return v0;
        a0->field_8->field_1008 = v1;
        v2 = a0->field_8;
        v3 = v1 * 16;
        v2[0x3fe] = *(int *)((char *)&waypoints+4[0] + v3);
        v2[0x3ff] = *(int *)((char *)&waypoints+4[0] + v3 + 4);
        v2[0x400] = *(int *)((char *)&waypoints+4[0] + v3 + 8);
        *(float *)&a0->field_8->field_1004 = *(float *)gpGlobals;
    }
    v0 = CBot::HeadToWaypoint(a0->field_8);
    return v0;
}

