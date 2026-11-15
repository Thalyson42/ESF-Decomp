// Entity_FieldInit__FP7delta_s @0xa2660 size=202
typedef struct st_4a2660_0 {
    unsigned int field_0;
} st_4a2660_0;

extern unsigned int entity_field_alias+32;
extern char entity_field_alias+36;
extern unsigned int entity_field_alias+68;
extern char entity_field_alias+72;
extern unsigned int entity_field_alias+104;
extern char entity_field_alias+108;
extern unsigned int entity_field_alias+140;
extern char entity_field_alias+144;
extern unsigned int entity_field_alias+176;
extern char entity_field_alias+180;
extern unsigned int entity_field_alias+212;
extern st_4a2660_0 *g_engfuncs.pfnDeltaSetFieldByIndex;

int Entity_FieldInit__FP7delta_s(unsigned int a0)
{
    entity_field_alias+32 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, "origin[0]");
    entity_field_alias+68 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &entity_field_alias+36);
    entity_field_alias+104 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &entity_field_alias+72);
    entity_field_alias+140 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &entity_field_alias+108);
    entity_field_alias+176 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &entity_field_alias+144);
    entity_field_alias+212 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &entity_field_alias+180);
    return entity_field_alias+212;
}

