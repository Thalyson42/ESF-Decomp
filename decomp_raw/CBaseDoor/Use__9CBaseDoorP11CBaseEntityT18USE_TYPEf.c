// Use__9CBaseDoorP11CBaseEntityT18USE_TYPEf @0xac3d0 size=92
typedef struct st_4ac3d0_1 {
    struct st_4ac3d0_0 *field_0;
    char padding_4[124];
    unsigned int field_80;
} st_4ac3d0_1;

typedef struct st_4ac3d0_0 {
    char padding_0[416];
    char field_1a0;
} st_4ac3d0_0;

st_4ac3d0_0 * Use__9CBaseDoorP11CBaseEntityT18USE_TYPEf(st_4ac3d0_1 *a0, int a1)
{
    st_4ac3d0_0 *v0;  // eax

    sub_48d960(&a0[1].padding_4[76], a1);
    if (a0->field_80 != 1)
    {
        v0 = a0->field_0;
        if (!(v0->field_1a0 & 32))
        {
            return v0;
        }
        else if (a0->field_80)
        {
            return v0;
        }
    }
    return sub_48a240(a0);
}

