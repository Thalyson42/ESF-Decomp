// Spawn__10CRotButton @0x97910 size=614
typedef struct st_497910_1 {
    struct st_497910_0 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[92];
    unsigned int field_80;
    char padding_84[4];
    unsigned int field_88;
    unsigned int field_8c;
    char padding_90[36];
    unsigned int field_b4;
    unsigned int field_b8;
    unsigned int field_bc;
    unsigned int field_c0;
    unsigned int field_c4;
    unsigned int field_c8;
    char padding_cc[56];
    unsigned int field_104;
    unsigned int field_108;
    char padding_10c[44];
    int field_138;
} st_497910_1;

typedef struct st_497910_4 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[92];
    unsigned int field_68;
    char padding_6c[76];
    unsigned int field_b8;
    unsigned int field_bc;
    char padding_c0[80];
    unsigned int field_110;
    char padding_114[8];
    unsigned int field_11c;
    char padding_120[48];
    char field_150;
    char field_151;
    char padding_152[70];
    unsigned int field_198;
    char padding_19c[12];
    unsigned int field_1a8;
    char padding_1ac[12];
    unsigned int field_1b8;
} st_497910_4;

typedef struct st_497910_0 {
    char padding_0[68];
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
    char padding_110[80];
    unsigned int field_160;
    char padding_164[8];
    unsigned int field_16c;
    char padding_170[48];
    char field_1a0;
    char field_1a1;
    char padding_1a2[70];
    unsigned int field_1e8;
    char padding_1ec[12];
    unsigned int field_1f8;
    char padding_1fc[12];
    unsigned int field_208;
} st_497910_0;

typedef struct st_497910_3 {
    char padding_0[152];
    unsigned int field_98;
} st_497910_3;

typedef struct st_497910_2 {
    unsigned int field_0;
} st_497910_2;

extern char ButtonUse__11CBaseButtonP11CBaseEntityT18USE_TYPEf;
extern unsigned int ButtonTouch__11CBaseButtonP11CBaseEntity;
extern st_497910_2 *g_engfuncs.pfnPrecacheSound;
extern st_497910_2 *g_engfuncs.pfnSetModel;
extern st_497910_2 *g_engfuncs.pfnAllocString;
extern st_497910_3 *gpGlobals;

short Spawn__10CRotButton(st_497910_1 *a0)
{
    unsigned int v6;  // esi
    unsigned int v7;  // eax
    unsigned int v16;  // eax
    st_497910_0 *v8;  // edx
    unsigned int *v9;  // eax
    st_497910_0 *v10;  // edx
    unsigned int v11;  // 128
    unsigned int *v12;  // eax
    st_497910_4 *v13;  // eax
    unsigned int v14;  // eax
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]
    float v3;  // [bp-0x18]
    float v4;  // [bp-0x14]
    float v5;  // [bp-0x10]

    v6 = ButtonSound(a0->field_138);
    g_engfuncs.pfnPrecacheSound(v6);
    v7 = g_engfuncs.pfnAllocString(v6);
    a0->field_0->field_1e8 = v7;
    CBaseToggle::AxisDir(a0->field_0);
    v8 = a0->field_0;
    if (v8->field_1a0 & 2)
    {
        v9 = &v8->field_44;
        v0 = (float)(-1.0 * *(float *)&v8->field_44);
        v1 = (float)(-1.0 * *(float *)&v9[1]);
        v2 = (float)(-1.0 * *(float *)&v9[2]);
        *(float *)&v8->field_44 = v0;
        *(float *)&v8->field_48 = v1;
        *(float *)&v8->field_4c = v2;
    }
    a0->field_0->field_108 = 7;
    if (a0->field_0->field_1a0 & 1)
        a0->field_0->field_10c = 0;
    else
        a0->field_0->field_10c = 4;
    g_engfuncs.pfnSetModel(a0->field_0->field_208, a0->field_0->field_b8 + gpGlobals->field_98);
    if (*(float *)&a0->field_0->field_1f8 == 0.0f)
        *(float *)&a0->field_0->field_1f8 = 40.0f;
    if (*(float *)&a0->field_8c == 0.0f)
        a0->field_8c = 0x3f800000;
    if (0.0 < *(float *)&a0->field_0->field_160)
        a0->field_0->field_16c = 0x3f800000;
    a0->field_80 = 1;
    v10 = a0->field_0;
    a0->field_b4 = v10->field_50;
    a0->field_b8 = v10->field_54;
    a0->field_bc = v10->field_58;
    v11 = *&a0->field_88;
    v12 = &v10->field_44;
    v3 = __int_as_float(v11) * *(float *)&v10->field_44;
    v4 = __int_as_float(v11) * *(float *)&v12[1];
    v5 = __int_as_float(v11) * *(float *)&v12[2];
    v13 = &v10->field_50;
    v0 = v3 + *(float *)&v10->field_50;
    v1 = v4 + *(float *)&v13->field_4;
    v2 = *(float *)&v13->field_8 + v5;
    *(float *)&a0->field_c0 = v0;
    *(float *)&a0->field_c4 = v1;
    *(float *)&a0->field_c8 = v2;
    v14 = -1.0f == *(float *)&a0->field_8c;
    a0->field_104 = v14;
    a0->field_108 = 1;
    if (!(v10->field_1a1 & 1))
    {
        a0->field_14 = 0;
        a0->field_18 = 0;
        v16 = _INSERT(v14, 0, 0) | 0xffff0000;
        a0->field_1c = v16;
        a0->field_20 = &ButtonUse__11CBaseButtonP11CBaseEntityT18USE_TYPEf;
    }
    else
    {
        v16 = _INSERT(v14, 0, 0) | 0xffff0000;
        a0->field_14 = v16;
        a0->field_18 = &ButtonTouch__11CBaseButtonP11CBaseEntity;
    }
    return v16;
}

