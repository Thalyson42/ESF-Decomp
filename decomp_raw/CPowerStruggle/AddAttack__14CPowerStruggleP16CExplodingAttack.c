// AddAttack__14CPowerStruggleP16CExplodingAttack @0x10d8c0 size=292
typedef struct st_50d8c0_3 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[144];
    unsigned int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_50d8c0_3;

typedef struct st_50d8c0_0 {
    char padding_0[684];
    struct st_50d8c0_1 *field_2ac;
    unsigned int field_2b0;
} st_50d8c0_0;

typedef struct st_50d8c0_2 {
    struct st_50d8c0_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[664];
    unsigned int field_2ac;
    char padding_2b0[16];
    struct st_50d8c0_0 *field_2c0;
} st_50d8c0_2;

typedef struct st_50d8c0_1 {
    struct st_50d8c0_1 *field_0;
    struct st_50d8c0_2 *field_4;
} st_50d8c0_1;

typedef struct st_50d8c0_4 {
    float field_0;
} st_50d8c0_4;

typedef struct st_50d8c0_5 {
    unsigned int field_0;
} st_50d8c0_5;

extern char PowerStruggleThink__16CExplodingAttack;
extern st_50d8c0_5 *g_engfuncs.pfnMessageBegin;
extern st_50d8c0_5 *g_engfuncs.pfnMessageEnd;
extern st_50d8c0_5 *g_engfuncs.pfnWriteByte;
extern st_50d8c0_5 *g_engfuncs.pfnWriteShort;
extern st_50d8c0_5 *g_engfuncs.pfnWriteLong;
extern st_50d8c0_5 *g_engfuncs.pfnIndexOfEdict;
extern st_50d8c0_4 *gpGlobals;

unsigned int * AddAttack__14CPowerStruggleP16CExplodingAttack(st_50d8c0_0 *a0, st_50d8c0_2 *a1)
{
    st_50d8c0_1 *v0;  // edx
    st_50d8c0_0 *v1;  // ecx
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    st_50d8c0_0 *v4;  // eax

    a0->field_2b0 = a0->field_2b0 + 1;
    v0 = __builtin_new(8);
    v0->field_4 = a1;
    v1 = a0;
    v0->field_0 = v1->field_2ac;
    v1->field_2ac = v0;
    g_engfuncs.pfnMessageBegin(9, 0x33, 0, 0);
    g_engfuncs.pfnWriteByte(9);
    g_engfuncs.pfnWriteByte(3);
    v2 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_198);
    g_engfuncs.pfnWriteShort(v2);
    v3 = g_engfuncs.pfnIndexOfEdict(a1->field_0->field_208);
    g_engfuncs.pfnWriteShort(v3);
    g_engfuncs.pfnWriteLong(6);
    g_engfuncs.pfnMessageEnd();
    a1->field_2ac = 1;
    v4 = a0;
    a1->field_2c0 = v4;
    a1->field_c = _INSERT(v4, 0, 0) | 0xffff0000;
    a1->field_10 = &PowerStruggleThink__16CExplodingAttack;
    *(float *)&a1->field_0->field_104 = *(float *)gpGlobals;
    return gpGlobals;
}

