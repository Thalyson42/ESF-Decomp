// UpdateExplosion__5CBlob @0xcb180 size=133
typedef struct st_4cb180_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4cb180_1;

typedef struct st_4cb180_2 {
    struct st_4cb180_1 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_4cb180_2;

typedef struct st_4cb180_0 {
    unsigned int field_0;
} st_4cb180_0;

extern unsigned int gmsgBlobUpdate;
extern st_4cb180_0 *g_616878;
extern st_4cb180_0 *g_61687c;
extern st_4cb180_0 *g_616888;
extern st_4cb180_0 *g_6168dc;

int UpdateExplosion__5CBlob(st_4cb180_2 *a0)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]

    g_616878(2, gmsgBlobUpdate, 0, 0, v1, v2, v3);
    g_616888(a0->field_64);
    v0 = g_6168dc(a0->field_0->field_208);
    g_616888(v0);
    return g_61687c(v0);
}

