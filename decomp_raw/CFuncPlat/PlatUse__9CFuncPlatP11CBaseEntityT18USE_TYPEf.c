// PlatUse__9CFuncPlatP11CBaseEntityT18USE_TYPEf @0xe9040 size=191
typedef struct st_4e9040_2 {
    char padding_0[28];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[60];
    struct st_4e9040_0 *field_60;
    char padding_64[28];
    unsigned int field_80;
} st_4e9040_2;

typedef struct st_4e9040_0 {
    char padding_0[236];
    struct st_4e9040_1 *field_ec;
    struct st_4e9040_1 *field_f0;
    struct st_4e9040_1 *field_f4;
} st_4e9040_0;

typedef struct st_4e9040_1 {
    unsigned int field_0;
} st_4e9040_1;

unsigned int PlatUse__9CFuncPlatP11CBaseEntityT18USE_TYPEf(st_4e9040_2 *a0, unsigned int a1, unsigned int a2, int a3)
{
    unsigned int v0;  // eax

    if (!a0->field_60->field_ec(a0))
    {
        a0->field_1c = 0;
        a0->field_20 = 0;
        return a0->field_60->field_f4(a0);
    }
    v0 = CBaseEntity::ShouldToggle(a0, a3, a0->field_80 == 1);
    if (!v0)
    {
        return v0;
    }
    else if (!a0->field_80)
    {
        return a0->field_60->field_f4(a0);
    }
    else if (a0->field_80 == 1)
    {
        return a0->field_60->field_f0(a0);
    }
    else
    {
        return v0;
    }
}

