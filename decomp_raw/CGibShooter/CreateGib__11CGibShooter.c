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

extern st_4b44d0_0 *g_6168a4;
extern st_4b44d0_0 *g_6168b4;
extern st_4b44d0_0 *g_616928;

st_4b44d0_2 * CreateGib__11CGibShooter(double a0, st_4b44d0_1 **a1)
{
    st_4b44d0_2 *v0;  // esi
    unsigned int v1;  // eax

    g_6168a4("violence_hgibs");
    if (a0 == 0.0)
        return NULL;
    v0 = sub_48a010(0);
    sub_48d700(v0, "models/hgibs.mdl");
    v0->field_2a8 = 247;
    if ((int)*a1->field_114 <= 1)
        g_6168b4(2, "GibShooter Body is <= 1!\n");
    v1 = g_616928(1, *a1->field_114 - 1);
    v0->field_0->field_114 = v1;
    return v0;
}

