// __dynamic_cast @0x1976b4 size=79
typedef struct st_5976b4_0 {
    char padding_0[12];
    struct st_5976b4_1 *field_c;
} st_5976b4_0;

typedef struct st_5976b4_1 {
    unsigned int field_0;
} st_5976b4_1;

typedef struct st_5976b4_2 {
    char padding_0[4];
    struct st_5976b4_0 *field_4;
} st_5976b4_2;

int __dynamic_cast(unsigned int *a0, unsigned int *a1, unsigned int a2, unsigned int a3, unsigned int *a4, unsigned int a5)
{
    st_5976b4_2 *v4;  // edi
    unsigned int v5;  // eax
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]
    int v2;  // [bp-0x14]
    st_5976b4_0 *v3;  // [bp-0x8]

    sub_5976b0(v0, v1, v2);
    v4 = a0();
    v3 = v4->field_4;
    v5 = a1(a2, a3, a4(a5));
    return v3->field_c(v4, v5);
}

