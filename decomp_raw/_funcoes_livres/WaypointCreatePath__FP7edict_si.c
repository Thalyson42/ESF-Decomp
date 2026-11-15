// WaypointCreatePath__FP7edict_si @0x189ae0 size=334
typedef struct st_589ae0_0 {
    unsigned int field_0;
} st_589ae0_0;

extern void waypoint1.2799;
extern void waypoint2.2800;
extern st_589ae0_0 *g_616834;

unsigned int WaypointCreatePath__FP7edict_si(int a0, unsigned int a1)
{
    unsigned int v4;  // eax
    unsigned int v0;  // [bp-0x30]
    float v1;  // [bp-0x2c]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]

    if (a1 == 1)
    {
        *(unsigned int *)&waypoint1.2799 = sub_48e090(a0, 50.0f, -0x1);
        if (*(int *)&waypoint1.2799 == 0xffffffff)
        {
            v3 = 100;
            v2 = 0;
            v1 = 0.800000011920929f;
            v0 = 0x3f800000;
            v4 = "common/wpn_moveselect.wav";
        }
        else
        {
            v3 = 100;
            v2 = 0;
            v1 = 0.800000011920929f;
            v0 = 0x3f800000;
            v4 = "common/wpn_hudoff.wav";
        }
    }
    else if (a1 == 2)
    {
        *(unsigned int *)&waypoint2.2800 = sub_48e090(a0, 50.0f, -0x1);
        if (*(int *)&waypoint1.2799 != 0xffffffff && *(int *)&waypoint2.2800 != 0xffffffff)
        {
            sub_48bc80(*(short *)&waypoint1.2799, *(short *)&waypoint2.2800);
            return g_616834(a0, 1, "common/wpn_hudon.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        }
        v3 = 100;
        v2 = 0;
        v1 = 0.800000011920929f;
        v0 = 0x3f800000;
        v4 = "common/wpn_denyselect.wav";
    }
    else
    {
        return a1;
    }
    return g_616834(a0, 1, v4);
}

