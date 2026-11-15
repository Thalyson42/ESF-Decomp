// UpdateShieldClient__7CShield @0x119000 size=137
typedef struct st_519000_0 {
    char padding_0[520];
    unsigned int field_208;
} st_519000_0;

typedef struct st_519000_1 {
    struct st_519000_0 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_519000_1;

typedef struct st_519000_2 {
    unsigned int field_0;
} st_519000_2;

extern unsigned int gmsgBlobUpdate;
extern st_519000_2 *g_engfuncs.pfnMessageBegin;
extern st_519000_2 *g_engfuncs.pfnMessageEnd;
extern st_519000_2 *g_engfuncs.pfnWriteShort;
extern st_519000_2 *g_engfuncs.pfnIndexOfEdict;

int UpdateShieldClient__7CShield(st_519000_1 *a0)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]

    g_engfuncs.pfnMessageBegin(2, gmsgBlobUpdate, &a0->field_0->padding_0[8], 0, v1, v2, v3);
    g_engfuncs.pfnWriteShort(a0->field_64);
    v0 = g_engfuncs.pfnIndexOfEdict(a0->field_0->field_208);
    g_engfuncs.pfnWriteShort(v0);
    return g_engfuncs.pfnMessageEnd(v0);
}

