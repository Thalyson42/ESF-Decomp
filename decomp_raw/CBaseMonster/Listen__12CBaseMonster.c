// Listen__12CBaseMonster @0xd3d10 size=418
unsigned int Listen__12CBaseMonster(float idx)
{
    unsigned int v11;  // eax
    void* v12;  // esi
    float v13;  // 112
    float v14;  // 112
    float v15;  // 112
    double v16;  // mm7
    double v17;  // mm6
    double v18;  // mm7
    unsigned int v0;  // [bp-0x70]
    int v1;  // [bp-0x6c]
    float v2;  // [bp-0x58]
    char v3;  // [bp-0x44]
    float v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    float v7;  // [bp-0x24]
    float v8;  // [bp-0x20]
    float v9;  // [bp-0x1c]

    *(unsigned int *)(*(unsigned int *)&idx + 560) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 260) = *(int *)(*(unsigned int *)&idx + 260) & 0xfff9ffbf;
    *(unsigned int *)(*(unsigned int *)&idx + 564) = 0;
    v0 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 432))(idx);
    if (*(int *)(*(unsigned int *)&idx + 396))
        v0 &= *(int *)(*(int *)(*(unsigned int *)&idx + 396) + 12);
    v1 = CSoundEnt::ActiveList();
    *(unsigned int *)(*(unsigned int *)&idx + 260) = *(int *)(*(unsigned int *)&idx + 260) & 0xfff9ffbf;
    v11 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 444))(idx);
    if (v1 == -0x1)
        return v11;
    do
    {
        v12 = CSoundEnt::SoundPointerForIndex(v1);
        if (v12 && v0 & (int)v12[12])
        {
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 212))(&v3, idx);
            v13 = *(float *)v12 - v4;
            v7 = v13;
            v14 = (float)v12[4] - v5;
            v8 = v14;
            v15 = (float)v12[8] - v6;
            v9 = v15;
            v16 = v13 * v13 + v14 * v14 + v15 * v15;
            v17 = sqrt(v16);
            if (isnan(v17))
                sqrt(*(unsigned int *)&v16);
            else
                v16 = v17;
            v2 = (float)v16;
            if ((double)(int)v12[16] * (float)v18 >= v2)
            {
                *(int *)&v12[28] = *(int *)(*(unsigned int *)&idx + 560);
                if (CSound::FIsSound(v12))
                {
                    *(char *)(*(unsigned int *)&idx + 262) = *(char *)(*(unsigned int *)&idx + 262) | 2;
                }
                else
                {
                    if ((char)v12[12] & 24)
                        *(char *)(*(unsigned int *)&idx + 260) = *(char *)(*(unsigned int *)&idx + 260) | 64;
                    *(char *)(*(unsigned int *)&idx + 262) = *(char *)(*(unsigned int *)&idx + 262) | 4;
                }
                *(int *)(*(unsigned int *)&idx + 564) = *(int *)(*(unsigned int *)&idx + 564) | (int)v12[12];
                *(int *)(*(unsigned int *)&idx + 560) = v1;
            }
        }
    } while ((v1 = (int)v12[24], (int)v12[24] != -0x1));
    return v11;
}

