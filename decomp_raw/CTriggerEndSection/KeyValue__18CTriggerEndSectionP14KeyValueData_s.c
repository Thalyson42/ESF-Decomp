// KeyValue__18CTriggerEndSectionP14KeyValueData_s @0x12ef60 size=116
typedef struct st_52ef60_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_52ef60_0;

typedef struct st_52ef60_2 {
    char padding_0[468];
    unsigned int field_1d4;
} st_52ef60_2;

typedef struct st_52ef60_1 {
    unsigned int field_0;
} st_52ef60_1;

extern st_52ef60_1 *g_engfuncs.pfnAllocString;

st_52ef60_2 * KeyValue__18CTriggerEndSectionP14KeyValueData_s(st_52ef60_2 **a0, st_52ef60_0 *a1)
{
    unsigned int v0;  // eax
    st_52ef60_2 *v1;  // eax

    if (strcmp@GLIBC_2.0(a1->field_4, "section"))
        return CBaseTrigger::KeyValue(a0, a1);
    v0 = g_engfuncs.pfnAllocString(a1->field_8);
    v1 = *a0;
    v1->field_1d4 = v0;
    a1->field_c = 1;
    return v1;
}

