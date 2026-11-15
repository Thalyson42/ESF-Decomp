// IncreaseStrength__11CBasePlayerP11CBasePlayeri @0xf2dc0 size=125
typedef struct st_4f2dc0_0 {
    char padding_0[1864];
    int field_748;
} st_4f2dc0_0;

st_4f2dc0_0 * IncreaseStrength__11CBasePlayerP11CBasePlayeri(st_4f2dc0_0 *a0, st_4f2dc0_0 *a1, unsigned int a2)
{
    double v3;  // mm7
    unsigned short v0;  // [bp-0x18]
    unsigned short v1;  // [bp-0x16]
    int v2;  // [bp-0x8], Other Possible Types: unsigned int

    if (a1 == a0)
        return a1;
    v3 = (double)a1->field_748 / (double)a0->field_748;
    if (1.0 > v3)
        v3 *= v3;
    v2 = a2 * 600;
    v1 = __fnstcw();
    v0 = v1 | 0xc00;
    v2 = (int)(v3 * (double)(int)v2);
    return CBasePlayer::IncreasePL(a0, v2);
}

