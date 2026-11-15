// AvoidAttacksWhileSwoop__4CBot @0x154b90 size=645
typedef struct st_554b90_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_554b90_1;

typedef struct st_554b90_0 {
    float field_0;
} st_554b90_0;

typedef struct st_554b90_2 {
    unsigned int field_0;
} st_554b90_2;

extern st_554b90_2 *g_61692c;
extern st_554b90_0 *gpGlobals;

unsigned int AvoidAttacksWhileSwoop__4CBot(float idx)
{
    st_554b90_1 **v8;  // eax
    unsigned int *v9;  // edx
    double v18;  // mm7
    unsigned int index;  // edx
    float v11;  // 112
    float v12;  // 112
    float v13;  // 112
    double v14;  // mm7
    double v15;  // mm6
    unsigned int v16;  // eax
    double v17;  // mm7
    float v0;  // [bp-0x58]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    if (*(float *)(*(unsigned int *)&idx + 3060) > *(float *)gpGlobals)
        return 38;
    *(float *)(*(unsigned int *)&idx + 3060) = (float)(*(float *)gpGlobals + 0.15000000596046448);
    v8 = sub_48d470(idx, 50.0f, 2250.0f);
    if (v8)
    {
        v9 = &*v8->field_8;
        v4 = *v8->field_8;
        v5 = *(float *)&v9[1];
        v6 = *(float *)&v9[2];
        index = *(int *)idx + 8;
        v11 = v4 - *(float *)(*(int *)idx + 8);
        v1 = v11;
        v12 = v5 - *(float *)(index + 4);
        v2 = v12;
        v13 = v6 - *(float *)(index + 8);
        v3 = v13;
        v14 = v11 * v11 + v12 * v12 + v13 * v13;
        v15 = sqrt(v14);
        if (isnan(v15))
            sub_487dc0(*(unsigned int *)&v14);
        else
            v14 = v15;
        v0 = (float)v14;
        if (v0 > 350.0f && *(char *)(*(int *)(*(unsigned int *)&idx + 0xa00) + 64))
        {
            v16 = sub_48dd40(idx);
            if (v16 != 38)
                return v16;
        }
        if (*(int *)(*(unsigned int *)&idx + 3044) != 1)
        {
            if (!*(int *)(*(unsigned int *)&idx + 0xff0))
            {
LABEL_554d90:
                g_61692c(85.0f, 95.0f);
                v18 = 85.0 + *(float *)(*(unsigned int *)&idx + 3092);
                goto LABEL_554df6;
            }
LABEL_554dc4:
            g_61692c(85.0f, 95.0f);
            v18 = *(float *)(*(unsigned int *)&idx + 3092) - 85.0;
LABEL_554df6:
            sub_48d430((float)v18);
            *(float *)(*(unsigned int *)&idx + 3092) = (float)v18;
        }
        else if (0.0 > *(float *)(*(unsigned int *)&idx + 3048))
        {
            g_61692c(85.0f, 95.0f);
            v17 = *(float *)(*(unsigned int *)&idx + 3088) - 85.0;
            goto LABEL_554d44;
        }
        else if (0.0 < *(float *)(*(unsigned int *)&idx + 3048))
        {
            g_61692c(85.0f, 95.0f);
            v17 = 85.0 + *(float *)(*(unsigned int *)&idx + 3088);
LABEL_554d44:
            sub_48d430((float)v17);
            *(float *)(*(unsigned int *)&idx + 3088) = (float)v17;
        }
        else
        {
            if (0.0 > *(float *)(*(unsigned int *)&idx + 3052))
                goto LABEL_554dc4;
            if (0.0 < *(float *)(*(unsigned int *)&idx + 3052))
                goto LABEL_554d90;
        }
    }
    return 38;
}

