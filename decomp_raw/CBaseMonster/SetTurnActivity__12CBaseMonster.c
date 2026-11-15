// SetTurnActivity__12CBaseMonster @0x112a00 size=138
char SetTurnActivity__12CBaseMonster(double a0, float idx)
{
    double v1;  // mm7
    unsigned int v2;  // eax

    CBaseMonster::FlYawDiff(idx);
    if (v1 <= -45.0 && !(v2 = CBaseAnimating::LookupActivity(idx, 16), v2 == 0xffffffff))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 376) = 16;
    }
    else if ((float)v1 > 45.0f && CBaseAnimating::LookupActivity(idx, 15) != 0xffffffff)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 376) = 15;
    }
    return v2;
}

