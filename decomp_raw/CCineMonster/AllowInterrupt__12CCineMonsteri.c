// AllowInterrupt__12CCineMonsteri @0x1158a0 size=30
typedef struct st_5158a0_0 {
    char padding_0[416];
    char field_1a0;
} st_5158a0_0;

st_5158a0_0 * AllowInterrupt__12CCineMonsteri(st_5158a0_0 **a0, st_5158a0_0 *a1)
{
    st_5158a0_0 *v0;  // eax

    v0 = *a0;
    if (!(v0->field_1a0 & 32))
    {
        v0 = a1;
        a0[182] = v0;
    }
    return v0;
}

