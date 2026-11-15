// __tfb @0x197870 size=67
typedef struct st_597870_0 {
    char padding_0[399393];
    unsigned int field_61821;
} st_597870_0;

typedef struct st_597870_2 {
    char padding_0[116590];
    char field_1c76e;
    char padding_1c76f[391924];
    char field_7c263;
    char padding_7c264[7467];
    unsigned int field_7df8f;
    char padding_7df93[424];
    unsigned int field_7e13b;
    char padding_7e13f[256];
    struct st_597870_1 *field_7e23f;
} st_597870_2;

typedef struct st_597870_1 {
    struct st_597870_0 *field_0;
    unsigned int field_4;
} st_597870_1;

typedef struct st_597870_3 {
    char padding_0[7468];
    unsigned int field_1d2c;
    char padding_1d30[424];
    unsigned int field_1ed8;
    char padding_1edc[256];
    struct st_597870_1 *field_1fdc;
} st_597870_3;

st_597870_1 * __tfb(void)
{
    st_597870_2 *v3;  // ebx
    st_597870_3 *v4;  // ebx
    st_597870_1 *v5;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_59786c(v0, &v1);
    v4 = &v3->field_7c263;
    v5 = v4->field_1fdc;
    if (!v5->field_0 && v5)
    {
        v5->field_4 = v4->field_1ed8;
        v5->field_0 = (char *)v4 - 391925;
        v5->field_4 = v4->field_1d2c;
    }
    return v4->field_1fdc;
}

