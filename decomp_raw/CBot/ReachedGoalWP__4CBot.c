// ReachedGoalWP__4CBot @0x170e70 size=274
extern unsigned int g_626824[4];

char ReachedGoalWP__4CBot(float a0)
{
    float *v9;  // edx
    unsigned int idx;  // edx
    float v11;  // 112
    float v12;  // 112
    float v13;  // 112
    double v14;  // mm7
    double v15;  // mm6
    char v0;  // [bp-0x65]
    float v1;  // [bp-0x58]
    float v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    float v4;  // [bp-0x3c]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    if (*(int *)(*(unsigned int *)&a0 + 4104) == 0xffffffff || *(int *)(*(unsigned int *)&a0 + 4132) == 0xffffffff || *(int *)(*(unsigned int *)&a0 + 4104) != *(int *)(*(unsigned int *)&a0 + 4132))
        return 0;
    v0 = 0;
    v9 = &g_626824[4 * *(int *)(*(unsigned int *)&a0 + 4104)];
    v5 = *v9;
    v6 = v9[1];
    v7 = v9[2];
    idx = *(int *)a0 + 8;
    v11 = v5 - *(float *)(*(int *)a0 + 8);
    v2 = v11;
    v12 = v6 - *(float *)(idx + 4);
    v3 = v12;
    v13 = v7 - *(float *)(idx + 8);
    v4 = v13;
    v14 = v11 * v11 + v12 * v12 + v13 * v13;
    v15 = sqrt(v14);
    if (isnan(v15))
        sub_487dc0(*(unsigned int *)&v14);
    else
        v14 = v15;
    v1 = (float)v14;
    if (v1 < 50.0f && (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 228))(a0, &g_626824[4 * *(int *)(*(unsigned int *)&a0 + 4104)]))
        v0 = 1;
    return v0;
    return 0;
}

