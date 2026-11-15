// UTIL_VecToAngles__FRC6Vector @0x1317d0 size=75
typedef struct st_5317d0_0 {
    unsigned int field_0;
} st_5317d0_0;

extern st_5317d0_0 *g_engfuncs.pfnVecToAngles;

unsigned int * UTIL_VecToAngles__FRC6Vector(void)
{
    char v0;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int *idx;  // [bp+0x4]
    unsigned int v4;  // [bp+0x8]

    g_engfuncs.pfnVecToAngles(v4, &v0);
    *idx = v0;
    idx[1] = v1;
    idx[2] = v2;
    return idx;
}

