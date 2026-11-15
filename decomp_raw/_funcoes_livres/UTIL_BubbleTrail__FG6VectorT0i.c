// UTIL_BubbleTrail__FG6VectorT0i @0x1345f0 size=465
typedef struct st_5345f0_0 {
    unsigned int field_0;
} st_5345f0_0;

extern st_5345f0_0 *g_616878;
extern st_5345f0_0 *g_61687c;
extern st_5345f0_0 *g_616880;
extern st_5345f0_0 *g_616888;
extern st_5345f0_0 *g_616894;
extern short g_sModelIndexBubbles;

double UTIL_BubbleTrail__FG6VectorT0i(float *a0, float *a1, int a2)
{
    float v0;  // [bp-0x3c]
    double v1;  // [bp-0x10]
    float v2;  // [bp-0xc]
    double v3;  // [bp-0x8]

    v2 = 256.0f;
    sub_48dac0(a0, a0[2], (float)(256.0 + a0[2]));
    v3 = a0[2] - a0[2];
    v1 = 8.0f;
    if (v3 < v1)
    {
        sub_48dac0(a1, a1[2], v2 + a1[2]);
        v3 = a1[2] - a1[2];
        if (v3 < v1)
            return v3;
        v3 = v3 + a1[2] - a0[2];
    }
    if (a2 > 0xff)
        a2 = 0xff;
    g_616878(0, 23, 0, 0);
    g_616880(114);
    g_616894(*a0);
    g_616894(a0[1]);
    g_616894(a0[2]);
    g_616894(*a1);
    g_616894(a1[1]);
    g_616894(a1[2]);
    g_616894(v3);
    g_616888(g_sModelIndexBubbles);
    g_616880(a2);
    v0 = 8.0f;
    g_616894(v0);
    g_61687c(v0);
    return 8.0;
}

