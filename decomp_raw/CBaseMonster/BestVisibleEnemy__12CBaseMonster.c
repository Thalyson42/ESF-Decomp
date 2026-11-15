// BestVisibleEnemy__12CBaseMonster @0xd8200 size=500
unsigned int BestVisibleEnemy__12CBaseMonster(float a0)
{
    unsigned int *v15;  // edi
    unsigned int *v16;  // edi
    unsigned int index;  // edx
    float v26;  // 112
    float v27;  // 112
    float v28;  // 112
    double v29;  // mm7
    double v30;  // mm6
    unsigned int idx;  // esi
    unsigned int idx1;  // edx
    float v19;  // 112
    float v20;  // 112
    float v21;  // 112
    double v22;  // mm7
    double v23;  // mm6
    unsigned int idx2;  // esi
    int v0;  // [bp-0x58]
    int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    int v3;  // [bp-0x4c]
    unsigned short v4;  // [bp-0x48]
    unsigned short v5;  // [bp-0x46]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x38]
    float v10;  // [bp-0x2c]
    float v11;  // [bp-0x24]
    float v12;  // [bp-0x20]
    float v13;  // [bp-0x1c]

    v1 = 0x2000;
    v15 = *(int *)(*(unsigned int *)&a0 + 8);
    v2 = 0;
    v0 = 0;
    if (!*(int *)(*(unsigned int *)&a0 + 8))
        return v2;
    do
    {
        v16 = v15;
        if ((*(int *)(v16[24] + 140))(v16))
        {
            if ((int)(*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 0x100))(a0, v16) > v0)
            {
                v0 = (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 0x100))(a0, v16);
                idx = *v16 + 8;
                idx1 = *(int *)a0 + 8;
                v19 = *(float *)(*v16 + 8) - *(float *)(*(int *)a0 + 8);
                v11 = v19;
                v20 = *(float *)(idx + 4) - *(float *)(idx1 + 4);
                v12 = v20;
                v21 = *(float *)(idx + 8) - *(float *)(idx1 + 8);
                v13 = v21;
                v22 = v19 * v19 + v20 * v20 + v21 * v21;
                v23 = sqrt(v22);
                if (isnan(v23))
                    sub_487dc0(*(unsigned int *)&v22);
                else
                    v22 = v23;
                v9 = (float)v22;
                v5 = __fnstcw();
                v4 = v5 | 0xc00;
                v1 = (int)v9;
                v2 = v16;
            }
            else if ((*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 0x100))(a0, v16) == v0)
            {
                idx2 = *v16 + 8;
                index = *(int *)a0 + 8;
                v26 = *(float *)(*v16 + 8) - *(float *)(*(int *)a0 + 8);
                v6 = v26;
                v27 = *(float *)(idx2 + 4) - *(float *)(index + 4);
                v7 = v27;
                v28 = *(float *)(idx2 + 8) - *(float *)(index + 8);
                v8 = v28;
                v29 = v26 * v26 + v27 * v27 + v28 * v28;
                v30 = sqrt(v29);
                if (isnan(v30))
                    sub_487dc0(*(unsigned int *)&v29);
                else
                    v29 = v30;
                v10 = (float)v29;
                v5 = __fnstcw();
                v4 = v5 | 0xc00;
                v3 = (int)v10;
                if (v3 <= v1)
                {
                    v1 = v3;
                    v0 = (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 0x100))(a0, v16);
                    v2 = v16;
                }
            }
        }
    } while ((v15 = v16[2], v16[2]));
    return v2;
}

