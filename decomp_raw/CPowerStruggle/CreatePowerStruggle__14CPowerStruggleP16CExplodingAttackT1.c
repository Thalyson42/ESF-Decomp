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
extern st_50d350_4 *g_616878;
extern st_50d350_4 *g_61687c;
extern st_50d350_4 *g_616880;
extern st_50d350_4 *g_616888;
extern st_50d350_4 *g_61688c;
extern st_50d350_4 *g_6168dc;
extern st_50d350_2 *gpGlobals;

st_50d350_1 * CreatePowerStruggle__14CPowerStruggleP16CExplodingAttackT1(st_50d350_3 **a0, st_50d350_3 **a1)
{
    st_50d350_1 *v0;  // edi
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    unsigned int v4;  // eax

    v0 = sub_4887b0(0);
    v0->field_2ac = 0;
    v0->field_2b0 = 0;
    sub_489ab0(v0, a0);
    v1 = sub_489ab0(v0, a1);
    v0->field_14 = 0;
    v0->field_18 = 0;
    v0->field_2b4 = 0;
    v2 = _INSERT(v1, 0, 0);
    v0->field_c = v2 | 0xffff0000;
    v0->field_10 = &PSThink__14CPowerStruggle;
    *(float *)&v0->field_0->field_104 = *(float *)gpGlobals;
    g_616878(9, 0x33, 0, 0);
    g_616880(9);
    g_616880(3);
    v3 = g_6168dc(*a0->field_198);
    g_616888(v3);
    v4 = g_6168dc(*a1->field_198);
    g_616888(v4);
    g_61688c(6);
    g_61687c();
    return v0;
}

