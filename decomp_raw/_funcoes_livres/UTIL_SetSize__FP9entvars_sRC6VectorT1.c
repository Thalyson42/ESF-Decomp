// UTIL_SetSize__FP9entvars_sRC6VectorT1 @0x133060 size=61
typedef struct st_533060_0 {
    char padding_0[520];
    unsigned int field_208;
} st_533060_0;

typedef struct st_533060_1 {
    unsigned int field_0;
} st_533060_1;

extern st_533060_1 *g_engfuncs.pfnSetSize;

int UTIL_SetSize__FP9entvars_sRC6VectorT1(st_533060_0 *a0, unsigned int a1, unsigned int a2)
{
    return g_engfuncs.pfnSetSize(a0->field_208, a1, a2);
}

