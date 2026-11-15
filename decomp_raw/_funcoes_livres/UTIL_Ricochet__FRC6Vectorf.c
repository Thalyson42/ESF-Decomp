// UTIL_Ricochet__FRC6Vectorf @0x133dc0 size=199
typedef struct st_533dc0_0 {
    unsigned int field_0;
} st_533dc0_0;

extern st_533dc0_0 *g_engfuncs.pfnMessageBegin;
extern st_533dc0_0 *g_engfuncs.pfnMessageEnd;
extern st_533dc0_0 *g_engfuncs.pfnWriteByte;
extern st_533dc0_0 *g_engfuncs.pfnWriteCoord;

int UTIL_Ricochet__FRC6Vectorf(float *a0, float a1)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    int v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    g_engfuncs.pfnMessageBegin(4, 23, a0, 0, v0, v1, v2);
    g_engfuncs.pfnWriteByte(111);
    g_engfuncs.pfnWriteCoord(*a0);
    g_engfuncs.pfnWriteCoord(a0[1]);
    g_engfuncs.pfnWriteCoord(a0[2]);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (int)(a1 * 10.0);
    g_engfuncs.pfnWriteByte(v3);
    return g_engfuncs.pfnMessageEnd(v3);
}

