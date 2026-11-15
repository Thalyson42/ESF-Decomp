// HandleGrabAttack__12CPlayerMelee @0x10a660 size=1081
typedef struct st_50a660_0 {
    float field_0;
} st_50a660_0;

extern st_50a660_0 *gpGlobals;

int HandleGrabAttack__12CPlayerMelee(float idx)
{
    unsigned int v16;  // edi
    double v17;  // mm7
    double v18;  // mm0
    double v19;  // mm1
    double v20;  // mm2
    double v21;  // mm0
    float v0;  // [bp-0x70]
    float v1;  // [bp-0x6c]
    float v2;  // [bp-0x68]
    float v3;  // [bp-0x64]
    unsigned int v4;  // [bp-0x60]
    unsigned int v5;  // [bp-0x5c]
    unsigned int v6;  // [bp-0x58]
    unsigned int v7;  // [bp-0x54]
    char v8;  // [bp-0x3c], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x38]
    unsigned int v10;  // [bp-0x34]
    int v11;  // [bp-0x1c]
    unsigned short v12;  // [bp-0x18]
    unsigned short v13;  // [bp-0x16]
    float v14;  // [bp-0x8]

    v16 = 0;
    v4 = 0;
    v17 = *(float *)(*(unsigned int *)&idx + 156) / 100.0;
    v3 = (float)v17;
    if (v17 < 0.333333)
        v4 = 1;
    sub_48ce00(idx);
    if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 385) & 8)
    {
        v2 = *(float *)gpGlobals - *(float *)(*(unsigned int *)&idx + 176);
        *(float *)(*(unsigned int *)&idx + 176) = *(float *)gpGlobals;
        if (!*(int *)(*(unsigned int *)&idx + 228))
        {
            if (v4)
            {
                (*(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 292) + 1892) + 4) + 64))(*(int *)(*(int *)(*(unsigned int *)&idx + 292) + 1892));
                v13 = __fnstcw();
                v12 = v13 | 0xc00;
                v11 = (int)(1.0 / v18 * v2 * 150.0);
                if (sub_48c980(*(int *)(*(unsigned int *)&idx + 292), v11))
                    goto LABEL_50a7b5;
                v16 = 1;
            }
            else
            {
                (*(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 292) + 1892) + 4) + 64))(*(int *)(*(int *)(*(unsigned int *)&idx + 292) + 1892));
                v13 = __fnstcw();
                v12 = v13 | 0xc00;
                v11 = (int)(1.0 / v18 * v2 * 100.0);
                if (!sub_48c980(*(int *)(*(unsigned int *)&idx + 292), v11))
                    v16 = 1;
LABEL_50a7b5:
                if (!v16)
                {
                    if (v4)
                    {
                        v1 = 15.0f;
                        if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 384) & 1 || *(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 385) & 8)
                        {
                            (*(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 296) + 1892) + 4) + 64))(*(int *)(*(int *)(*(unsigned int *)&idx + 296) + 1892));
                            v13 = __fnstcw();
                            v12 = v13 | 0xc00;
                            v11 = (int)(1.0 / v19 * 75.0 * v2);
                            if (sub_48c980(*(int *)(*(unsigned int *)&idx + 296), v11))
                            {
                                v0 = (float)(!*(int *)(*(int *)(*(unsigned int *)&idx + 304) + 216) ? 0.6000000238418579 : 0.800000011920929);
                                sub_48c080(*(int *)(*(unsigned int *)&idx + 304), *(int *)(*(unsigned int *)&idx + 292));
                                v14 = (float)(v20 - 1.25);
                                v14 = (float)(v14 / 1.25);
                                v0 = (float)(v0 - v14 * 0.1);
                                v1 *= v0;
                            }
                        }
                        v21 = v1 * v2;
                    }
                    else
                    {
                        v21 = v2 * 40.0;
                    }
                    *(float *)(*(unsigned int *)&idx + 156) = (float)(v21 + *(float *)(*(unsigned int *)&idx + 156));
                    if (100.0 < *(float *)(*(unsigned int *)&idx + 156))
                        *(float *)(*(unsigned int *)&idx + 156) = 100.0f;
                }
            }
        }
        if (*(float *)(*(unsigned int *)&idx + 156) == 100.0f && !*(int *)(*(unsigned int *)&idx + 228))
        {
            *(unsigned int *)(*(unsigned int *)&idx + 228) = 1;
            *(float *)(*(unsigned int *)&idx + 152) = *(float *)gpGlobals;
        }
        if (!v4 && !*(int *)(*(unsigned int *)&idx + 232))
        {
            *(unsigned int *)(*(unsigned int *)&idx + 232) = 1;
            sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520), 1, "weapons/spin.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        }
        if (*(int *)(*(unsigned int *)&idx + 228) && *(float *)(*(unsigned int *)&idx + 152) + 2.5 < *(float *)gpGlobals)
            v16 = 1;
        if (!v16)
        {
            v13 = __fnstcw();
            v12 = v13 | 0xc00;
            v11 = (int)(v3 * 100.0);
            return sub_48c680(*(int *)(*(unsigned int *)&idx + 292), v11);
        }
    }
    if (!sub_48e020(idx, 80, &v8) || v4)
        return sub_489040(idx);
    sub_48a700(idx, 0);
    v5 = v8;
    v6 = v9;
    v7 = v10;
    v14 = (float)(1.5 * v3);
    v13 = __fnstcw();
    v12 = v13 | 0xc00;
    v11 = (int)(v3 * 500.0 + 1000.0);
    return sub_489f40(idx, *(int *)(*(unsigned int *)&idx + 296), v11, v14, &v5);
    return sub_489040(idx);
}

