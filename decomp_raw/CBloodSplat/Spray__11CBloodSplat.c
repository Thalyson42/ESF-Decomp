// Spray__11CBloodSplat @0xfc0c0 size=238
typedef struct st_4fc0c0_2 {
    struct st_4fc0c0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4fc0c0_2;

typedef struct st_4fc0c0_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[60];
    char field_50;
    char padding_51[179];
    float field_104;
    char padding_108[144];
    int field_198;
} st_4fc0c0_1;

typedef struct st_4fc0c0_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4fc0c0_0;

extern char SUB_Remove__11CBaseEntity;
extern unsigned int g_Language;
extern st_4fc0c0_0 *gpGlobals;

short Spray__11CBloodSplat(st_4fc0c0_2 *a0)
{
    unsigned int *v7;  // eax
    unsigned int *v8;  // edx
    double v9;  // mm5
    double v10;  // mm5
    st_4fc0c0_1 *v11;  // eax
    unsigned int *v12;  // edx
    float v0;  // [bp-0x84]
    float v1;  // [bp-0x80]
    float v2;  // [bp-0x7c]
    float v3;  // [bp-0x64]
    float v4;  // [bp-0x60]
    float v5;  // [bp-0x5c]
    char v6;  // [bp-0x44]

    v7 = &g_Language;
    if (g_Language != 1)
    {
        sub_48a800(&a0->field_0->field_50);
        v8 = &gpGlobals->field_28;
        v9 = 128.0 * gpGlobals->field_28;
        v0 = (float)v9;
        v10 = 128.0 * *(float *)&v8[1];
        v1 = (float)v10;
        v2 = (float)(128.0 * *(float *)&v8[2]);
        v11 = a0->field_0;
        v12 = &v11->field_8;
        v3 = (float)(v9 + *(float *)&v11->field_8);
        v4 = (float)(v10 + *(float *)&v12[1]);
        v5 = *(float *)&v12[2] + v2;
        sub_487b80(v12, &v3, 1, v11->field_198, &v6);
        v7 = sub_48d7e0(&v6, 247);
    }
    a0->field_c = _INSERT(v7, 0, 0) | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    a0->field_0->field_104 = (float)(0.1 + gpGlobals->field_0);
    return (unsigned short)gpGlobals;
}

