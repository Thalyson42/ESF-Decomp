// KeyValue__10CPathTrackP14KeyValueData_s @0xe6c90 size=103
typedef struct st_4e6c90_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4e6c90_0;

typedef struct st_4e6c90_1 {
    char padding_0[104];
    unsigned int field_68;
} st_4e6c90_1;

typedef struct st_4e6c90_2 {
    unsigned int field_0;
} st_4e6c90_2;

extern st_4e6c90_2 *g_engfuncs.pfnAllocString;

st_4e6c90_1 * KeyValue__10CPathTrackP14KeyValueData_s(st_4e6c90_1 *a0, st_4e6c90_0 *a1)
{
    st_4e6c90_1 *v0;  // eax

    v0 = strcmp@GLIBC_2.0(a1->field_4, "altpath");
    if (v0)
    {
        a1->field_c = 0;
        return v0;
    }
    a0->field_68 = g_engfuncs.pfnAllocString(a1->field_8);
    a1->field_c = 1;
    return a0;
}

