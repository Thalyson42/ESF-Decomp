// AddEntEntTrail__11CBeamAttackiiiiiiiiiG6Vector @0x901d0 size=373
typedef struct st_4901d0_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4901d0_1;

typedef struct st_4901d0_0 {
    unsigned int field_0;
} st_4901d0_0;

extern unsigned int gmsgEntEntTrail;
extern st_4901d0_0 *g_616878;
extern st_4901d0_0 *g_61687c;
extern st_4901d0_0 *g_616880;
extern st_4901d0_0 *g_616888;
extern st_4901d0_0 *g_61688c;
extern st_4901d0_0 *g_616894;
extern st_4901d0_0 *g_6168dc;

int AddEntEntTrail__11CBeamAttackiiiiiiiiiG6Vector(st_4901d0_1 **a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, int a8, unsigned int a9, float *a10)
{
    unsigned int v6;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    unsigned short v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0xa]
    int v5;  // [bp-0x8]

    g_616878(2, gmsgEntEntTrail, 0, 0, v0, v1, v2);
    g_61688c(a1);
    v6 = g_6168dc(*a0->field_208);
    g_61688c(v6);
    g_616880(a2);
    g_616888(a3);
    g_616888(a4);
    g_616888(a5);
    g_616888(a6);
    g_616888(a7);
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v5 = (int)((double)a8 * 0.1);
    g_616880(v5);
    g_616880(a9);
    g_616894(*a10);
    g_616894(a10[1]);
    g_616894(a10[2]);
    return g_61687c();
}

