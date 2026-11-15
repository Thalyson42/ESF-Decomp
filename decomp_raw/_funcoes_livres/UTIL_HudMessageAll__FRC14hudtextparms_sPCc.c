// UTIL_HudMessageAll__FRC14hudtextparms_sPCc @0x132850 size=92
typedef struct st_532850_0 {
    char padding_0[144];
    unsigned int field_90;
} st_532850_0;

extern st_532850_0 *gpGlobals;

st_532850_0 * UTIL_HudMessageAll__FRC14hudtextparms_sPCc(int a0, int a1)
{
    int iter;  // esi
    int v1;  // eax

    iter = 1;
    while (iter <= (int)gpGlobals->field_90)
    {
        v1 = UTIL_PlayerByIndex(iter);
        if (v1)
        {
            UTIL_HudMessage(v1, a0, a1);
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return gpGlobals;
}

