// StartBurstStruggleAttack__12CPlayerMelee @0x10af40 size=504
typedef struct st_50af40_1 {
    float field_0;
    char padding_4[36];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
} st_50af40_1;

typedef struct st_50af40_0 {
    unsigned int field_0;
} st_50af40_0;

extern st_50af40_0 *g_6168dc;
extern st_50af40_1 *gpGlobals;

int StartBurstStruggleAttack__12CPlayerMelee(float idx)
{
    unsigned int v17;  // ecx
    unsigned int index;  // edx
    double v19;  // mm5
    double v20;  // mm5
    double v21;  // mm5
    unsigned int v22;  // edx
    char *v0;  // [bp-0xac]
    int v1;  // [bp-0xa8]
    int v2;  // [bp-0x98], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x88]
    unsigned int v4;  // [bp-0x84]
    char *v5;  // [bp-0x68]
    float v6;  // [bp-0x64]
    float v7;  // [bp-0x60]
    float v8;  // [bp-0x5c]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]

    v4 = 9;
    v3 = g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520));
    v2 = *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520);
    sub_48dc20(g_6168dc(v2));
    *(unsigned short *)&v1 = 1;
    sub_48b670(idx, v1, gpGlobals->field_0, 1, "struggle_attack");
    *(unsigned short *)&v2 = 1;
    sub_48b670(*(int *)(*(unsigned int *)&idx + 304), v2, gpGlobals->field_0, 1, "struggle_defend");
    sub_48a800(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 116);
    v17 = gpGlobals->field_28;
    *(unsigned int *)(*(unsigned int *)&idx + 272) = v17;
    *(unsigned int *)(*(unsigned int *)&idx + 276) = gpGlobals->field_2c;
    *(unsigned int *)(*(unsigned int *)&idx + 280) = gpGlobals->field_30;
    index = *(int *)(*(unsigned int *)&idx + 304);
    *(unsigned int *)(index + 272) = v17;
    *(int *)(index + 276) = *(int *)(*(unsigned int *)&idx + 276);
    *(int *)(index + 280) = *(int *)(*(unsigned int *)&idx + 280);
    v19 = -*(float *)(*(unsigned int *)&idx + 272);
    v12 = (float)v19;
    v13 = -*(float *)(*(unsigned int *)&idx + 276);
    v14 = -*(float *)(*(unsigned int *)&idx + 280);
    v20 = v19 * 9.0;
    v6 = (float)v20;
    v21 = 9.0 * v13;
    v7 = (float)v21;
    v8 = (float)(9.0 * v14);
    v22 = *(int *)*(int *)(*(unsigned int *)&idx + 296) + 8;
    v9 = (float)(v20 + *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 8));
    v10 = (float)(v21 + *(float *)(v22 + 4));
    v11 = *(float *)(v22 + 8) + v8;
    sub_48db50(*(int *)*(int *)(*(unsigned int *)&idx + 292), &v9);
    v5 = &v6;
    sub_488860(&v6, &v12);
    v0 = v5;
    return sub_487b20(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
}

