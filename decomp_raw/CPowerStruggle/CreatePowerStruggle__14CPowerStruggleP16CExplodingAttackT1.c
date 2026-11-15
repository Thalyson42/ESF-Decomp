// CreatePowerStruggle__14CPowerStruggleP16CExplodingAttackT1 @0x10d350 size=322
typedef struct st_50d350_0 {
    char padding_0[260];
    unsigned int field_104;
} st_50d350_0;

typedef struct st_50d350_3 {
    char padding_0[408];
    unsigned int field_198;
} st_50d350_3;

typedef struct st_50d350_1 {
    struct st_50d350_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[656];
    unsigned int field_2ac;
    unsigned int field_2b0;
    unsigned int field_2b4;
} st_50d350_1;

typedef struct st_50d350_2 {
    float field_0;
} st_50d350_2;

typedef struct st_50d350_4 {
    unsigned int field_0;
} st_50d350_4;

extern char PSThink__14CPowerStruggle;
extern st_50d350_4 *g_engfuncs.pfnMessageBegin;
extern st_50d350_4 *g_engfuncs.pfnMessageEnd;
extern st_50d350_4 *g_engfuncs.pfnWriteByte;
extern st_50d350_4 *g_engfuncs.pfnWriteShort;
extern st_50d350_4 *g_engfuncs.pfnWriteLong;
extern st_50d350_4 *g_engfuncs.pfnIndexOfEdict;
extern st_50d350_2 *gpGlobals;

st_50d350_1 * CreatePowerStruggle__14CPowerStruggleP16CExplodingAttackT1(st_50d350_3 **a0, st_50d350_3 **a1)
{
    st_50d350_1 *v0;  // edi
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    unsigned int v4;  // eax

    v0 = GetClassPtr__H1Z14CPowerStruggle_PX01_PX01(0);
    v0->field_2ac = 0;
    v0->field_2b0 = 0;
    CPowerStruggle::AddAttack(v0, a0);
    v1 = CPowerStruggle::AddAttack(v0, a1);
    v0->field_14 = 0;
    v0->field_18 = 0;
    v0->field_2b4 = 0;
    v2 = _INSERT(v1, 0, 0);
    v0->field_c = v2 | 0xffff0000;
    v0->field_10 = &PSThink__14CPowerStruggle;
    *(float *)&v0->field_0->field_104 = *(float *)gpGlobals;
    g_engfuncs.pfnMessageBegin(9, 0x33, 0, 0);
    g_engfuncs.pfnWriteByte(9);
    g_engfuncs.pfnWriteByte(3);
    v3 = g_engfuncs.pfnIndexOfEdict(*a0->field_198);
    g_engfuncs.pfnWriteShort(v3);
    v4 = g_engfuncs.pfnIndexOfEdict(*a1->field_198);
    g_engfuncs.pfnWriteShort(v4);
    g_engfuncs.pfnWriteLong(6);
    g_engfuncs.pfnMessageEnd();
    return v0;
}

