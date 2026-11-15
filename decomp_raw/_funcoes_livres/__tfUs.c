// __tfUs @0x197af8 size=67
typedef struct st_597af8_0 {
    char padding_0[399372];
    unsigned int field_6180c;
} st_597af8_0;

typedef struct st_597af8_2 {
    char padding_0[115963];
    char field_1c4fb;
    char padding_1c4fc[391903];
    char field_7bfdb;
    char padding_7bfdc[7467];
    unsigned int field_7dd07;
    char padding_7dd0b[424];
    unsigned int field_7deb3;
    char padding_7deb7[2408];
    struct st_597af8_1 *field_7e81f;
} st_597af8_2;

typedef struct st_597af8_1 {
    struct st_597af8_0 *field_0;
    unsigned int field_4;
} st_597af8_1;

typedef struct st_597af8_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[2408];
    struct st_597af8_1 *field_2844;
} st_597af8_3;

st_597af8_1 * __tfUs(void)
{
    st_597af8_2 *v3;  // ebx
    st_597af8_3 *v4;  // ebx
    st_597af8_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597af4(v0, &v1);
    v4 = &v3->field_7bfdb;
    v5 = v4->field_2844;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391904;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_2844;
}

