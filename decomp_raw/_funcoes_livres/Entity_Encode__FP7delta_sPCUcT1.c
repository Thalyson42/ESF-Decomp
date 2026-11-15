// Entity_Encode__FP7delta_sPCUcT1 @0xa2730 size=566
typedef struct st_4a2730_2 {
    char padding_0[148];
    unsigned int field_94;
} st_4a2730_2;

typedef struct st_4a2730_1 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[80];
    unsigned int field_58;
    char padding_5c[56];
    unsigned int field_94;
    char padding_98[100];
    float field_fc;
    float field_100;
} st_4a2730_1;

typedef struct st_4a2730_0 {
    unsigned int field_0;
} st_4a2730_0;

extern unsigned int entity_field_alias+32;
extern unsigned int entity_field_alias+68;
extern unsigned int entity_field_alias+104;
extern unsigned int entity_field_alias+140;
extern unsigned int entity_field_alias+176;
extern unsigned int entity_field_alias+212;
extern unsigned int initialized.1836;
extern st_4a2730_0 *g_engfuncs.pfnCanSkipPlayer;
extern st_4a2730_0 *g_engfuncs.pfnDeltaUnsetFieldByIndex;
extern st_4a2730_0 *g_engfuncs.pfnSetGroupMask;

unsigned int Entity_Encode__FP7delta_sPCUcT1(int a0, st_4a2730_2 *a1, st_4a2730_1 *a2)
{
    unsigned int v3;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    if (!initialized.1836)
    {
        Entity_FieldInit(a0);
        initialized.1836 = 1;
    }
    v3 = g_engfuncs.pfnCanSkipPlayer(v0, v1, v2);
    if (a2->field_4 - 1 == v3)
    {
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+32);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+68);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+104);
    }
    if (a2->field_fc != 0.0f && a2->field_100 != 0.0f)
    {
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+32);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+68);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+104);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+140);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+176);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+212);
    }
    if (a2->field_58 == 12 && a2->field_94)
    {
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+32);
        g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+68);
        return g_engfuncs.pfnSetGroupMask(a0, entity_field_alias+104);
    }
    if (a2->field_94 == a1->field_94)
        return a2->field_94;
    g_engfuncs.pfnDeltaUnsetFieldByIndex(a0, entity_field_alias+32);
    g_engfuncs.pfnDeltaUnsetFieldByIndex(a0, entity_field_alias+68);
    return g_engfuncs.pfnDeltaUnsetFieldByIndex(a0, entity_field_alias+104);
}

