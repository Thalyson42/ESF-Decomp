// __15CNormalJumpTaskP4CBot @0x187100 size=170
typedef struct st_587100_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    float field_18;
    float field_1c;
} st_587100_0;

typedef struct st_587100_1 {
    unsigned int field_0;
} st_587100_1;

extern char __vt_15CNormalJumpTask;
extern st_587100_1 *g_engfuncs.pfnRandomFloat;

st_587100_0 * __15CNormalJumpTaskP4CBot(double a0, st_587100_0 *a1, int a2)
{
    __9CBaseTaskP4CBot(a1, a2);
    a1->field_14 = &__vt_15CNormalJumpTask;
    g_engfuncs.pfnRandomFloat(0.800000011920929f, 1.2000000476837158f);
    a1->field_18 = (float)(0.800000011920929 + *(float *)&a1->field_0);
    a1->field_1c = (float)(*(float *)&a1->field_0 + 0.20000000298023224);
    return a1;
}

