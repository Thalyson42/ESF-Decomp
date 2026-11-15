// __tfd @0x197990 size=67
typedef struct st_597990_0 {
    char padding_0[399385];
    unsigned int field_61819;
} st_597990_0;

typedef struct st_597990_2 {
    char padding_0[116310];
    char field_1c656;
    char padding_1c657[391916];
    char field_7c143;
    char padding_7c144[7467];
    unsigned int field_7de6f;
    char padding_7de73[424];
    unsigned int field_7e01b;
    char padding_7e01f[1440];
    struct st_597990_1 *field_7e5bf;
} st_597990_2;

typedef struct st_597990_1 {
    struct st_597990_0 *field_0;
    unsigned int field_4;
} st_597990_1;

typedef struct st_597990_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[1440];
    struct st_597990_1 *field_247c;
} st_597990_3;

st_597990_1 * __tfd(void)
{
    st_597990_2 *v3;  // ebx
    st_597990_3 *v4;  // ebx
    st_597990_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_59798c(v0, &v1);
    v4 = &v3->field_7c143;
    v5 = v4->field_247c;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391917;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_247c;
}

