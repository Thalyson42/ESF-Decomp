// AxisDelta__11CBaseToggleiRC6VectorT2 @0x123470 size=56
float AxisDelta__11CBaseToggleiRC6VectorT2(char a0, float *a1, float *a2)
{
    return (!(a0 & 64) ? (a0 < 0 ? *a1 - *a2 : a1[1] - a2[1]) : a1[2] - a2[2]);
}

