// CreateGib__11CGibShooter @0xb44d0 size=201
typedef struct st_4b44d0_1 {
    char padding_0[276];
    unsigned int field_114;
} st_4b44d0_1;

typedef struct st_4b44d0_2 {
    struct st_4b44d0_1 *field_0;
    char padding_4[676];
    unsigned int field_2a8;
} st_4b44d0_2;

typedef struct st_4b44d0_0 {
    unsigned int field_0;
} st_4b44d0_0;

extern st_4b44d0_0 *g_engfuncs.pfnCVarGetFloat;
extern st_4b44d0_0 *g_engfuncs.pfnAlertMessage;
extern st_4b44d0_0 *g_engfuncs.pfnRandomLong;

st_4b44d0_2 * CreateGib__11CGibShooter(double a0, st_4b44d0_1 **a1)
{
    st_4b44d0_2 *v0;  // esi
    unsigned int v1;  // eax

    g_engfuncs.pfnCVarGetFloat("violence_hgibs");
    if (a0 == 0.0)
        return NULL;
    v0 = GetClassPtr__H1Z4CGib_PX01_PX01(0);
    CGib::Spawn(v0, "models/hgibs.mdl");
    v0->field_2a8 = 247;
    if ((int)*a1->field_114 <= 1)
        g_engfuncs.pfnAlertMessage(2, "GibShooter Body is <= 1!\n");
    v1 = g_engfuncs.pfnRandomLong(1, *a1->field_114 - 1);
    v0->field_0->field_114 = v1;
    return v0;
}

