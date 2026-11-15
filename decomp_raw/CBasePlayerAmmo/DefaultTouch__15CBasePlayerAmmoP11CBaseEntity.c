// DefaultTouch__15CBasePlayerAmmoP11CBaseEntity @0x138f20 size=207
typedef struct st_538f20_0 {
    char padding_0[160];
    struct st_538f20_1 *field_a0;
} st_538f20_0;

typedef struct st_538f20_5 {
    char padding_0[192];
    struct st_538f20_1 *field_c0;
    char padding_c4[36];
    struct st_538f20_1 *field_e8;
} st_538f20_5;

typedef struct st_538f20_4 {
    char padding_0[260];
    float field_104;
} st_538f20_4;

typedef struct st_538f20_1 {
    unsigned int field_0;
} st_538f20_1;

typedef struct st_538f20_2 {
    char padding_0[96];
    struct st_538f20_0 *field_60;
} st_538f20_2;

typedef struct st_538f20_6 {
    struct st_538f20_4 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_538f20_5 *field_60;
} st_538f20_6;

typedef struct st_538f20_7 {
    char padding_0[168];
    struct st_538f20_1 *field_a8;
} st_538f20_7;

typedef struct st_538f20_3 {
    float field_0;
} st_538f20_3;

typedef struct st_538f20_8 {
    char padding_0[68];
    struct st_538f20_7 *field_44;
} st_538f20_8;

extern char SUB_Remove__11CBaseEntity;
extern st_538f20_8 *g_pGameRules;
extern st_538f20_3 *gpGlobals;
extern unsigned int gEvilImpulse101;

unsigned int * DefaultTouch__15CBasePlayerAmmoP11CBaseEntity(st_538f20_6 *a0, st_538f20_2 *a1)
{
    unsigned int *v0;  // eax
    unsigned int *v1;  // eax

    v0 = a1->field_60->field_a0(a1);
    if (!v0)
        return v0;
    if (a0->field_60->field_e8(a0, a1))
    {
        v1 = g_pGameRules->field_44->field_a8(g_pGameRules, a0);
        if (v1 == 0x3)
            return a0->field_60->field_c0(a0);
    }
    else
    {
        v1 = &gEvilImpulse101;
        if (!gEvilImpulse101)
            return &gEvilImpulse101;
    }
    a0->field_14 = 0;
    a0->field_18 = 0;
    a0->field_c = _INSERT(v1, 0, 0) | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    return gpGlobals;
}

