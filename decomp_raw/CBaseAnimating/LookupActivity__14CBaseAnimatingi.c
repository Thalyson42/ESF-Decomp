// LookupActivity__14CBaseAnimatingi @0x8e520 size=78
typedef struct st_48e520_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e520_0;

typedef struct st_48e520_1 {
    unsigned int field_0;
} st_48e520_1;

extern st_48e520_1 *g_engfuncs.pfnGetModelPtr;

int LookupActivity__14CBaseAnimatingi(st_48e520_0 **a0, int a1)
{
    int v0;  // eax

    v0 = g_engfuncs.pfnGetModelPtr(*a0->field_208);
    return LookupActivity(v0, *a0, a1);
}

