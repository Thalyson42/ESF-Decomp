// LookupSequence__14CBaseAnimatingPCc @0x8e5c0 size=71
typedef struct st_48e5c0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e5c0_0;

typedef struct st_48e5c0_1 {
    unsigned int field_0;
} st_48e5c0_1;

extern st_48e5c0_1 *g_engfuncs.pfnGetModelPtr;

int LookupSequence__14CBaseAnimatingPCc(st_48e5c0_0 **a0, int a1)
{
    return LookupSequence(g_engfuncs.pfnGetModelPtr(*a0->field_208), a1);
}

