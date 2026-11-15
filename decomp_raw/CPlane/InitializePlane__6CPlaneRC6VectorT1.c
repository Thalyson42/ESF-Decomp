// InitializePlane__6CPlaneRC6VectorT1 @0xe7ed0 size=64
unsigned int InitializePlane__6CPlaneRC6VectorT1(unsigned int *a0, unsigned int *a1, float *a2)
{
    unsigned int v0;  // eax

    *a0 = *a1;
    a0[1] = a1[1];
    v0 = a1[2];
    a0[2] = v0;
    *(float *)&a0[3] = *(float *)a0 * *a2 + *(float *)&a0[1] * a2[1] + *(float *)&a0[2] * a2[2];
    a0[4] = 1;
    return v0;
}

