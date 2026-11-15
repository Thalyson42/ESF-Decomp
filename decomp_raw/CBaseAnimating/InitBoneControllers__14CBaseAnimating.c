// InitBoneControllers__14CBaseAnimating @0x8e860 size=128
typedef struct st_48e860_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e860_0;

typedef struct st_48e860_1 {
    unsigned int field_0;
} st_48e860_1;

extern st_48e860_1 *g_engfuncs.pfnGetModelPtr;

int InitBoneControllers__14CBaseAnimating(double a0, double a1, double a2, double a3, st_48e860_0 **a4)
{
    int v0;  // edi

    v0 = g_engfuncs.pfnGetModelPtr(*a4->field_208);
    SetController(v0, *a4, 0, 0);
    SetController(v0, *a4, 1, 0);
    SetController(v0, *a4, 2, 0);
    return SetController(v0, *a4, 3, 0);
}

