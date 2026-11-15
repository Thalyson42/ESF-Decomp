// EmitShockwave__12CPlayerMelee @0x10bea0 size=170
typedef struct st_50bea0_1 {
    char padding_0[292];
    struct st_50bea0_2 *field_124;
} st_50bea0_1;

typedef struct st_50bea0_2 {
    struct st_50bea0_0 *field_0;
} st_50bea0_2;

typedef struct st_50bea0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_50bea0_0;

typedef struct st_50bea0_3 {
    unsigned int field_0;
} st_50bea0_3;

extern unsigned int gmsgMeleeFX;
extern st_50bea0_3 *g_616878;
extern st_50bea0_3 *g_61687c;
extern st_50bea0_3 *g_616880;
extern st_50bea0_3 *g_6168dc;

int EmitShockwave__12CPlayerMelee(st_50bea0_1 *a0)
{
    unsigned int v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0x18]
    unsigned int v5;  // [bp-0x14]

    g_616878(4, gmsgMeleeFX, *(int *)a0->field_124 + 8, 0, v3, v4, v5);
    g_616880(1);
    v2 = g_6168dc(*(int *)(*(int *)a0->field_124 + 520));
    g_616880(v2);
    g_61687c(v2);
    v1 = 1;
    v0 = 1;
    return sub_488750(a0, sub_48be70(a0));
}

