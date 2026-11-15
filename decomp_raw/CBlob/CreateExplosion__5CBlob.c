// CreateExplosion__5CBlob @0xcb0a0 size=218
typedef struct st_4cb0a0_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_4cb0a0_1;

typedef struct st_4cb0a0_2 {
    struct st_4cb0a0_1 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_4cb0a0_2;

typedef struct st_4cb0a0_0 {
    unsigned int field_0;
} st_4cb0a0_0;

extern unsigned int gmsgBlobStart;
extern st_4cb0a0_0 *g_616878;
extern st_4cb0a0_0 *g_61687c;
extern st_4cb0a0_0 *g_616880;
extern st_4cb0a0_0 *g_616888;
extern st_4cb0a0_0 *g_616894;
extern st_4cb0a0_0 *g_6168dc;

int CreateExplosion__5CBlob(st_4cb0a0_2 *a0)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(2, gmsgBlobStart, 0, 0, v0, v1, v2);
    g_616880(1);
    g_616894(a0->field_0->field_8);
    g_616894(a0->field_0->field_c);
    g_616894(a0->field_0->field_10);
    v3 = g_6168dc(a0->field_0->field_208);
    g_616888(v3);
    g_616888(a0->field_64);
    return g_61687c();
}

