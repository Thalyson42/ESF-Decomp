// RelinkBeam__5CBeam @0xaff80 size=398
int RelinkBeam__5CBeam(float a0)
{
    float *v4;  // esi
    float *v5;  // ecx
    unsigned int idx;  // eax
    unsigned int index;  // edx
    unsigned int idx1;  // ecx
    unsigned int idx2;  // eax
    unsigned int v18;  // edx
    double v6;  // mm7
    double v7;  // mm7
    double v8;  // mm7
    double v9;  // mm7
    double v10;  // mm7
    double v11;  // mm7
    unsigned int v12;  // edx
    unsigned int v13;  // ecx
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    v4 = sub_487ce0(a0);
    v5 = sub_4882e0(a0);
    v6 = *v4;
    if (v6 >= *v5)
        v6 = *v5;
    *(float *)(*(int *)a0 + 220) = (float)v6;
    v7 = v4[1];
    if (v7 >= v5[1])
        v7 = v5[1];
    *(float *)(*(int *)a0 + 224) = (float)v7;
    v8 = v4[2];
    if (v8 >= v5[2])
        v8 = v5[2];
    *(float *)(*(int *)a0 + 228) = (float)v8;
    v9 = *v4;
    if (v9 <= *v5)
        v9 = *v5;
    *(float *)(*(int *)a0 + 232) = (float)v9;
    v10 = v4[1];
    if (v10 <= v5[1])
        v10 = v5[1];
    *(float *)(*(int *)a0 + 236) = (float)v10;
    v11 = v4[2];
    if (v11 <= v5[2])
        v11 = v5[2];
    *(float *)(*(int *)a0 + 240) = (float)v11;
    v12 = *(int *)a0;
    v13 = v12 + 220;
    idx = v12 + 8;
    v0 = *(float *)(v12 + 220) - *(float *)(v12 + 8);
    v1 = *(float *)(v13 + 4) - *(float *)(idx + 4);
    v2 = *(float *)(v13 + 8) - *(float *)(idx + 8);
    *(float *)(v12 + 220) = v0;
    *(float *)(v12 + 224) = v1;
    *(float *)(v12 + 228) = v2;
    index = *(int *)a0;
    idx1 = index + 232;
    idx2 = index + 8;
    v0 = *(float *)(index + 232) - *(float *)(index + 8);
    v1 = *(float *)(idx1 + 4) - *(float *)(idx2 + 4);
    v2 = *(float *)(idx1 + 8) - *(float *)(idx2 + 8);
    *(float *)(index + 232) = v0;
    *(float *)(index + 236) = v1;
    *(float *)(index + 240) = v2;
    v18 = *(int *)a0;
    sub_48a0d0(v18, v18 + 220, v18 + 232);
    return sub_48db50(*(int *)a0, *(int *)a0 + 8);
}

