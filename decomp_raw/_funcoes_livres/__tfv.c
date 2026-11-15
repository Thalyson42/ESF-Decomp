// __tfv @0x197708 size=67
typedef struct st_597708_0 {
    char padding_0[399403];
    unsigned int field_6182b;
} st_597708_0;

typedef struct st_597708_2 {
    char padding_0[116940];
    char field_1c8cc;
    char padding_1c8cd[391934];
    char field_7c3cb;
    char padding_7c3cc[7467];
    unsigned int field_7e0f7;
    char padding_7e0fb[424];
    unsigned int field_7e2a3;
    char padding_7e2a7[3344];
    struct st_597708_1 *field_7efb7;
} st_597708_2;

typedef struct st_597708_1 {
    struct st_597708_0 *field_0;
    unsigned int field_4;
} st_597708_1;

typedef struct st_597708_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[3344];
    struct st_597708_1 *field_2bec;
} st_597708_3;

st_597708_1 * __tfv(void)
{
    st_597708_2 *v3;  // ebx
    st_597708_3 *v4;  // ebx
    st_597708_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597704(v0, &v1);
    v4 = &v3->field_7c3cb;
    v5 = v4->field_2bec;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 0x5faff;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_2bec;
}

