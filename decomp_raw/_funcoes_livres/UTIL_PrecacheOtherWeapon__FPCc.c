// UTIL_PrecacheOtherWeapon__FPCc @0x1376f0 size=383
typedef struct st_5376f0_4 {
    char padding_0[124];
    struct st_5376f0_3 *field_7c;
} st_5376f0_4;

typedef struct st_5376f0_2 {
    char padding_0[12];
    struct st_5376f0_1 *field_c;
    char padding_10[228];
    struct st_5376f0_1 *field_f4;
} st_5376f0_2;

typedef struct st_5376f0_1 {
    unsigned int field_0;
} st_5376f0_1;

typedef struct st_5376f0_5 {
    char padding_0[520];
    struct st_5376f0_4 *field_208;
} st_5376f0_5;

typedef struct st_5376f0_3 {
    char padding_0[96];
    struct st_5376f0_2 *field_60;
} st_5376f0_3;

typedef struct st_5376f0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_5376f0_0;

extern st_5376f0_1 *g_engfuncs.pfnRemoveEntity;
extern st_5376f0_1 *g_engfuncs.pfnCreateNamedEntity;
extern st_5376f0_1 *g_engfuncs.pfnAlertMessage;
extern st_5376f0_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_5376f0_1 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_5376f0_0 *gpGlobals;
extern char _15CBasePlayerItem.ItemInfoArray;

int UTIL_PrecacheOtherWeapon__FPCc(unsigned int a0)
{
    unsigned int v5;  // edi
    st_5376f0_5 *v6;  // eax
    st_5376f0_4 *v7;  // eax
    st_5376f0_3 *v8;  // edi
    unsigned int *i;  // esi
    unsigned int *iter;  // edi
    unsigned int v11;  // ecx
    st_5376f0_5 *v0;  // [bp-0x48]
    char v1;  // [bp-0x44]
    char *v2;  // [bp-0x3c]
    char *v3;  // [bp-0x34]
    unsigned int v4;  // [bp-0x24]

    v0 = g_engfuncs.pfnCreateNamedEntity(a0 - gpGlobals->field_98);
    v5 = 0;
    if (!v0 || !g_engfuncs.pfnEntOffsetOfPEntity(v0))
        v5 = 1;
    if (v5)
        return g_engfuncs.pfnAlertMessage(1, "NULL Ent in UTIL_PrecacheOtherWeapon\n");
    v6 = (!v0 ? NULL : (struct st_5376f0_5 *)&v0->padding_0[128]);
    v7 = v6->field_208;
    if (v6->field_208 || (v7 = g_engfuncs.pfnPEntityOfEntOffset(0), v7))
        v8 = v7->field_7c;
    else
        v8 = NULL;
    if (!v8)
        return g_engfuncs.pfnRemoveEntity(v0);
    v8->field_60->field_c(v8);
    i = &v1;
    memset@GLIBC_2.0(&v1, 0, 44);
    if (v8->field_60->field_f4(v8, &v1))
    {
        iter = &(&_15CBasePlayerItem.ItemInfoArray)[44 * v4];
        for (v11 = 11; v11; i += 1)
        {
            v11 -= 1;
            *iter = *i;
            iter += 1;
        }
        if (v2 && *v2)
            AddAmmoNameToAmmoRegistry(v2);
        if (v3 && *v3)
            AddAmmoNameToAmmoRegistry(v3);
        memset@GLIBC_2.0(&v1, 0, 44);
    }
    return g_engfuncs.pfnRemoveEntity(v0);
}

