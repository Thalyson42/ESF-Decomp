// DisableChargeSprite__10CPowerBeam @0x10d1b0 size=44
typedef struct st_50d1b0_0 {
    char padding_0[524];
    int field_20c;
} st_50d1b0_0;

int DisableChargeSprite__10CPowerBeam(st_50d1b0_0 *a0)
{
    return CSprite::TurnOff(a0->field_20c);
}

