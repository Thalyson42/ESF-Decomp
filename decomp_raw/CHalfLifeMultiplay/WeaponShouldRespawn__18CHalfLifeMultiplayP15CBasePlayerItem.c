// WeaponShouldRespawn__18CHalfLifeMultiplayP15CBasePlayerItem @0xdd7f0 size=33
typedef struct st_4dd7f0_0 {
    char padding_0[419];
    char field_1a3;
} st_4dd7f0_0;

unsigned int WeaponShouldRespawn__18CHalfLifeMultiplayP15CBasePlayerItem(unsigned int a0, st_4dd7f0_0 **a1)
{
    return (!(*a1->field_1a3 & 64) ? 1 : 2);
}

