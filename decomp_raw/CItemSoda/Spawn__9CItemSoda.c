// Spawn__9CItemSoda @0xb6bc0 size=206
typedef struct st_4b6bc0_0 {
    float field_0;
} st_4b6bc0_0;

typedef struct st_4b6bc0_1 {
    unsigned int field_0;
} st_4b6bc0_1;

extern char CanThink__9CItemSoda;
extern st_4b6bc0_1 *g_engfuncs.pfnSetModel;
extern st_4b6bc0_0 *gpGlobals;

short Spawn__9CItemSoda(float idx)
{
    unsigned int v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(int *)idx + 268) = 0;
    *(unsigned int *)(*(int *)idx + 264) = 6;
    g_engfuncs.pfnSetModel(*(int *)(*(int *)idx + 520), "models/can.mdl");
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(UTIL_SetSize(*(int *)idx, &v0, &v3), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &CanThink__9CItemSoda;
    *(float *)(*(int *)idx + 260) = (float)(0.5 + *(float *)gpGlobals);
    return (unsigned short)gpGlobals;
}

