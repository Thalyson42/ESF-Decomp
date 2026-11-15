// Respawn__5CItem @0xc8d20 size=161
typedef struct st_4c8d20_2 {
    char padding_0[152];
    struct st_4c8d20_3 *field_98;
    struct st_4c8d20_3 *field_9c;
} st_4c8d20_2;

typedef struct st_4c8d20_0 {
    char padding_0[260];
    float field_104;
    char padding_108[16];
    char field_118;
} st_4c8d20_0;

typedef struct st_4c8d20_1 {
    struct st_4c8d20_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_4c8d20_1;

typedef struct st_4c8d20_3 {
    unsigned int field_0;
} st_4c8d20_3;

typedef struct st_4c8d20_4 {
    char padding_0[68];
    struct st_4c8d20_2 *field_44;
} st_4c8d20_4;

extern char Materialize__5CItem;
extern st_4c8d20_4 *g_pGameRules;

st_4c8d20_1 * Respawn__5CItem(double a0, st_4c8d20_1 *a1)
{
    double v3;  // mm7
    st_4c8d20_4 **v0;  // [bp-0x28]
    char v1;  // [bp-0x24]

    a1->field_14 = 0;
    a1->field_18 = 0;
    a1->field_0->field_118 = a1->field_0->field_118 | 128;
    v0 = &g_pGameRules;
    g_pGameRules->field_44->field_9c(&v1, *v0, a1);
    a1->field_c = _INSERT(sub_48db50(a1->field_0, &v1), 0, 0) | 0xffff0000;
    a1->field_10 = &Materialize__5CItem;
    *v0->field_44->field_98(*v0, a1);
    a1->field_0->field_104 = (float)v3;
    return a1;
}

