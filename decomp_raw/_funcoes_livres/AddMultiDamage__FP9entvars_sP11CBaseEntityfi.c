// AddMultiDamage__FP9entvars_sP11CBaseEntityfi @0x137380 size=91
extern unsigned int gMultiDamage;
extern float gMultiDamage+4;
extern unsigned int gMultiDamage+8;

unsigned int * AddMultiDamage__FP9entvars_sP11CBaseEntityfi(unsigned int *a0, unsigned int a1, float a2, unsigned int a3)
{
    if (!a1)
        return a0;
    gMultiDamage+8 = gMultiDamage+8 | a3;
    if (a1 != gMultiDamage)
    {
        ApplyMultiDamage(a0, a0);
        gMultiDamage = a1;
        *(unsigned int *)&gMultiDamage+4 = 0;
    }
    gMultiDamage+4 = a2 + gMultiDamage+4;
    return &gMultiDamage;
}

