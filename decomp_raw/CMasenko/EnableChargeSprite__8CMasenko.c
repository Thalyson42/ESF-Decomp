// EnableChargeSprite__8CMasenko @0xd2930 size=44
typedef struct st_4d2930_0 {
    char padding_0[524];
    int field_20c;
} st_4d2930_0;

int EnableChargeSprite__8CMasenko(st_4d2930_0 *a0)
{
    return CSprite::TurnOn(a0->field_20c);
}

