// __16CShootLaser1TaskP4CBot @0x1873b0 size=170
typedef struct st_5873b0_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    float field_18;
} st_5873b0_0;

typedef struct st_5873b0_1 {
    unsigned int field_0;
} st_5873b0_1;

extern char __vt_16CShootLaser1Task;
extern st_5873b0_1 *g_engfuncs.pfnRandomFloat;

st_5873b0_0 * __16CShootLaser1TaskP4CBot(double a0, st_5873b0_0 *a1, int a2)
{
    __9CBaseTaskP4CBot(a1, a2);
    a1->field_14 = &__vt_16CShootLaser1Task;
    g_engfuncs.pfnRandomFloat(3.0f, 6.0f);
    a1->field_18 = (float)(3.0 + *(float *)&a1->field_0);
    return a1;
}

