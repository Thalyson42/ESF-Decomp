// SetMaxHealth__11CBasePlayeri @0xf5ef0 size=102
typedef struct st_4f5ef0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f5ef0_0;

typedef struct st_4f5ef0_1 {
    unsigned int field_0;
} st_4f5ef0_1;

extern unsigned int gmsgMaxHealth;
extern st_4f5ef0_1 *g_616878;
extern st_4f5ef0_1 *g_61687c;
extern st_4f5ef0_1 *g_616880;

int SetMaxHealth__11CBasePlayeri(st_4f5ef0_0 **a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_616878(1, gmsgMaxHealth, 0, *a0->field_208, v0, v1, v2);
    g_616880(a1);
    return g_61687c(a1);
}

