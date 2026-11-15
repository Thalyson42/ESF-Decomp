// VectorInverse @0x18df70 size=32
float * VectorInverse(float *a0)
{
    *a0 = -*a0;
    a0[1] = -a0[1];
    a0[2] = -a0[2];
    return a0;
}

