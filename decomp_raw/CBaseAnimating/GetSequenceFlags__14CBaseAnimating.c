// GetSequenceFlags__14CBaseAnimating @0x8e6a0 size=72
typedef struct st_48e6a0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e6a0_0;

typedef struct st_48e6a0_1 {
    unsigned int field_0;
} st_48e6a0_1;

extern st_48e6a0_1 *g_engfuncs.pfnGetModelPtr;

int GetSequenceFlags__14CBaseAnimating(st_48e6a0_0 **a0)
{
    int v0;  // eax

    v0 = g_engfuncs.pfnGetModelPtr(*a0->field_208);
    return GetSequenceFlags(v0, *a0);
}

