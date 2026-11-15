// WaypointDrawBeam__FP7edict_sG6VectorT1iiiiiii @0x189040 size=421
typedef struct st_589040_0 {
    unsigned int field_0;
} st_589040_0;

extern char g_waypoint_on;
extern st_589040_0 *g_engfuncs.pfnMessageBegin;
extern st_589040_0 *g_engfuncs.pfnMessageEnd;
extern st_589040_0 *g_engfuncs.pfnWriteByte;
extern st_589040_0 *g_engfuncs.pfnWriteShort;
extern st_589040_0 *g_engfuncs.pfnWriteCoord;
extern unsigned int m_iSpriteTexture;

char * WaypointDrawBeam__FP7edict_sG6VectorT1iiiiiii(unsigned int a0, float *a1, float *a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
    if (!g_waypoint_on)
        return &g_waypoint_on;
    g_engfuncs.pfnMessageBegin(1, 23, 0, a0);
    g_engfuncs.pfnWriteByte(0);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    g_engfuncs.pfnWriteCoord(a1[2]);
    g_engfuncs.pfnWriteCoord(*a2);
    g_engfuncs.pfnWriteCoord(a2[1]);
    g_engfuncs.pfnWriteCoord(a2[2]);
    g_engfuncs.pfnWriteShort(m_iSpriteTexture);
    g_engfuncs.pfnWriteByte(1);
    g_engfuncs.pfnWriteByte(10);
    g_engfuncs.pfnWriteByte(10);
    g_engfuncs.pfnWriteByte(a3);
    g_engfuncs.pfnWriteByte(a4);
    g_engfuncs.pfnWriteByte(a5);
    g_engfuncs.pfnWriteByte(a6);
    g_engfuncs.pfnWriteByte(a7);
    g_engfuncs.pfnWriteByte(a8);
    g_engfuncs.pfnWriteByte(a9);
    return g_engfuncs.pfnMessageEnd();
}

