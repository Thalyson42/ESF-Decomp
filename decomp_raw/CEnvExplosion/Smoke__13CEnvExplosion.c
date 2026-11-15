// Smoke__13CEnvExplosion @0xba620 size=255
typedef struct st_4ba620_0 {
    unsigned int field_0;
} st_4ba620_0;

extern st_4ba620_0 *g_engfuncs.pfnMessageBegin;
extern st_4ba620_0 *g_engfuncs.pfnMessageEnd;
extern st_4ba620_0 *g_engfuncs.pfnWriteByte;
extern st_4ba620_0 *g_engfuncs.pfnWriteShort;
extern st_4ba620_0 *g_engfuncs.pfnWriteCoord;
extern short g_sModelIndexSmoke;

int Smoke__13CEnvExplosion(float a0)
{
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0x2c]

    if (!(*(char *)(*(int *)a0 + 416) & 8))
    {
        g_engfuncs.pfnMessageBegin(5, 23, *(int *)a0 + 8, 0);
        g_engfuncs.pfnWriteByte(5);
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)a0 + 8));
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)a0 + 12));
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)a0 + 16));
        g_engfuncs.pfnWriteShort(g_sModelIndexSmoke);
        g_engfuncs.pfnWriteByte(*(char *)(*(unsigned int *)&a0 + 684));
        v0 = 12;
        g_engfuncs.pfnWriteByte(v0);
        g_engfuncs.pfnMessageEnd(v0);
    }
    v2 = *(int *)a0;
    if (!(*(char *)(*(int *)a0 + 416) & 2))
        v2 = UTIL_Remove(a0);
    return v2;
}

