// CheckStruggleArrows__12CPlayerMelee @0x10b3e0 size=444
extern float g_5bd2c0;

int CheckStruggleArrows__12CPlayerMelee(double a0, double a1, float idx)
{
    double v5;  // mm7
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    int v2;  // [bp-0x24]
    float v3;  // [bp-0xc]

    sub_48a750(idx, *(int *)(*(unsigned int *)&idx + 328), *(int *)(*(unsigned int *)&idx + 332), 0x3f800000, v0, v1, v2);
    v3 = (float)v5;
    sub_48a750(idx, *(int *)(*(int *)(*(unsigned int *)&idx + 304) + 328), *(int *)(*(int *)(*(unsigned int *)&idx + 304) + 332), 0x3f800000);
    if (v3 == a0)
    {
        sub_488530(idx, 14, 0);
        sub_488530(*(int *)(*(unsigned int *)&idx + 304), 14, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 196) = *(int *)(*(unsigned int *)&idx + 196) + 1;
        if ((double)*(int *)(*(unsigned int *)&idx + 196) < g_5bd2c0)
        {
            sub_48b4c0(idx);
            sub_48b4c0(*(int *)(*(unsigned int *)&idx + 304));
            sub_48c1e0(idx);
            sub_48c1e0(*(int *)(*(unsigned int *)&idx + 304));
            sub_48c370(idx);
            return sub_489390(sub_48be70(idx), 4, "weapons/meleestruggletie.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        }
        return sub_489040(idx);
    }
    else if (a0 < v3)
    {
        sub_488530(idx, 12, 0);
        sub_488530(*(int *)(*(unsigned int *)&idx + 304), 13, 0);
        sub_4899e0(idx);
        return sub_488270(idx);
    }
    else
    {
        sub_488530(idx, 13, 0);
        sub_488530(*(int *)(*(unsigned int *)&idx + 304), 12, 0);
        sub_489000(idx, *(int *)(*(unsigned int *)&idx + 304), 0, 0);
        return sub_488270(*(int *)(*(unsigned int *)&idx + 304));
    }
}

