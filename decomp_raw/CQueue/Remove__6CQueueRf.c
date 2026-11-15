// Remove__6CQueueRf @0xe38b0 size=68
unsigned int Remove__6CQueueRf(unsigned int *a0, unsigned int *a1)
{
    unsigned int v0;  // eax

    if (a0[201] == 100)
        a0[201] = 0;
    *a0 = *a0 - 1;
    *(float *)a1 = *(float *)&a0[2 + 2 * a0[201]];
    v0 = a0[1 + 2 * a0[201]];
    a0[201] = a0[201] + 1;
    return v0;
}

