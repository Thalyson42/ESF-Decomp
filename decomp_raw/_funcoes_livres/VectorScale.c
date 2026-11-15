// VectorScale @0x18df90 size=36
unsigned int * VectorScale(float *a0, float a1, unsigned int *a2)
{
    *(float *)a2 = a1 * *a0;
    *(float *)&a2[1] = a1 * a0[1];
    *(float *)&a2[2] = a1 * a0[2];
    return a2;
}

