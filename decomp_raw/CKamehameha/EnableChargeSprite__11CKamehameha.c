// EnableChargeSprite__11CKamehameha @0xc9930 size=44
typedef struct st_4c9930_0 {
    char padding_0[524];
    int field_20c;
} st_4c9930_0;

int EnableChargeSprite__11CKamehameha(st_4c9930_0 *a0)
{
    return CSprite::TurnOn(a0->field_20c);
}

