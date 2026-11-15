// __tff @0x1979d8 size=67
typedef struct st_5979d8_0 {
    char padding_0[399383];
    unsigned int field_61817;
} st_5979d8_0;

typedef struct st_5979d8_2 {
    char padding_0[116240];
    char field_1c610;
    char padding_1c611[391914];
    char field_7c0fb;
    char padding_7c0fc[7467];
    unsigned int field_7de27;
    char padding_7de2b[424];
    unsigned int field_7dfd3;
    char padding_7dfd7[136];
    struct st_5979d8_1 *field_7e05f;
} st_5979d8_2;

typedef struct st_5979d8_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[136];
    struct st_5979d8_1 *field_1f64;
} st_5979d8_3;

typedef struct st_5979d8_1 {
    struct st_5979d8_0 *field_0;
    unsigned int field_4;
} st_5979d8_1;

st_5979d8_1 * __tff(void)
{
    st_5979d8_2 *v3;  // ebx
    st_5979d8_3 *v4;  // ebx
    st_5979d8_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_5979d4(v0, &v1);
    v4 = &v3->field_7c0fb;
    v5 = v4->field_1f64;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391915;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_1f64;
}

