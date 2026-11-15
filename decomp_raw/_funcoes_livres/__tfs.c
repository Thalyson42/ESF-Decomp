// __tfs @0x197828 size=67
typedef struct st_597828_0 {
    char padding_0[399395];
    unsigned int field_61823;
} st_597828_0;

typedef struct st_597828_2 {
    char padding_0[116660];
    char field_1c7b4;
    char padding_1c7b5[391926];
    char field_7c2ab;
    char padding_7c2ac[7467];
    unsigned int field_7dfd7;
    char padding_7dfdb[424];
    unsigned int field_7e183;
    char padding_7e187[1136];
    struct st_597828_1 *field_7e5f7;
} st_597828_2;

typedef struct st_597828_1 {
    struct st_597828_0 *field_0;
    unsigned int field_4;
} st_597828_1;

typedef struct st_597828_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[1136];
    struct st_597828_1 *field_234c;
} st_597828_3;

st_597828_1 * __tfs(void)
{
    st_597828_2 *v3;  // ebx
    st_597828_3 *v4;  // ebx
    st_597828_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597824(v0, &v1);
    v4 = &v3->field_7c2ab;
    v5 = v4->field_234c;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391927;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_234c;
}

