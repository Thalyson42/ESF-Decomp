// DragonBallsGathered__30CHalfLifeCaptureTheDragonBalls @0x9bc50 size=463
unsigned int DragonBallsGathered__30CHalfLifeCaptureTheDragonBalls(float a0)
{
    unsigned int *v13;  // ecx
    unsigned int index;  // edx
    int idx;  // edi
    unsigned int idx1;  // esi
    unsigned int idx2;  // edx
    float v18;  // 112
    float v19;  // 112
    float v20;  // 112
    double v21;  // mm7
    double v22;  // mm6
    float v0;  // [bp-0x90]
    float v1;  // [bp-0x8c]
    int v2;  // [bp-0x88]
    char v3;  // [bp-0x84]
    float v4;  // [bp-0x74]
    float v5;  // [bp-0x44]
    float v6;  // [bp-0x40]
    float v7;  // [bp-0x3c]
    float v8;  // [bp-0x2c]
    float v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]

    v2 = 0;
    *(unsigned int *)&v1 = *(unsigned int *)&a0 + 632;
    while (*(int *)(*(unsigned int *)&v1 + v2 * 4))
    {
        v13 = *(int *)(*(unsigned int *)&v1 + v2 * 4);
        v5 = 0;
        v6 = 0;
        v7 = 300.0f;
        index = *v13 + 8;
        v9 = *(float *)(*v13 + 8) + v5;
        v10 = *(float *)(index + 4) + v6;
        v11 = *(float *)(index + 8) + v7;
        UTIL_TraceLine(*v13 + 8, &v9, 1, *(int *)(*v13 + 520), &v3);
        if (1.0 > v4 || *(int *)(*(int *)(*(unsigned int *)&v1 + v2 * 4) + 100))
            break;
        idx = v2 + 1;
        if (idx <= 6)
        {
            *(unsigned int *)&v0 = *(unsigned int *)&a0 + 632;
            do
            {
                if (!*(int *)(*(unsigned int *)&v0 + idx * 4))
                    return 0;
                idx1 = *(int *)*(int *)(*(unsigned int *)&v0 + v2 * 4) + 8;
                idx2 = *(int *)*(int *)(*(unsigned int *)&v0 + idx * 4) + 8;
                v18 = *(float *)(*(int *)*(int *)(*(unsigned int *)&v0 + v2 * 4) + 8) - *(float *)(*(int *)*(int *)(*(unsigned int *)&v0 + idx * 4) + 8);
                v5 = v18;
                v19 = *(float *)(idx1 + 4) - *(float *)(idx2 + 4);
                v6 = v19;
                v20 = *(float *)(idx1 + 8) - *(float *)(idx2 + 8);
                v7 = v20;
                v21 = v18 * v18 + v19 * v19 + v20 * v20;
                v22 = sqrt(v21);
                if (isnan(v22))
                    sqrt(*(unsigned int *)&v21);
                else
                    v21 = v22;
                v8 = (float)v21;
                if (v8 > 100.0f)
                    return 0;
                idx += 1;
            } while (idx <= 6);
        }
        v2 += 1;
        if (v2 > 5)
            return 1;
    }
    return 0;
}

