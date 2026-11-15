// ManageList__12CPlayerMelee @0xffd90 size=154
typedef struct st_4ffd90_0 {
    float field_0;
} st_4ffd90_0;

extern st_4ffd90_0 *gpGlobals;

void ManageList__12CPlayerMelee(float a0)
{
    unsigned int *iter;  // esi
    unsigned int *v0;  // [bp-0x8]

    if (!*(int *)(*(unsigned int *)&a0 + 292))
        return;
    CPlayerMelee::ManagePriority(a0);
    iter = *(int *)(*(unsigned int *)&a0 + 132);
    v0 = CPlayerMelee::GetCurrentAnim(a0);
    if (*(int *)(*(unsigned int *)&a0 + 324))
        return;
    while (iter)
    {
        if (iter != v0 && (*(float *)&iter[163] < *(float *)gpGlobals || iter[167]))
            iter = CPlayerMelee::RemoveAnim(a0, iter);
        else
            iter = iter[169];
    }
    return;
}

