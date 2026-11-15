// Find__18CFuncTrainControls @0xec950 size=323
typedef struct st_4ec950_0 {
    char padding_0[456];
    unsigned int field_1c8;
} st_4ec950_0;

typedef struct st_4ec950_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4ec950_1;

typedef struct st_4ec950_2 {
    unsigned int field_0;
} st_4ec950_2;

extern st_4ec950_2 *g_engfuncs.pfnFindEntityByString;
extern st_4ec950_2 *g_engfuncs.pfnAlertMessage;
extern st_4ec950_2 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_4ec950_1 *gpGlobals;

int Find__18CFuncTrainControls(st_4ec950_0 **a0)
{
    unsigned int *v0;  // edi
    unsigned int v1;  // esi
    unsigned int v2;  // esi
    int v3;  // eax

    v0 = NULL;
    do
    {
        v0 = g_engfuncs.pfnFindEntityByString(v0, "targetname", *a0->field_1c8 + gpGlobals->field_98);
        v1 = 0;
        if (!v0 || !g_engfuncs.pfnEntOffsetOfPEntity(v0))
            v1 = 1;
    } while (!v1 && strcmp@GLIBC_2.0(*(!v0 ? NULL : v0 + 32) + gpGlobals->field_98, "func_tracktrain"));
    v2 = 0;
    if (!v0 || !g_engfuncs.pfnEntOffsetOfPEntity(v0))
        v2 = 1;
    if (!v2)
    {
        v3 = CFuncTrackTrain::Instance(v0);
        CFuncTrackTrain::SetControls(v3, *a0);
        return UTIL_Remove(a0);
    }
    return g_engfuncs.pfnAlertMessage(1, "No train %s\n", *a0->field_1c8 + gpGlobals->field_98);
}

