// Custom_Entity_FieldInit__FP7delta_s @0xa2b60 size=283
typedef struct st_4a2b60_0 {
    unsigned int field_0;
} st_4a2b60_0;

extern unsigned int custom_entity_field_alias+32;
extern char custom_entity_field_alias+36;
extern unsigned int custom_entity_field_alias+68;
extern char custom_entity_field_alias+72;
extern unsigned int custom_entity_field_alias+104;
extern char custom_entity_field_alias+108;
extern unsigned int custom_entity_field_alias+140;
extern char custom_entity_field_alias+144;
extern unsigned int custom_entity_field_alias+176;
extern char custom_entity_field_alias+180;
extern unsigned int custom_entity_field_alias+212;
extern char custom_entity_field_alias+216;
extern unsigned int custom_entity_field_alias+248;
extern char custom_entity_field_alias+252;
extern unsigned int custom_entity_field_alias+284;
extern char custom_entity_field_alias+288;
extern unsigned int custom_entity_field_alias+320;
extern st_4a2b60_0 *g_engfuncs.pfnDeltaSetFieldByIndex;

int Custom_Entity_FieldInit__FP7delta_s(unsigned int a0)
{
    custom_entity_field_alias+32 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, "origin[0]");
    custom_entity_field_alias+68 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &custom_entity_field_alias+36);
    custom_entity_field_alias+104 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &custom_entity_field_alias+72);
    custom_entity_field_alias+140 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &custom_entity_field_alias+108);
    custom_entity_field_alias+176 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &custom_entity_field_alias+144);
    custom_entity_field_alias+212 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &custom_entity_field_alias+180);
    custom_entity_field_alias+248 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &custom_entity_field_alias+216);
    custom_entity_field_alias+284 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &custom_entity_field_alias+252);
    custom_entity_field_alias+320 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &custom_entity_field_alias+288);
    return custom_entity_field_alias+320;
}

