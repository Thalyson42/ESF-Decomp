// SecondaryAttack__13CShieldAttack @0x119b60 size=356
double SecondaryAttack__13CShieldAttack(float idx)
{
    unsigned int v5;  // 128
    double v6;  // mm7
    double v7;  // mm0
    double v8;  // mm1
    float v0;  // [bp-0x10]
    int v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0x8]
    unsigned short v3;  // [bp-0x6]

    if (*(int *)(*(unsigned int *)&idx + 212) != 1)
    {
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 328))(idx);
        UTIL_WeaponTimeBase(idx);
    }
    else
    {
        v5 = *(unsigned int *)&*(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 196) + 480);
        v3 = __fnstcw();
        v2 = v3 | 0xc00;
        v1 = (int)__int_as_float(v5);
        *(int *)(*(unsigned int *)&idx + 208) = v1;
        CShieldAttack::RemoveShield(idx);
        if (*(int *)(*(unsigned int *)&idx + 208) && CBasePlayer::UseKi(*(int *)(*(unsigned int *)&idx + 128), 40))
        {
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 1;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 828) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1724) = 1;
            UTIL_WeaponTimeBase();
            v6 = 1.5;
            *(float *)(*(unsigned int *)&idx + 200) = (float)(v7 + 1.5);
            *(unsigned int *)(*(unsigned int *)&idx + 212) = 2;
            UTIL_WeaponTimeBase();
            v0 = (float)(v8 + 5.5);
        }
        else
        {
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1724) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
            *(unsigned int *)(*(unsigned int *)&idx + 212) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 200) = 0;
            UTIL_WeaponTimeBase();
            v6 = __int_as_float(v5) + 4.0;
        }
    }
    *(float *)(*(unsigned int *)&idx + 160) = (float)v6;
    *(float *)(*(unsigned int *)&idx + 156) = (float)v6;
    return v6;
}

