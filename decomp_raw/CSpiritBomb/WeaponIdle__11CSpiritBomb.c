// WeaponIdle__11CSpiritBomb @0x121660 size=89
typedef struct st_521660_1 {
    char padding_0[128];
    struct st_521660_0 *field_80;
    char padding_84[72];
    unsigned int field_cc;
    unsigned int field_d0;
} st_521660_1;

typedef struct st_521660_0 {
    char padding_0[820];
    unsigned int field_334;
} st_521660_0;

st_521660_0 * WeaponIdle__11CSpiritBomb(st_521660_1 *a0)
{
    st_521660_0 *v0;  // eax

    v0 = a0->field_80;
    if (!v0->field_334)
    {
        return v0;
    }
    else if (a0->field_cc)
    {
        return CSpiritBomb::Shoot1(a0);
    }
    else
    {
        if (!a0->field_d0)
            return v0;
        CSpiritBomb::Shoot2(a0);
        return v0;
    }
}

