// AddMultiDamage__FP9entvars_sP11CBaseEntityfi @0x137380 size=91
extern unsigned int gMultiDamage;
extern float g_624374;
extern unsigned int g_624378;

unsigned int * AddMultiDamage__FP9entvars_sP11CBaseEntityfi(unsigned int *a0, unsigned int a1, float a2, unsigned int a3)
{
    if (!a1)
        return a0;
    g_624378 = g_624378 | a3;
    if (a1 != gMultiDamage)
    {
        sub_48d630(a0, a0);
        gMultiDamage = a1;
        *(unsigned int *)&g_624374 = 0;
    }
    g_624374 = a2 + g_624374;
    return &gMultiDamage;
}

