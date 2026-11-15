// UTIL_AngleDistance__Fff @0x133260 size=72
double UTIL_AngleDistance__Fff(float a0, float a1)
{
    double iter;  // mm7

    iter = a0 - a1;
    if (iter < -180.0)
    {
        iter += 360.0;
    }
    else if (iter > 180.0)
    {
        iter -= 360.0;
    }
    return iter;
}

