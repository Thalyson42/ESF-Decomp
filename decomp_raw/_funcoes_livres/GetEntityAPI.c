// GetEntityAPI @0x9c000 size=66
extern unsigned int gFunctionTable;

unsigned int GetEntityAPI(unsigned int *iter, unsigned int a1)
{
    unsigned int *i;  // esi
    unsigned int v1;  // ecx

    if (iter && a1 == 140)
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
    return 0;
}

