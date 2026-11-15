// __tfr @0x197948 size=67
typedef struct st_597948_0 {
    char padding_0[399387];
    unsigned int field_6181b;
} st_597948_0;

typedef struct st_597948_2 {
    char padding_0[116380];
    char field_1c69c;
    char padding_1c69d[391918];
    char field_7c18b;
    char padding_7c18c[7467];
    unsigned int field_7deb7;
    char padding_7debb[424];
    unsigned int field_7e063;
    char padding_7e067[3352];
    struct st_597948_1 *field_7ed7f;
} st_597948_2;

typedef struct st_597948_1 {
    struct st_597948_0 *field_0;
    unsigned int field_4;
} st_597948_1;

typedef struct st_597948_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[3352];
    struct st_597948_1 *field_2bf4;
} st_597948_3;

st_597948_1 * __tfr(void)
{
    st_597948_2 *v3;  // ebx
    st_597948_3 *v4;  // ebx
    st_597948_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597944(v0, &v1);
    v4 = &v3->field_7c18b;
    v5 = v4->field_2bf4;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391919;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_2bf4;
}

