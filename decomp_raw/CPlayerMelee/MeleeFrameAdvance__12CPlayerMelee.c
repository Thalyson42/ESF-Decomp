// MeleeFrameAdvance__12CPlayerMelee @0x1006a0 size=378
typedef struct st_5006a0_2 {
    char padding_0[296];
    unsigned int field_128;
} st_5006a0_2;

typedef struct st_5006a0_0 {
    char padding_0[648];
    unsigned int field_288;
} st_5006a0_0;

typedef struct st_5006a0_3 {
    struct st_5006a0_2 *field_0;
    char padding_4[116];
    unsigned int field_78;
} st_5006a0_3;

typedef struct st_5006a0_1 {
    unsigned int field_0;
} st_5006a0_1;

extern st_5006a0_1 *g_6168e8;

unsigned int MeleeFrameAdvance__12CPlayerMelee(double a0, float idx)
{
    st_5006a0_0 *v3;  // edx
    unsigned int v4;  // eax
    int v5;  // eax
    st_5006a0_3 *v6;  // edx
    int v7;  // eax
    st_5006a0_3 *v8;  // edx
    unsigned int v9;  // eax
    st_5006a0_3 *v10;  // eax
    unsigned int v0;  // [bp-0x108]
    char v1;  // [bp-0x104]

    v0 = *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 296);
    sub_48e110(&v1, *(int *)(*(unsigned int *)&idx + 292) + 1440);
    sub_48cdb0(*(int *)(*(unsigned int *)&idx + 292), "player");
    v3 = sub_487fb0(idx);
    if (v3)
    {
        v4 = sub_48afe0(*(int *)(*(unsigned int *)&idx + 292), &v3->padding_0[32 * v3->field_288]);
        *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 296) = v4;
    }
    v5 = g_6168e8(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520));
    v6 = *(int *)(*(unsigned int *)&idx + 292);
    sub_489bc0(v5, v6->field_0, &v6->padding_4[104], &v6->padding_4[108]);
    sub_48bd90(*(int *)(*(unsigned int *)&idx + 292), 0);
    sub_48cdb0(*(int *)(*(unsigned int *)&idx + 292), &v1);
    v7 = g_6168e8(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520));
    *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 296) = v0;
    v8 = *(int *)(*(unsigned int *)&idx + 292);
    v9 = sub_489bc0(v7, v8->field_0, &v8->padding_4[104], &v8->padding_4[108]);
    if (*(int *)(*(unsigned int *)&idx + 284) != 7)
        return v9;
    v10 = *(int *)(*(unsigned int *)&idx + 292);
    if (!v10->field_78)
        return v10;
    return sub_48a200(v10);
}

