// VectorCompare @0x18dcc0 size=54
unsigned int VectorCompare(unsigned int *a0, float *a1)
{
    int v0;  // esi

    v0 = 0;
    while (a1[v0] == *(float *)&a0[v0])
    {
        v0 += 1;
        if (v0 > 2)
            return 1;
    }
    return 0;
}

