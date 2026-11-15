// HandleSwoop__6CSwoop @0x123ff0 size=189
typedef struct st_523ff0_0 {
    float field_0;
} st_523ff0_0;

extern st_523ff0_0 *gpGlobals;

double HandleSwoop__6CSwoop(float idx)
{
    double v4;  // mm7
    double v5;  // mm7
    double v6;  // mm0
    double v7;  // mm0
    float v0;  // [bp-0x20]
    float v1;  // [bp-0x1c]
    float v2;  // [bp-0x18]

    v4 = 2.85 + *(float *)(*(unsigned int *)&idx + 16);
    if (v4 < *(float *)gpGlobals)
    {
        sub_48a910(idx);
        return v4;
    }
    v2 = 0;
    v5 = 0.75;
    if (*(float *)(*(unsigned int *)&idx + 16) + 0.75 > *(float *)gpGlobals)
    {
        v5 = 1.0 - (*(float *)gpGlobals - *(float *)(*(unsigned int *)&idx + 16)) / 0.75;
        v2 = (float)v5;
    }
    sub_48d2e0(idx);
    v1 = (float)v5;
    sub_48c500(idx);
    v0 = (float)v5;
    sub_488cb0(idx);
    v7 = v6 * (v2 * v0 + v1);
    *(float *)(*(unsigned int *)&idx + 20) = (float)v7;
    *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 120) + 652) = (float)v7;
    return v2 * v0 + v1;
}

