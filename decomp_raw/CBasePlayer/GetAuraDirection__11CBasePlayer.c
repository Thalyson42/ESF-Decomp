// GetAuraDirection__11CBasePlayer @0xf6040 size=352
unsigned int GetAuraDirection__11CBasePlayer(float a0)
{
    double v5;  // mm7
    double v6;  // mm6
    unsigned int *v7;  // eax
    unsigned int v8;  // ecx
    unsigned int v9;  // edx
    double v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x3c]
    int v2;  // [bp-0x38]
    float v3;  // [bp-0x18]

    v5 = *(float *)(*(int *)a0 + 32) * *(float *)(*(int *)a0 + 32) + *(float *)(*(int *)a0 + 36) * *(float *)(*(int *)a0 + 36);
    v6 = sqrt(v5);
    if (isnan(v6))
        sub_487dc0(*(unsigned int *)&v5);
    else
        v5 = v6;
    v3 = (float)v5;
    v7 = *(int *)a0;
    v1 = (*((char *)&v7[96] + 1) & 5) != 0;
    v8 = v7[96] & 8;
    v9 = v7[96] & 16;
    if (!v7[139])
    {
        if (*(int *)(*(unsigned int *)&a0 + 800))
            goto LABEL_4f610e;
        if (*(int *)(*(unsigned int *)&a0 + 1288))
        {
LABEL_4f618f:
            return 1;
        }
        else if (*(char *)(*(int *)a0 + 421) & 2)
        {
            if (!(*(char *)(*(int *)a0 + 384) & 4))
            {
LABEL_4f610e:
                if (!(v7[96] & 640) && !v1)
                {
LABEL_4f6120:
                    if ((v8 || v9) && *(float *)(*(unsigned int *)&a0 + 1876) != 0.0f)
                        goto LABEL_4f618f;
                }
                else if (!(!v9))
                {
                    goto LABEL_4f6120;
                }
            }
        }
        else
        {
            if (*(int *)(*(int *)a0 + 448) > 1)
            {
                v0 = v3;
                v2 = sub_48a780(a0);
                if ((double)v2 / 1.6 < v0)
                    goto LABEL_4f618f;
            }
            else if (0.0 <= *(float *)(*(int *)a0 + 40))
            {
                goto LABEL_4f618f;
            }
        }
    }
    return 0;
}

