// SetMovedir__FP9entvars_s @0x1228f0 size=360
typedef struct st_5228f0_0 {
    char padding_0[40];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
} st_5228f0_0;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_5228f0_0 *gpGlobals;

int SetMovedir__FP9entvars_s(float idx)
{
    unsigned int v10;  // edx
    unsigned int v11;  // ecx
    float v12;  // eax
    unsigned int v13;  // edx
    unsigned int v14;  // ecx
    float v0;  // [bp-0x44], Other Possible Types: unsigned int
    float v1;  // [bp-0x40], Other Possible Types: unsigned int
    float v2;  // [bp-0x3c], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x38]
    unsigned int v4;  // [bp-0x34]
    float v5;  // [bp-0x30]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]

    v6 = 0;
    v7 = -1.0f;
    v8 = 0;
    v10 = *(unsigned int *)&idx + 80;
    v11 = 0;
    if (v6 == *(float *)(*(unsigned int *)&idx + 80) && v7 == *(float *)(v10 + 4))
        v11 = 0.0 == *(float *)(v10 + 8);
    if (v11)
    {
        v0 = 0;
        v1 = 0;
        v2 = 1.0;
        *(unsigned int *)(*(unsigned int *)&idx + 0x44) = v0;
        *(unsigned int *)(*(unsigned int *)&idx + 72) = v1;
        v12 = v2;
    }
    else
    {
        v0 = 0;
        v1 = -2.0f;
        v2 = 0;
        v13 = *(unsigned int *)&idx + 80;
        v14 = 0;
        if (v0 == *(float *)(*(unsigned int *)&idx + 80) && v1 == *(float *)(v13 + 4))
            v14 = 0.0 == *(float *)(v13 + 8);
        if (v14)
        {
            v3 = 0;
            v4 = 0;
            v5 = -1.0f;
            *(unsigned int *)(*(unsigned int *)&idx + 0x44) = v3;
            *(unsigned int *)(*(unsigned int *)&idx + 72) = v4;
            v12 = v5;
        }
        else
        {
            sub_48a800(*(unsigned int *)&idx + 80);
            *(unsigned int *)(*(unsigned int *)&idx + 0x44) = gpGlobals->field_28;
            *(unsigned int *)(*(unsigned int *)&idx + 72) = gpGlobals->field_2c;
            v12 = *(float *)&gpGlobals->field_30;
        }
    }
    *(float *)(*(unsigned int *)&idx + 76) = v12;
    *(unsigned int *)(*(unsigned int *)&idx + 80) = g_vecZero;
    *(unsigned int *)(*(unsigned int *)&idx + 84) = g_616790;
    *(unsigned int *)(*(unsigned int *)&idx + 88) = g_616794;
    return g_616794;
}

