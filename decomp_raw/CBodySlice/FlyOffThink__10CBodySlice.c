// FlyOffThink__10CBodySlice @0xa38e0 size=447
typedef struct st_4a38e0_0 {
    float field_0;
} st_4a38e0_0;

typedef struct st_4a38e0_1 {
    unsigned int field_0;
} st_4a38e0_1;

extern char WaitTillLand__4CGib;
extern st_4a38e0_1 *g_61692c;
extern st_4a38e0_0 *gpGlobals;

short FlyOffThink__10CBodySlice(double a0, double a1, double a2, float index)
{
    unsigned int idx;  // edi
    double v17;  // mm5
    double v18;  // mm5
    double v19;  // mm5
    double v20;  // mm5
    float v0;  // [bp-0xa4]
    float v1;  // [bp-0xa0]
    float v2;  // [bp-0x9c]
    float v3;  // [bp-0x84]
    float v4;  // [bp-0x80]
    float v5;  // [bp-0x7c]
    float v6;  // [bp-0x64]
    float v7;  // [bp-0x60]
    float v8;  // [bp-0x5c]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]

    memset(*(int *)index + 296, 0, 12);
    sub_488850(index);
    *(float *)(*(int *)index + 284) = 5.0f;
    idx = *(int *)index;
    g_61692c(0, 0x43480000);
    v6 = (float)(5.0 * *(float *)(*(unsigned int *)&index + 708));
    v7 = (float)(5.0 * *(float *)(*(unsigned int *)&index + 712));
    v8 = (float)(5.0 * *(float *)(*(unsigned int *)&index + 716));
    g_61692c(-200.0f, 0x43480000);
    v17 = -200.0 * *(float *)(*(unsigned int *)&index + 696);
    v3 = (float)v17;
    v18 = -200.0 * *(float *)(*(unsigned int *)&index + 700);
    v4 = (float)v18;
    v5 = (float)(-200.0 * *(float *)(*(unsigned int *)&index + 704));
    v9 = (float)(v17 + v6);
    v10 = (float)(v18 + v7);
    v11 = v8 + v5;
    g_61692c(0, 100.0f);
    v19 = 100.0 * *(float *)(*(unsigned int *)&index + 720);
    v0 = (float)v19;
    v20 = 100.0 * *(float *)(*(unsigned int *)&index + 724);
    v1 = (float)v20;
    v2 = (float)(100.0 * *(float *)(*(unsigned int *)&index + 728));
    v12 = (float)(v19 + v9);
    v13 = (float)(v20 + v10);
    v14 = v11 + v2;
    *(float *)(idx + 32) = v12;
    *(float *)(idx + 36) = v13;
    *(float *)(idx + 40) = v14;
    *(unsigned int *)(*(unsigned int *)&index + 12) = _INSERT(sub_487e00(index), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&index + 16) = &WaitTillLand__4CGib;
    *(float *)(*(int *)index + 260) = *(float *)gpGlobals;
    return (unsigned short)gpGlobals;
}

