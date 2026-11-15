// BloodPosition__6CBloodP11CBaseEntity @0xb55d0 size=331
typedef struct st_4b55d0_4 {
    char padding_0[160];
    struct st_4b55d0_5 *field_a0;
} st_4b55d0_4;

typedef struct st_4b55d0_7 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[400];
    char field_198;
} st_4b55d0_7;

typedef struct st_4b55d0_5 {
    unsigned int field_0;
} st_4b55d0_5;

typedef struct st_4b55d0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    char padding_10[400];
    char field_1a0;
} st_4b55d0_0;

typedef struct st_4b55d0_3 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[352];
    float field_1f4;
    float field_1f8;
    float field_1fc;
} st_4b55d0_3;

typedef struct st_4b55d0_2 {
    char padding_0[520];
    struct st_4b55d0_3 *field_208;
} st_4b55d0_2;

typedef struct st_4b55d0_6 {
    struct st_4b55d0_2 *field_0;
    char padding_4[92];
    struct st_4b55d0_4 *field_60;
} st_4b55d0_6;

typedef struct st_4b55d0_1 {
    unsigned int field_0;
    unsigned int field_4;
    float field_8;
} st_4b55d0_1;

extern st_4b55d0_5 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_4b55d0_5 *g_engfuncs.pfnRandomFloat;

st_4b55d0_1 * BloodPosition__6CBloodP11CBaseEntity(void)
{
    float *v12;  // edx
    unsigned int *v13;  // eax
    double v14;  // mm0
    double v15;  // mm0
    st_4b55d0_7 *v16;  // edx
    float v0;  // [bp-0x54]
    float v1;  // [bp-0x50]
    float v2;  // [bp-0x4c]
    float v3;  // [bp-0x48]
    float v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]
    st_4b55d0_1 *idx;  // [bp+0x4]
    st_4b55d0_0 **v10;  // [bp+0x8]
    st_4b55d0_6 *v11;  // [bp+0xc]

    if (*v10->field_1a0 & 4)
    {
        if (v11 && v11->field_60->field_a0(v11))
            v12 = v11->field_0->field_208;
        else
            v12 = g_engfuncs.pfnPEntityOfEntIndex(1);
        if (!v12)
            goto LABEL_4b56f4;
        v13 = v12 + 0x22;
        v6 = v12[0x22] + v12[125];
        v7 = *(float *)&v13[1] + v12[126];
        v8 = *(float *)&v13[2] + v12[127];
        v3 = 10.0f;
        v2 = -10.0f;
        g_engfuncs.pfnRandomFloat(-10.0f, 10.0f);
        v1 = -10.0f;
        g_engfuncs.pfnRandomFloat(v2, v3);
        v0 = -10.0f;
        g_engfuncs.pfnRandomFloat(v2, v3);
        v4 = v1;
        v5 = v0;
        v15 = v8 + (float)v14;
        *(float *)&idx->field_0 = v6 + v4;
        *(float *)&idx->field_4 = v7 + v5;
    }
    else
    {
LABEL_4b56f4:
        v16 = &*v10->field_8;
        *(float *)&idx->field_0 = *v10->field_8;
        *(float *)&idx->field_4 = *(float *)&v16->field_4;
    }
    idx->field_8 = (float)v15;
    return idx;
}

