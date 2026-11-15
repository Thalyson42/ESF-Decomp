// SetMaxHealth__11CBasePlayeri @0xf5ef0 size=102
typedef struct st_4f5ef0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f5ef0_0;

typedef struct st_4f5ef0_1 {
    unsigned int field_0;
} st_4f5ef0_1;

extern unsigned int gmsgMaxHealth;
extern st_4f5ef0_1 *g_engfuncs.pfnMessageBegin;
extern st_4f5ef0_1 *g_engfuncs.pfnMessageEnd;
extern st_4f5ef0_1 *g_engfuncs.pfnWriteByte;

int SetMaxHealth__11CBasePlayeri(st_4f5ef0_0 **a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(1, gmsgMaxHealth, 0, *a0->field_208, v0, v1, v2);
    g_engfuncs.pfnWriteByte(a1);
    return g_engfuncs.pfnMessageEnd(a1);
}

