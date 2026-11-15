// SetActiveStunTime__12CPlayerMeleef @0x108420 size=127
typedef struct st_508420_1 {
    char padding_0[136];
    unsigned int field_88;
    float field_8c;
    char padding_90[76];
    unsigned int field_dc;
    unsigned int field_e0;
} st_508420_1;

typedef struct st_508420_0 {
    float field_0;
} st_508420_0;

extern st_508420_0 *gpGlobals;

unsigned int * SetActiveStunTime__12CPlayerMeleef(st_508420_1 *a0, float a1)
{
    if (a1 != 0.0f)
    {
        a0->field_8c = a1;
        *(float *)&a0->field_88 = a1 + *(float *)gpGlobals;
        a0->field_dc = 1;
        a0->field_e0 = 1;
    }
    else
    {
        a0->field_8c = 0;
        a0->field_88 = 0;
        a0->field_dc = 0;
        a0->field_e0 = 0;
    }
    return gpGlobals;
}

