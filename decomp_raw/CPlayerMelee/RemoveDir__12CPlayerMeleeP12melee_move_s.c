// RemoveDir__12CPlayerMeleeP12melee_move_s @0x105a80 size=165
typedef struct st_505a80_0 {
    char padding_0[28];
    struct st_505a80_0 *field_1c;
    struct st_505a80_0 *field_20;
} st_505a80_0;

st_505a80_0 * RemoveDir__12CPlayerMeleeP12melee_move_s(st_505a80_0 **a0, st_505a80_0 *a1)
{
    int i;  // ecx
    st_505a80_0 *iter;  // esi
    st_505a80_0 *v2;  // esi
    st_505a80_0 *v3;  // esi

    if (!a1)
        return NULL;
    i = 0;
    do
    {
        iter = (!i ? a0[82] : a0[83]);
        if (iter == a1)
        {
            if (i)
            {
                a0[82] = a0[82]->field_1c;
                v2 = iter;
                __builtin_delete(a1);
                return v2;
            }
            a0[83] = a0[83]->field_1c;
            v2 = iter;
            __builtin_delete(a1);
            return v2;
        }
        for (; iter->field_1c; iter = iter->field_1c)
        {
            if (iter->field_1c == a1)
            {
                if (iter->field_1c)
                {
                    v3 = a1->field_1c;
                    iter->field_1c = v3;
                    v2 = v3;
                    if (!v2)
                    {
                        __builtin_delete(a1);
                        return v2;
                    }
                    v3->field_20 = iter;
                    v2 = v3;
                    __builtin_delete(a1);
                    return v2;
                }
                break;
            }
        }
        i += 1;
    } while (i <= 1);
    return NULL;
}

