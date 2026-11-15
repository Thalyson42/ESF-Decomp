// Respawn__15CBasePlayerItem @0x1381f0 size=268
typedef struct st_5381f0_5 {
    char padding_0[260];
    float field_104;
    char padding_108[16];
    char field_118;
} st_5381f0_5;

typedef struct st_5381f0_6 {
    struct st_5381f0_5 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_5381f0_6;

typedef struct st_5381f0_3 {
    unsigned int field_0;
    char padding_4[76];
    char field_50;
    char padding_51[327];
    int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_5381f0_3;

typedef struct st_5381f0_0 {
    char padding_0[128];
    struct st_5381f0_1 *field_80;
    char padding_84[4];
    struct st_5381f0_1 *field_88;
} st_5381f0_0;

typedef struct st_5381f0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_5381f0_4;

typedef struct st_5381f0_1 {
    unsigned int field_0;
} st_5381f0_1;

typedef struct st_5381f0_2 {
    char padding_0[68];
    struct st_5381f0_0 *field_44;
} st_5381f0_2;

extern char AttemptToMaterialize__15CBasePlayerItem;
extern st_5381f0_2 *g_pGameRules;
extern st_5381f0_1 *g_616828;
extern st_5381f0_1 *g_6168b4;
extern st_5381f0_4 *gpGlobals;

st_5381f0_6 * Respawn__15CBasePlayerItem(st_5381f0_3 **a0)
{
    st_5381f0_3 *v1;  // edx
    st_5381f0_6 *v2;  // esi
    st_5381f0_5 *v3;  // eax
    double v5;  // mm7
    char v0;  // [bp-0x24]

    g_pGameRules->field_44->field_88(&v0, g_pGameRules, a0);
    v1 = *a0;
    v2 = sub_48a0f0(v1->field_0 + gpGlobals->field_98, &v0, &v1->field_50, v1->field_198);
    if (!v2)
    {
        g_6168b4(1, "Respawn failed to create %s!\n", *a0->field_0 + gpGlobals->field_98);
        return v2;
    }
    v3 = v2->field_0;
    v3->field_118 = v3->field_118 | 128;
    v2->field_14 = 0;
    v2->field_18 = 0;
    v2->field_c = _INSERT(v3, 0, 0) | 0xffff0000;
    v2->field_10 = &AttemptToMaterialize__15CBasePlayerItem;
    g_616828(*a0->field_208);
    g_pGameRules->field_44->field_80(g_pGameRules, a0);
    v2->field_0->field_104 = (float)v5;
    return v2;
}

