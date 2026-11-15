// NewExeMovePost__12CPlayerMelee @0x105430 size=242
typedef struct st_505430_2 {
    char padding_0[80];
    unsigned int field_50;
} st_505430_2;

typedef struct st_505430_0 {
    float field_0;
} st_505430_0;

typedef struct st_505430_1 {
    unsigned int field_0;
} st_505430_1;

extern st_505430_1 *g_6168dc;
extern st_505430_0 *gpGlobals;

unsigned int NewExeMovePost__12CPlayerMelee(float idx)
{
    unsigned int v2;  // eax
    st_505430_2 *v3;  // eax
    unsigned int v0;  // [bp-0x38]

    if (!*(int *)(*(unsigned int *)&idx + 380))
        return (!sub_48d3c0(idx) ? sub_489040(idx) : sub_489db0(idx));
    v2 = sub_48ca70(idx, *(int *)(*(unsigned int *)&idx + 380));
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 380) + 84) = v2;
    sub_488b80(idx, *(int *)(*(unsigned int *)&idx + 380));
    sub_48c620(idx, *(float *)gpGlobals, *(int *)(*(unsigned int *)&idx + 380));
    v3 = *(int *)(*(unsigned int *)&idx + 380);
    if (v3->field_50 != 2)
        return v3;
    v0 = sub_48afe0(*(int *)(*(unsigned int *)&idx + 292), v3);
    return sub_48b970(g_6168dc(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
}

