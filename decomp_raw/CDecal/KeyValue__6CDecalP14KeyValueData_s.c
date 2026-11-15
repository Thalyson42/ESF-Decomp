// KeyValue__6CDecalP14KeyValueData_s @0x139960 size=145
typedef struct st_539960_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_539960_0;

typedef struct st_539960_2 {
    char padding_0[272];
    int field_110;
} st_539960_2;

typedef struct st_539960_1 {
    unsigned int field_0;
} st_539960_1;

extern st_539960_1 *g_engfuncs.pfnDecalIndex;
extern st_539960_1 *g_engfuncs.pfnAlertMessage;

st_539960_2 * KeyValue__6CDecalP14KeyValueData_s(st_539960_2 **a0, st_539960_0 *a1)
{
    st_539960_2 *v0;  // eax
    unsigned int v1;  // eax

    v0 = strcmp@GLIBC_2.0(a1->field_4, "texture");
    if (v0)
    {
        a1->field_c = 0;
        return v0;
    }
    v1 = g_engfuncs.pfnDecalIndex(a1->field_8);
    *a0->field_110 = v1;
    if (*a0->field_110 >= NULL)
        return *a0;
    return g_engfuncs.pfnAlertMessage(1, "Can't find decal %s\n", a1->field_8);
}

