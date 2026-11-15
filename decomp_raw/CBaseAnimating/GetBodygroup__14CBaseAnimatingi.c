// GetBodygroup__14CBaseAnimatingi @0x8eab0 size=72
typedef struct st_48eab0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48eab0_0;

typedef struct st_48eab0_1 {
    unsigned int field_0;
} st_48eab0_1;

extern st_48eab0_1 *g_engfuncs.pfnGetModelPtr;

int GetBodygroup__14CBaseAnimatingi(st_48eab0_0 **a0, unsigned int a1)
{
    st_48eab0_0 *v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]

    v1 = a1;
    v0 = *a0;
    return GetBodygroup(g_engfuncs.pfnGetModelPtr(*a0->field_208));
}

