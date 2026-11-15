// EnableChargeSprite__12CGenericBeam @0xc60e0 size=44
typedef struct st_4c60e0_0 {
    char padding_0[524];
    int field_20c;
} st_4c60e0_0;

int EnableChargeSprite__12CGenericBeam(st_4c60e0_0 *a0)
{
    return CSprite::TurnOn(a0->field_20c);
}

