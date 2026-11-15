// BotChangePitch__4CBotff @0x170240 size=300
typedef struct st_570240_0 {
    char padding_0[116];
    float field_74;
} st_570240_0;

extern float BotManager+3392;

double BotChangePitch__4CBotff(st_570240_0 **a0, float a1, float a2)
{
    float v0;  // 128
    double v1;  // mm6
    double v2;  // mm5
    double v3;  // mm4
    double v4;  // mm6
    double iter;  // mm6

    v0 = a2;
    v1 = -*a0->field_74;
    v2 = fabs(v1 - a2);
    v3 = a1 * BotManager+3392;
    if (v3 > v2)
        v3 = v2;
    if ((isnan(v1) ? 0x44 : 0.0 == v1 ? 63 : 0.0 < v1 ? 0 : 0xff) < 64)
    {
        if (0.0 > a2)
            goto LABEL_5702b2;
        v4 = v3;
        if (v1 <= v0)
            goto LABEL_570335;
        goto LABEL_570329;
    }
LABEL_5702b2:
    if ((isnan(v1) ? 0x44 : 0.0 == v1 ? 63 : 0.0 < v1 ? 0 : 0xff) < 64 && 0.0 > a2)
    {
        v4 = v3;
        if (v1 - 180.0 > a2)
            goto LABEL_57032f;
        goto LABEL_570323;
    }
    if (0.0 > v1)
    {
        if (0.0 > a2)
            goto LABEL_570312;
        v4 = v3;
        if (v1 + 180.0 <= a2)
        {
LABEL_570323:
LABEL_570329:
            iter = v1 - v4;
        }
        else
        {
LABEL_57032f:
LABEL_570335:
            iter = v4 + v1;
        }
    }
    else
    {
LABEL_570312:
        v4 = v3;
        if (v1 <= v0)
            goto LABEL_570335;
        goto LABEL_570329;
    }
    if (iter > 180.0)
        iter -= 360.0;
    if (iter < -180.0)
        iter += 360.0;
    *a0->field_74 = (float)iter;
    return v2;
}

