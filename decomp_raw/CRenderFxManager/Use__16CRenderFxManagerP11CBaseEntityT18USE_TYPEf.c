// Use__16CRenderFxManagerP11CBaseEntityT18USE_TYPEf @0x12b850 size=316
typedef struct st_52b850_0 {
    char padding_0[128];
    char field_80;
    char padding_81[199];
    unsigned int field_148;
    float field_14c;
    unsigned int field_150;
    unsigned int field_154;
    unsigned int field_158;
    unsigned int field_15c;
    char padding_160[64];
    char field_1a0;
    char padding_1a1[39];
    unsigned int field_1c8;
} st_52b850_0;

typedef struct st_52b850_1 {
    char padding_0[128];
    char field_80;
    char padding_81[199];
    unsigned int field_148;
    unsigned int field_14c;
    unsigned int field_150;
    unsigned int field_154;
    unsigned int field_158;
    unsigned int field_15c;
    char padding_160[64];
    char field_1a0;
    char padding_1a1[39];
    unsigned int field_1c8;
} st_52b850_1;

typedef struct st_52b850_2 {
    char padding_0[152];
    unsigned int field_98;
} st_52b850_2;

typedef struct st_52b850_3 {
    unsigned int field_0;
} st_52b850_3;

extern st_52b850_3 *g_6167f8;
extern st_52b850_3 *g_6168d8;
extern st_52b850_2 *gpGlobals;

st_52b850_1 * Use__16CRenderFxManagerP11CBaseEntityT18USE_TYPEf(st_52b850_0 **a0)
{
    st_52b850_1 *v0;  // edi
    st_52b850_1 *v1;  // eax
    unsigned int v2;  // esi
    st_52b850_1 *v3;  // ecx
    st_52b850_0 *v4;  // edx

    if (!*a0->field_1c8)
        return *a0;
    v0 = NULL;
    while (1)
    {
        v1 = g_6167f8(v0, "targetname", *a0->field_1c8 + gpGlobals->field_98);
        v0 = v1;
        v2 = 0;
        if (!v0 || (v1 = g_6168d8(v0), !v1))
            v2 = 1;
        if (v2)
            break;
        v3 = (!v0 ? NULL : (struct st_52b850_1 *)&v0->field_80);
        if (!(*a0->field_1a0 & 1))
            v3->field_15c = *a0->field_15c;
        if (!(*a0->field_1a0 & 2))
            *(float *)&v3->field_14c = *a0->field_14c;
        if (!(*a0->field_1a0 & 4))
            v3->field_148 = *a0->field_148;
        v4 = *a0;
        if (!(v4->field_1a0 & 8))
        {
            v3->field_150 = v4->field_150;
            v3->field_154 = v4->field_154;
            v3->field_158 = v4->field_158;
        }
    }
    return v1;
}

