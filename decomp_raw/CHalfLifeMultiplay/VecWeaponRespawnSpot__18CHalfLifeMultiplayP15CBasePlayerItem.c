// VecWeaponRespawnSpot__18CHalfLifeMultiplayP15CBasePlayerItem @0xdd7c0 size=39
typedef struct st_4dd7c0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4dd7c0_0;

unsigned int * VecWeaponRespawnSpot__18CHalfLifeMultiplayP15CBasePlayerItem(void)
{
    unsigned int *v2;  // edx
    unsigned int *idx;  // [bp+0x4]
    st_4dd7c0_0 **v1;  // [bp+0xc]

    v2 = &*v1->field_8;
    *(float *)idx = *v1->field_8;
    *(float *)&idx[1] = *(float *)&v2[1];
    *(float *)&idx[2] = *(float *)&v2[2];
    return idx;
}

