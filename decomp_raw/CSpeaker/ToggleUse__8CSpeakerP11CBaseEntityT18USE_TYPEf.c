// ToggleUse__8CSpeakerP11CBaseEntityT18USE_TYPEf @0x11e860 size=129
typedef struct st_51e860_0 {
    unsigned int field_0;
    char padding_4[256];
    float field_104;
} st_51e860_0;

typedef struct st_51e860_1 {
    float field_0;
    char padding_4[256];
    unsigned int field_104;
} st_51e860_1;

extern st_51e860_1 *gpGlobals;

unsigned int * ToggleUse__8CSpeakerP11CBaseEntityT18USE_TYPEf(st_51e860_0 **a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int *v0;  // eax
    st_51e860_0 *v1;  // eax

    v0 = 0.0 < *a0->field_104;
    if (a3 != 3)
    {
        if (v0)
        {
            if (a3 == 1)
                return v0;
        }
        else
        {
            if (!a3)
                return v0;
        }
    }
    if (a3 != 1 && (!a3 || v0))
    {
        v1 = *a0;
        v1->field_104 = 0;
        return v1;
    }
    *a0->field_104 = (float)(0.1 + gpGlobals->field_0);
    return gpGlobals;
}

