// __14CDrainEntsTaskP4CBot @0x15a4c0 size=202
typedef struct st_55a4c0_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    float field_18;
    struct st_55a4c0_1 *field_1c;
} st_55a4c0_0;

typedef struct st_55a4c0_1 {
    unsigned int field_0;
    unsigned int field_4;
} st_55a4c0_1;

typedef struct st_55a4c0_2 {
    unsigned int field_0;
} st_55a4c0_2;

extern char __vt_14CDrainEntsTask;
extern st_55a4c0_2 *g_engfuncs.pfnRandomFloat;

st_55a4c0_0 * __14CDrainEntsTaskP4CBot(double a0, st_55a4c0_0 *a1, int a2)
{
    unsigned int *v0;  // eax

    __9CBaseTaskP4CBot(a1, a2);
    a1->field_14 = &__vt_14CDrainEntsTask;
    g_engfuncs.pfnRandomFloat(3.0f, 7.0f);
    a1->field_18 = (float)(3.0 + *(float *)&a1->field_0);
    v0 = __builtin_new(8);
    *v0 = 0;
    v0[1] = 0;
    a1->field_1c = v0;
    return a1;
}

