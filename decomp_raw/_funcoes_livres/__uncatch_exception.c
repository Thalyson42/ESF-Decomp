// __uncatch_exception @0x1958b0 size=43
typedef struct st_5958b0_0 {
    char padding_0[20];
    char field_14;
} st_5958b0_0;

st_5958b0_0 * __uncatch_exception(void)
{
    st_5958b0_0 **v2;  // eax
    st_5958b0_0 *v3;  // eax
    int v0;  // [bp-0x1c]

    sub_5958ac(v0);
    v2 = __get_eh_info(v0);
    v3 = *v2;
    if (!*v2)
        v3 = terminate();
    v3->field_14 = 0;
    return v3;
}

