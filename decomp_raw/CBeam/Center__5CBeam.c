// Center__5CBeam @0xb7300 size=125
float * Center__5CBeam(void)
{
    int v5;  // esi
    float *v6;  // edi
    float *v7;  // eax
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]
    float *idx;  // [bp+0x4]
    int v4;  // [bp+0x8]

    v5 = v4;
    v6 = CBeam::GetStartPos(v5);
    v7 = CBeam::GetEndPos(v5);
    v0 = *v6 + *v7;
    v1 = v6[1] + v7[1];
    v2 = v6[2] + v7[2];
    *idx = (float)(0.5 * v0);
    idx[1] = (float)(0.5 * v1);
    idx[2] = (float)(0.5 * v2);
    return idx;
}

