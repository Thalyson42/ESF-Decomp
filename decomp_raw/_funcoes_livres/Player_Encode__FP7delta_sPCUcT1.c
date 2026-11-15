// Player_Encode__FP7delta_sPCUcT1 @0xa29f0 size=358
typedef struct st_4a29f0_1 {
    char padding_0[148];
    unsigned int field_94;
} st_4a29f0_1;

typedef struct st_4a29f0_0 {
    unsigned int field_0;
} st_4a29f0_0;

extern unsigned int entity_field_alias+32;
extern unsigned int entity_field_alias+68;
extern unsigned int entity_field_alias+104;
extern unsigned int initialized.1843;
extern st_4a29f0_0 *g_engfuncs.pfnCanSkipPlayer;
extern st_4a29f0_0 *g_engfuncs.pfnDeltaUnsetFieldByIndex;
extern st_4a29f0_0 *g_engfuncs.pfnSetGroupMask;

unsigned int Player_Encode__FP7delta_sPCUcT1(int a0, st_4a29f0_1 *a1, unsigned int *a2)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    if (!initialized.1843)
    {
        Player_FieldInit(a0);
        initialized.1843 = 1;
    }
    v3 = g_engfuncs.pfnCanSkipPlayer(v0, v1, v2);
    if (a2[1] - 1 == v3)
    {
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+32);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+68);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+104);
    }
    if (a2[22] == 12 && a2[37])
    {
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+32);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+68);
        return g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+104);
    }
    if (a2[37] == a1->field_94)
        return a2[37];
    g_engfuncs.pfnDeltaUnsetFieldByIndex(a0, entity_field_alias+32);
    g_engfuncs.pfnDeltaUnsetFieldByIndex(a0, entity_field_alias+68);
    return g_engfuncs.pfnDeltaUnsetFieldByIndex(a0, entity_field_alias+104);
}

