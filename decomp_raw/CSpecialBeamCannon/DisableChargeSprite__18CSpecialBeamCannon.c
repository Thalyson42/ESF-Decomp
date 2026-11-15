// DisableChargeSprite__18CSpecialBeamCannon @0x11fd80 size=44
typedef struct st_51fd80_0 {
    char padding_0[468];
    int field_1d4;
} st_51fd80_0;

int DisableChargeSprite__18CSpecialBeamCannon(st_51fd80_0 *a0)
{
    return CSprite::TurnOff(a0->field_1d4);
}

