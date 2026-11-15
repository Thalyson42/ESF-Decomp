// uncaught_exception__Fv @0x195bf8 size=45
typedef struct st_595bf8_0 {
    char padding_0[20];
    char field_14;
} st_595bf8_0;

char uncaught_exception__Fv(void)
{
    st_595bf8_0 **v2;  // eax
    int v0;  // [bp-0x1c]

    sub_595bf4(v0);
    v2 = sub_4895f0(v0);
    if (!*v2)
        return 0;
    return !*v2->field_14;
}

