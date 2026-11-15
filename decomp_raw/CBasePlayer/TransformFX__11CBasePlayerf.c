// TransformFX__11CBasePlayerf @0xf0ef0 size=136
typedef struct st_4f0ef0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f0ef0_0;

typedef struct st_4f0ef0_1 {
    unsigned int field_0;
} st_4f0ef0_1;

extern unsigned int gmsgTransformFX;
extern st_4f0ef0_1 *g_616878;
extern st_4f0ef0_1 *g_61687c;
extern st_4f0ef0_1 *g_616880;
extern st_4f0ef0_1 *g_616894;
extern st_4f0ef0_1 *g_6168dc;

int TransformFX__11CBasePlayerf(st_4f0ef0_0 **a0, unsigned int a1)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(2, gmsgTransformFX, &*a0->padding_0[8], 0, v0, v1, v2);
    v3 = g_6168dc(*a0->field_208);
    g_616880(v3);
    g_616894(a1);
    return g_61687c();
}

