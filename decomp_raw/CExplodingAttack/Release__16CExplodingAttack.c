// Release__16CExplodingAttack @0xbc360 size=159
typedef struct st_4bc360_3 {
    struct st_4bc360_2 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4bc360_3;

typedef struct st_4bc360_2 {
    char padding_0[260];
    float field_104;
    char padding_108[256];
    unsigned int field_208;
} st_4bc360_2;

typedef struct st_4bc360_0 {
    float field_0;
} st_4bc360_0;

typedef struct st_4bc360_1 {
    unsigned int field_0;
} st_4bc360_1;

extern char NormalThink__12CMagicAttack;
extern unsigned int gmsgDetachTrail;
extern st_4bc360_1 *g_engfuncs.pfnMessageBegin;
extern st_4bc360_1 *g_engfuncs.pfnMessageEnd;
extern st_4bc360_1 *g_engfuncs.pfnWriteLong;
extern st_4bc360_1 *g_engfuncs.pfnIndexOfEdict;
extern st_4bc360_0 *gpGlobals;

short Release__16CExplodingAttack(st_4bc360_3 *a0)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x2c]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]

    g_engfuncs.pfnMessageBegin(2, gmsgDetachTrail, 0, 0, v1, v2, v3);
    v0 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteLong(v0);
    a0->field_c = _INSERT(g_engfuncs.pfnMessageEnd(v0), 0, 0) | 0xffff0000;
    a0->field_10 = &NormalThink__12CMagicAttack;
    a0->field_0->field_104 = (float)(0.5 + *(float *)gpGlobals);
    return (unsigned short)gpGlobals;
}

