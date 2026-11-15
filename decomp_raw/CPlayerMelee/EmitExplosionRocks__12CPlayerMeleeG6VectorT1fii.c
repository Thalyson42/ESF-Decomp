// EmitExplosionRocks__12CPlayerMeleeG6VectorT1fii @0x10bf50 size=353
typedef struct st_50bf50_0 {
    unsigned int field_0;
} st_50bf50_0;

extern short g_sRockGibs;
extern st_50bf50_0 *g_616878;
extern st_50bf50_0 *g_61687c;
extern st_50bf50_0 *g_616880;
extern st_50bf50_0 *g_616888;
extern st_50bf50_0 *g_616894;

int EmitExplosionRocks__12CPlayerMeleeG6VectorT1fii(unsigned int a0, float *a1, float *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(4, 23, 0, 0, v0, v1, v2);
    g_616880(108);
    g_616894(*a1);
    g_616894(a1[1]);
    g_616894(a1[2]);
    g_616894(a3);
    g_616894(a3);
    g_616894(a3);
    g_616894(*a2);
    g_616894(a2[1]);
    g_616894(a2[2]);
    g_616880(a4);
    g_616888(g_sRockGibs);
    g_616880(a5);
    g_616880(50);
    g_616880(0);
    return g_61687c(0);
}

