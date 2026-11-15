// MeleeHudRemove__12CPlayerMeleei @0x106820 size=108
typedef struct st_506820_1 {
    char padding_0[292];
    struct st_506820_2 *field_124;
} st_506820_1;

typedef struct st_506820_2 {
    struct st_506820_0 *field_0;
} st_506820_2;

typedef struct st_506820_0 {
    char padding_0[520];
    unsigned int field_208;
} st_506820_0;

typedef struct st_506820_3 {
    unsigned int field_0;
} st_506820_3;

extern unsigned int gmsgMeleeAtkHud;
extern st_506820_3 *g_engfuncs.pfnMessageBegin;
extern st_506820_3 *g_engfuncs.pfnMessageEnd;
extern st_506820_3 *g_engfuncs.pfnWriteByte;

int MeleeHudRemove__12CPlayerMeleei(st_506820_1 *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(1, gmsgMeleeAtkHud, 0, *(int *)(*(int *)a0->field_124 + 520), v0, v1, v2);
    g_engfuncs.pfnWriteByte(a1);
    return g_engfuncs.pfnMessageEnd(a1);
}

