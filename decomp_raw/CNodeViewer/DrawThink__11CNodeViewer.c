// DrawThink__11CNodeViewer @0xe6350 size=745
typedef struct st_4e6350_0 {
    float field_0;
} st_4e6350_0;

typedef struct st_4e6350_1 {
    unsigned int field_0;
} st_4e6350_1;

extern st_4e6350_1 *g_616878;
extern st_4e6350_1 *g_61687c;
extern st_4e6350_1 *g_616880;
extern st_4e6350_1 *g_616888;
extern st_4e6350_1 *g_616894;
extern st_4e6350_0 *gpGlobals;
extern st_4e6350_0 *g_61716c;
extern short g_sModelIndexLaser;

unsigned int DrawThink__11CNodeViewer(float idx)
{
    unsigned int v7;  // eax
    unsigned int *v0;  // [bp-0x18]
    unsigned int *v1;  // [bp-0x14]
    int v2;  // [bp-0x10]
    int v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    *(float *)(*(int *)idx + 260) = *(float *)gpGlobals;
    v2 = 0;
    v1 = *(unsigned int *)&idx + 112;
    v0 = *(unsigned int *)&idx + 624;
    while (*(int *)(*(unsigned int *)&idx + 104) != *(int *)(*(unsigned int *)&idx + 108))
    {
        g_616878(0, 23, 0, 0);
        g_616880(0);
        g_616894(*(float *)&g_61716c[22 * v1[*(int *)(*(unsigned int *)&idx + 104)]]);
        g_616894(*(float *)&g_61716c[1 + 22 * v1[*(int *)(*(unsigned int *)&idx + 104)]]);
        g_616894((float)(8.0 + *(float *)&g_61716c[2 + 22 * v1[*(int *)(*(unsigned int *)&idx + 104)]]));
        g_616894(*(float *)&g_61716c[22 * v0[*(int *)(*(unsigned int *)&idx + 104)]]);
        g_616894(*(float *)&g_61716c[1 + 22 * v0[*(int *)(*(unsigned int *)&idx + 104)]]);
        g_616894((float)(8.0 + *(float *)&g_61716c[2 + 22 * v0[*(int *)(*(unsigned int *)&idx + 104)]]));
        g_616888(g_sModelIndexLaser);
        g_616880(0);
        g_616880(0);
        g_616880(250);
        g_616880(40);
        g_616880(0);
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)*(float *)(*(unsigned int *)&idx + 1144);
        g_616880(v3);
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)*(float *)(*(unsigned int *)&idx + 1148);
        g_616880(v3);
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)*(float *)(*(unsigned int *)&idx + 1152);
        g_616880(v3);
        g_616880(128);
        g_616880(0);
        v7 = g_61687c();
        *(unsigned int *)(*(unsigned int *)&idx + 104) = *(int *)(*(unsigned int *)&idx + 104) + 1;
        v2 += 1;
        if (v2 > 9)
            return v7;
    }
    return sub_48cc00(idx);
}

