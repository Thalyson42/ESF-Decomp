// GetStunPerPunch__12CPlayerMelee @0x108f10 size=102
float GetStunPerPunch__12CPlayerMelee(float a0)
{
    unsigned int v2;  // 128
    double v3;  // mm6
    float v0;  // [bp-0x8]

    v2 = *(unsigned int *)&*(float *)((*(int *)(*(int *)(*(unsigned int *)&a0 + 384) + 12))(a0) + 16);
    if (*(int *)(*(int *)(*(unsigned int *)&a0 + 304) + 216))
    {
        v3 = 1.2;
    }
    else if (*(int *)(*(int *)(*(unsigned int *)&a0 + 304) + 212))
    {
        v3 = 0.65;
    }
    else
    {
        return *(float *)((*(int *)(*(int *)(*(unsigned int *)&a0 + 384) + 12))(a0) + 16);
    }
    v0 = (float)(*(float *)((*(int *)(*(int *)(*(unsigned int *)&a0 + 384) + 12))(a0) + 16) * v3);
    return v0;
}

