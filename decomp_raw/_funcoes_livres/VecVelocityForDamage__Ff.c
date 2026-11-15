// VecVelocityForDamage__Ff @0xefbd0 size=286
typedef struct st_4efbd0_0 {
    unsigned int field_0;
} st_4efbd0_0;

extern st_4efbd0_0 *g_engfuncs.pfnRandomFloat;

float * VecVelocityForDamage__Ff(void)
{
    double v8;  // mm7
    double v9;  // mm0
    double v10;  // mm0
    double v11;  // mm7
    double v12;  // mm0
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]
    float *idx;  // [bp+0x4]
    float v7;  // [bp+0x8]

    g_engfuncs.pfnRandomFloat(0xc2c80000, 0x42c80000);
    g_engfuncs.pfnRandomFloat(0xc2c80000, 0x42c80000);
    g_engfuncs.pfnRandomFloat(200.0f, 300.0f);
    v3 = (float)v8;
    v4 = (float)v8;
    v5 = (float)v9;
    if (v7 > -50.0f)
    {
        v10 = 0.699999988079071;
        goto LABEL_4efca1;
    }
    else if (v7 > -200.0f)
    {
        v11 = v4 + v4;
        v12 = v5 + v5;
        v0 = v3 + v3;
    }
    else
    {
        v10 = 10.0;
LABEL_4efca1:
        v11 = v10 * v4;
        v12 = v10 * v5;
        v0 = (float)(v10 * v3);
    }
    v1 = (float)v11;
    v2 = (float)v12;
    v3 = v0;
    v4 = v1;
    v5 = v2;
    *idx = v3;
    idx[1] = v4;
    idx[2] = v5;
    return idx;
}

