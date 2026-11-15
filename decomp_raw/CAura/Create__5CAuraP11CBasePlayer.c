// Create__5CAuraP11CBasePlayer @0x8fd70 size=364
typedef struct st_48fd70_4 {
    struct st_48fd70_3 *field_0;
    char padding_4[1284];
    unsigned int field_508;
} st_48fd70_4;

typedef struct st_48fd70_2 {
    unsigned int field_0;
} st_48fd70_2;

typedef struct st_48fd70_0 {
    char padding_0[260];
    float field_104;
    unsigned int field_108;
    char padding_10c[80];
    unsigned int field_15c;
    char padding_160[52];
    unsigned int field_194;
    unsigned int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_48fd70_0;

typedef struct st_48fd70_3 {
    char padding_0[8];
    char field_8;
    char padding_9[319];
    unsigned int field_148;
    char padding_14c[188];
    unsigned int field_208;
} st_48fd70_3;

typedef struct st_48fd70_5 {
    struct st_48fd70_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[76];
    struct st_48fd70_1 *field_60;
    char padding_64[580];
    struct st_48fd70_4 *field_2a8;
} st_48fd70_5;

typedef struct st_48fd70_1 {
    char padding_0[8];
    struct st_48fd70_2 *field_8;
} st_48fd70_1;

typedef struct st_48fd70_6 {
    float field_0;
} st_48fd70_6;

extern char RemoveThink__5CAura;
extern st_48fd70_2 *g_engfuncs.pfnIndexOfEdict;
extern st_48fd70_6 *gpGlobals;

st_48fd70_5 * Create__5CAuraP11CBasePlayer(st_48fd70_4 *a0)
{
    st_48fd70_5 *v0;  // edi
    st_48fd70_0 *v1;  // eax
    unsigned int v3;  // edx
    int v4;  // eax

    v0 = GetClassPtr__H1Z5CAura_PX01_PX01(0);
    v0->field_60->field_8(v0);
    UTIL_SetOrigin(v0->field_0, &a0->field_0->field_8);
    v0->field_2a8 = a0;
    v1 = v0->field_0;
    v1->field_198 = a0->field_0->field_208;
    v0->field_c = _INSERT(v1, 0, 0) | 0xffff0000;
    v0->field_10 = &RemoveThink__5CAura;
    v0->field_0->field_104 = (float)(0.5 + *(float *)gpGlobals);
    v0->field_0->field_194 = a0->field_0->field_208;
    v0->field_0->field_108 = 12;
    CAura::SetColor(v0);
    v0->field_0->field_15c = 19;
    v0->field_2a8->field_0->field_148 = 2;
    *(float *)&v0->field_2a8->field_0->padding_14c[0] = 255.0f;
    if (v0->field_2a8->field_508)
    {
        v3 = v0->field_2a8->field_0->field_208;
        v4 = "weapons/swoop.wav";
    }
    else
    {
        v3 = v0->field_2a8->field_0->field_208;
        v4 = "weapons/aura.wav";
    }
    EMIT_SOUND_DYN(v3, 3, v4, 0x3f800000, 0.800000011920929f, 0, 100);
    UTIL_Model_AuraBend(g_engfuncs.pfnIndexOfEdict(v0->field_0->field_208));
    return v0;
}

