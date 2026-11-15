// NormalizeAngles @0x18dac0 size=93
char NormalizeAngles(float *a0)
{
    int idx;  // ecx
    double v1;  // mm7

    idx = 0;
    do
    {
        if (180.0 < a0[idx])
        {
            v1 = a0[idx] - 360.0;
        }
        else
        {
            if (-180.0 <= a0[idx])
                continue;
            v1 = 360.0 + a0[idx];
        }
        a0[idx] = (float)v1;
    } while ((idx += 1, idx <= 2));
    return 0;
}

