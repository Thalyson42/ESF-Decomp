// EMIT_SOUND_SUIT__FP7edict_sPCc @0x11d790 size=158
typedef struct st_51d790_0 {
    unsigned int field_0;
} st_51d790_0;

extern st_51d790_0 *g_engfuncs.pfnCVarGetFloat;
extern st_51d790_0 *g_engfuncs.pfnRandomLong;

unsigned int EMIT_SOUND_SUIT__FP7edict_sPCc(double a0)
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
    return EMIT_SOUND_DYN(v1, 6, v2, v0, 0.800000011920929f, 0, v3);
}

