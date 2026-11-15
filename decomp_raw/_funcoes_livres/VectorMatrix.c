// VectorMatrix @0x18dfe0 size=179
double VectorMatrix(float *a0, unsigned int *a1, unsigned int *a2)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (*a0 == 0.0f && a0[1] == 0.0f)
    {
        *a1 = 0x3f800000;
        *(float *)&a1[1] = 0.0f;
        *(float *)&a1[2] = 0.0f;
        *(float *)a2 = -a0[2];
        *(float *)&a2[1] = 0.0f;
        *(float *)&a2[2] = 0.0f;
        return 0.0;
    }
    v0 = 0;
    v1 = 0;
    v2 = 0x3f800000;
    CrossProduct(a0, &v0, a1);
    VectorNormalize(a1);
    CrossProduct(a1, a0, a2);
    VectorNormalize(a2);
    return 0.0;
}

