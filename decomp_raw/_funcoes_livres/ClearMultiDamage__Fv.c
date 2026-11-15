// ClearMultiDamage__Fv @0x137300 size=47
extern unsigned int gMultiDamage;
extern unsigned int g_624374;
extern unsigned int g_624378;

unsigned int * ClearMultiDamage__Fv(void)
{
    gMultiDamage = 0;
    g_624374 = 0;
    g_624378 = 0;
    return &gMultiDamage;
}

