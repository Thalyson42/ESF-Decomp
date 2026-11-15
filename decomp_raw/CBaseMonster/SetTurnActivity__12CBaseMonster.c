// SetTurnActivity__12CBaseMonster @0x112a00 size=138
char SetTurnActivity__12CBaseMonster(double a0, float idx)
{
    double v1;  // mm7
    unsigned int v2;  // eax

    sub_48df60(idx);
    if (v1 <= -45.0 && !(v2 = sub_488bc0(idx, 16), v2 == 0xffffffff))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 376) = 16;
    }
    else if ((float)v1 > 45.0f && sub_488bc0(idx, 15) != 0xffffffff)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 376) = 15;
    }
    return v2;
}

