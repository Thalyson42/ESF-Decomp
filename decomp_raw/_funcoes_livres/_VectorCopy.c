// _VectorCopy @0x18ddc0 size=29
float * _VectorCopy(float *a0, unsigned int *a1)
{
    *(float *)a1 = *a0;
    *(float *)&a1[1] = a0[1];
    *(float *)&a1[2] = a0[2];
    return a0;
}

