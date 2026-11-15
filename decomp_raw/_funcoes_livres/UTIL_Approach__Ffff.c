// UTIL_Approach__Ffff @0x133170 size=60
float UTIL_Approach__Ffff(float a0, float a1, float a2)
{
    float v1;  // 104

    v1 = a0 - a1;
    if (v1 > a2)
    {
        return a2 + a1;
    }
    else if (-__double_as_longlong((double)a2) > v1)
    {
        return a1 - a2;
    }
    else
    {
        return a0;
    }
}

