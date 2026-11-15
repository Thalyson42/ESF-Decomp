// StudioFrameAdvance__14CBaseAnimatingf @0x8e360 size=335
typedef struct st_48e360_1 {
    struct st_48e360_2 *field_0;
    char padding_4[104];
    float field_6c;
    char padding_70[8];
    unsigned int field_78;
    unsigned int field_7c;
} st_48e360_1;

typedef struct st_48e360_2 {
    char padding_0[304];
    float field_130;
    float field_134;
    float field_138;
} st_48e360_2;

typedef struct st_48e360_0 {
    float field_0;
} st_48e360_0;

extern st_48e360_0 *gpGlobals;

double StudioFrameAdvance__14CBaseAnimatingf(st_48e360_1 *a0, float a1)
{
    double v3;  // mm7
    float *v4;  // eax
    float *v6;  // edx
    int v0;  // [bp-0x1c]
    unsigned short v1;  // [bp-0x18]
    unsigned short v2;  // [bp-0x16]

    v3 = a1;
    if (v3 == 0.0)
    {
        v3 = *(float *)gpGlobals - a0->field_0->field_134;
        if ((isnan(v3) ? 0x44 : v3 == 0.001 ? 63 : v3 < 0.001 ? 0 : 0xff) < 64)
        {
            a0->field_0->field_134 = *(float *)gpGlobals;
            return 0.0;
        }
    }
    if (a0->field_0->field_134 == 0.0f)
        v3 = 0.0;
    v4 = a0->field_0;
    v4[76] = (float)(v3 * a0->field_6c * v4[78] + v4[76]);
    a0->field_0->field_134 = *(float *)gpGlobals;
    if (0.0 <= a0->field_0->field_130 && (isnan(a0->field_0->field_130) ? 0x44 : 256.0 == a0->field_0->field_130 ? 63 : 256.0 < a0->field_0->field_130 ? 0 : 0xff) >= 64)
        return v3;
    if (a0->field_7c)
    {
        v6 = a0->field_0;
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(0.00390625 * v6[76]);
        v6[76] = (float)(v6[76] - (double)v0 * 256.0);
    }
    else
    {
        a0->field_0->field_130 = (float)(0.0 > a0->field_0->field_130 ? 0.0 : 255.0);
    }
    a0->field_78 = 1;
    return v3;
}

