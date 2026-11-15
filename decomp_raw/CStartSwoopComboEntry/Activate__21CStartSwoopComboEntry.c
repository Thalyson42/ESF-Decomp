// Activate__21CStartSwoopComboEntry @0x15c360 size=78
typedef struct st_55c360_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[8];
    char field_14;
    char padding_15[3];
    float field_18;
} st_55c360_1;

typedef struct st_55c360_0 {
    float field_0;
} st_55c360_0;

extern st_55c360_0 *gpGlobals;

unsigned int * Activate__21CStartSwoopComboEntry(st_55c360_1 *a0)
{
    float *v0;  // eax
    double v1;  // mm7

    v0 = gpGlobals;
    *(float *)&a0->field_8 = *(float *)gpGlobals;
    a0->field_0 = 1;
    if (a0->field_14)
    {
        v1 = *(float *)gpGlobals + 0.6000000238418579;
    }
    else
    {
        v0 = gpGlobals;
        v1 = *(float *)gpGlobals + 0.07000000029802322;
    }
    a0->field_18 = (float)v1;
    return v0;
}

