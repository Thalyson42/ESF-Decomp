// MeleeHudFlags__12CPlayerMeleeiif @0x106c60 size=190
typedef struct st_506c60_1 {
    char padding_0[292];
    struct st_506c60_2 *field_124;
} st_506c60_1;

typedef struct st_506c60_2 {
    struct st_506c60_0 *field_0;
} st_506c60_2;

typedef struct st_506c60_0 {
    char padding_0[520];
    unsigned int field_208;
} st_506c60_0;

typedef struct st_506c60_3 {
    unsigned int field_0;
} st_506c60_3;

extern unsigned int gmsgMeleeAtkHud;
extern st_506c60_3 *g_engfuncs.pfnMessageBegin;
extern st_506c60_3 *g_engfuncs.pfnMessageEnd;
extern st_506c60_3 *g_engfuncs.pfnWriteByte;
extern st_506c60_3 *g_engfuncs.pfnWriteShort;

int MeleeHudFlags__12CPlayerMeleeiif(st_506c60_1 *a0, unsigned int a1, int a2, float a3)
{
    unsigned int v3;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v3 = CPlayerMelee::FlagsToDirections(a0, a2);
    g_engfuncs.pfnMessageBegin(1, gmsgMeleeAtkHud, 0, *(int *)(*(int *)a0->field_124 + 520));
    g_engfuncs.pfnWriteByte(a1);
    g_engfuncs.pfnWriteByte(v3);
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)(a3 * 100.0);
    g_engfuncs.pfnWriteShort(v0);
    return g_engfuncs.pfnMessageEnd(v0);
}

