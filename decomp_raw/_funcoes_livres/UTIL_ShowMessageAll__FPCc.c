// UTIL_ShowMessageAll__FPCc @0x132d50 size=88
typedef struct st_532d50_0 {
    char padding_0[144];
    unsigned int field_90;
} st_532d50_0;

extern st_532d50_0 *gpGlobals;

st_532d50_0 * UTIL_ShowMessageAll__FPCc(int a0)
{
    int iter;  // esi
    int v1;  // eax

    iter = 1;
    while (iter <= (int)gpGlobals->field_90)
    {
        v1 = sub_48a500(iter);
        if (v1)
        {
            sub_488380(a0, v1);
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return gpGlobals;
}

