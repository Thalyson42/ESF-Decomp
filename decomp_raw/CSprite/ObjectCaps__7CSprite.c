// ObjectCaps__7CSprite @0xb6e40 size=31
typedef struct st_4b6e40_0 {
    char padding_0[416];
    short field_1a0;
} st_4b6e40_0;

unsigned int ObjectCaps__7CSprite(st_4b6e40_0 **a0)
{
    return (*a0->field_1a0 < 0) * 0x80000000;
}

