// GetHullBounds__FiPfT1 @0xa31c0 size=162
unsigned int GetHullBounds__FiPfT1(int a0)
{
    double v3;  // mm6
    unsigned int v0;  // [bp-0x24], Other Possible Types: float
    unsigned int v1;  // [bp-0x20], Other Possible Types: float
    unsigned int v2;  // [bp-0x1c], Other Possible Types: float

    if (a0 != 1)
    {
        if (a0 <= 1)
        {
            if (a0)
                return 0;
            v0 = -4.0f;
            v1 = -4.0f;
            v2 = -9.0f;
            v3 = 9.0;
LABEL_4a3236:
            v0 = 4.0f;
            v1 = 4.0f;
            v2 = (float)v3;
        }
        else if (a0 == 2)
        {
            v0 = 0;
            v1 = 0;
            v2 = 0;
        }
        else
        {
            return 0;
        }
        return 1;
    }
    v0 = -4.0f;
    v1 = -4.0f;
    v2 = -4.0f;
    v3 = 5.0;
    goto LABEL_4a3236;
}

