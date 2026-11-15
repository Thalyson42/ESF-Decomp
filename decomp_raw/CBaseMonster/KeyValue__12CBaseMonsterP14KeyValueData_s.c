// KeyValue__12CBaseMonsterP14KeyValueData_s @0xd9310 size=404
typedef struct st_4d9310_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4d9310_0;

typedef struct st_4d9310_1 {
    unsigned int field_0;
} st_4d9310_1;

extern st_4d9310_1 *g_engfuncs.pfnAllocString;

unsigned int KeyValue__12CBaseMonsterP14KeyValueData_s(unsigned int *a0, st_4d9310_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!strcmp@GLIBC_2.0(a1->field_4, "TriggerTarget"))
    {
        v0 = g_engfuncs.pfnAllocString(a1->field_8);
        a0[164] = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "TriggerCondition"))
    {
        v1 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0[163] = v1;
        a1->field_c = 1;
        return v1;
    }
    else
    {
        return CBaseToggle::KeyValue(a0, a1);
    }
}

