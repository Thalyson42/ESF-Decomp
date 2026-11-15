// ShowBadNode__9CTestHull @0xe1e50 size=553
typedef struct st_4e1e50_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    char field_50;
    char padding_51[3];
    float field_54;
    char padding_58[172];
    float field_104;
    unsigned int field_108;
} st_4e1e50_1;

typedef struct st_4e1e50_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_4e1e50_0;

extern int g_vecZero;
extern st_4e1e50_0 *gpGlobals;

unsigned int * ShowBadNode__9CTestHull(st_4e1e50_1 **a0)
{
    unsigned int *v9;  // edx
    unsigned int *v10;  // edx
    unsigned int *v11;  // edx
    unsigned int *v12;  // edx
    unsigned int *v13;  // edx
    unsigned int *v14;  // edx
    unsigned int *v15;  // edx
    unsigned int *v16;  // edx
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x38]
    float v4;  // [bp-0x34]
    float v5;  // [bp-0x30]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    *a0->field_108 = 5;
    *a0->field_54 = (float)(*a0->field_54 + 4.0);
    UTIL_MakeVectors(&*a0->field_50);
    UTIL_ParticleEffect(&*a0->field_8, &g_vecZero, 0xff, 25);
    v9 = &gpGlobals->field_28;
    v0 = 64.0f * gpGlobals->field_28;
    v1 = 64.0f * *(float *)&v9[1];
    v2 = 64.0f * *(float *)&v9[2];
    v10 = &*a0->field_8;
    v6 = *a0->field_8 + v0;
    v7 = *(float *)&v10[1] + v1;
    v8 = *(float *)&v10[2] + v2;
    UTIL_ParticleEffect(&v6, &g_vecZero, 0xff, 25);
    v11 = &gpGlobals->field_28;
    v3 = 64.0f * gpGlobals->field_28;
    v4 = 64.0f * *(float *)&v11[1];
    v5 = 64.0f * *(float *)&v11[2];
    v12 = &*a0->field_8;
    v0 = *a0->field_8 - v3;
    v1 = *(float *)&v12[1] - v4;
    v2 = *(float *)&v12[2] - v5;
    UTIL_ParticleEffect(&v0, &g_vecZero, 0xff, 25);
    v13 = &gpGlobals->field_40;
    v3 = 64.0f * gpGlobals->field_40;
    v4 = 64.0f * *(float *)&v13[1];
    v5 = 64.0f * *(float *)&v13[2];
    v14 = &*a0->field_8;
    v0 = *a0->field_8 + v3;
    v1 = *(float *)&v14[1] + v4;
    v2 = *(float *)&v14[2] + v5;
    UTIL_ParticleEffect(&v0, &g_vecZero, 0xff, 25);
    v15 = &gpGlobals->field_40;
    v3 = 64.0f * gpGlobals->field_40;
    v4 = 64.0f * *(float *)&v15[1];
    v5 = 64.0f * *(float *)&v15[2];
    v16 = &*a0->field_8;
    v0 = *a0->field_8 - v3;
    v1 = *(float *)&v16[1] - v4;
    v2 = *(float *)&v16[2] - v5;
    UTIL_ParticleEffect(&v0, &g_vecZero, 0xff, 25);
    *a0->field_104 = (float)(0.1 + gpGlobals->field_0);
    return gpGlobals;
}

