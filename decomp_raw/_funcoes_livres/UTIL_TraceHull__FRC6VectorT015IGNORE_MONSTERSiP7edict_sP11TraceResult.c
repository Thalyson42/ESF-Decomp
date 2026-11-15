// UTIL_TraceHull__FRC6VectorT015IGNORE_MONSTERSiP7edict_sP11TraceResult @0x132e50 size=81
typedef struct st_532e50_0 {
    unsigned int field_0;
} st_532e50_0;

extern st_532e50_0 *g_engfuncs.pfnTraceHull;

int UTIL_TraceHull__FRC6VectorT015IGNORE_MONSTERSiP7edict_sP11TraceResult(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return g_engfuncs.pfnTraceHull(a0, a1, a2 == 1, a3, a4, a5);
}

