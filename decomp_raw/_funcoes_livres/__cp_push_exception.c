// __cp_push_exception @0x19578c size=111
typedef struct st_59578c_0 {
    unsigned int field_0;
    unsigned short field_4;
    unsigned short field_6;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char field_14;
    char padding_15[3];
    struct st_59578c_0 *field_18;
    unsigned int field_1c;
    unsigned int field_20;
} st_59578c_0;

typedef struct st_59578c_1 {
    char padding_0[526322];
    unsigned int field_807f2;
} st_59578c_1;

st_59578c_0 * __cp_push_exception(unsigned int a0, unsigned int a1, unsigned int a2)
{
    st_59578c_0 *v4;  // edi
    st_59578c_1 *v5;  // ebx
    unsigned int v6;  // eax
    st_59578c_0 **v7;  // edx
    st_59578c_0 *v8;  // eax
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x1c]
    int v2;  // [bp-0x18]
    int v3;  // [bp-0x14]

    sub_595788(v1, v2, v3);
    v0 = 36;
    v4 = __eh_alloc(v0);
    v4->field_8 = a0;
    v4->field_10 = a2;
    v4->field_14 = 0;
    v4->field_20 = a0;
    v6 = *(int *)&(v5->padding_0)[1];
    v4->field_c = a1;
    v4->field_1c = 0;
    v4->field_0 = v6;
    v4->field_4 = 4;
    v4->field_6 = 1;
    v7 = __get_eh_info(v0);
    v8 = *v7;
    v4->field_18 = v8;
    *v7 = v4;
    return v8;
}

