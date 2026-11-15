// WinStruggle__12CPlayerMelee @0x10b5a0 size=580
typedef struct st_50b5a0_0 {
    unsigned int field_0;
} st_50b5a0_0;

extern st_50b5a0_0 *g_6168dc;
extern st_50b5a0_0 *g_616928;

int WinStruggle__12CPlayerMelee(float idx)
{
    unsigned int *v13;  // eax
    unsigned int *v15;  // eax
    char *v0;  // [bp-0x15c]
    unsigned int v1;  // [bp-0x158]
    unsigned int v2;  // [bp-0x154]
    unsigned int v3;  // [bp-0x128], Other Possible Types: int
    char v4;  // [bp-0x124]
    char v5;  // [bp-0x24]
    float v6;  // [bp-0x18]
    float v7;  // [bp-0x14]
    float v8;  // [bp-0x10]

    *(unsigned int *)(*(unsigned int *)&idx + 260) = 1;
    sub_489610(idx, 7);
    sub_48b090(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    sub_48b090(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520)));
    v2 = 11;
    v1 = g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520));
    sub_48dc20(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    if (*(int *)(*(unsigned int *)&idx + 320))
    {
        v13 = *(unsigned int *)&idx + 272;
    }
    else
    {
        v6 = -*(float *)(*(unsigned int *)&idx + 272);
        v7 = -*(float *)(*(unsigned int *)&idx + 276);
        v8 = -*(float *)(*(unsigned int *)&idx + 280);
        v13 = &v6;
    }
    sub_488860(&v5, v13);
    v0 = &v5;
    sub_487b20(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    *(unsigned int *)(*(unsigned int *)&idx + 376) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 380) = 0;
    *(unsigned int *)(sub_48abd0(idx, sub_48d910(idx, 1)) + 84) = 2;
    v3 = 0x800;
    v3 = (!g_616928(0, 1) ? _INSERT(v3, 1, *(char *)((void*)&v3 + 1) | 1) : 2176);
    sub_48dad0(idx, v3, 2, &v4);
    v15 = sub_48abd0(idx, sub_488230(idx, v3, 0, 0.3499999940395355f, 1, 0, 2, &v4));
    v15[21] = 2;
    v15[18] = 0;
    *(int *)(*(unsigned int *)&idx + 380) = *(int *)(*(unsigned int *)&idx + 376);
    return sub_488190(idx);
}

