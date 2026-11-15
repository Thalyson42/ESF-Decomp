// Remove__11CBeamAttack @0x90350 size=164
typedef struct st_490350_1 {
    char padding_0[520];
    int field_208;
} st_490350_1;

typedef struct st_490350_0 {
    unsigned int field_0;
} st_490350_0;

extern unsigned int gmsgKillTrail;
extern st_490350_0 *g_616878;
extern st_490350_0 *g_61687c;
extern st_490350_0 *g_61688c;
extern st_490350_0 *g_6168dc;

int Remove__11CBeamAttack(st_490350_1 **a0)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]

    g_616878(2, gmsgKillTrail, 0, 0, v1, v2, v3);
    v0 = g_6168dc(*a0->field_208);
    g_61688c(v0);
    g_61687c(v0);
    sub_489390(*a0->field_208, 1, "weapons/beamhead.wav", 0, 0, 32, 100);
    return sub_487f90(a0);
}

