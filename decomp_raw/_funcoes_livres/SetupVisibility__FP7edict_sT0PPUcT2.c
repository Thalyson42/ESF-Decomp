// SetupVisibility__FP7edict_sT0PPUcT2 @0xa1cc0 size=278
typedef struct st_4a1cc0_2 {
    struct st_4a1cc0_0 *field_0;
} st_4a1cc0_2;

typedef struct st_4a1cc0_6 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[352];
    unsigned int field_16c;
    unsigned int field_170;
    unsigned int field_174;
    char padding_178[38];
    char field_19e;
} st_4a1cc0_6;

typedef struct st_4a1cc0_4 {
    char padding_0[520];
    struct st_4a1cc0_3 *field_208;
} st_4a1cc0_4;

typedef struct st_4a1cc0_3 {
    char padding_0[124];
    struct st_4a1cc0_2 *field_7c;
    char padding_80[8];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[352];
    unsigned int field_1f4;
    unsigned int field_1f8;
    unsigned int field_1fc;
    char padding_200[38];
    char field_226;
} st_4a1cc0_3;

typedef struct st_4a1cc0_1 {
    char padding_0[124];
    struct st_4a1cc0_2 *field_7c;
    char padding_80[8];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[352];
    float field_1f4;
    float field_1f8;
    float field_1fc;
    char padding_200[38];
    char field_226;
} st_4a1cc0_1;

typedef struct st_4a1cc0_0 {
    char padding_0[584];
    unsigned int field_248;
} st_4a1cc0_0;

typedef struct st_4a1cc0_5 {
    unsigned int field_0;
} st_4a1cc0_5;

extern st_4a1cc0_5 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4a1cc0_5 *g_engfuncs.pfnSetFatPVS;
extern st_4a1cc0_5 *g_engfuncs.pfnSetFatPAS;

st_4a1cc0_2 ** SetupVisibility__FP7edict_sT0PPUcT2(st_4a1cc0_1 *a0, st_4a1cc0_1 *a1, unsigned int *a2, st_4a1cc0_2 **a3)
{
    st_4a1cc0_1 *v6;  // esi
    st_4a1cc0_1 *v7;  // eax
    st_4a1cc0_0 **v8;  // edx
    unsigned int v9;  // edi
    st_4a1cc0_4 **v10;  // eax
    st_4a1cc0_6 *v11;  // eax
    st_4a1cc0_2 **v12;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = a1;
    if (a0)
        v6 = a0;
    v7 = a1;
    if (v7 || (v7 = g_engfuncs.pfnPEntityOfEntOffset(0), v7))
        v8 = v7->field_7c;
    else
        v8 = NULL;
    if (*v8->field_248)
    {
        v9 = v8 + 482;
        if (EHANDLE::__opi(v9))
        {
            v10 = EHANDLE::__rf(v9);
            v6 = *v10->field_208;
        }
    }
    if (!(a1->field_226 & 16))
    {
        v11 = &v6->field_88;
        v0 = v6->field_88 + v6->field_1f4;
        v1 = *(float *)&v11->field_4 + v6->field_1f8;
        v2 = *(float *)&v11->field_8 + v6->field_1fc;
        v3 = v0;
        v4 = v1;
        v5 = v2;
        *a2 = g_engfuncs.pfnSetFatPVS(&v3);
        v12 = g_engfuncs.pfnSetFatPAS(&v3);
        *a3 = v12;
        return v12;
    }
    *a2 = 0;
    *a3 = NULL;
    return a3;
}

