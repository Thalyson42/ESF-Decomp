// ClearMultiDamage__Fv @0x137300 size=47
extern unsigned int gMultiDamage;
extern unsigned int gMultiDamage+4;
extern unsigned int gMultiDamage+8;

unsigned int * ClearMultiDamage__Fv(void)
{
    gMultiDamage = 0;
    gMultiDamage+4 = 0;
    gMultiDamage+8 = 0;
    return &gMultiDamage;
}

