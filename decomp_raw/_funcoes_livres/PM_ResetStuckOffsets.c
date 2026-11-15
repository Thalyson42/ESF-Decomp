// PM_ResetStuckOffsets @0x1915b0 size=46
extern char rgStuckLast;

int PM_ResetStuckOffsets(unsigned int a0, unsigned int a1)
{
    *(unsigned int *)&(&rgStuckLast)[8 * a0 + 4 * a1] = 0;
    return a1 * 4 + a0 * 8;
}

