// UTIL_Model_FixAngles__FiG6Vector @0x134a90 size=173
typedef struct st_534a90_0 {
    unsigned int field_0;
} st_534a90_0;

extern unsigned int gmsgManipModel;
extern st_534a90_0 *g_engfuncs.pfnMessageBegin;
extern st_534a90_0 *g_engfuncs.pfnMessageEnd;
extern st_534a90_0 *g_engfuncs.pfnWriteByte;
extern st_534a90_0 *g_engfuncs.pfnWriteShort;
extern st_534a90_0 *g_engfuncs.pfnWriteCoord;

int UTIL_Model_FixAngles__FiG6Vector(unsigned int a0, float *a1)
{
    float v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(2, gmsgManipModel, 0, 0, v1, v2, v3);
    g_engfuncs.pfnWriteByte(3);
    g_engfuncs.pfnWriteShort(a0);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    v0 = a1[2];
    g_engfuncs.pfnWriteCoord(v0);
    return g_engfuncs.pfnMessageEnd(v0);
}

