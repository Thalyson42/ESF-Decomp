// VectorMA @0x18dd00 size=47
float * VectorMA(float *a0, float a1, float *a2, unsigned int *a3)
{
    *(float *)a3 = a1 * *a2 + *a0;
    *(float *)&a3[1] = a1 * a2[1] + a0[1];
    *(float *)&a3[2] = a1 * a2[2] + a0[2];
    return a2;
}

