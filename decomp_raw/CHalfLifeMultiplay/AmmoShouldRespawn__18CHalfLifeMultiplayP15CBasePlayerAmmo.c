// AmmoShouldRespawn__18CHalfLifeMultiplayP15CBasePlayerAmmo @0xdd990 size=33
typedef struct st_4dd990_0 {
    char padding_0[419];
    char field_1a3;
} st_4dd990_0;

unsigned int AmmoShouldRespawn__18CHalfLifeMultiplayP15CBasePlayerAmmo(unsigned int a0, st_4dd990_0 **a1)
{
    return (!(*a1->field_1a3 & 64) ? 3 : 4);
}

