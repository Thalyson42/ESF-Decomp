// DisableChargeSprite__11CMouthblast @0xdb530 size=44
typedef struct st_4db530_0 {
    char padding_0[524];
    int field_20c;
} st_4db530_0;

int DisableChargeSprite__11CMouthblast(st_4db530_0 *a0)
{
    return CSprite::TurnOff(a0->field_20c);
}

