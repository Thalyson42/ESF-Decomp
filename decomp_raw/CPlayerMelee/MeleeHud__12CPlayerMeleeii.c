// MeleeHud__12CPlayerMeleeii @0x1067a0 size=126
typedef struct st_5067a0_1 {
    char padding_0[292];
    struct st_5067a0_2 *field_124;
} st_5067a0_1;

typedef struct st_5067a0_2 {
    struct st_5067a0_0 *field_0;
} st_5067a0_2;

typedef struct st_5067a0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_5067a0_0;

typedef struct st_5067a0_3 {
    unsigned int field_0;
} st_5067a0_3;

extern unsigned int gmsgMeleeAtkHud;
extern st_5067a0_3 *g_616878;
extern st_5067a0_3 *g_61687c;
extern st_5067a0_3 *g_616880;

int MeleeHud__12CPlayerMeleeii(st_5067a0_1 *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(1, gmsgMeleeAtkHud, 0, *(int *)(*(int *)a0->field_124 + 520), v0, v1, v2);
    g_616880(a1);
    g_616880(a2);
    return g_61687c();
}

