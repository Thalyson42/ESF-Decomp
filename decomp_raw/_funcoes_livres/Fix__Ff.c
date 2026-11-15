// Fix__Ff @0xeb2e0 size=104
double Fix__Ff(float a0)
{
    double v1;  // mm7
    double v2;  // mm6
    double iter;  // mm6

    v1 = a0;
    v2 = 0.0;
    if (0.0 > v1)
    {
        while (1)
        {
            v1 += 360.0;
            if (v1 >= v2)
                break;
        }
    }
    iter = v1;
    if (iter > 360.0)
    {
        do
        {
            iter -= 360.0;
        } while (360.0 < iter);
    }
    return iter;
}

