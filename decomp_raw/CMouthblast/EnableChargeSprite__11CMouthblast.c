// EnableChargeSprite__11CMouthblast @0xdb500 size=44
typedef struct st_4db500_0 {
    char padding_0[524];
    int field_20c;
} st_4db500_0;

int EnableChargeSprite__11CMouthblast(st_4db500_0 *a0)
{
    return CSprite::TurnOn(a0->field_20c);
}

