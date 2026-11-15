// EmitExplosionRocks__12CPlayerMeleeG6VectorT1fii @0x10bf50 size=353
typedef struct st_50bf50_0 {
    unsigned int field_0;
} st_50bf50_0;

extern short g_sRockGibs;
extern st_50bf50_0 *g_engfuncs.pfnMessageBegin;
extern st_50bf50_0 *g_engfuncs.pfnMessageEnd;
extern st_50bf50_0 *g_engfuncs.pfnWriteByte;
extern st_50bf50_0 *g_engfuncs.pfnWriteShort;
extern st_50bf50_0 *g_engfuncs.pfnWriteCoord;

int EmitExplosionRocks__12CPlayerMeleeG6VectorT1fii(unsigned int a0, float *a1, float *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(4, 23, 0, 0, v0, v1, v2);
    g_engfuncs.pfnWriteByte(108);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    g_engfuncs.pfnWriteCoord(a1[2]);
    g_engfuncs.pfnWriteCoord(a3);
    g_engfuncs.pfnWriteCoord(a3);
    g_engfuncs.pfnWriteCoord(a3);
    g_engfuncs.pfnWriteCoord(*a2);
    g_engfuncs.pfnWriteCoord(a2[1]);
    g_engfuncs.pfnWriteCoord(a2[2]);
    g_engfuncs.pfnWriteByte(a4);
    g_engfuncs.pfnWriteShort(g_sRockGibs);
    g_engfuncs.pfnWriteByte(a5);
    g_engfuncs.pfnWriteByte(50);
    g_engfuncs.pfnWriteByte(0);
    return g_engfuncs.pfnMessageEnd(0);
}

