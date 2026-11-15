// HeadToWaypoint__4CBot @0x170ba0 size=705
typedef struct st_570ba0_0 {
    float field_0;
} st_570ba0_0;

extern unsigned int g_teamplay;
extern st_570ba0_0 *gpGlobals;
extern unsigned int g_626824[4];

char HeadToWaypoint__4CBot(float idx)
{
    short v19;  // di
    unsigned int index;  // edx
    float v21;  // 112
    float v22;  // 112
    float v23;  // 112
    double v24;  // mm7
    double v25;  // mm6
    unsigned int v26;  // eax
    unsigned int v27;  // edx
    char v28;  // al
    char iter;  // [bp-0x76]
    char v1;  // [bp-0x75]
    unsigned int v2;  // [bp-0x64]
    unsigned int v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x5c]
    unsigned int v5;  // [bp-0x58]
    float v6;  // [bp-0x58]
    unsigned int v7;  // [bp-0x54]
    unsigned int v8;  // [bp-0x50]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    char v12;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v13;  // [bp-0x34]
    unsigned int v14;  // [bp-0x30]
    unsigned int v15;  // [bp-0x24]
    unsigned int v16;  // [bp-0x20]
    unsigned int v17;  // [bp-0x1c]

    if (*(int *)(*(unsigned int *)&idx + 4104) == 0xffffffff)
        return 0;
    v19 = (!g_teamplay ? -0x1 : *(short *)(*(int *)idx + 428));
    v1 = 0;
    *(float *)&v15 = *(float *)(*(unsigned int *)&idx + 0xff8);
    *(float *)&v16 = *(float *)(*(unsigned int *)&idx + 0xffc);
    *(float *)&v17 = *(float *)(*(unsigned int *)&idx + 0x1000);
    index = *(int *)idx + 8;
    v21 = *(float *)&v15 - *(float *)(*(int *)idx + 8);
    v9 = v21;
    v22 = *(float *)&v16 - *(float *)(index + 4);
    v10 = v22;
    v23 = *(float *)&v17 - *(float *)(index + 8);
    v11 = v23;
    v24 = v21 * v21 + v22 * v22 + v23 * v23;
    v25 = sqrt(v24);
    if (isnan(v25))
        sub_487dc0(*(unsigned int *)&v24);
    else
        v24 = v25;
    v6 = (float)v24;
    if (1.0 < *(float *)(*(unsigned int *)&idx + 4140) && v6 > *(float *)(*(unsigned int *)&idx + 4140))
        v1 = 1;
    if (v6 < 75.0f)
        v1 = 1;
    *(float *)(*(unsigned int *)&idx + 4140) = v6;
    if (v1)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 4140) = 0;
        if (*(int *)(*(unsigned int *)&idx + 4132) != 0xffffffff)
        {
            v26 = sub_48cef0(*(int *)(*(unsigned int *)&idx + 4104), *(int *)(*(unsigned int *)&idx + 4132), v19) & 0xffff;
            if (v26 != 0xffff)
            {
                *(unsigned int *)(*(unsigned int *)&idx + 4104) = v26;
                v27 = v26 * 16;
                *(int *)(*(unsigned int *)&idx + 0xff8) = *(int *)((char *)&g_626824[0] + v27);
                *(int *)(*(unsigned int *)&idx + 0xffc) = *(int *)((char *)&g_626824[0] + v27 + 4);
                *(int *)(*(unsigned int *)&idx + 0x1000) = *(int *)((char *)&g_626824[0] + v27 + 8);
                *(float *)(*(unsigned int *)&idx + 4100) = *(float *)gpGlobals;
            }
        }
        else
        {
            iter = 4;
            while (1)
            {
                v28 = sub_48b7d0(idx);
                if (v28)
                    break;
                if (iter)
                {
                    *(unsigned int *)(*(unsigned int *)&idx + 4108 + iter * 4) = 0xffffffff;
                    iter -= 1;
                }
                else
                {
                    if (!v28)
                    {
                        *(unsigned int *)(*(unsigned int *)&idx + 4104) = 0xffffffff;
                        iter = 0;
                        do
                        {
                            *(unsigned int *)(*(unsigned int *)&idx + 4108 + iter * 4) = 0xffffffff;
                            iter += 1;
                        } while (iter <= 4);
                        return 0;
                    }
                    break;
                }
            }
        }
    }
    *(float *)&v2 = *(float *)(*(unsigned int *)&idx + 0xff8);
    *(float *)&v3 = *(float *)(*(unsigned int *)&idx + 0xffc);
    *(float *)&v4 = *(float *)(*(unsigned int *)&idx + 0x1000);
    *(float *)&v5 = *(float *)(*(unsigned int *)&idx + 0xff8);
    *(float *)&v7 = *(float *)(*(unsigned int *)&idx + 0xffc);
    *(float *)&v8 = *(float *)(*(unsigned int *)&idx + 0x1000);
    sub_48a170(&v12, idx, &v5);
    *(unsigned int *)(*(unsigned int *)&idx + 3088) = v12;
    *(unsigned int *)(*(unsigned int *)&idx + 3092) = v13;
    *(unsigned int *)(*(unsigned int *)&idx + 3096) = v14;
    if (15.0 < *(float *)(*(unsigned int *)&idx + 3112) && 15.0 < *(float *)(*(unsigned int *)&idx + 3120))
        goto LABEL_570e45;
    if (15.0 < *(float *)(*(unsigned int *)&idx + 3116) && 15.0 < *(float *)(*(unsigned int *)&idx + 3124))
    {
LABEL_570e45:
        sub_48d0d0(idx);
    }
    return 1;
}

