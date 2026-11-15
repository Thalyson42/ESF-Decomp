// __static_initialization_and_destruction_0 @0x8ffe0 size=128
extern unsigned int g_vecAuraColor;
extern unsigned int g_vecAuraColor+4;
extern unsigned int g_vecAuraColor+8;
extern unsigned int g_vecAuraColor+12;
extern unsigned int g_vecAuraColor+16;
extern unsigned int g_vecAuraColor+20;
extern unsigned int g_vecAuraColor+24;
extern unsigned int g_vecAuraColor+28;
extern unsigned int g_vecAuraColor+32;
extern unsigned int g_vecAuraColor+36;
extern unsigned int g_vecAuraColor+40;
extern unsigned int g_vecAuraColor+44;
extern unsigned int g_vecAuraColor+48;
extern unsigned int g_vecAuraColor+52;
extern unsigned int g_vecAuraColor+56;

unsigned int * __static_initialization_and_destruction_0(unsigned int a0, unsigned int a1)
{
    unsigned int *v0;  // eax

    if (a1 == 0xffff && a0)
    {
        v0 = &g_vecAuraColor;
        g_vecAuraColor = 0x43480000;
        g_vecAuraColor+4 = 0x43480000;
        g_vecAuraColor+8 = 0x43480000;
        g_vecAuraColor+12 = 0;
        g_vecAuraColor+16 = 0x43480000;
        g_vecAuraColor+20 = 0;
        g_vecAuraColor+24 = 0x43480000;
        g_vecAuraColor+28 = 0;
        g_vecAuraColor+32 = 0x43480000;
        g_vecAuraColor+36 = 0x43480000;
        g_vecAuraColor+40 = 0;
        g_vecAuraColor+44 = 0;
        g_vecAuraColor+48 = 0x43480000;
        g_vecAuraColor+52 = 0x43480000;
        g_vecAuraColor+56 = 0;
    }
    return v0;
}

