// Touch__16CGamePlayerEquipP11CBaseEntity @0xd0d60 size=75
typedef struct st_4d0d60_0 {
    char padding_0[416];
    char field_1a0;
} st_4d0d60_0;

st_4d0d60_0 * Touch__16CGamePlayerEquipP11CBaseEntity(st_4d0d60_0 **a0, int a1)
{
    st_4d0d60_0 *v0;  // eax

    v0 = sub_48aa30(a0, a1);
    if (!v0)
    {
        return v0;
    }
    else if (!(*a0->field_1a0 & 1))
    {
        return sub_488e20(a0, a1);
    }
    else
    {
        return *a0;
    }
}

