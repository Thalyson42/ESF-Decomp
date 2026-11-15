// __15CShootCandyTaskP4CBot @0x15a210 size=202
typedef struct st_55a210_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    float field_18;
    char field_1c;
    char padding_1d[15];
    unsigned int field_2c;
} st_55a210_0;

typedef struct st_55a210_1 {
    unsigned int field_0;
} st_55a210_1;

extern char __vt_15CShootCandyTask;
extern st_55a210_1 *g_engfuncs.pfnRandomFloat;

st_55a210_0 * __15CShootCandyTaskP4CBot(double a0, st_55a210_0 *a1, int a2)
{
    __9CBaseTaskP4CBot(a1, a2);
    a1->field_14 = &__vt_15CShootCandyTask;
    g_engfuncs.pfnRandomFloat(2.5f, 5.0f);
    a1->field_18 = (float)(2.5 + *(float *)&a1->field_0);
    memset(&a1->field_1c, 0, 16);
    *(float *)&a1->field_2c = *(float *)&a1->field_0;
    return a1;
}

