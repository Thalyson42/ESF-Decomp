// UTIL_WrapAngle__Ff @0x1799c0 size=172
double UTIL_WrapAngle__Ff(float a0)
{
    double iter;  // mm7
    int v0;  // [bp-0xc], Other Possible Types: unsigned int
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    iter = a0;
    if (iter > 180.0)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(iter / 360.0);
        v0 = (v0 * 3 + 3) * 120;
        iter -= (double)(int)v0;
    }
    if (iter < -180.0)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(iter / 360.0);
        v0 = (v0 * 3 + 3) * 120;
        iter += (double)(int)v0;
    }
    return iter;
}

