// UTIL_DrawBeamToAll__FG6VectorT0iiiiiii @0x179670 size=201
typedef struct st_579670_0 {
    char padding_0[144];
    unsigned int field_90;
} st_579670_0;

typedef struct st_579670_2 {
    char padding_0[549];
    char field_225;
} st_579670_2;

typedef struct st_579670_1 {
    unsigned int field_0;
} st_579670_1;

extern st_579670_1 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_579670_0 *gpGlobals;

st_579670_0 * UTIL_DrawBeamToAll__FG6VectorT0iiiiiii(float *a0, float *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int iter;  // edi
    st_579670_2 *v7;  // esi
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    iter = 1;
    while (iter <= (int)gpGlobals->field_90)
    {
        v7 = g_engfuncs.pfnPEntityOfEntIndex(iter);
        if ((char)IsNull(v7))
        {
            iter += 1;
        }
        else if (!(v7->field_225 & 32))
        {
            v3 = *a0;
            v4 = a0[1];
            v5 = a0[2];
            v0 = *a1;
            v1 = a1[1];
            v2 = a1[2];
            UTIL_DrawBeam(v7, &v3, &v0, a2, a3, a4, a5, a6, a7, a8, 4);
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return gpGlobals;
}

