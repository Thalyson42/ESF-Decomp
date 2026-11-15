// SetGeneralDelay__9CBaseTask @0x1824e0 size=118
typedef struct st_5824e0_0 {
    char padding_0[2560];
    struct st_5824e0_1 *field_a00;
    char padding_a04[416];
    short field_ba4;
} st_5824e0_0;

typedef struct st_5824e0_1 {
    unsigned int field_0;
    unsigned int field_4;
} st_5824e0_1;

typedef struct st_5824e0_2 {
    float field_0;
    char padding_4[4];
    struct st_5824e0_0 *field_8;
} st_5824e0_2;

typedef struct st_5824e0_3 {
    float field_0;
} st_5824e0_3;

typedef struct st_5824e0_4 {
    unsigned int field_0;
} st_5824e0_4;

extern st_5824e0_4 *g_engfuncs.pfnRandomFloat;
extern st_5824e0_3 *gpGlobals;

double SetGeneralDelay__9CBaseTask(st_5824e0_2 *a0)
{
    double v0;  // mm7

    if (a0->field_8->field_ba4 > 0)
    {
        v0 = *(float *)gpGlobals;
    }
    else
    {
        g_engfuncs.pfnRandomFloat(*(float *)&a0->field_8->field_a00->field_0, *(float *)&a0->field_8->field_a00->field_4);
        v0 = *(float *)&a0->field_8->field_a00->field_0 + *(float *)gpGlobals;
    }
    a0->field_0 = (float)v0;
    return v0;
}

