// UTIL_Model_Connect__Fiii @0x134990 size=141
typedef struct st_534990_0 {
    unsigned int field_0;
} st_534990_0;

extern unsigned int gmsgManipModel;
extern st_534990_0 *g_engfuncs.pfnMessageBegin;
extern st_534990_0 *g_engfuncs.pfnMessageEnd;
extern st_534990_0 *g_engfuncs.pfnWriteByte;
extern st_534990_0 *g_engfuncs.pfnWriteShort;

int UTIL_Model_Connect__Fiii(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(2, gmsgManipModel, 0, 0, v0, v1, v2);
    g_engfuncs.pfnWriteByte(1);
    g_engfuncs.pfnWriteShort(a0);
    g_engfuncs.pfnWriteShort(a1);
    g_engfuncs.pfnWriteByte(a2);
    return g_engfuncs.pfnMessageEnd();
}

