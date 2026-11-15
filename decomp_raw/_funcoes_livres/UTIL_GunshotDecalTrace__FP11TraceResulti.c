// UTIL_GunshotDecalTrace__FP11TraceResulti @0x133c10 size=258
typedef struct st_533c10_1 {
    char padding_0[16];
    float field_10;
    float field_14;
    float field_18;
    float field_1c;
    char padding_20[16];
    unsigned int field_30;
} st_533c10_1;

typedef struct st_533c10_2 {
    unsigned int field_0;
} st_533c10_2;

typedef struct st_533c10_0 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_533c10_0;

extern st_533c10_0 g_5cae44;
extern st_533c10_2 *g_616878;
extern st_533c10_2 *g_61687c;
extern st_533c10_2 *g_616880;
extern st_533c10_2 *g_616888;
extern st_533c10_2 *g_616894;
extern st_533c10_2 *g_6168dc;

unsigned int UTIL_GunshotDecalTrace__FP11TraceResulti(st_533c10_1 *a0, int idx)
{
    unsigned short v1;  // ax
    unsigned int v2;  // eax
    int v0;  // [bp-0x18]

    if (idx < 0)
        return v2;
    v0 = (&g_5cae44.field_0)[2 * idx];
    if ((&g_5cae44.field_0)[2 * idx] < 0)
        return v2;
    if (a0->field_10 == 1.0f)
        return v2;
    g_616878(5, 23, &a0->field_14, 0);
    g_616880(109);
    g_616894(a0->field_14);
    g_616894(a0->field_18);
    g_616894(a0->field_1c);
    v1 = g_6168dc(a0->field_30);
    g_616888(v1);
    g_616880(v0);
    v2 = g_61687c();
    return v2;
}

