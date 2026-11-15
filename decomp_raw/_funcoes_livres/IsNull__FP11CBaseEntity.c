// IsNull__FP11CBaseEntity @0x179b40 size=70
typedef struct st_579b40_0 {
    char padding_0[520];
    int field_208;
} st_579b40_0;

char IsNull__FP11CBaseEntity(st_579b40_0 **a0)
{
    char v0;  // [bp-0x5]

    v0 = 0;
    if (a0 && *a0 && !(char)sub_48b960(*a0->field_208))
        return v0;
    v0 = 1;
    return v0;
}

