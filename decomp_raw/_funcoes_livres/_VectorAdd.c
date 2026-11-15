// _VectorAdd @0x18dd90 size=40
float * _VectorAdd(float *a0, float *a1, unsigned int *a2)
{
    *(float *)a2 = *a0 + *a1;
    *(float *)&a2[1] = a0[1] + a1[1];
    *(float *)&a2[2] = a0[2] + a1[2];
    return a1;
}

