// InterpolateAngles @0x18db20 size=138
int InterpolateAngles(float *a0, float *a1, float *a2, float a3)
{
    int idx;  // ecx
    double iter;  // mm6

    sub_48d5d0(a0);
    sub_48d5d0(a1);
    idx = 0;
    do
    {
        iter = a1[idx] - a0[idx];
        if (iter > 180.0)
        {
            iter -= 360.0;
        }
        else if (iter < -180.0)
        {
            iter += 360.0;
        }
    } while ((a2[idx] = (float)(a0[idx] + iter * a3), idx += 1, idx <= 2));
    return sub_48d5d0(a2);
}

