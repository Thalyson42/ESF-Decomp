// UTIL_ScreenFadeAll__FRC6Vectorffii @0x132490 size=145
typedef struct st_532490_0 {
    char padding_0[144];
    unsigned int field_90;
} st_532490_0;

extern st_532490_0 *gpGlobals;

st_532490_0 * UTIL_ScreenFadeAll__FRC6Vectorffii(int a0, float a1, float a2, int a3, int a4)
{
    int i;  // esi
    char v0;  // [bp-0x24]

    sub_48dec0(&v0, a0, a1, a2, a3, a4);
    i = 1;
    if (1 > (int)gpGlobals->field_90)
        return gpGlobals;
    do
    {
        sub_48c780(&v0, sub_48a500(i));
        i += 1;
    } while (i <= (int)gpGlobals->field_90);
    return gpGlobals;
}

