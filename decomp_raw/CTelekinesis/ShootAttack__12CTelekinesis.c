// ShootAttack__12CTelekinesis @0x12a3f0 size=239
typedef struct st_52a3f0_1 {
    unsigned int field_0;
} st_52a3f0_1;

typedef struct st_52a3f0_0 {
    char padding_0[128];
    struct st_52a3f0_1 *field_80;
    char padding_84[336];
    int field_1d4;
    char padding_1d8[20];
    int field_1ec;
    char padding_1f0[20];
    char field_204;
} st_52a3f0_0;

typedef struct st_52a3f0_2 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_52a3f0_2;

extern st_52a3f0_1 *g_engfuncs.pfnAlertMessage;
extern st_52a3f0_2 *gpGlobals;

unsigned int * ShootAttack__12CTelekinesis(st_52a3f0_0 *a0)
{
    unsigned int *v6;  // eax
    float *v7;  // eax
    unsigned int *v8;  // edx
    int i;  // esi
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = UTIL_MakeVectors(*(int *)a0->field_80 + 116);
    if (!a0->field_204)
        return v6;
    if (a0->field_1ec > 6)
        g_engfuncs.pfnAlertMessage(1, "Invalid m_iRock: %d\n", a0->field_1ec);
    v7 = gpGlobals;
    v8 = &gpGlobals->field_28;
    v3 = (float)(1200.0 * gpGlobals->field_28);
    v4 = (float)(1200.0 * *(float *)&v8[1]);
    v5 = (float)(1200.0 * *(float *)&v8[2]);
    i = 0;
    if (0 < a0->field_1ec)
    {
        do
        {
            v0 = v3;
            v1 = v4;
            v2 = v5;
            v7 = CRock::Shoot((&a0->field_1d4)[i], &v0);
            i += 1;
        } while (i < a0->field_1ec);
    }
    a0->field_1ec = 0;
    a0->field_204 = 0;
    return v7;
}

