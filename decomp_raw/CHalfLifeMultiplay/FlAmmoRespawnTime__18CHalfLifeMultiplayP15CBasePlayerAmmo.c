// FlAmmoRespawnTime__18CHalfLifeMultiplayP15CBasePlayerAmmo @0xdd9c0 size=37
typedef struct st_4dd9c0_0 {
    float field_0;
} st_4dd9c0_0;

extern st_4dd9c0_0 *gpGlobals;

double FlAmmoRespawnTime__18CHalfLifeMultiplayP15CBasePlayerAmmo(void)
{
    return *(float *)gpGlobals + 20.0;
}

