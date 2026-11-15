// RemoveAnimationTriggers__11CBasePlayer @0xf44e0 size=254
unsigned int * RemoveAnimationTriggers__11CBasePlayer(unsigned int *a0)
{
    if (a0[478] == 5)
    {
        if (a0[93] == 28)
            goto LABEL_4f45ca;
    }
    else
    {
        if (a0[478] != 6)
        {
            if (a0[478] == 7)
            {
                if (a0[93] != 88)
                {
                    a0[478] = 0;
                    a0[481] = 0;
                    return a0;
                }
                goto LABEL_4f455a;
            }
            if (a0[478] == 8)
            {
                if (a0[93] != 89)
                {
                    a0[478] = 0;
                    a0[481] = 0;
                    return a0;
                }
                goto LABEL_4f455a;
            }
            if (a0[478] == 9)
            {
                if (a0[93] != 90)
                {
                    a0[478] = 0;
                    a0[481] = 0;
                    return a0;
                }
LABEL_4f455a:
                if (!a0[30])
                    return a0;
                a0[478] = 0;
                a0[481] = 0;
                return a0;
            }
            if (a0[478] == 10)
            {
                if (a0[93] == 91)
                    goto LABEL_4f45ca;
            }
            else
            {
                if (a0[478] == 1)
                {
                    if (a0[93] == 7)
                        goto LABEL_4f45ca;
                }
                else
                {
                    if (a0[478] == 3)
                    {
                        if (a0[93] == 0x55)
                            goto LABEL_4f45ca;
                    }
                    else
                    {
                        if (a0[478] != 2)
                            return a0;
                        if (a0[93] == 8)
                        {
LABEL_4f45ca:
                            if (!a0[30])
                                return a0;
                        }
                    }
                }
            }
        }
        else if (a0[93] == 29)
        {
            goto LABEL_4f45ca;
        }
    }
    a0[478] = 0;
    return a0;
}

