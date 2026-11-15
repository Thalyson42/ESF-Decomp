// GetSequenceInfo__FPvP9entvars_sPfT2 @0x8f280 size=235
typedef struct st_48f280_0 {
    char padding_0[164];
    int field_a4;
    unsigned int field_a8;
} st_48f280_0;

typedef struct st_48f280_1 {
    char padding_0[296];
    int field_128;
} st_48f280_1;

typedef struct st_48f280_2 {
    char padding_0[32];
    float field_20;
    char padding_24[20];
    int field_38;
    char padding_3c[16];
    float field_4c;
    float field_50;
    float field_54;
} st_48f280_2;

double GetSequenceInfo__FPvP9entvars_sPfT2(st_48f280_0 *a0, st_48f280_1 *a1, unsigned int a2, float *a3)
{
    st_48f280_2 *v2;  // esi
    double v3;  // mm7
    double v4;  // mm6
    double v5;  // mm7
    double v6;  // mm7
    double v7;  // mm7
    float v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    if (!a0)
        return v7;
    if (a1->field_128 >= a0->field_a4)
    {
        *(float *)a2 = 0;
    }
    else
    {
        v2 = &a0->padding_0[a0->field_a8 + 176 * a1->field_128];
        if (v2->field_38 > 1)
        {
            v1 = v2->field_38 - 1;
            *(float *)a2 = (float)(v2->field_20 * 256.0 / (double)(int)v1);
            v3 = v2->field_4c * v2->field_4c + v2->field_50 * v2->field_50 + v2->field_54 * v2->field_54;
            v4 = sqrt(v3);
            if (isnan(v4))
                sqrt(*(unsigned int *)&v3);
            else
                v3 = v4;
            v0 = (float)v3;
            *a3 = v0;
            v1 = v2->field_38 - 1;
            v5 = v0 * v2->field_20 / (double)(int)v1;
            *a3 = (float)v5;
            return v5;
        }
        v6 = 256.0;
        *(float *)a2 = 256.0f;
    }
    *a3 = 0;
    return v6;
}

