// __rtti_user @0x198044 size=50
typedef struct st_598044_0 {
    char padding_0[506511];
    char field_7ba8f;
    char padding_7ba90[7895];
    unsigned int field_7d967;
    char padding_7d96b[456];
    unsigned int field_7db33;
} st_598044_0;

unsigned int __rtti_user(unsigned int *a0, unsigned int a1)
{
    unsigned int v2;  // eax
    st_598044_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    unsigned int v5;  // eax
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    v2 = sub_598040(v0, &v1);
    v4 = &v3->field_7ba8f;
    if (!a0)
        return v2;
    a0[1] = v4[1974];
    *a0 = a1;
    v5 = v4[2089];
    a0[1] = v5;
    return v5;
}

