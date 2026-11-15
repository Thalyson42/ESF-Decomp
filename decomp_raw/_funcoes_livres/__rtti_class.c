// __rtti_class @0x197fb0 size=71
typedef struct st_597fb0_0 {
    char padding_0[506659];
    char field_7bb23;
    char padding_7bb24[7079];
    unsigned int field_7d6cb;
    char padding_7d6cf[812];
    unsigned int field_7d9fb;
    char padding_7d9ff[456];
    unsigned int field_7dbc7;
} st_597fb0_0;

unsigned int __rtti_class(unsigned int *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v2;  // eax
    st_597fb0_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    v2 = sub_597fac(v0, &v1);
    v4 = &v3->field_7bb23;
    if (!a0)
        return v2;
    a0[1] = v4[1974];
    *a0 = a1;
    a0[1] = v4[2089];
    a0[1] = v4[1770];
    a0[2] = a2;
    a0[3] = a3;
    return a3;
}

