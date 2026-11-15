// Distance @0x18de90 size=69
int Distance(float *a0, float *a1)
{
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v0 = *a1 - *a0;
    v1 = a1[1] - a0[1];
    v2 = a1[2] - a0[2];
    return sub_48c330(&v0);
}

