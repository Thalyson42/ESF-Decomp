// PM_PlayerToss @0x190b00 size=63
extern unsigned int pmove;

int PM_PlayerToss(void)
{
    int i;  // ecx

    i = 0;
    do
    {
        *(float *)(i * 4 + pmove + 92) = *(float *)(i * 4 + pmove + 576);
        i += 1;
    } while (i <= 2);
    return PM_FlyMove();
}

