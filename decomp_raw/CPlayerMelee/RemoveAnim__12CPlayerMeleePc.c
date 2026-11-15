// RemoveAnim__12CPlayerMeleePc @0x100910 size=140
typedef struct st_500910_1 {
    char padding_0[132];
    struct st_500910_0 *field_84;
} st_500910_1;

typedef struct st_500910_0 {
    char padding_0[676];
    struct st_500910_0 *field_2a4;
} st_500910_0;

int RemoveAnim__12CPlayerMeleePc(st_500910_1 *a0, int a1)
{
    st_500910_0 *iter;  // esi
    unsigned int v1;  // eax

    if (!a0->field_84)
    {
        return v1;
    }
    else if (strcmp@GLIBC_2.0(a1, a0->field_84))
    {
        for (iter = a0->field_84; iter->field_2a4 && strcmp@GLIBC_2.0(iter, a1); iter = iter->field_2a4);
        return CPlayerMelee::RemoveAnim(a0, iter);
    }
    else
    {
        return CPlayerMelee::RemoveAnim(a0, a0->field_84);
    }
}

