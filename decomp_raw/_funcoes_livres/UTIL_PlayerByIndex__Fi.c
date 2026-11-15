// UTIL_PlayerByIndex__Fi @0x131de0 size=86
typedef struct st_531de0_0 {
    char padding_0[144];
    int field_90;
} st_531de0_0;

typedef struct st_531de0_1 {
    unsigned int field_0;
} st_531de0_1;

extern st_531de0_1 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_531de0_0 *gpGlobals;

unsigned int UTIL_PlayerByIndex__Fi(int a0)
{
    unsigned int *v0;  // eax

    if (a0 <= 0)
    {
        return 0;
    }
    else if (a0 <= gpGlobals->field_90)
    {
        v0 = g_engfuncs.pfnPEntityOfEntIndex(a0);
        if (!v0)
        {
            return 0;
        }
        else if (!*v0)
        {
            return v0[31];
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

