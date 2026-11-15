// PredictBlockRatio__12CPlayerMeleeP12melee_move_sT1f @0x104c70 size=160
typedef struct st_504c70_0 {
    char padding_0[4];
    int field_4;
    char padding_8[20];
    struct st_504c70_0 *field_1c;
    struct st_504c70_0 *field_20;
} st_504c70_0;

double PredictBlockRatio__12CPlayerMeleeP12melee_move_sT1f(int a0, st_504c70_0 *a1, st_504c70_0 *a2, float a3)
{
    st_504c70_0 *iter;  // esi
    st_504c70_0 *node;  // edi
    double v4;  // mm7
    int v0;  // [bp-0xc]
    int v1;  // [bp-0x8]

    iter = a1;
    node = a2;
    v1 = 0;
    if (!iter || !node)
        return 0.0;
    for (v0 = 0; node->field_1c; node = node->field_1c);
    if (iter->field_1c)
    {
        do
        {
            iter = iter->field_1c;
        } while (iter->field_1c);
    }
    for (; iter; iter = iter->field_20)
    {
        v1 += 1;
        if (node)
        {
            if (sub_48b240(a0, iter->field_4, node->field_4))
                v0 += 1;
            node = node->field_20;
        }
    }
    sub_48d580(a0, v0, v1);
    return v4 * a3;
    return 0.0;
}

