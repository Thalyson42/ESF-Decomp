// __rtti_array @0x19767c size=50
typedef struct st_59767c_0 {
    char padding_0[509015];
    char field_7c457;
    char padding_7c458[7895];
    unsigned int field_7e32f;
    char padding_7e333[988];
    unsigned int field_7e70f;
} st_59767c_0;

unsigned int __rtti_array(unsigned int *a0, unsigned int a1)
{
    unsigned int v2;  // eax
    st_59767c_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    unsigned int v5;  // eax
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    v2 = sub_597678(v0, &v1);
    v4 = &v3->field_7c457;
    if (!a0)
        return v2;
    a0[1] = v4[1974];
    *a0 = a1;
    v5 = v4[2222];
    a0[1] = v5;
    return v5;
}

