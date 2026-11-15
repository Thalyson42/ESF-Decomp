// DrawChargeBar__11CBasePlayeri @0xf7790 size=108
typedef struct st_4f7790_1 {
    struct st_4f7790_0 *field_0;
    char padding_4[1740];
    unsigned int field_6d0;
} st_4f7790_1;

typedef struct st_4f7790_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f7790_0;

typedef struct st_4f7790_2 {
    unsigned int field_0;
} st_4f7790_2;

extern unsigned int gmsgCharge;
extern st_4f7790_2 *g_616878;
extern st_4f7790_2 *g_61687c;
extern st_4f7790_2 *g_616880;

int DrawChargeBar__11CBasePlayeri(st_4f7790_1 *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    a0->field_6d0 = a1;
    g_616878(1, gmsgCharge, 0, a0->field_0->field_208, v0, v1, v2);
    g_616880(a1);
    return g_61687c(a1);
}

