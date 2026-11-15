// __tfc @0x1978b8 size=67
typedef struct st_5978b8_0 {
    char padding_0[399103];
    struct st_5978b8_1 *field_616ff;
} st_5978b8_0;

typedef struct st_5978b8_2 {
    char padding_0[116520];
    char field_1c728;
    char padding_1c729[391922];
    char field_7c21b;
    char padding_7c21c[7179];
    struct st_5978b8_1 *field_7de27;
    char padding_7de2b[284];
    unsigned int field_7df47;
    char padding_7df4b[424];
    unsigned int field_7e0f3;
} st_5978b8_2;

typedef struct st_5978b8_3 {
    char padding_0[7180];
    struct st_5978b8_1 *field_1c0c;
    char padding_1c10[284];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
} st_5978b8_3;

typedef struct st_5978b8_1 {
    struct st_5978b8_0 *field_0;
    unsigned int field_4;
} st_5978b8_1;

st_5978b8_1 * __tfc(void)
{
    st_5978b8_2 *v3;  // ebx
    st_5978b8_3 *v4;  // ebx
    st_5978b8_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_5978b4(v0, &v1);
    v4 = &v3->field_7c21b;
    v5 = v4->field_1c0c;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391923;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_1c0c;
}

