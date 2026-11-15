// ChangeYaw__12CBaseMonsteri @0xd8510 size=354
typedef struct st_4d8510_1 {
    char padding_0[84];
    float field_54;
    char padding_58[84];
    float field_ac;
} st_4d8510_1;

typedef struct st_4d8510_0 {
    struct st_4d8510_1 *field_0;
    char padding_4[605];
    char field_261;
} st_4d8510_0;

typedef struct st_4d8510_2 {
    char padding_0[4];
    float field_4;
} st_4d8510_2;

extern st_4d8510_2 *gpGlobals;

float ChangeYaw__12CBaseMonsteri(st_4d8510_0 *a0, int a1)
{
    float v2;  // 128
    double v3;  // mm0
    double v4;  // mm6
    double v5;  // mm5
    double v6;  // mm6
    double v7;  // mm7
    double v8;  // mm0
    double iter;  // mm0
    float v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0xc]

    UTIL_AngleMod(a0->field_0->field_54);
    v2 = a0->field_0->field_ac;
    if (v2 == v3)
    {
        v1 = 0;
        return v2;
    }
    v4 = (double)a1 * gpGlobals->field_4 * 10.0;
    v5 = v2 - v3;
    v0 = (float)v5;
    if (v2 > v3)
    {
        v6 = v5;
        v7 = v4;
        if (v6 < 180.0)
            goto LABEL_4d85b7;
        v0 = (float)(v6 - 360.0);
    }
    else
    {
        v7 = v4;
        if ((isnan(v0) ? 0x44 : v0 == -180.0 ? 63 : v0 < -180.0 ? 0 : 0xff) < 64)
            v0 = (float)(v0 + 360.0);
        else
        LABEL_4d85b7:
    }
    if (0.0 < v0)
    {
        if (v7 >= v0)
            goto LABEL_4d85ec;
LABEL_4d85d5:
        v0 = (float)v7;
    }
    else
    {
        v7 = -v7;
        if (v7 > v0)
            goto LABEL_4d85d5;
LABEL_4d85ec:
    }
    v8 = v3 + v0;
    UTIL_AngleMod((float)v8);
    a0->field_0->field_54 = (float)v8;
    if (!(a0->field_261 & 4))
        return v0;
    iter = a0->field_0->field_ac - a0->field_0->field_54;
    if (iter > 180.0)
        iter -= 360.0;
    if (iter < -180.0)
        iter += 360.0;
    CBaseAnimating::SetBoneController(a0, 0, (float)iter);
    return v0;
}

