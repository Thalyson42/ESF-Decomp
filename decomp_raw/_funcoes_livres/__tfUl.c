// __tfUl @0x197a68 size=67
typedef struct st_597a68_0 {
    char padding_0[399378];
    unsigned int field_61812;
} st_597a68_0;

typedef struct st_597a68_2 {
    char padding_0[116101];
    char field_1c585;
    char padding_1c586[391909];
    char field_7c06b;
    char padding_7c06c[7467];
    unsigned int field_7dd97;
    char padding_7dd9b[424];
    unsigned int field_7df43;
    char padding_7df47[216];
    struct st_597a68_1 *field_7e01f;
} st_597a68_2;

typedef struct st_597a68_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[216];
    struct st_597a68_1 *field_1fb4;
} st_597a68_3;

typedef struct st_597a68_1 {
    struct st_597a68_0 *field_0;
    unsigned int field_4;
} st_597a68_1;

st_597a68_1 * __tfUl(void)
{
    st_597a68_2 *v3;  // ebx
    st_597a68_3 *v4;  // ebx
    st_597a68_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597a64(v0, &v1);
    v4 = &v3->field_7c06b;
    v5 = v4->field_1fb4;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391910;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_1fb4;
}

