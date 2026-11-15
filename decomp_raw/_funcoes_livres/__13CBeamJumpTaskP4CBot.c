// __13CBeamJumpTaskP4CBot @0x186f80 size=186
typedef struct st_586f80_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    float field_18;
    unsigned int field_1c;
    unsigned int field_20;
} st_586f80_0;

typedef struct st_586f80_1 {
    unsigned int field_0;
} st_586f80_1;

extern char __vt_13CBeamJumpTask;
extern st_586f80_1 *g_engfuncs.pfnRandomFloat;

st_586f80_0 * __13CBeamJumpTaskP4CBot(double a0, st_586f80_0 *a1, int a2)
{
    __9CBaseTaskP4CBot(a1, a2);
    a1->field_14 = &__vt_13CBeamJumpTask;
    g_engfuncs.pfnRandomFloat(2.200000047683716f, 3.200000047683716f);
    a1->field_18 = (float)(2.200000047683716 + *(float *)&a1->field_0);
    a1->field_1c = 0;
    *(float *)&a1->field_20 = *(float *)&a1->field_0;
    return a1;
}

