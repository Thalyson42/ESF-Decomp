// DamageDecal__10CBreakablei @0xc3190 size=92
typedef struct st_4c3190_0 {
    char padding_0[108];
    unsigned int field_6c;
} st_4c3190_0;

typedef struct st_4c3190_1 {
    unsigned int field_0;
} st_4c3190_1;

extern st_4c3190_1 *g_616928;

unsigned int DamageDecal__10CBreakablei(st_4c3190_0 *a0, int a1)
{
    return (!a0->field_6c ? g_616928(0, 2) + 25 : a0->field_6c == 7 ? 35 : sub_4893f0(a0, a1));
}

