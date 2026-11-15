// Player_FieldInit__FP7delta_s @0xa2970 size=115
typedef struct st_4a2970_0 {
    unsigned int field_0;
} st_4a2970_0;

extern unsigned int player_field_alias+32;
extern char player_field_alias+36;
extern unsigned int player_field_alias+68;
extern char player_field_alias+72;
extern unsigned int player_field_alias+104;
extern st_4a2970_0 *g_engfuncs.pfnDeltaSetFieldByIndex;

int Player_FieldInit__FP7delta_s(unsigned int a0)
{
    player_field_alias+32 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, "origin[0]");
    player_field_alias+68 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &player_field_alias+36);
    player_field_alias+104 = g_engfuncs.pfnDeltaSetFieldByIndex(a0, &player_field_alias+72);
    return player_field_alias+104;
}

