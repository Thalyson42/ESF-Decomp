// BotChangeYaw__4CBotff @0x170370 size=298
typedef struct st_570370_0 {
    char padding_0[120];
    float field_78;
} st_570370_0;

extern float g_6253c0;

double BotChangeYaw__4CBotff(st_570370_0 **a0, float a1, float a2)
{
    float v0;  // 128
    float v1;  // 120
    double v2;  // mm5
    double v3;  // mm4
    double v4;  // mm6
    double v5;  // mm7
    double iter;  // mm6

    v0 = a2;
    v1 = *a0->field_78;
    v2 = fabs(v1 - a2);
    v3 = a1 * g_6253c0;
    if (v3 > v2)
        v3 = v2;
    if ((isnan(v1) ? 0x44 : 0.0 == v1 ? 63 : 0.0 < v1 ? 0 : 0xff) < 64)
    {
        if (0.0 > a2)
            goto LABEL_5703e0;
        v4 = v3;
        v5 = v1;
        if (v5 <= v0)
            goto LABEL_570463;
        goto LABEL_570457;
    }
LABEL_5703e0:
    if ((isnan(v1) ? 0x44 : 0.0 == v1 ? 63 : 0.0 < v1 ? 0 : 0xff) < 64 && 0.0 > a2)
    {
        v4 = v3;
        if (v1 - 180.0 > a2)
            goto LABEL_57045d;
        goto LABEL_570451;
    }
    if (0.0 > v1)
    {
        if (0.0 > a2)
            goto LABEL_570440;
        v4 = v3;
        if (v1 + 180.0 <= a2)
        {
LABEL_570451:
            v5 = v1;
LABEL_570457:
            iter = v5 - v4;
        }
        else
        {
LABEL_57045d:
            v5 = v1;
LABEL_570463:
            iter = v4 + v5;
        }
    }
    else
    {
LABEL_570440:
        v4 = v3;
        v5 = v1;
        if (v5 <= v0)
            goto LABEL_570463;
        goto LABEL_570457;
    }
    if (iter > 180.0)
        iter -= 360.0;
    if (iter < -180.0)
        iter += 360.0;
    *a0->field_78 = (float)iter;
    return v2;
}

