// UTIL_TraceLine__FRC6VectorT015IGNORE_MONSTERS12IGNORE_GLASSP7edict_sP11TraceResult @0x132db0 size=78
typedef struct st_532db0_0 {
    unsigned int field_0;
} st_532db0_0;

extern st_532db0_0 *g_engfuncs.pfnTraceLine;

int UTIL_TraceLine__FRC6VectorT015IGNORE_MONSTERS12IGNORE_GLASSP7edict_sP11TraceResult(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]

    v1 = a5;
    v0 = a4;
    return g_engfuncs.pfnTraceLine(a0, a1, a2 == 1);
}

