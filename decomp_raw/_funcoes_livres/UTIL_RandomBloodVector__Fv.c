// UTIL_RandomBloodVector__Fv @0x133800 size=138
typedef struct st_533800_0 {
    unsigned int field_0;
} st_533800_0;

extern st_533800_0 *g_engfuncs.pfnRandomFloat;

unsigned int * UTIL_RandomBloodVector__Fv(void)
{
    float v0;  // [bp-0x28]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    unsigned int *idx;  // [bp+0x4]

    v0 = -1.0f;
    g_engfuncs.pfnRandomFloat(-1.0f, 0x3f800000);
    v1 = -1.0f;
    g_engfuncs.pfnRandomFloat(v0, 0x3f800000);
    v2 = -1.0f;
    g_engfuncs.pfnRandomFloat(0, 0x3f800000);
    *(float *)idx = v1;
    *(float *)&idx[1] = v2;
    *(float *)&idx[2] = -1.0f;
    return idx;
}

