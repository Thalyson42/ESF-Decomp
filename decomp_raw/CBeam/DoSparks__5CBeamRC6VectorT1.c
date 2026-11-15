// DoSparks__5CBeamRC6VectorT1 @0xb0220 size=90
typedef struct st_4b0220_0 {
    char padding_0[416];
    char field_1a0;
} st_4b0220_0;

st_4b0220_0 * DoSparks__5CBeamRC6VectorT1(st_4b0220_0 **a0, int a1, int a2)
{
    st_4b0220_0 *v0;  // eax

    v0 = *a0;
    if (v0->field_1a0 & 48)
    {
        if (v0->field_1a0 & 16)
            UTIL_Sparks(a1);
        v0 = *a0;
        if (*a0->field_1a0 & 32)
            v0 = UTIL_Sparks(a2);
    }
    return v0;
}

