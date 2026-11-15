// TrainSpeed__Fii @0xefcf0 size=129
unsigned int TrainSpeed__Fii(int a0, int a1)
{
    double v2;  // mm7
    int v0;  // [bp-0x8]
    int v1;  // [bp-0x8]

    v0 = a1;
    v1 = a0;
    v2 = (double)v1 / (double)v0;
    if (a0 < 0)
    {
        return 5;
    }
    else if (!a0)
    {
        return 1;
    }
    else if (v2 < 0.33)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

