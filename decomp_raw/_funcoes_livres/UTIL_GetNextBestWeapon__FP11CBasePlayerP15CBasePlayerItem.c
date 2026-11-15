// UTIL_GetNextBestWeapon__FP11CBasePlayerP15CBasePlayerItem @0x131680 size=61
typedef struct st_531680_1 {
    unsigned int field_0;
} st_531680_1;

typedef struct st_531680_0 {
    char padding_0[20];
    struct st_531680_1 *field_14;
} st_531680_0;

typedef struct st_531680_2 {
    char padding_0[68];
    struct st_531680_0 *field_44;
} st_531680_2;

extern st_531680_2 *g_pGameRules;

int UTIL_GetNextBestWeapon__FP11CBasePlayerP15CBasePlayerItem(unsigned int a0, unsigned int a1)
{
    return g_pGameRules->field_44->field_14(g_pGameRules, a0, a1);
}

