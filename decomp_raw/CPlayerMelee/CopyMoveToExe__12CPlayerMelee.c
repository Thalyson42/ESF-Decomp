// CopyMoveToExe__12CPlayerMelee @0x104430 size=317
typedef struct st_504430_0 {
    char padding_0[4];
    int field_4;
    char padding_8[12];
    int field_14;
    unsigned int field_18;
    struct st_504430_0 *field_1c;
    struct st_504430_0 *field_20;
} st_504430_0;

void CopyMoveToExe__12CPlayerMelee(unsigned int *a0)
{
    st_504430_0 *iter;  // esi
    int v7;  // 128
    unsigned int v0;  // [bp-0x144]
    unsigned int v1;  // [bp-0x140]
    unsigned int v2;  // [bp-0x13c]
    char *v3;  // [bp-0x138]
    char *v4;  // [bp-0x108]
    char v5;  // [bp-0x104]

    a0[94] = 0;
    a0[95] = 0;
    a0[48] = 0;
    a0[47] = 0;
    if (!sub_48c0f0(a0))
        return;
    iter = sub_48cc50(a0);
    if (!iter)
    {
        sub_489040(a0);
        return;
    }
    if (iter->field_1c)
    {
        do
        {
            iter = iter->field_1c;
        } while (iter->field_1c);
    }
    if (!iter)
        return;
    v4 = &v5;
    do
    {
        if (sub_48cbe0(a0, iter->field_4))
        {
            iter = iter->field_20;
        }
        else
        {
            a0[47] = a0[47] + 1;
            sub_48ce30(a0, iter, v4);
            v3 = v4;
            v2 = sub_48dbf0(a0, iter);
            v1 = iter->field_18;
            v0 = a0[47];
            sub_48a4c0(a0, iter);
            sub_48abd0(a0, sub_488230(a0, iter->field_4, iter->field_14, v7));
            iter = iter->field_20;
        }
    } while (iter);
    return;
}

