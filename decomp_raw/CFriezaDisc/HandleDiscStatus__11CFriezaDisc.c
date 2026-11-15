// HandleDiscStatus__11CFriezaDisc @0xc0fb0 size=420
double HandleDiscStatus__11CFriezaDisc(float idx)
{
    unsigned int v12;  // eax
    unsigned int index;  // edx
    double v14;  // mm7
    double v15;  // mm6
    double v16;  // mm7
    double v17;  // mm7
    double v18;  // mm7
    unsigned int *v19;  // edx
    char v0;  // [bp-0x64]
    float v1;  // [bp-0x64]
    float v2;  // [bp-0x60]
    float v3;  // [bp-0x5c]
    float v4;  // [bp-0x58]
    float v5;  // [bp-0x44]
    float v6;  // [bp-0x40]
    float v7;  // [bp-0x3c]
    float v8;  // [bp-0x24]
    float v9;  // [bp-0x20]
    float v10;  // [bp-0x1c]

    v12 = *(int *)(*(unsigned int *)&idx + 468);
    if (v12 != 1)
    {
        if ((int)v12 <= 1)
        {
            return v18;
        }
        else if (v12 == 2)
        {
            (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v0, *(int *)(*(unsigned int *)&idx + 128));
            v8 = v1;
            v9 = v2;
            v10 = v3;
            index = *(int *)*(int *)(*(unsigned int *)&idx + 472) + 8;
            v1 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 472) + 8) - v8;
            v2 = *(float *)(index + 4) - v9;
            v3 = *(float *)(index + 8) - v10;
            v5 = v1;
            v6 = v2;
            v7 = v3;
            v14 = v5 * v5 + v6 * v6 + v7 * v7;
            v15 = sqrt(v14);
            if (isnan(v15))
                sqrt(*(unsigned int *)&v14);
            else
                v14 = v15;
            v4 = (float)v14;
            v16 = v4;
            if (v16 < 100.0)
            {
                *(unsigned int *)(*(unsigned int *)&idx + 468) = 3;
                CFriezaDiscAttack::Returned(*(int *)(*(unsigned int *)&idx + 472));
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 832) = 1;
                *(float *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0.5f;
                return 0.5;
            }
            CBasePlayer::StopAniTrigger(*(int *)(*(unsigned int *)&idx + 128), 5);
        }
        else
        {
            return v17;
        }
    }
    v19 = *(int *)(*(unsigned int *)&idx + 472);
    if (v19[172])
    {
        (*(int *)(v19[24] + 508))(v19);
        *(unsigned int **)(*(unsigned int *)&idx + 472) = NULL;
    }
    else if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 892))
    {
        CFriezaDisc::Release(idx);
    }
    else
    {
        return v16;
    }
    CFriezaDisc::StopControl(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 468) = 0;
    return v16;
}

