// EjectBrass__FRC6VectorT0fii @0x137540 size=284
typedef struct st_537540_0 {
    unsigned int field_0;
} st_537540_0;

extern st_537540_0 *g_engfuncs.pfnMessageBegin;
extern st_537540_0 *g_engfuncs.pfnMessageEnd;
extern st_537540_0 *g_engfuncs.pfnWriteByte;
extern st_537540_0 *g_engfuncs.pfnWriteShort;
extern st_537540_0 *g_engfuncs.pfnWriteAngle;
extern st_537540_0 *g_engfuncs.pfnWriteCoord;

int EjectBrass__FRC6VectorT0fii(float *a0, float *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(4, 23, a0, 0, v0, v1, v2);
    g_engfuncs.pfnWriteByte(106);
    g_engfuncs.pfnWriteCoord(*a0);
    g_engfuncs.pfnWriteCoord(a0[1]);
    g_engfuncs.pfnWriteCoord(a0[2]);
    g_engfuncs.pfnWriteCoord(*a1);
    g_engfuncs.pfnWriteCoord(a1[1]);
    g_engfuncs.pfnWriteCoord(a1[2]);
    g_engfuncs.pfnWriteAngle(a2);
    g_engfuncs.pfnWriteShort(a3);
    g_engfuncs.pfnWriteByte(a4);
    g_engfuncs.pfnWriteByte(25);
    return g_engfuncs.pfnMessageEnd(25);
}

