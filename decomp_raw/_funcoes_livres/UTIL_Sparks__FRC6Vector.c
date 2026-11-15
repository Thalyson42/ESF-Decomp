// UTIL_Sparks__FRC6Vector @0x133d20 size=150
typedef struct st_533d20_0 {
    unsigned int field_0;
} st_533d20_0;

extern st_533d20_0 *g_engfuncs.pfnMessageBegin;
extern st_533d20_0 *g_engfuncs.pfnMessageEnd;
extern st_533d20_0 *g_engfuncs.pfnWriteByte;
extern st_533d20_0 *g_engfuncs.pfnWriteCoord;

int UTIL_Sparks__FRC6Vector(float a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(4, 23, a0, 0, v0, v1, v2);
    g_engfuncs.pfnWriteByte(9);
    g_engfuncs.pfnWriteCoord(*(float *)a0);
    g_engfuncs.pfnWriteCoord(*(float *)(*(unsigned int *)&a0 + 4));
    g_engfuncs.pfnWriteCoord(*(float *)(*(unsigned int *)&a0 + 8));
    return g_engfuncs.pfnMessageEnd();
}

