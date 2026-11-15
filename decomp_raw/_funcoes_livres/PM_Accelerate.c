// PM_Accelerate @0x18fbe0 size=191
typedef struct st_58fbe0_0 {
    char padding_0[16];
    float field_10;
    char padding_14[72];
    float field_5c;
    float field_60;
    float field_64;
    char padding_68[92];
    float field_c4;
    char padding_c8[4];
    float field_cc;
    unsigned int field_d0;
} st_58fbe0_0;

extern char g_5ccd00;
extern st_58fbe0_0 *pmove;

int PM_Accelerate(float *a0, float a1, float a2)
{
    float v0;  // 112
    double v1;  // mm7
    double v2;  // mm6
    int idx;  // ecx
    unsigned int *v4;  // eax

    if (pmove->field_d0)
        return &g_5ccd00;
    if (pmove->field_cc != 0.0f)
        return &g_5ccd00;
    v0 = a1 - (pmove->field_5c * *a0 + pmove->field_60 * a0[1] + pmove->field_64 * a0[2]);
    if ((isnan(v0) ? 0x44 : v0 == 0.0 ? 63 : v0 < 0.0 ? 0 : 0xff) >= 64)
    {
        v1 = v0;
        v2 = a1 * a2 * pmove->field_10 * pmove->field_c4;
        if (v2 <= v1)
            v1 = v2;
        idx = 0;
        do
        {
            v4 = &pmove->field_5c;
            *(float *)&v4[idx] = (float)(v1 * a0[idx] + *(float *)&v4[idx]);
            idx += 1;
        } while (idx <= 2);
        return &g_5ccd00;
    }
    return &g_5ccd00;
}

