// Spawn__15CFuncWallToggle @0x910e0 size=64
typedef struct st_4910e0_0 {
    char padding_0[416];
    char field_1a0;
} st_4910e0_0;

st_4910e0_0 * Spawn__15CFuncWallToggle(st_4910e0_0 **a0)
{
    sub_48cfb0(a0);
    if (!(*a0->field_1a0 & 1))
        return *a0;
    return sub_48b2d0(a0);
}

