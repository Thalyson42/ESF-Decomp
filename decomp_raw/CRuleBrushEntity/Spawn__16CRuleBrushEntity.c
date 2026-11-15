// Spawn__16CRuleBrushEntity @0xceff0 size=87
typedef struct st_4ceff0_0 {
    char padding_0[184];
    unsigned int field_b8;
    char padding_bc[332];
    unsigned int field_208;
} st_4ceff0_0;

typedef struct st_4ceff0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4ceff0_1;

typedef struct st_4ceff0_2 {
    unsigned int field_0;
} st_4ceff0_2;

extern st_4ceff0_2 *g_6167c8;
extern st_4ceff0_1 *gpGlobals;

int Spawn__16CRuleBrushEntity(st_4ceff0_0 **a0)
{
    g_6167c8(*a0->field_208, *a0->field_b8 + gpGlobals->field_98);
    return sub_487ec0(a0);
}

