// __tfUc @0x197b40 size=67
typedef struct st_597b40_0 {
    char padding_0[399369];
    unsigned int field_61809;
} st_597b40_0;

typedef struct st_597b40_2 {
    char padding_0[115894];
    char field_1c4b6;
    char padding_1c4b7[391900];
    char field_7bf93;
    char padding_7bf94[7467];
    unsigned int field_7dcbf;
    char padding_7dcc3[424];
    unsigned int field_7de6b;
    char padding_7de6f[2252];
    struct st_597b40_1 *field_7e73b;
} st_597b40_2;

typedef struct st_597b40_1 {
    struct st_597b40_0 *field_0;
    unsigned int field_4;
} st_597b40_1;

typedef struct st_597b40_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[2252];
    struct st_597b40_1 *field_27a8;
} st_597b40_3;

st_597b40_1 * __tfUc(void)
{
    st_597b40_2 *v3;  // ebx
    st_597b40_3 *v4;  // ebx
    st_597b40_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597b3c(v0, &v1);
    v4 = &v3->field_7bf93;
    v5 = v4->field_27a8;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391901;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_27a8;
}

