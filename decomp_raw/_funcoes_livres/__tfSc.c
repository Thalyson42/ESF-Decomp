// __tfSc @0x197b88 size=67
typedef struct st_597b88_0 {
    char padding_0[398634];
    struct st_597b88_1 *field_6152a;
} st_597b88_0;

typedef struct st_597b88_2 {
    char padding_0[115825];
    char field_1c471;
    char padding_1c472[391897];
    char field_7bf4b;
    char padding_7bf4c[6735];
    struct st_597b88_1 *field_7d99b;
    char padding_7d99f[728];
    unsigned int field_7dc77;
    char padding_7dc7b[424];
    unsigned int field_7de23;
} st_597b88_2;

typedef struct st_597b88_3 {
    char padding_0[6736];
    struct st_597b88_1 *field_1a50;
    char padding_1a54[728];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
} st_597b88_3;

typedef struct st_597b88_1 {
    struct st_597b88_0 *field_0;
    unsigned int field_4;
} st_597b88_1;

st_597b88_1 * __tfSc(void)
{
    st_597b88_2 *v3;  // ebx
    st_597b88_3 *v4;  // ebx
    st_597b88_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_597b84(v0, &v1);
    v4 = &v3->field_7bf4b;
    v5 = v4->field_1a50;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391898;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_1a50;
}

