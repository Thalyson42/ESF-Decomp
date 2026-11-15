// Ascend__11CBasePlayer @0xf1460 size=611
typedef struct st_4f1460_0 {
    float field_0;
} st_4f1460_0;

typedef struct st_4f1460_1 {
    unsigned int field_0;
} st_4f1460_1;

extern unsigned int gmsgTransform;
extern st_4f1460_1 *g_616878;
extern st_4f1460_1 *g_61687c;
extern st_4f1460_1 *g_616880;
extern st_4f1460_1 *g_61688c;
extern st_4f1460_0 *gpGlobals;

unsigned int * Ascend__11CBasePlayer(double a0, double a1, float idx)
{
    int v5;  // eax
    unsigned int v6;  // eax
    float v0;  // [bp-0x10]
    unsigned short v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0xa]
    int v3;  // [bp-0x8]

    sub_488480(idx);
    sub_48d4e0(*(int *)(*(unsigned int *)&idx + 1892));
    *(int *)(*(unsigned int *)&idx + 1892) = *(int *)(*(unsigned int *)&idx + 1896);
    *(float *)(*(int *)idx + 608) = (float)(*(float *)(*(int *)idx + 608) - 100.0);
    if (0.0 > *(float *)(*(int *)idx + 608))
        *(float *)(*(int *)idx + 608) = 0.0f;
    if (*(int *)(*(unsigned int *)&idx + 828))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 888) = 1;
    }
    else
    {
        sub_48cfe0(idx, 0);
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 48))(*(int *)(*(unsigned int *)&idx + 1892));
    }
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 44))(*(int *)(*(unsigned int *)&idx + 1892));
    *(float *)(*(unsigned int *)&idx + 880) = (float)(0.0 * *(float *)(*(unsigned int *)&idx + 880));
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 44))(*(int *)(*(unsigned int *)&idx + 1892));
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v3 = (int)(a0 * (double)*(int *)(*(unsigned int *)&idx + 1864));
    sub_48b8d0(idx, v3);
    sub_487b40(idx, v3);
    v0 = (float)(*(float *)(*(int *)idx + 352) / (double)*(int *)(*(unsigned int *)&idx + 588));
    v5 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 16))(*(int *)(*(unsigned int *)&idx + 1892));
    *(int *)(*(unsigned int *)&idx + 588) = v5;
    sub_48c420(idx, v5);
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v3 = (int)((double)*(int *)(*(unsigned int *)&idx + 588) * v0);
    if (v3 <= 0)
        *(unsigned int *)(*(int *)idx + 352) = 0x3f800000;
    else
        *(float *)(*(int *)idx + 352) = (float)v3;
    *(unsigned int *)(*(unsigned int *)&idx + 1868) = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 12))(*(int *)(*(unsigned int *)&idx + 1892));
    g_616878(1, gmsgTransform, 0, *(int *)(*(int *)idx + 520));
    g_616880(0);
    v6 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 40))(*(int *)(*(unsigned int *)&idx + 1892));
    g_61688c(v6);
    g_61687c();
    sub_489800(*(int *)(*(unsigned int *)&idx + 1892));
    if (*(int *)(*(unsigned int *)&idx + 1900))
        sub_48a9d0(*(int *)(*(unsigned int *)&idx + 1900));
    if (*(int *)(*(unsigned int *)&idx + 1740) == 1)
        *(unsigned int *)(*(unsigned int *)&idx + 1740) = 2;
    *(float *)(*(unsigned int *)&idx + 932) = *(float *)gpGlobals;
    return gpGlobals;
}

