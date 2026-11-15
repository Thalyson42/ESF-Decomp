// UTIL_Model_Switch__Fi @0x134de0 size=108
typedef struct st_534de0_0 {
    unsigned int field_0;
} st_534de0_0;

extern unsigned int gmsgManipModel;
extern st_534de0_0 *g_engfuncs.pfnMessageBegin;
extern st_534de0_0 *g_engfuncs.pfnMessageEnd;
extern st_534de0_0 *g_engfuncs.pfnWriteByte;
extern st_534de0_0 *g_engfuncs.pfnWriteShort;

int UTIL_Model_Switch__Fi(unsigned int a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(2, gmsgManipModel, 0, 0, v0, v1, v2);
    g_engfuncs.pfnWriteByte(7);
    g_engfuncs.pfnWriteShort(a0);
    return g_engfuncs.pfnMessageEnd();
}

