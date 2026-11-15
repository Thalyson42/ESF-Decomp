// PM_WallJump @0x18f270 size=923
extern void* pmove;

unsigned int PM_WallJump(void)
{
    int idx;  // ecx
    int idx1;  // ecx
    int idx2;  // ecx
    int v20;  // eax
    int l;  // ecx
    int m;  // ecx
    int n;  // ecx
    int index;  // ecx
    int v0;  // [bp-0xcc]
    unsigned short v1;  // [bp-0xc8]
    unsigned short v2;  // [bp-0xc6]
    char v3;  // [bp-0xc4], Other Possible Types: unsigned int
    float v4;  // [bp-0xb4]
    float v5;  // [bp-0xb0]
    unsigned int v6;  // [bp-0xac]
    unsigned int v7;  // [bp-0xa8]
    float v8;  // [bp-0xa4]
    unsigned int v9;  // [bp-0x94]
    char v10;  // [bp-0x64]
    float v11;  // [bp-0x64]
    unsigned int v12;  // [bp-0x44]
    float v13;  // [bp-0x40]
    unsigned int v14;  // [bp-0x3c], Other Possible Types: float
    float v15;  // [bp-0x24]

    if ((char)pmove[283766] & 2)
    {
        if (!((char)pmove[200] & 2) && !(int)pmove[516] && (float)pmove[140] == 0.0f)
        {
            if ((int)pmove[228] <= 1)
            {
                *(float *)&v12 = (float)pmove[92];
                v13 = (float)pmove[96];
                v14 = 0;
                sub_489290(&v12);
                if ((char)pmove[283766] & 8)
                {
                    *(float *)&v12 = (float)pmove[20];
                    v13 = (float)pmove[24];
                    v14 = (float)pmove[28];
                }
                else if ((char)pmove[283766] & 16)
                {
                    idx = 0;
                    do
                    {
                        *(float *)&(&v12)[idx] = -*(float *)(4 * idx + (char *)pmove + 20);
                        idx += 1;
                    } while (idx <= 2);
                }
                else if ((char)pmove[283767] & 5)
                {
                    *(float *)&v12 = (float)pmove[32];
                    v13 = (float)pmove[36];
                    v14 = (float)pmove[40];
                }
                else if ((short)pmove[283766] & 640)
                {
                    idx1 = 0;
                    do
                    {
                        *(float *)&(&v12)[idx1] = -*(float *)(4 * idx1 + (char *)pmove + 32);
                        idx1 += 1;
                    } while (idx1 <= 2);
                }
                else if ((int)pmove[220] == 14)
                {
                    return 0;
                }
                idx2 = 0;
                do
                {
                    (&v15)[idx2] = (float)(*(float *)&(&v12)[idx2] * 64.0 + *(float *)(4 * idx2 + (char *)pmove + 56));
                    idx2 += 1;
                } while (idx2 <= 2);
                (int)pmove[324992](&v3, pmove + 56, &v15, 0, 0xffffffff);
                if (v4 != 1.0f && !v3)
                {
                    sub_48c310(&v8, &v10);
                    v2 = __fnstcw();
                    v1 = v2 | 0xc00;
                    v0 = (int)v11;
                    v20 = v0;
                    if (v20 < -0xb4)
                        v20 += 360;
                    if (v20 < 0)
                        v20 = -v20;
                    if (v20 <= 45 && !v9)
                    {
                        *(float *)&pmove[140] = 1160.0f;
                        l = 0;
                        do
                        {
                            *(unsigned int *)((char *)pmove + 4 * l + 92) = 0;
                            l += 1;
                        } while (l <= 2);
                        *(float *)&pmove[56] = v5;
                        *(unsigned int *)&pmove[60] = v6;
                        *(unsigned int *)&pmove[64] = v7;
                        m = 0;
                        do
                        {
                            *(float *)(4 * m + (char *)pmove + 576) = (&v8)[m];
                            m += 1;
                        } while (m <= 2);
                        *(unsigned int *)&pmove[516] = 1;
                        return 1;
                    }
                }
            }
        }
        else
        {
            if (0.0 < (float)pmove[140] && (int)pmove[516] == 1)
            {
                n = 0;
                do
                {
                    *(unsigned int *)((char *)pmove + 4 * n + 92) = 0;
                    n += 1;
                } while (n <= 2);
                return 1;
            }
        }
    }
    else
    {
        if ((int)pmove[516] == 1)
        {
            sub_48d160();
            *(float *)&pmove[140] = 0;
            *(unsigned int *)&pmove[516] = 0;
            index = 0;
            do
            {
                *(unsigned int *)((char *)pmove + 4 * index + 576) = 0;
                index += 1;
            } while (index <= 2);
        }
    }
    return 0;
}

