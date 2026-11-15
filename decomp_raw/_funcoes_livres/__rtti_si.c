// __rtti_si @0x197ffc size=65
typedef struct st_597ffc_0 {
    char padding_0[506583];
    char field_7bad7;
    char padding_7bad8[7895];
    unsigned int field_7d9af;
    char padding_7d9b3[456];
    unsigned int field_7db7b;
    char padding_7db7f[2284];
    unsigned int field_7e46b;
} st_597ffc_0;

unsigned int __rtti_si(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // eax
    st_597ffc_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    v2 = sub_597ff8(v0, &v1);
    v4 = &v3->field_7bad7;
    if (!a0)
        return v2;
    a0[1] = v4[1974];
    *a0 = a1;
    a0[1] = v4[2089];
    a0[1] = v4[2661];
    a0[2] = a2;
    return a2;
}

