// Q_log2 @0x18dfc0 size=25
unsigned int Q_log2(int a0)
{
    unsigned int v0;  // eax
    int v1;  // edx

    v0 = 0;
    while (1)
    {
        v1 = a0 >> 1;
        if (!(a0 >> 1))
            break;
        v0 += 1;
        a0 = v1;
    }
    return v0;
}

