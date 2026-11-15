// GetThrowActivity__12CPlayerMelee @0x100d10 size=390
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int GetThrowActivity__12CPlayerMelee(float a0)
{
    unsigned int v3;  // esi
    unsigned int v4;  // esi
    unsigned int v5;  // esi
    float v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]

    if (*(int *)(*(unsigned int *)&a0 + 100) != 1)
    {
        if (*(int *)(*(unsigned int *)&a0 + 100) != 3)
        {
            if (*(int *)(*(unsigned int *)&a0 + 100) == 2)
            {
                if (!(*(char *)(*(int *)*(int *)(*(unsigned int *)&a0 + 292) + 421) & 2))
                {
                    v1 = 1;
                    v0 = a0;
                    CPlayerMelee::GetThrowDirection(v0, v1);
                    if (CPlayerMelee::GetThrowDirection(v0, v1) > 5)
                        return v5;
                    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * CPlayerMelee::GetThrowDirection(v0, v1)] - 1125724)]));
                }
                else if (*(int *)(*(unsigned int *)&a0 + 100) == 2)
                {
                    v1 = 0;
                    v0 = a0;
                    CPlayerMelee::GetThrowDirection(v0, v1);
                    if (CPlayerMelee::GetThrowDirection(v0, v1) - 2 > 3)
                        return v3;
                    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * CPlayerMelee::GetThrowDirection(v0, v1)] - 1125572)]));
                }
            }
            if (*(int *)(*(unsigned int *)&a0 + 100) == 4)
            {
                return 122;
            }
            else if (*(int *)(*(unsigned int *)&a0 + 100) == 5)
            {
                return 123;
            }
            else
            {
                return v4;
            }
        }
        v1 = 1;
        v0 = a0;
        CPlayerMelee::GetThrowDirection(v0, v1);
        if (CPlayerMelee::GetThrowDirection(v0, v1) > 5)
            return v5;
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * CPlayerMelee::GetThrowDirection(v0, v1)] - 1125724)]));
    }
    else
    {
        v1 = 1;
        v0 = a0;
        CPlayerMelee::GetThrowDirection(v0, v1);
        if (CPlayerMelee::GetThrowDirection(v0, v1) > 5)
            return v5;
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * CPlayerMelee::GetThrowDirection(v0, v1)] - 1125724)]));
    }
}

