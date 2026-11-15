// __rtti_ptr @0x197554 size=56
typedef struct st_597554_0 {
    char padding_0[509311];
    char field_7c57f;
    char padding_7c580[7895];
    unsigned int field_7e457;
    char padding_7e45b[2444];
    unsigned int field_7ede7;
} st_597554_0;

unsigned int __rtti_ptr(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // eax
    st_597554_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    v2 = sub_597550(v0, &v1);
    v4 = &v3->field_7c57f;
    if (!a0)
        return v2;
    a0[1] = v4[1974];
    *a0 = a1;
    a0[1] = v4[2586];
    a0[2] = a2;
    return a2;
}

