// UTIL_DrawBeam__FP7edict_sG6VectorT1iiiiiiii @0x1794d0 size=408
typedef struct st_5794d0_0 {
    unsigned int field_0;
} st_5794d0_0;

extern st_5794d0_0 *g_616878;
extern st_5794d0_0 *g_61687c;
extern st_5794d0_0 *g_616880;
extern st_5794d0_0 *g_616888;
extern st_5794d0_0 *g_616894;
extern unsigned int m_iSpriteTexture;

int UTIL_DrawBeam__FP7edict_sG6VectorT1iiiiiiii(unsigned int a0, float *a1, float *a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(1, 23, 0, a0, v0, v1, v2);
    g_616880(0);
    g_616894(*a1);
    g_616894(a1[1]);
    g_616894(a1[2]);
    g_616894(*a2);
    g_616894(a2[1]);
    g_616894(a2[2]);
    g_616888(m_iSpriteTexture);
    g_616880(1);
    g_616880(10);
    g_616880(a10);
    g_616880(a3);
    g_616880(a4);
    g_616880(a5);
    g_616880(a6);
    g_616880(a7);
    g_616880(a8);
    g_616880(a9);
    return g_61687c();
}

