// UTIL_AngleDiff__Fff @0x131770 size=93
double UTIL_AngleDiff__Fff(float a0, float a1)
{
    double iter;  // mm7

    iter = a0 - a1;
    if (a0 > a1)
    {
        if (iter >= 180.0)
            iter -= 360.0;
    }
    else
    {
        if ((isnan(iter) ? 0x44 : iter == -180.0 ? 63 : iter < -180.0 ? 0 : 0xff) < 64)
            iter += 360.0;
    }
    return iter;
}

