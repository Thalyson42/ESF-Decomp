// __tfw @0x197900 size=67
typedef struct st_597900_0 {
    char padding_0[399389];
    unsigned int field_6181d;
} st_597900_0;

typedef struct st_597900_2 {
    char padding_0[116450];
    char field_1c6e2;
    char padding_1c6e3[391920];
    char field_7c1d3;
    char padding_7c1d4[7467];
    unsigned int field_7deff;
    char padding_7df03[424];
    unsigned int field_7e0ab;
    char padding_7e0af[2668];
    struct st_597900_1 *field_7eb1b;
} st_597900_2;

typedef struct st_597900_1 {
    struct st_597900_0 *field_0;
    unsigned int field_4;
} st_597900_1;

typedef struct st_597900_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[2668];
    struct st_597900_1 *field_2948;
} st_597900_3;

st_597900_1 * __tfw(void)
{
    st_597900_2 *v3;  // ebx
    st_597900_3 *v4;  // ebx
    st_597900_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_5978fc(v0, &v1);
    v4 = &v3->field_7c1d3;
    v5 = v4->field_2948;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391921;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_2948;
}

