// _._15CLookAroundTask @0x186b40 size=119
typedef struct st_586b40_1 {
    char padding_0[8];
    struct st_586b40_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_586b40_1;

typedef struct st_586b40_0 {
    char padding_0[2848];
    float field_b20;
} st_586b40_0;

typedef struct st_586b40_3 {
    float field_0;
} st_586b40_3;

typedef struct st_586b40_2 {
    unsigned int field_0;
} st_586b40_2;

extern char __vt_15CLookAroundTask;
extern st_586b40_2 *g_engfuncs.pfnRandomFloat;
extern st_586b40_3 *gpGlobals;

int _._15CLookAroundTask(double a0, st_586b40_1 *a1, int a2)
{
    a1->field_14 = &__vt_15CLookAroundTask;
    g_engfuncs.pfnRandomFloat(6.0f, 12.0f);
    a1->field_8->field_b20 = (float)(6.0 + *(float *)gpGlobals);
    return _._9CBaseTask(a1, a2);
}

