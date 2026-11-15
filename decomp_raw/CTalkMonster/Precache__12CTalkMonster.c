// Precache__12CTalkMonster @0x1275e0 size=94
typedef struct st_5275e0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_5275e0_0;

extern st_5275e0_0 *gpGlobals;

unsigned int Precache__12CTalkMonster(unsigned int *a0)
{
    unsigned int v0;  // eax

    if (a0[192])
    {
        v0 = a0[192] + gpGlobals->field_98;
        a0[177] = v0;
    }
    if (a0[193])
    {
        v0 = a0[193] + gpGlobals->field_98;
        a0[178] = v0;
    }
    return v0;
}

