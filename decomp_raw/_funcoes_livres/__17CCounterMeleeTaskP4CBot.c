// __17CCounterMeleeTaskP4CBot @0x186650 size=186
typedef struct st_586650_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    float field_1c;
    unsigned int field_20;
} st_586650_0;

typedef struct st_586650_1 {
    unsigned int field_0;
} st_586650_1;

extern char __vt_17CCounterMeleeTask;
extern st_586650_1 *g_engfuncs.pfnRandomFloat;

st_586650_0 * __17CCounterMeleeTaskP4CBot(double a0, st_586650_0 *a1, int a2)
{
    __9CBaseTaskP4CBot(a1, a2);
    a1->field_14 = &__vt_17CCounterMeleeTask;
    a1->field_18 = 1;
    g_engfuncs.pfnRandomFloat(1.100000023841858f, 2.4000000953674316f);
    a1->field_1c = (float)(1.100000023841858 + *(float *)&a1->field_0);
    a1->field_20 = 0;
    return a1;
}

