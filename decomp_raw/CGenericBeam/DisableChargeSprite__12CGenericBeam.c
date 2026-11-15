// DisableChargeSprite__12CGenericBeam @0xc6110 size=44
typedef struct st_4c6110_0 {
    char padding_0[524];
    int field_20c;
} st_4c6110_0;

int DisableChargeSprite__12CGenericBeam(st_4c6110_0 *a0)
{
    return CSprite::TurnOff(a0->field_20c);
}

