// FireTargets__FPCcP11CBaseEntityT18USE_TYPEf @0x122520 size=298
typedef struct st_522520_4 {
    char padding_0[124];
    struct st_522520_3 *field_7c;
} st_522520_4;

typedef struct st_522520_2 {
    char padding_0[184];
    struct st_522520_0 *field_b8;
} st_522520_2;

typedef struct st_522520_0 {
    unsigned int field_0;
} st_522520_0;

typedef struct st_522520_1 {
    unsigned int field_0;
    char padding_4[419];
    char field_1a7;
} st_522520_1;

typedef struct st_522520_3 {
    struct st_522520_1 *field_0;
    char padding_4[92];
    struct st_522520_2 *field_60;
} st_522520_3;

typedef struct st_522520_5 {
    char padding_0[152];
    unsigned int field_98;
} st_522520_5;

extern st_522520_0 *g_engfuncs.pfnFindEntityByString;
extern st_522520_0 *g_engfuncs.pfnAlertMessage;
extern st_522520_0 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_522520_0 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_522520_5 *gpGlobals;

st_522520_4 * FireTargets__FPCcP11CBaseEntityT18USE_TYPEf(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    st_522520_4 *v0;  // edi
    st_522520_4 *v1;  // eax
    unsigned int v2;  // esi
    st_522520_4 *v3;  // eax
    st_522520_3 *v4;  // esi
    st_522520_4 *v5;  // eax

    v0 = NULL;
    if (!a0)
        return v5;
    g_engfuncs.pfnAlertMessage(2, "Firing: (%s)\n", a0);
    while (1)
    {
        v1 = g_engfuncs.pfnFindEntityByString(v0, "targetname", a0);
        v0 = v1;
        v2 = 0;
        if (!v0 || (v1 = g_engfuncs.pfnEntOffsetOfPEntity(v0), !v1))
            v2 = 1;
        if (v2)
            break;
        v3 = v0;
        if (v3 || (v3 = g_engfuncs.pfnPEntityOfEntOffset(0), v3))
            v4 = v3->field_7c;
        else
            v4 = NULL;
        if (v4 && !(v4->field_0->field_1a7 & 64))
        {
            g_engfuncs.pfnAlertMessage(2, "Found: %s, firing (%s)\n", v4->field_0->field_0 + gpGlobals->field_98, a0);
            v4->field_60->field_b8(v4, a1, a2, a3, a4);
        }
    }
    return v1;
}

