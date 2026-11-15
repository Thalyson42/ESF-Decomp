// MeleeHudDisable__12CPlayerMelee @0x106eb0 size=104
typedef struct st_506eb0_1 {
    char padding_0[292];
    struct st_506eb0_2 *field_124;
} st_506eb0_1;

typedef struct st_506eb0_2 {
    struct st_506eb0_0 *field_0;
} st_506eb0_2;

typedef struct st_506eb0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_506eb0_0;

typedef struct st_506eb0_3 {
    unsigned int field_0;
} st_506eb0_3;

extern unsigned int gmsgMeleeAtkHud;
extern st_506eb0_3 *g_616878;
extern st_506eb0_3 *g_61687c;
extern st_506eb0_3 *g_616880;

int MeleeHudDisable__12CPlayerMelee(st_506eb0_1 *a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]

    g_616878(1, gmsgMeleeAtkHud, 0, *(int *)(*(int *)a0->field_124 + 520), v0, v1);
    g_616880(0);
    return g_61687c(0);
}

