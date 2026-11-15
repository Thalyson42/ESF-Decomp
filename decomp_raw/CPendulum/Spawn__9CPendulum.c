// Spawn__9CPendulum @0x92db0 size=492
typedef struct st_492db0_1 {
    struct st_492db0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[64];
    float field_64;
    unsigned int field_68;
    char padding_6c[8];
    unsigned int field_74;
    char padding_78[4];
    unsigned int field_7c;
    unsigned int field_80;
    unsigned int field_84;
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} st_492db0_1;

typedef struct st_492db0_4 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[92];
    unsigned int field_68;
    char padding_6c[72];
    unsigned int field_b4;
    unsigned int field_b8;
    unsigned int field_bc;
    char padding_c0[144];
    char field_150;
    char padding_151[87];
    unsigned int field_1a8;
    char padding_1ac[12];
    unsigned int field_1b8;
} st_492db0_4;

typedef struct st_492db0_0 {
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
    char padding_bc[72];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[144];
    char field_1a0;
    char padding_1a1[87];
    float field_1f8;
    char padding_1fc[12];
    unsigned int field_208;
} st_492db0_0;

typedef struct st_492db0_2 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_492db0_2;

typedef struct st_492db0_3 {
    unsigned int field_0;
} st_492db0_3;

extern char PendulumUse__9CPendulumP11CBaseEntityT18USE_TYPEf;
extern char RopeTouch__9CPendulumP11CBaseEntity;
extern char SUB_CallUseToggle__11CBaseEntity;
extern st_492db0_3 *g_6167c8;
extern st_492db0_2 *gpGlobals;

unsigned int Spawn__9CPendulum(st_492db0_1 *a0)
{
    double v7;  // mm7
    st_492db0_0 *v8;  // ecx
    float v9;  // 128
    unsigned int *v10;  // eax
    st_492db0_4 *v11;  // eax
    st_492db0_0 *v13;  // eax
    unsigned int v15;  // eax
    float v0;  // [bp-0x54]
    float v1;  // [bp-0x50]
    float v2;  // [bp-0x4c]
    float v3;  // [bp-0x34]
    float v4;  // [bp-0x30]
    float v5;  // [bp-0x2c]
    float v6;  // [bp-0x8]

    sub_48b820(a0->field_0);
    if (a0->field_0->field_1a0 & 8)
        a0->field_0->field_10c = 0;
    else
        a0->field_0->field_10c = 4;
    a0->field_0->field_108 = 7;
    sub_48db50(a0->field_0, &a0->field_0->field_8);
    g_6167c8(a0->field_0->field_208, a0->field_0->field_b8 + gpGlobals->field_98);
    if (*(float *)&a0->field_68 == 0.0f)
        return v15 | 0xffff0000;
    if (a0->field_0->field_1f8 == 0.0f)
        a0->field_0->field_1f8 = 100.0f;
    v7 = fabs(*(float *)&a0->field_68);
    v8 = a0->field_0;
    a0->field_64 = (float)(v8->field_1f8 * v8->field_1f8 / (v7 + v7));
    *(float *)&a0->field_74 = v8->field_1f8;
    a0->field_88 = v8->field_50;
    a0->field_8c = v8->field_54;
    a0->field_90 = v8->field_58;
    v6 = (float)(0.5 * *(float *)&a0->field_68);
    v9 = v6;
    v10 = &v8->field_44;
    v0 = v9 * *(float *)&v8->field_44;
    v1 = v9 * *(float *)&v10[1];
    v2 = v9 * *(float *)&v10[2];
    v11 = &v8->field_50;
    v3 = v0 + *(float *)&v8->field_50;
    v4 = v1 + *(float *)&v11->field_4;
    v5 = *(float *)&v11->field_8 + v2;
    *(float *)&a0->field_7c = v3;
    *(float *)&a0->field_80 = v4;
    *(float *)&a0->field_84 = v5;
    if (v8->field_1a0 & 1)
    {
        a0->field_c = _INSERT(v5, 0, 0) | 0xffff0000;
        a0->field_10 = &SUB_CallUseToggle__11CBaseEntity;
        v8->field_104 = (float)(0.1 + gpGlobals->field_0);
    }
    v13 = a0->field_0;
    v13->field_1f8 = 0;
    a0->field_1c = _INSERT(v13, 0, 0) | 0xffff0000;
    a0->field_20 = &PendulumUse__9CPendulumP11CBaseEntityT18USE_TYPEf;
    if (a0->field_0->field_1a0 & 2)
    {
        v15 = _INSERT(a0->field_0, 0, 0);
        a0->field_14 = v15 | 0xffff0000;
        a0->field_18 = &RopeTouch__9CPendulumP11CBaseEntity;
    }
    return v15 | 0xffff0000;
}

