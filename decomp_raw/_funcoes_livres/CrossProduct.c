// CrossProduct @0x18dde0 size=62
float * CrossProduct(float *a0, float *a1, unsigned int *a2)
{
    *(float *)a2 = a0[1] * a1[2] - a0[2] * a1[1];
    *(float *)&a2[1] = a0[2] * *a1 - *a0 * a1[2];
    *(float *)&a2[2] = *a0 * a1[1] - a0[1] * *a1;
    return a1;
}

