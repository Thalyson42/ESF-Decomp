// UTIL_FindEntityInSphere__FP11CBaseEntityRC6Vectorf @0x131b10 size=172
typedef struct st_531b10_2 {
    char padding_0[124];
    unsigned int field_7c;
} st_531b10_2;

typedef struct st_531b10_0 {
    char padding_0[520];
    unsigned int field_208;
} st_531b10_0;

typedef struct st_531b10_1 {
    unsigned int field_0;
} st_531b10_1;

extern st_531b10_1 *g_engfuncs.pfnFindEntityInSphere;
extern st_531b10_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_531b10_1 *g_engfuncs.pfnEntOffsetOfPEntity;

unsigned int UTIL_FindEntityInSphere__FP11CBaseEntityRC6Vectorf(st_531b10_0 **a0, unsigned int a1, float a2)
{
    st_531b10_2 *v1;  // esi
    st_531b10_2 *v2;  // eax
    unsigned int v0;  // [bp-0x8]

    v1 = g_engfuncs.pfnFindEntityInSphere((!a0 ? 0 : *a0->field_208), a1, a2);
    v0 = 0;
    if (!v1 || !g_engfuncs.pfnEntOffsetOfPEntity(v1))
        v0 = 1;
    if (v0)
        return 0;
    v2 = v1;
    if (!v2)
    {
        v2 = g_engfuncs.pfnPEntityOfEntOffset(0);
        if (!v2)
            return 0;
    }
    return v2->field_7c;
}

