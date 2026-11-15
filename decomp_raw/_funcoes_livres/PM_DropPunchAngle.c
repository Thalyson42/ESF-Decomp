// PM_DropPunchAngle @0x193480 size=116
typedef struct st_593480_0 {
    char padding_0[16];
    float field_10;
} st_593480_0;

extern st_593480_0 *pmove;

int PM_DropPunchAngle(double a0, float a1)
{
    double v2;  // mm7
    int v3;  // 128
    float v0;  // [bp-0x8]

    VectorNormalize(a1);
    v0 = (float)(v2 - (v2 * 0.5 + 10.0) * pmove->field_10);
    v3 = 0;
    if (v0 > 0.0f)
        v3 = *(int *)&v0;
    return VectorScale(a1, v3, a1);
}

