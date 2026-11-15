// Talk__12CTalkMonsterf @0x126a10 size=74
typedef struct st_526a10_1 {
    char padding_0[780];
    float field_30c;
} st_526a10_1;

typedef struct st_526a10_0 {
    float field_0;
} st_526a10_0;

extern st_526a10_0 *gpGlobals;

unsigned int * Talk__12CTalkMonsterf(st_526a10_1 *a0, float a1)
{
    float *v0;  // eax
    double v1;  // mm7

    if (0.0 >= a1)
    {
        v0 = gpGlobals;
        v1 = *(float *)gpGlobals + 3.0;
    }
    else
    {
        v0 = gpGlobals;
        v1 = a1 + *(float *)gpGlobals;
    }
    a0->field_30c = (float)v1;
    return v0;
}

