// CreateShield__7CShieldP11CBasePlayer @0x118ae0 size=329
typedef struct st_518ae0_1 {
    unsigned int field_0;
} st_518ae0_1;

typedef struct st_518ae0_3 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    unsigned int field_104;
    char padding_108[144];
    unsigned int field_198;
    char padding_19c[68];
    unsigned int field_1e0;
} st_518ae0_3;

typedef struct st_518ae0_4 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[500];
    unsigned int field_208;
} st_518ae0_4;

typedef struct st_518ae0_2 {
    struct st_518ae0_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_518ae0_0 *field_60;
    unsigned int field_64;
    unsigned int field_68;
    char field_6c;
} st_518ae0_2;

typedef struct st_518ae0_0 {
    char padding_0[8];
    struct st_518ae0_1 *field_8;
} st_518ae0_0;

typedef struct st_518ae0_5 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_518ae0_5;

extern char ExpandShieldThink__7CShield;
extern char ShieldTouch__7CShieldP11CBaseEntity;
extern st_518ae0_5 *gpGlobals;

st_518ae0_2 * CreateShield__7CShieldP11CBasePlayer(st_518ae0_4 **a0)
{
    st_518ae0_2 *v9;  // edi
    unsigned int *v10;  // edx
    unsigned int *v11;  // ecx
    unsigned int *v12;  // edx
    unsigned int *v13;  // eax
    unsigned int *v15;  // eax
    unsigned int v0;  // [bp-0x24]
    float v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    float v3;  // [bp-0x20]
    unsigned int v4;  // [bp-0x1c]
    float v5;  // [bp-0x1c]
    float v6;  // [bp-0x18]
    float v7;  // [bp-0x14]
    float v8;  // [bp-0x10]

    v9 = sub_487f10(0);
    v9->field_60->field_8(v9);
    v10 = &v9->field_0->field_0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v10[8] = v0;
    v10[9] = v2;
    v10[10] = v4;
    v11 = &v9->field_0->field_0;
    v12 = *a0;
    v11[2] = v12[2];
    v11[3] = v12[3];
    v11[4] = v12[4];
    v9->field_0->field_0 = -1 * gpGlobals->field_98 + 5930813;
    v13 = &v9->field_0->field_0;
    v13[120] = 0;
    v9->field_64 = 40;
    v9->field_68 = 0;
    v9->field_6c = 0;
    v9->field_c = _INSERT(v13, 0, 0) | 0xffff0000;
    v9->field_10 = &ExpandShieldThink__7CShield;
    *(float *)&v9->field_0->field_104 = gpGlobals->field_0;
    v15 = &v9->field_0->field_0;
    v15[0x66] = *a0->field_208;
    v9->field_14 = _INSERT(v15, 0, 0) | 0xffff0000;
    v9->field_18 = &ShieldTouch__7CShieldP11CBaseEntity;
    v1 = 40.0f;
    v3 = 40.0f;
    v5 = 40.0f;
    v6 = -40.0f;
    v7 = -40.0f;
    v8 = -40.0f;
    sub_48a0d0(v9->field_0, &v6, &v1);
    sub_48db50(v9->field_0, &v9->field_0->field_8);
    sub_488200(v9);
    return v9;
}

