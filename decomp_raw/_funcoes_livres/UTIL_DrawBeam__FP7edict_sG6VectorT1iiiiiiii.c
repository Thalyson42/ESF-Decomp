// UTIL_DrawBeam__FP7edict_sG6VectorT1iiiiiiii @0x1794d0 size=408
typedef struct st_5794d0_0 {
    unsigned int field_0;
} st_5794d0_0;

extern st_5794d0_0 *g_engfuncs.pfnMessageBegin;
extern st_5794d0_0 *g_engfuncs.pfnMessageEnd;
extern st_5794d0_0 *g_engfuncs.pfnWriteByte;
extern st_5794d0_0 *g_engfuncs.pfnWriteShort;
extern st_5794d0_0 *g_engfuncs.pfnWriteCoord;
extern unsigned int m_iSpriteTexture;

int UTIL_DrawBeam__FP7edict_sG6VectorT1iiiiiiii(unsigned int a0, float *a1, float *a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(1, 23, 0, a0, v0, v1, v2);
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
    g_engfuncs.pfnWriteByte(a10);
    g_engfuncs.pfnWriteByte(a3);
    g_engfuncs.pfnWriteByte(a4);
    g_engfuncs.pfnWriteByte(a5);
    g_engfuncs.pfnWriteByte(a6);
    g_engfuncs.pfnWriteByte(a7);
    g_engfuncs.pfnWriteByte(a8);
    g_engfuncs.pfnWriteByte(a9);
    return g_engfuncs.pfnMessageEnd();
}

