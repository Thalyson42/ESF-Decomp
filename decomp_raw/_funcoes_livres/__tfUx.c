// __tfUx @0x197ab0 size=67
typedef struct st_597ab0_0 {
    char padding_0[399375];
    unsigned int field_6180f;
} st_597ab0_0;

typedef struct st_597ab0_2 {
    char padding_0[116032];
    char field_1c540;
    char padding_1c541[391906];
    char field_7c023;
    char padding_7c024[7467];
    unsigned int field_7dd4f;
    char padding_7dd53[424];
    unsigned int field_7defb;
    char padding_7deff[244];
    struct st_597ab0_1 *field_7dff3;
} st_597ab0_2;

typedef struct st_597ab0_1 {
    struct st_597ab0_0 *field_0;
    unsigned int field_4;
} st_597ab0_1;

typedef struct st_597ab0_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[244];
    struct st_597ab0_1 *field_1fd0;
} st_597ab0_3;

st_597ab0_1 * __tfUx(void)
{
    st_597ab0_2 *v3;  // ebx
    st_597ab0_3 *v4;  // ebx
    st_597ab0_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597aac(v0, &v1);
    v4 = &v3->field_7c023;
    v5 = v4->field_1fd0;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391907;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_1fd0;
}

