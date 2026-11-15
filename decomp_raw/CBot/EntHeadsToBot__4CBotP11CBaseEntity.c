// EntHeadsToBot__4CBotP11CBaseEntity @0x1438b0 size=49
char EntHeadsToBot__4CBotP11CBaseEntity(int a0, int a1)
{
    unsigned int v0;  // 4113

    v0 = _ccall(15, 5, UTIL_GetHeadingPercentage(a0, a1) & 0xffff, 64, 0);
    return v0 & 1;
}

