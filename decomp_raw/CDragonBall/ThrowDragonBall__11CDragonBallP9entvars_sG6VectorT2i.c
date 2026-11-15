// ThrowDragonBall__11CDragonBallP9entvars_sG6VectorT2i @0xae8b0 size=367
typedef struct st_4ae8b0_1 {
    unsigned int field_0;
} st_4ae8b0_1;

typedef struct st_4ae8b0_4 {
    char padding_0[520];
    unsigned int field_208;
} st_4ae8b0_4;

typedef struct st_4ae8b0_3 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[364];
    unsigned int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_4ae8b0_3;

typedef struct st_4ae8b0_2 {
    struct st_4ae8b0_3 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4ae8b0_0 *field_60;
    char padding_64[4];
    unsigned int field_68;
    int field_6c;
} st_4ae8b0_2;

typedef struct st_4ae8b0_0 {
    char padding_0[8];
    struct st_4ae8b0_1 *field_8;
} st_4ae8b0_0;

typedef struct st_4ae8b0_6 {
    char padding_0[248];
    struct st_4ae8b0_1 *field_f8;
} st_4ae8b0_6;

typedef struct st_4ae8b0_5 {
    float field_0;
} st_4ae8b0_5;

typedef struct st_4ae8b0_7 {
    char padding_0[68];
    struct st_4ae8b0_6 *field_44;
} st_4ae8b0_7;

extern char PickupTouch__11CDragonBallP11CBaseEntity;
extern st_4ae8b0_7 *g_pGameRules;
extern st_4ae8b0_1 *g_6167c8;
extern st_4ae8b0_1 *g_6168b4;
extern st_4ae8b0_5 *gpGlobals;

st_4ae8b0_2 * ThrowDragonBall__11CDragonBallP9entvars_sG6VectorT2i(st_4ae8b0_4 *a0, int a1, unsigned int *a2, int a3)
{
    st_4ae8b0_2 *v7;  // edi
    unsigned int *v8;  // edx
    unsigned int v9;  // eax
    float v0;  // [bp-0x144]
    float v1;  // [bp-0x140]
    unsigned int v2;  // [bp-0x13c]
    unsigned int v3;  // [bp-0x124]
    unsigned int v4;  // [bp-0x120]
    float v5;  // [bp-0x11c]
    char v6;  // [bp-0x104]

    if ((unsigned int)(a3 - 1) > 6)
    {
        g_6168b4(1, "Attempting to create Dragonball with invalid nr\n");
        return NULL;
    }
    v7 = sub_489e30(0);
    v7->field_60->field_8(v7);
    sub_48d990(&v6, "models/db%d.mdl", a3);
    g_6167c8(v7->field_0->field_208, &v6);
    v3 = 0x3f800000;
    v4 = 0x3f800000;
    v5 = 2.0f;
    v0 = -1.0f;
    v1 = -1.0f;
    v2 = 0;
    sub_48a0d0(v7->field_0, &v0, &v3);
    v7->field_0->field_198 = a0->field_208;
    sub_48db50(v7->field_0, a1);
    v8 = v7->field_0;
    v8[8] = *a2;
    v8[9] = a2[1];
    v8[10] = a2[2];
    v7->field_6c = a3;
    *(float *)&v7->field_68 = *(float *)gpGlobals;
    v9 = _INSERT(gpGlobals, 0, 0);
    v7->field_14 = v9 | 0xffff0000;
    v7->field_18 = &PickupTouch__11CDragonBallP11CBaseEntity;
    g_pGameRules->field_44->field_f8(g_pGameRules, a3, v7);
    return v7;
}

