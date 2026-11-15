// __tfx @0x197750 size=67
typedef struct st_597750_0 {
    char padding_0[399401];
    unsigned int field_61829;
} st_597750_0;

typedef struct st_597750_2 {
    char padding_0[116870];
    char field_1c886;
    char padding_1c887[391932];
    char field_7c383;
    char padding_7c384[7467];
    unsigned int field_7e0af;
    char padding_7e0b3[424];
    unsigned int field_7e25b;
    char padding_7e25f[3040];
    struct st_597750_1 *field_7ee3f;
} st_597750_2;

typedef struct st_597750_1 {
    struct st_597750_0 *field_0;
    unsigned int field_4;
} st_597750_1;

typedef struct st_597750_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[3040];
    struct st_597750_1 *field_2abc;
} st_597750_3;

st_597750_1 * __tfx(void)
{
    st_597750_2 *v3;  // ebx
    st_597750_3 *v4;  // ebx
    st_597750_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_59774c(v0, &v1);
    v4 = &v3->field_7c383;
    v5 = v4->field_2abc;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391933;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_2abc;
}

