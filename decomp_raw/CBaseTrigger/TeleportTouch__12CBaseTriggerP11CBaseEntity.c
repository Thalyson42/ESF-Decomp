// TeleportTouch__12CBaseTriggerP11CBaseEntity @0x12e9a0 size=492
typedef struct st_52e9a0_6 {
    char padding_0[160];
    struct st_52e9a0_3 *field_a0;
} st_52e9a0_6;

typedef struct st_52e9a0_5 {
    struct st_52e9a0_4 *field_0;
    char padding_4[92];
    struct st_52e9a0_6 *field_60;
    char padding_64[28];
    char field_80;
    char padding_81[7];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[60];
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
} st_52e9a0_5;

typedef struct st_52e9a0_1 {
    struct st_52e9a0_0 *field_0;
    char padding_4[252];
    int field_100;
} st_52e9a0_1;

typedef struct st_52e9a0_8 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_52e9a0_5 *field_8;
    char padding_c[24];
    unsigned int field_24;
    unsigned int field_28;
    unsigned int field_2c;
    char padding_30[24];
    unsigned int field_48;
    unsigned int field_4c;
    unsigned int field_50;
    char padding_54[32];
    unsigned int field_74;
    char padding_78[64];
    unsigned int field_b8;
    char padding_bc[188];
    char field_178;
    char field_179;
} st_52e9a0_8;

typedef struct st_52e9a0_3 {
    unsigned int field_0;
} st_52e9a0_3;

typedef struct st_52e9a0_7 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    struct st_52e9a0_5 *field_28;
    unsigned int field_2c;
    unsigned int field_30;
    struct st_52e9a0_5 *field_34;
    char padding_38[24];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[24];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[32];
    unsigned int field_a0;
    char padding_a4[64];
    unsigned int field_e4;
    char padding_e8[188];
    char field_1a4;
    char field_1a5;
} st_52e9a0_7;

typedef struct st_52e9a0_4 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    struct st_52e9a0_5 *field_28;
    unsigned int field_2c;
    unsigned int field_30;
    struct st_52e9a0_5 *field_34;
    char padding_38[24];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[24];
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[32];
    unsigned int field_a0;
    char padding_a4[64];
    float field_e4;
    char padding_e8[188];
    char field_1a4;
    char field_1a5;
} st_52e9a0_4;

typedef struct st_52e9a0_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[39];
    unsigned int field_1c8;
} st_52e9a0_0;

typedef struct st_52e9a0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_52e9a0_2;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern st_52e9a0_5 *g_616794;
extern st_52e9a0_3 *g_6167f8;
extern st_52e9a0_3 *g_6168d8;
extern st_52e9a0_2 *gpGlobals;

st_52e9a0_5 * TeleportTouch__12CBaseTriggerP11CBaseEntity(st_52e9a0_1 *a0, st_52e9a0_5 *a1)
{
    st_52e9a0_7 *v5;  // esi
    st_52e9a0_5 *v6;  // eax
    st_52e9a0_5 *v7;  // eax
    st_52e9a0_5 *v8;  // eax
    st_52e9a0_5 *v9;  // eax
    st_52e9a0_5 *v10;  // edi
    float *v11;  // edx
    unsigned int *v12;  // eax
    st_52e9a0_8 *v13;  // edx
    st_52e9a0_5 *v14;  // eax
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]
    float v4;  // [bp-0x1c]

    v5 = a1->field_0;
    if (!(v5->field_1a4 & 40))
        return a1;
    v6 = sub_488a80(a0->field_100, a1);
    if (!v6)
        return v6;
    v7 = _INSERT(a0->field_0, 0, a0->field_0->field_1a0 ^ 1);
    if (!(a0->field_0->field_1a0 & 1) && v5->field_1a4 & 32)
        return v7;
    if (a0->field_0->field_1a0 & 2)
    {
        v8 = a1->field_60->field_a0(a1);
        if (v8)
            return v8;
    }
    v9 = g_6167f8(0, "targetname", a0->field_0->field_1c8 + gpGlobals->field_98);
    v10 = v9;
    v0 = 0;
    if (!v10 || (v9 = g_6168d8(v10), !v9))
        v0 = 1;
    if (v0)
        return v9;
    v11 = (!v10 ? NULL : (struct st_52e9a0_5 *)&v10->field_80);
    v12 = v11 + 2;
    *(float *)&v1 = v11[2];
    *(float *)&v2 = *(float *)&v12[1];
    *(float *)&v3 = *(float *)&v12[2];
    if (a1->field_60->field_a0(a1))
        *(float *)&v3 = *(float *)&v3 - a1->field_0->field_e4;
    v4 = (float)(1.0 + *(float *)&v3);
    v5->field_1a5 = v5->field_1a5 & 253;
    sub_48db50(v5, &v1);
    v5->field_50 = v10->field_d0;
    v5->field_54 = v10->field_d4;
    v5->field_58 = v10->field_d8;
    if (a1->field_60->field_a0(a1))
    {
        v5->field_74 = v10->field_d0;
        v5->field_78 = v10->field_d4;
        v5->field_7c = v10->field_d8;
    }
    v5->field_a0 = 1;
    v5->field_2c = g_vecZero;
    v5->field_30 = g_616790;
    v5->field_34 = g_616794;
    v13 = &v5->field_2c;
    v5->field_20 = g_vecZero;
    v5->field_24 = v13->field_4;
    v14 = v13->field_8;
    v5->field_28 = v14;
    return v14;
}

