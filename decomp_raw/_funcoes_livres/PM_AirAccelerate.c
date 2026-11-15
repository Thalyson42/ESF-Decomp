// PM_AirAccelerate @0x190390 size=223
typedef struct st_590390_0 {
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
} st_590390_0;

extern char g_5ccd00;
extern st_590390_0 *pmove;

int PM_AirAccelerate(float *a0, float a1, float a2)
{
    double v0;  // mm7
    double v1;  // mm6
    double v2;  // mm6
    double v3;  // mm7
    double v4;  // mm6
    int idx;  // ecx
    unsigned int *v6;  // eax

    v0 = a1;
    if (pmove->field_d0 || pmove->field_cc != 0.0f)
        return &g_5ccd00;
    if (30.0 < v0)
        v1 = 30.0;
    else
        v1 = v0;
    v2 = v1 - (pmove->field_5c * *a0 + pmove->field_60 * a0[1] + pmove->field_64 * a0[2]);
    if (0.0 < v2)
    {
        v3 = v2;
        v4 = v0 * a2 * pmove->field_10 * pmove->field_c4;
        if (v4 <= v3)
            v3 = v4;
        idx = 0;
        do
        {
            v6 = &pmove->field_5c;
            *(float *)&v6[idx] = (float)(v3 * a0[idx] + *(float *)&v6[idx]);
            idx += 1;
        } while (idx <= 2);
        return &g_5ccd00;
    }
    return &g_5ccd00;
}

