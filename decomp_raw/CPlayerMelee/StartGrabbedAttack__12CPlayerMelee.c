// StartGrabbedAttack__12CPlayerMelee @0x109f70 size=445
typedef struct st_509f70_3 {
    char padding_0[260];
    unsigned int field_104;
} st_509f70_3;

typedef struct st_509f70_2 {
    char padding_0[268];
    unsigned int field_10c;
} st_509f70_2;

typedef struct st_509f70_0 {
    float field_0;
} st_509f70_0;

typedef struct st_509f70_1 {
    unsigned int field_0;
} st_509f70_1;

extern st_509f70_1 *g_6168dc;
extern st_509f70_0 *gpGlobals;

int StartGrabbedAttack__12CPlayerMelee(float idx)
{
    st_509f70_2 *v5;  // ecx
    st_509f70_2 *v6;  // edx
    unsigned int v7;  // eax
    st_509f70_3 *v0;  // [bp-0x38], Other Possible Types: int
    unsigned int v1;  // [bp-0x28]

    sub_48b090(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    v1 = g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520));
    sub_48dc60(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520)));
    sub_4887c0(*(int *)(*(unsigned int *)&idx + 304));
    sub_4887c0(idx);
    v5 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
    v6 = *(int *)*(int *)(*(unsigned int *)&idx + 296);
    *(int *)&v5->padding_0[8] = *(int *)&v6->padding_0[8];
    *(int *)&v5->padding_0[12] = *(int *)&v6->padding_0[12];
    *(int *)&v5->padding_0[16] = *(int *)&v6->padding_0[16];
    v0 = *(int *)*(int *)(*(unsigned int *)&idx + 292) + 8;
    sub_48db50(*(int *)*(int *)(*(unsigned int *)&idx + 292), v0);
    *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 268) = 3;
    *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 268) = 0;
    *(unsigned short *)&v0 = 1;
    sub_48b670(idx, v0, *(float *)gpGlobals, 2, "ref_start_throw", "ref_swinger_slow");
    *(unsigned short *)&v0 = 1;
    sub_48b670(*(int *)(*(unsigned int *)&idx + 304), v0, *(float *)gpGlobals, 2, "ref_start_swung", "ref_swung");
    *(unsigned int *)(*(unsigned int *)&idx + 156) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 152) = 0;
    *(float *)(*(unsigned int *)&idx + 176) = *(float *)gpGlobals;
    v7 = *(int *)(*(unsigned int *)&idx + 304);
    *(float *)(v7 + 176) = *(float *)gpGlobals;
    *(unsigned int *)(*(unsigned int *)&idx + 228) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 232) = 0;
    return v7;
}

