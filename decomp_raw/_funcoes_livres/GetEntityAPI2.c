// GetEntityAPI2 @0x9c050 size=76
extern unsigned int gFunctionTable;

unsigned int GetEntityAPI2(unsigned int *iter, unsigned int *a1)
{
    unsigned int *i;  // esi
    unsigned int v1;  // ecx

    if (iter && *a1 == 140)
    {
        i = &gFunctionTable;
        for (v1 = 50; v1; i += 1)
        {
            v1 -= 1;
            *iter = *i;
            iter += 1;
        }
        return 1;
    }
    *a1 = 140;
    return 0;
}

