// SetModelCollisionBox__11CBaseEntity @0x9db10 size=266
typedef struct st_49db10_2 {
    char padding_0[88];
    char field_58;
    char padding_59[11];
    float field_64;
    float field_68;
    float field_6c;
    char padding_70[56];
    unsigned int field_a8;
} st_49db10_2;

typedef struct st_49db10_0 {
    char padding_0[296];
    unsigned int field_128;
    char padding_12c[220];
    unsigned int field_208;
} st_49db10_0;

typedef struct st_49db10_1 {
    unsigned int field_0;
} st_49db10_1;

extern st_49db10_1 *g_engfuncs.pfnAlertMessage;
extern st_49db10_1 *g_engfuncs.pfnGetModelPtr;

int SetModelCollisionBox__11CBaseEntity(st_49db10_0 **a0)
{
    st_49db10_2 *v3;  // edx
    unsigned int *v4;  // ecx
    unsigned int v5;  // esi
    st_49db10_2 *v6;  // ecx
    unsigned int *v7;  // esi
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v3 = g_engfuncs.pfnGetModelPtr(*a0->field_208);
    if (!v3)
        return g_engfuncs.pfnAlertMessage(1, "Unable to fetch model pointer!\n");
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v4 = &v3->field_64;
    v5 = 0;
    if (v3->field_64 == 0.0f && *(float *)&v4[1] == 0.0f)
        v5 = *(float *)&v4[2] == 0.0f;
    if (v5)
    {
        v6 = &v3->padding_0[v3->field_a8];
        v7 = *a0;
        return UTIL_SetSize(v7, 176 * v7[74] + (char *)v6 + 96, 176 * v7[74] + (char *)v6 + 108);
    }
    return UTIL_SetSize(*a0, &v3->field_58, &v3->field_64);
}

