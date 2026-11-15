// TotalCmbTimeNC__12CPlayerMelee @0x1062e0 size=90
float TotalCmbTimeNC__12CPlayerMelee(float a0)
{
    int v2;  // esi
    double v3;  // mm7
    float v0;  // [bp-0x8]

    v0 = 0;
    v2 = CPlayerMelee::GetCurrentDirection(a0);
    if (!v2)
        return v0;
    CPlayerMelee::TotalCmbTime(a0);
    CPlayerMelee::GetCmbTime(a0, v2);
    v0 = (float)((float)v3 - v3);
    return v0;
}

