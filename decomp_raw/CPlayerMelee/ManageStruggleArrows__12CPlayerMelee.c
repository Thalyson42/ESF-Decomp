// ManageStruggleArrows__12CPlayerMelee @0x10b270 size=365
typedef struct st_50b270_0 {
    float field_0;
} st_50b270_0;

typedef struct st_50b270_1 {
    unsigned int field_0;
} st_50b270_1;

extern float g_5bd270;
extern float g_5bd284;
extern float g_5bd2ac;
extern st_50b270_1 *g_616928;
extern st_50b270_0 *gpGlobals;

unsigned int ManageStruggleArrows__12CPlayerMelee(float idx)
{
    int v2;  // eax
    unsigned int v3;  // eax

    if (*(int *)(*(unsigned int *)&idx + 312) && *(float *)gpGlobals > *(float *)(*(unsigned int *)&idx + 112))
    {
        if (*(int *)(*(unsigned int *)&idx + 116))
            return sub_487fd0(idx);
        *(unsigned int *)(*(unsigned int *)&idx + 108) = *(int *)(*(unsigned int *)&idx + 108) + 1;
        if ((double)*(int *)(*(unsigned int *)&idx + 108) >= g_5bd270)
        {
            *(float *)(*(unsigned int *)&idx + 112) = *(float *)gpGlobals + g_5bd2ac;
            *(unsigned int *)(*(unsigned int *)&idx + 116) = 1;
        }
        else
        {
            *(float *)(*(unsigned int *)&idx + 112) = *(float *)gpGlobals + g_5bd284;
        }
        *(unsigned int *)(*(unsigned int *)&idx + 120) = 1;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 304) + 120) = 1;
        sub_48d920(idx, sub_48ddc0(idx, g_616928(0, 7)));
        sub_48d690(idx, *(int *)(*(unsigned int *)&idx + 328));
        v2 = sub_48ddc0(idx, g_616928(0, 7));
        sub_48d920(*(int *)(*(unsigned int *)&idx + 304), v2);
        sub_48d690(*(int *)(*(unsigned int *)&idx + 304), *(int *)(*(int *)(*(unsigned int *)&idx + 304) + 328));
        *(unsigned int *)(*(unsigned int *)&idx + 120) = 0;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 304) + 120) = 0;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 120) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 124) = 1;
    v3 = sub_48ca30(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 124) = 0;
    return v3;
}

