// ObjectCaps__5CBeam @0xb7050 size=31
typedef struct st_4b7050_0 {
    char padding_0[416];
    short field_1a0;
} st_4b7050_0;

unsigned int ObjectCaps__5CBeam(st_4b7050_0 **a0)
{
    return (*a0->field_1a0 < 0) * 0x80000000;
}

