// __tfi @0x1977e0 size=67
typedef struct st_5977e0_0 {
    char padding_0[399397];
    unsigned int field_61825;
} st_5977e0_0;

typedef struct st_5977e0_2 {
    char padding_0[116730];
    char field_1c7fa;
    char padding_1c7fb[391928];
    char field_7c2f3;
    char padding_7c2f4[7467];
    unsigned int field_7e01f;
    char padding_7e023[424];
    unsigned int field_7e1cb;
    char padding_7e1cf[1964];
    struct st_5977e0_1 *field_7e97b;
} st_5977e0_2;

typedef struct st_5977e0_1 {
    struct st_5977e0_0 *field_0;
    unsigned int field_4;
} st_5977e0_1;

typedef struct st_5977e0_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[1964];
    struct st_5977e0_1 *field_2688;
} st_5977e0_3;

st_5977e0_1 * __tfi(void)
{
    st_5977e0_2 *v3;  // ebx
    st_5977e0_3 *v4;  // ebx
    st_5977e0_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_5977dc(v0, &v1);
    v4 = &v3->field_7c2f3;
    v5 = v4->field_2688;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391929;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_2688;
}

