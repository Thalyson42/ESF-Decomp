// __rf__7EHANDLE @0x9ce30 size=49
typedef struct st_49ce30_0 {
    char padding_0[124];
    unsigned int field_7c;
} st_49ce30_0;

unsigned int __rf__7EHANDLE(int a0)
{
    st_49ce30_0 *v0;  // eax

    v0 = sub_4893d0(a0);
    return (!v0 ? 0 : v0->field_7c);
}

