// VectorTransform @0x18dc60 size=95
float * VectorTransform(float *a0, float *a1, unsigned int *a2)
{
    *(float *)a2 = *a0 * *a1 + a0[1] * a1[1] + a0[2] * a1[2] + a1[3];
    *(float *)&a2[1] = *a0 * a1[4] + a0[1] * a1[5] + a0[2] * a1[6] + a1[7];
    *(float *)&a2[2] = *a0 * a1[8] + a0[1] * a1[9] + a0[2] * a1[10] + a1[11];
    return a1;
}

