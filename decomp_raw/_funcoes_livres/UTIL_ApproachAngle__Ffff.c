// UTIL_ApproachAngle__Ffff @0x1331b0 size=163
double UTIL_ApproachAngle__Ffff(double a0, double a1, int a2, unsigned int a3, float a4)
{
    double v0;  // mm7
    double iter;  // mm7

    sub_48d0c0(a2);
    sub_48d0c0((float)v0);
    iter = (float)v0 - a0;
    if (0.0 > a4)
        a4 = -a4;
    if (iter < -180.0)
    {
        iter += 360.0;
    }
    else if (iter > 180.0)
    {
        iter -= 360.0;
    }
    if (iter > a4)
    {
        return a1;
    }
    else if (-__double_as_longlong((double)a4) > iter)
    {
        return a1;
    }
    else
    {
        return a1;
    }
}

