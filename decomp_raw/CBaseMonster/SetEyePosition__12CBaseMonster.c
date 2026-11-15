// SetEyePosition__12CBaseMonster @0xd86f0 size=240
typedef struct st_4d86f0_0 {
    unsigned int field_0;
    char padding_4[368];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[136];
    unsigned int field_208;
} st_4d86f0_0;

typedef struct st_4d86f0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4d86f0_2;

typedef struct st_4d86f0_1 {
    unsigned int field_0;
} st_4d86f0_1;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4d86f0_1 *g_engfuncs.pfnAlertMessage;
extern st_4d86f0_1 *g_engfuncs.pfnGetModelPtr;
extern st_4d86f0_2 *gpGlobals;

unsigned int SetEyePosition__12CBaseMonster(st_4d86f0_0 **a0)
{
    st_4d86f0_0 *v5;  // edx
    st_4d86f0_0 *v6;  // edx
    unsigned int v7;  // edi
    char v0;  // [bp-0x24]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    GetEyePosition(g_engfuncs.pfnGetModelPtr(*a0->field_208), &v0);
    v5 = *a0;
    v5->field_174 = v1;
    v5->field_178 = v2;
    v5->field_17c = v3;
    v6 = *a0;
    v7 = 0;
    if (*(float *)&g_vecZero == v6->field_174 && *(float *)&g_vecZero+4 == v6->field_178)
        v7 = *(float *)&g_vecZero+8 == v6->field_17c;
    return g_engfuncs.pfnAlertMessage(2, "%s has no view_ofs!\n", *a0->field_0 + gpGlobals->field_98);
}

