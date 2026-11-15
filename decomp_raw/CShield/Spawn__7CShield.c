// Spawn__7CShield @0x118a70 size=110
typedef struct st_518a70_0 {
    char padding_0[12];
    struct st_518a70_1 *field_c;
} st_518a70_0;

typedef struct st_518a70_1 {
    unsigned int field_0;
} st_518a70_1;

typedef struct st_518a70_3 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[56];
    unsigned int field_148;
    char padding_14c[188];
    unsigned int field_208;
} st_518a70_3;

typedef struct st_518a70_2 {
    struct st_518a70_3 *field_0;
    char padding_4[92];
    struct st_518a70_0 *field_60;
} st_518a70_2;

extern st_518a70_1 *g_engfuncs.pfnSetModel;

unsigned int * Spawn__7CShield(st_518a70_2 *a0)
{
    unsigned int *v0;  // eax

    a0->field_60->field_c(a0);
    g_engfuncs.pfnSetModel(a0->field_0->field_208, "sprites/null.spr");
    a0->field_0->field_148 = 5;
    a0->field_0->field_108 = 0;
    v0 = a0->field_0;
    v0[67] = 1;
    return v0;
}

