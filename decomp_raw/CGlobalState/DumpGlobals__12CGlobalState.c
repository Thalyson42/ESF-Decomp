// DumpGlobals__12CGlobalState @0x139cf0 size=128
typedef struct st_539cf0_1 {
    char padding_0[96];
    unsigned int field_60;
    struct st_539cf0_1 *field_64;
} st_539cf0_1;

typedef struct st_539cf0_0 {
    unsigned int field_0;
} st_539cf0_0;

extern unsigned int estates.1686[4];
extern st_539cf0_0 *g_engfuncs.pfnAlertMessage;

unsigned int DumpGlobals__12CGlobalState(st_539cf0_1 **a0)
{
    unsigned int v0;  // eax
    st_539cf0_1 *v1;  // esi
    st_539cf0_1 *v2;  // esi
    unsigned int v3;  // eax

    v0 = g_engfuncs.pfnAlertMessage(1, "-- Globals --\n");
    v1 = *a0;
    if (!*a0)
        return v0;
    do
    {
        v2 = v1;
        v3 = g_engfuncs.pfnAlertMessage(1, "%s: %s (%s)\n", v2, &v2->padding_0[64], estates.1686[v2->field_60]);
        v1 = v2->field_64;
    } while (v2->field_64);
    return v3;
}

