// CreateExplosion__7CShield @0x118f20 size=222
typedef struct st_518f20_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_518f20_0;

typedef struct st_518f20_1 {
    struct st_518f20_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_518f20_1;

typedef struct st_518f20_2 {
    unsigned int field_0;
} st_518f20_2;

extern unsigned int gmsgBlobStart;
extern st_518f20_2 *g_616878;
extern st_518f20_2 *g_61687c;
extern st_518f20_2 *g_616880;
extern st_518f20_2 *g_616888;
extern st_518f20_2 *g_616894;
extern st_518f20_2 *g_6168dc;

int CreateExplosion__7CShield(st_518f20_1 *a0)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(2, gmsgBlobStart, &a0->field_0->field_8, 0, v0, v1, v2);
    g_616880(0);
    g_616894(a0->field_0->field_8);
    g_616894(a0->field_0->field_c);
    g_616894(a0->field_0->field_10);
    v3 = g_6168dc(a0->field_0->field_208);
    g_616888(v3);
    g_616888(a0->field_64);
    return g_61687c();
}

