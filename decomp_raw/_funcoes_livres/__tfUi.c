// __tfUi @0x197a20 size=67
typedef struct st_597a20_0 {
    char padding_0[399381];
    unsigned int field_61815;
} st_597a20_0;

typedef struct st_597a20_2 {
    char padding_0[116170];
    char field_1c5ca;
    char padding_1c5cb[391912];
    char field_7c0b3;
    char padding_7c0b4[7467];
    unsigned int field_7dddf;
    char padding_7dde3[424];
    unsigned int field_7df8b;
    char padding_7df8f[2028];
    struct st_597a20_1 *field_7e77b;
} st_597a20_2;

typedef struct st_597a20_1 {
    struct st_597a20_0 *field_0;
    unsigned int field_4;
} st_597a20_1;

typedef struct st_597a20_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[2028];
    struct st_597a20_1 *field_26c8;
} st_597a20_3;

st_597a20_1 * __tfUi(void)
{
    st_597a20_2 *v3;  // ebx
    st_597a20_3 *v4;  // ebx
    st_597a20_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597a1c(v0, &v1);
    v4 = &v3->field_7c0b3;
    v5 = v4->field_26c8;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391913;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_26c8;
}

