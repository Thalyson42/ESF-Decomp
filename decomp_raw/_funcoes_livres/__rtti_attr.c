// __rtti_attr @0x197590 size=62
typedef struct st_597590_0 {
    char padding_0[509251];
    char field_7c543;
    char padding_7c544[7895];
    unsigned int field_7e41b;
    char padding_7e41f[280];
    unsigned int field_7e537;
} st_597590_0;

unsigned int __rtti_attr(unsigned int *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v2;  // eax
    st_597590_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    v2 = sub_59758c(v0, &v1);
    v4 = &v3->field_7c543;
    if (!a0)
        return v2;
    a0[1] = v4[1974];
    *a0 = a1;
    a0[1] = v4[0x7fd];
    a0[2] = a3;
    a0[3] = a2;
    return a2;
}

