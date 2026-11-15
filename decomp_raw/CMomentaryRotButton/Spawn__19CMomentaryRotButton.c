// Spawn__19CMomentaryRotButton @0x97c70 size=569
typedef struct st_497c70_2 {
    char padding_0[4];
    struct st_497c70_3 *field_4;
    struct st_497c70_3 *field_8;
    char padding_c[256];
    struct st_497c70_3 *field_10c;
} st_497c70_2;

typedef struct st_497c70_1 {
    struct st_497c70_0 *field_0;
    char padding_4[132];
    unsigned int field_88;
    char padding_8c[120];
    unsigned int field_104;
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    unsigned int field_11c;
    unsigned int field_120;
    unsigned int field_124;
    int field_128;
} st_497c70_1;

typedef struct st_497c70_3 {
    unsigned int field_0;
} st_497c70_3;

typedef struct st_497c70_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[92];
    unsigned int field_68;
    char padding_6c[76];
    unsigned int field_b8;
    unsigned int field_bc;
    char padding_c0[144];
    char field_150;
    char padding_151[71];
    unsigned int field_198;
    char padding_19c[12];
    unsigned int field_1a8;
    char padding_1ac[12];
    unsigned int field_1b8;
} st_497c70_5;

typedef struct st_497c70_0 {
    char padding_0[8];
    char field_8;
    char padding_9[59];
    unsigned int field_44;
    unsigned int field_48;
    unsigned int field_4c;
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[92];
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[144];
    char field_1a0;
    char padding_1a1[71];
    unsigned int field_1e8;
    char padding_1ec[12];
    unsigned int field_1f8;
    char padding_1fc[12];
    unsigned int field_208;
} st_497c70_0;

typedef struct st_497c70_4 {
    char padding_0[152];
    unsigned int field_98;
} st_497c70_4;

extern st_497c70_2 g_engfuncs;
extern st_497c70_4 *gpGlobals;

st_497c70_0 * Spawn__19CMomentaryRotButton(st_497c70_1 *a0)
{
    unsigned int v10;  // 128
    st_497c70_0 *v11;  // edx
    st_497c70_0 *v20;  // eax
    unsigned int *v12;  // eax
    st_497c70_5 *v13;  // eax
    st_497c70_0 *v14;  // edx
    unsigned int v15;  // 128
    unsigned int *v16;  // eax
    st_497c70_5 *v17;  // eax
    unsigned int v18;  // esi
    unsigned int v19;  // eax
    st_497c70_2 *v0;  // [bp-0x48]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x38]
    float v5;  // [bp-0x34]
    float v6;  // [bp-0x30]
    float v7;  // [bp-0x24]
    float v8;  // [bp-0x20]
    float v9;  // [bp-0x1c]

    sub_48b820(a0->field_0);
    if (*(float *)&a0->field_0->field_1f8 == 0.0f)
        *(float *)&a0->field_0->field_1f8 = 100.0f;
    v10 = *&a0->field_88;
    if (0.0 > __int_as_float(v10))
    {
        v11 = a0->field_0;
        v12 = &v11->field_44;
        v1 = __int_as_float(v10) * *(float *)&v11->field_44;
        v2 = __int_as_float(v10) * *(float *)&v12[1];
        v3 = __int_as_float(v10) * *(float *)&v12[2];
        v13 = &v11->field_50;
        v7 = *(float *)&v11->field_50 + v1;
        v8 = *(float *)&v13->field_4 + v2;
        v9 = *(float *)&v13->field_8 + v3;
        *(float *)&a0->field_110 = v7;
        *(float *)&a0->field_114 = v8;
        *(float *)&a0->field_118 = v9;
        a0->field_11c = v11->field_50;
        a0->field_120 = v11->field_54;
        a0->field_124 = v11->field_58;
        a0->field_108 = 1;
        a0->field_88 = -v10;
    }
    else
    {
        v14 = a0->field_0;
        a0->field_110 = v14->field_50;
        a0->field_114 = v14->field_54;
        a0->field_118 = v14->field_58;
        v15 = *&a0->field_88;
        v16 = &v14->field_44;
        v4 = __int_as_float(v15) * *(float *)&v14->field_44;
        v5 = __int_as_float(v15) * *(float *)&v16[1];
        v6 = __int_as_float(v15) * *(float *)&v16[2];
        v17 = &v14->field_50;
        v1 = v4 + *(float *)&v14->field_50;
        v2 = v5 + *(float *)&v17->field_4;
        v3 = *(float *)&v17->field_8 + v6;
        *(float *)&a0->field_11c = v1;
        *(float *)&a0->field_120 = v2;
        *(float *)&a0->field_124 = v3;
        a0->field_108 = 0xffffffff;
    }
    if (a0->field_0->field_1a0 & 1)
        a0->field_0->field_10c = 4;
    else
        a0->field_0->field_10c = 0;
    a0->field_0->field_108 = 7;
    sub_48db50(a0->field_0, &a0->field_0->field_8);
    v0 = &g_engfuncs.padding_0[0];
    v0->field_8(a0->field_0->field_208, a0->field_0->field_b8 + gpGlobals->field_98);
    v18 = sub_487cb0(a0->field_128);
    v0->field_4(v18);
    v19 = v0->field_10c(v18);
    v20 = a0->field_0;
    v20->field_1e8 = v19;
    a0->field_104 = 0;
    return v20;
}

