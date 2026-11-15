// UTIL_SetOrigin__FP9entvars_sRC6Vector @0x1330d0 size=54
typedef struct st_5330d0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_5330d0_0;

typedef struct st_5330d0_1 {
    unsigned int field_0;
} st_5330d0_1;

extern st_5330d0_1 *g_engfuncs.pfnSetOrigin;

int UTIL_SetOrigin__FP9entvars_sRC6Vector(st_5330d0_0 *a0, unsigned int a1)
{
    return g_engfuncs.pfnSetOrigin(a0->field_208, a1);
}

