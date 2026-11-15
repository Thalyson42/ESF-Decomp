// StartChargedAttack__12CPlayerMelee @0x109a70 size=468
typedef struct st_509a70_1 {
    float field_0;
} st_509a70_1;

typedef struct st_509a70_0 {
    unsigned int field_0;
} st_509a70_0;

extern st_509a70_0 *g_6168dc;
extern st_509a70_1 *gpGlobals;

float StartChargedAttack__12CPlayerMelee(float idx)
{
    double v13;  // mm7
    unsigned int *v15;  // edx
    char *v0;  // [bp-0x7c], Other Possible Types: int
    float v1;  // [bp-0x78]
    int v2;  // [bp-0x74]
    char *v3;  // [bp-0x70]
    char *v4;  // [bp-0x6c]
    unsigned int v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x64]
    float v7;  // [bp-0x44]
    float v8;  // [bp-0x40]
    float v9;  // [bp-0x3c]
    char v10;  // [bp-0x24]

    if (!*(int *)(*(unsigned int *)&idx + 244))
    {
        v6 = 11;
        v5 = g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520));
        sub_48dc20(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
        v13 = -*(float *)(*(unsigned int *)&idx + 280);
        v7 = -*(float *)(*(unsigned int *)&idx + 272);
        v8 = -*(float *)(*(unsigned int *)&idx + 276);
        v9 = (float)v13;
        v4 = &v10;
        sub_488860(v4, &v7);
        v0 = &v10;
        sub_487b20(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    }
    if (!*(int *)(*(unsigned int *)&idx + 236))
    {
        sub_48c1e0(idx);
        sub_48c1e0(*(int *)(*(unsigned int *)&idx + 304));
        sub_487b30(*(int *)(*(unsigned int *)&idx + 304));
        v0 = (char *)(float)v13;
        sub_48c6e0(idx, v0);
    }
    v15 = *(int *)(*(unsigned int *)&idx + 304);
    if (!v15[56])
    {
        v3 = "ref_stance";
        goto LABEL_509bea;
    }
    else if (v15[54])
    {
        v4 = "ref_stun";
        v3 = "ref_autopunch_spin";
        v2 = 2;
        v1 = *(float *)gpGlobals;
        *(unsigned short *)&v0 = 1;
    }
    else
    {
        v3 = "ref_stun";
LABEL_509bea:
        v2 = 1;
        v1 = *(float *)gpGlobals;
        *(unsigned short *)&v0 = 1;
        v15 = *(int *)(*(unsigned int *)&idx + 304);
    }
    sub_48b670(v15, v0, v1, v2, v3, v4);
    *(unsigned short *)&v0 = 1;
    sub_48b670(idx, v0, *(float *)gpGlobals, 1, "ref_stance");
    return *(float *)gpGlobals;
}

