// KeyValue__10CEnvGlobalP14KeyValueData_s @0x95430 size=679
typedef struct st_495430_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_495430_0;

typedef struct st_495430_1 {
    unsigned int field_0;
} st_495430_1;

extern st_495430_1 *g_engfuncs.pfnAllocString;

unsigned int KeyValue__10CEnvGlobalP14KeyValueData_s(unsigned int *a0, st_495430_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    a1->field_c = 1;
    if (!strcmp@GLIBC_2.0(a1->field_4, "globalstate"))
    {
        v0 = g_engfuncs.pfnAllocString(a1->field_8);
        a0[25] = v0;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "triggermode"))
    {
        v1 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0[26] = v1;
        return v1;
    }
    else
    {
        v2 = strcmp@GLIBC_2.0(a1->field_4, "initialstate");
        if (v2)
        {
            a1->field_c = 0;
            return v2;
        }
        v3 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0[27] = v3;
        return v3;
    }
}

