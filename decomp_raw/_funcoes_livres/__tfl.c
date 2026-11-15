// __tfl @0x197798 size=67
typedef struct st_597798_0 {
    char padding_0[399399];
    unsigned int field_61827;
} st_597798_0;

typedef struct st_597798_2 {
    char padding_0[116800];
    char field_1c840;
    char padding_1c841[391930];
    char field_7c33b;
    char padding_7c33c[7467];
    unsigned int field_7e067;
    char padding_7e06b[424];
    unsigned int field_7e213;
    char padding_7e217[2468];
    struct st_597798_1 *field_7ebbb;
} st_597798_2;

typedef struct st_597798_1 {
    struct st_597798_0 *field_0;
    unsigned int field_4;
} st_597798_1;

typedef struct st_597798_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[2468];
    struct st_597798_1 *field_2880;
} st_597798_3;

st_597798_1 * __tfl(void)
{
    st_597798_2 *v3;  // ebx
    st_597798_3 *v4;  // ebx
    st_597798_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597794(v0, &v1);
    v4 = &v3->field_7c33b;
    v5 = v4->field_2880;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391931;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_2880;
}

