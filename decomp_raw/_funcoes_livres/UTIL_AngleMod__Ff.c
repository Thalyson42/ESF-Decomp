// UTIL_AngleMod__Ff @0x1316c0 size=176
double UTIL_AngleMod__Ff(float a0)
{
    int v0;  // [bp-0xc], Other Possible Types: unsigned int
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    if (0.0 > a0)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(a0 / 360.0);
        v0 = (v0 * 3 + 3) * 120;
        return a0 + (double)(int)v0;
    }
    else if (((char)((0x3000 | CmpF(360.0, __double_as_longlong((double)a0)) * 0x100 & 0x4500 & 0x4700) >> 8) & 69) - 1 < 64)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(a0 / 360.0);
        v0 *= 360;
        return a0 - (double)(int)v0;
    }
    else
    {
        return a0;
    }
}

