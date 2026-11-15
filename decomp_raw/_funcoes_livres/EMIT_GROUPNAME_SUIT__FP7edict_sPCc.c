// EMIT_GROUPNAME_SUIT__FP7edict_sPCc @0x11d8d0 size=156
typedef struct st_51d8d0_0 {
    unsigned int field_0;
} st_51d8d0_0;

extern st_51d8d0_0 *g_engfuncs.pfnCVarGetFloat;
extern st_51d8d0_0 *g_engfuncs.pfnRandomLong;

unsigned int EMIT_GROUPNAME_SUIT__FP7edict_sPCc(double a0)
{
    int v3;  // edi
    double v4;  // mm7
    float v0;  // [bp-0x18]
    int v1;  // [bp+0x4]
    int v2;  // [bp+0x8]

    v3 = 100;
    g_engfuncs.pfnCVarGetFloat("suitvolume");
    v0 = (float)v4;
    if (g_engfuncs.pfnRandomLong(0, 1))
        v3 = g_engfuncs.pfnRandomLong(0, 6) + 98;
    return SENTENCEG_PlayRndSz(v1, v2, v0, 0.800000011920929f, 0, v3);
}

