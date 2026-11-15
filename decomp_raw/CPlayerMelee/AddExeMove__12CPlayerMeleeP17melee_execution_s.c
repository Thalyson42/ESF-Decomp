// AddExeMove__12CPlayerMeleeP17melee_execution_s @0x104570 size=79
typedef struct st_504570_0 {
    char padding_0[856];
    struct st_504570_0 *field_358;
    struct st_504570_0 *field_35c;
} st_504570_0;

st_504570_0 * AddExeMove__12CPlayerMeleeP17melee_execution_s(st_504570_0 **a0, st_504570_0 *a1)
{
    st_504570_0 *iter;  // edx

    if (!a0[94])
    {
        a0[94] = a1;
        a0[95] = a1;
        return a1;
    }
    iter = a0[94];
    if (iter->field_358)
    {
        do
        {
            iter = iter->field_358;
        } while (iter->field_358);
    }
    iter->field_358 = a1;
    a1->field_35c = iter;
    return a1;
}

