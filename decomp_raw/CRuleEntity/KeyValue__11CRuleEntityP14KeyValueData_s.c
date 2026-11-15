// KeyValue__11CRuleEntityP14KeyValueData_s @0xceef0 size=103
typedef struct st_4ceef0_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4ceef0_0;

typedef struct st_4ceef0_1 {
    char padding_0[100];
    unsigned int field_64;
} st_4ceef0_1;

typedef struct st_4ceef0_2 {
    unsigned int field_0;
} st_4ceef0_2;

extern st_4ceef0_2 *g_engfuncs.pfnAllocString;

st_4ceef0_1 * KeyValue__11CRuleEntityP14KeyValueData_s(st_4ceef0_1 *a0, st_4ceef0_0 *a1)
{
    st_4ceef0_1 *v0;  // eax

    v0 = strcmp@GLIBC_2.0(a1->field_4, "master");
    if (v0)
    {
        a1->field_c = 0;
        return v0;
    }
    a0->field_64 = g_engfuncs.pfnAllocString(a1->field_8);
    a1->field_c = 1;
    return a0;
}

