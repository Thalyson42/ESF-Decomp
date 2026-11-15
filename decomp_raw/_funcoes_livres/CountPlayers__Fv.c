// CountPlayers__Fv @0xde490 size=78
typedef struct st_4de490_0 {
    char padding_0[144];
    int field_90;
} st_4de490_0;

extern st_4de490_0 *gpGlobals;

unsigned int CountPlayers__Fv(void)
{
    unsigned int v1;  // edi
    int iter;  // esi

    v1 = 0;
    iter = 1;
    while (iter <= gpGlobals->field_90)
    {
        if (UTIL_PlayerByIndex(iter))
        {
            v1 += 1;
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return v1;
}

