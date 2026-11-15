// AddClientAfterFX__11CBasePlayer @0xf6290 size=191
typedef struct st_4f6290_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_4f6290_0;

typedef struct st_4f6290_1 {
    unsigned int field_0;
} st_4f6290_1;

extern unsigned int gmsgAfterFX;
extern st_4f6290_1 *g_616878;
extern st_4f6290_1 *g_61687c;
extern st_4f6290_1 *g_616880;
extern st_4f6290_1 *g_616894;
extern st_4f6290_1 *g_6168dc;

int AddClientAfterFX__11CBasePlayer(st_4f6290_0 **a0)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(4, gmsgAfterFX, &*a0->field_8, 0, v0, v1, v2);
    v3 = g_6168dc(*a0->field_208);
    g_616880(v3);
    g_616894(*a0->field_8);
    g_616894(*a0->field_c);
    g_616894(*a0->field_10);
    return g_61687c();
}

