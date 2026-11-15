// GiveFnptrsToDll @0xc8830 size=53
extern unsigned int g_engfuncs;
extern unsigned int gpGlobals;

unsigned int * GiveFnptrsToDll(unsigned int *i, unsigned int a1)
{
    unsigned int *iter;  // edi
    unsigned int v1;  // ecx

    iter = &g_engfuncs;
    for (v1 = 144; v1; i += 1)
    {
        v1 -= 1;
        *iter = *i;
        iter += 1;
    }
    gpGlobals = a1;
    return &gpGlobals;
}

