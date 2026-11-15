// WeaponIdle__13CShieldAttack @0x119770 size=626
double WeaponIdle__13CShieldAttack(float idx)
{
    double v2;  // mm0
    double v3;  // mm0
    double v4;  // mm0
    double v5;  // mm7
    double v6;  // mm0
    double v7;  // mm7
    double v8;  // mm7
    float v0;  // [bp-0x3c]

    if (*(int *)(*(unsigned int *)&idx + 212) > 0 && *(int *)(*(unsigned int *)&idx + 196) && *(char *)(*(int *)(*(unsigned int *)&idx + 196) + 108))
    {
        v0 = idx;
        CShieldAttack::RemoveShield(v0);
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1724) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 212) = 0;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 828) = 0;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
        memset(*(unsigned int *)&idx + 200, 0, 12);
        UTIL_WeaponTimeBase(v0);
        v3 = v2 + 1.0;
        *(float *)(*(unsigned int *)&idx + 160) = (float)v3;
        *(float *)(*(unsigned int *)&idx + 156) = (float)v3;
        return 1.0;
    }
    if (*(int *)(*(unsigned int *)&idx + 212) == 1)
    {
        v0 = idx;
        CShieldAttack::RemoveShield(v0);
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 212) = 0;
        UTIL_WeaponTimeBase(v0);
        *(float *)(*(unsigned int *)&idx + 156) = (float)(v4 + 2.5);
        return 2.5;
    }
    if (*(int *)(*(unsigned int *)&idx + 212) == 2)
    {
        if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 892))
        {
            memset(*(unsigned int *)&idx + 200, 0, 12);
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 828) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1724) = 0;
        }
        else
        {
            UTIL_WeaponTimeBase();
            if (v5 < *(float *)(*(unsigned int *)&idx + 200))
                return v5;
            v0 = idx;
            CShieldAttack::ShootShield(v0);
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 828) = 1;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 212) = 3;
            UTIL_WeaponTimeBase(v0);
            *(float *)(*(unsigned int *)&idx + 0xcc) = (float)(v6 + 1.25);
            return 1.25;
        }
    }
    else
    {
        if (*(int *)(*(unsigned int *)&idx + 212) == 3)
        {
            UTIL_WeaponTimeBase();
            if (v7 <= *(float *)(*(unsigned int *)&idx + 0xcc))
                return v7;
            *(unsigned int *)(*(unsigned int *)&idx + 0xcc) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 200) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 828) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1724) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
        }
        else
        {
            return v8;
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 212) = 0;
    return v7;
}

