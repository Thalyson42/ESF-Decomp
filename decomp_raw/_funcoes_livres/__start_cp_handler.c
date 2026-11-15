// __start_cp_handler @0x195690 size=37
typedef struct st_595690_0 {
    char padding_0[20];
    char field_14;
    char padding_15[7];
    unsigned int field_1c;
} st_595690_0;

st_595690_0 * __start_cp_handler(void)
{
    st_595690_0 **v2;  // eax
    st_595690_0 *v3;  // eax
    int v0;  // [bp-0x1c]

    sub_59568c(v0);
    v2 = sub_4895f0(v0);
    v3 = *v2;
    v3->field_14 = 1;
    v3->field_1c = v3->field_1c + 1;
    return v3;
}

