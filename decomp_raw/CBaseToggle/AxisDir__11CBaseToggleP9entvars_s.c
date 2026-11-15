// AxisDir__11CBaseToggleP9entvars_s @0x1233f0 size=123
typedef struct st_5233f0_0 {
    char padding_0[68];
    unsigned int field_44;
    unsigned int field_48;
    unsigned int field_4c;
    char padding_50[336];
    char field_1a0;
} st_5233f0_0;

unsigned int AxisDir__11CBaseToggleP9entvars_s(st_5233f0_0 *a0)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (a0->field_1a0 & 64)
    {
        v0 = 0;
        v1 = 0;
        v2 = 0x3f800000;
    }
    else
    {
        if (a0->field_1a0 < 0)
        {
            v0 = 0x3f800000;
            v1 = 0;
        }
        else
        {
            v0 = 0;
            v1 = 0x3f800000;
        }
        v2 = 0;
    }
    a0->field_44 = v0;
    a0->field_48 = v1;
    a0->field_4c = v2;
    return v2;
}

