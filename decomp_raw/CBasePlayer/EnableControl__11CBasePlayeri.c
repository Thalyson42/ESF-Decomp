// EnableControl__11CBasePlayeri @0xfdce0 size=36
typedef struct st_4fdce0_0 {
    char padding_0[421];
    char field_1a5;
} st_4fdce0_0;

st_4fdce0_0 * EnableControl__11CBasePlayeri(st_4fdce0_0 **a0, unsigned int a1)
{
    st_4fdce0_0 *v0;  // eax
    st_4fdce0_0 *v1;  // eax

    if (a1)
    {
        v1 = *a0;
        v1->field_1a5 = v1->field_1a5 & 239;
        return v1;
    }
    v0 = *a0;
    v0->field_1a5 = v0->field_1a5 | 16;
    return v0;
}

