// WaypointDrawBeam__FP7edict_sG6VectorT1iiiiiii @0x189040 size=421
typedef struct st_589040_0 {
    unsigned int field_0;
} st_589040_0;

extern char g_waypoint_on;
extern st_589040_0 *g_616878;
extern st_589040_0 *g_61687c;
extern st_589040_0 *g_616880;
extern st_589040_0 *g_616888;
extern st_589040_0 *g_616894;
extern unsigned int m_iSpriteTexture;

char * WaypointDrawBeam__FP7edict_sG6VectorT1iiiiiii(unsigned int a0, float *a1, float *a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
    if (!g_waypoint_on)
        return &g_waypoint_on;
    g_616878(1, 23, 0, a0);
    g_616880(0);
    g_616894(*a1);
    g_616894(a1[1]);
    g_616894(a1[2]);
    g_616894(*a2);
    g_616894(a2[1]);
    g_616894(a2[2]);
    g_616888(m_iSpriteTexture);
    g_616880(1);
    g_616880(10);
    g_616880(10);
    g_616880(a3);
    g_616880(a4);
    g_616880(a5);
    g_616880(a6);
    g_616880(a7);
    g_616880(a8);
    g_616880(a9);
    return g_61687c();
}

