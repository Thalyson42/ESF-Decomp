// FlWeaponRespawnTime__18CHalfLifeMultiplayP15CBasePlayerItem @0xdd6c0 size=102
typedef struct st_4dd6c0_0 {
    char padding_0[136];
    unsigned int field_88;
} st_4dd6c0_0;

typedef struct st_4dd6c0_1 {
    float field_0;
} st_4dd6c0_1;

extern float g_5bd0cc;
extern st_4dd6c0_1 *gpGlobals;
extern char g_62f744[4];

double FlWeaponRespawnTime__18CHalfLifeMultiplayP15CBasePlayerItem(void)
{
    st_4dd6c0_0 *v1;  // [bp+0x8]

    if (0.0 < g_5bd0cc && !(g_62f744[44 * v1->field_88] & 8))
        return 0.0 + *(float *)gpGlobals;
    return *(float *)gpGlobals + 20.0;
}

