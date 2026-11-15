// FindGlobalEntity__Fii @0x9c5d0 size=208
typedef struct st_49c5d0_2 {
    char padding_0[124];
    struct st_49c5d0_3 *field_7c;
} st_49c5d0_2;

typedef struct st_49c5d0_3 {
    struct st_49c5d0_1 *field_0;
} st_49c5d0_3;

typedef struct st_49c5d0_1 {
    unsigned int field_0;
} st_49c5d0_1;

typedef struct st_49c5d0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_49c5d0_0;

extern st_49c5d0_1 *g_engfuncs.pfnFindEntityByString;
extern st_49c5d0_1 *g_engfuncs.pfnAlertMessage;
extern st_49c5d0_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_49c5d0_0 *gpGlobals;

st_49c5d0_1 ** FindGlobalEntity__Fii(unsigned int a0, unsigned int a1)
{
    st_49c5d0_2 *v0;  // eax
    st_49c5d0_1 **v1;  // eax
    st_49c5d0_1 **v2;  // esi

    v0 = g_engfuncs.pfnFindEntityByString(0, "globalname", a1 + gpGlobals->field_98);
    if (v0 || (v0 = g_engfuncs.pfnPEntityOfEntOffset(0), v0))
        v1 = v0->field_7c;
    else
        v1 = NULL;
    v2 = v1;
    if (!v2)
    {
        return v2;
    }
    else if (strcmp@GLIBC_2.0(gpGlobals->field_98 + *(int *)*v2, a0 + gpGlobals->field_98))
    {
        g_engfuncs.pfnAlertMessage(1, "Global entity found %s, wrong class %s\n", a1 + gpGlobals->field_98, *(int *)*v2 + gpGlobals->field_98);
        return NULL;
    }
    else
    {
        return v2;
    }
}

