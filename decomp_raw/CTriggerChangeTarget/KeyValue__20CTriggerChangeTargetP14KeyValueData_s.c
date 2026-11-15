// KeyValue__20CTriggerChangeTargetP14KeyValueData_s @0x12f190 size=106
typedef struct st_52f190_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_52f190_0;

typedef struct st_52f190_2 {
    char padding_0[108];
    unsigned int field_6c;
} st_52f190_2;

typedef struct st_52f190_1 {
    unsigned int field_0;
} st_52f190_1;

extern st_52f190_1 *g_engfuncs.pfnAllocString;

unsigned int KeyValue__20CTriggerChangeTargetP14KeyValueData_s(st_52f190_2 *a0, st_52f190_0 *a1)
{
    unsigned int v0;  // eax

    if (strcmp@GLIBC_2.0(a1->field_4, "m_iszNewTarget"))
        return CBaseDelay::KeyValue(a0, a1);
    v0 = g_engfuncs.pfnAllocString(a1->field_8);
    a0->field_6c = v0;
    a1->field_c = 1;
    return v0;
}

