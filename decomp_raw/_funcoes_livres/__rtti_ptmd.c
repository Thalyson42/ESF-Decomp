// __rtti_ptmd @0x197644 size=50
typedef struct st_597644_0 {
    char padding_0[509071];
    char field_7c48f;
    char padding_7c490[7895];
    unsigned int field_7e367;
    char padding_7e36b[2988];
    unsigned int field_7ef17;
} st_597644_0;

unsigned int __rtti_ptmd(unsigned int *a0, unsigned int a1)
{
    unsigned int v2;  // eax
    st_597644_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    unsigned int v5;  // eax
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    v2 = sub_597640(v0, &v1);
    v4 = &v3->field_7c48f;
    if (!a0)
        return v2;
    a0[1] = v4[1974];
    *a0 = a1;
    v5 = v4[2722];
    a0[1] = v5;
    return v5;
}

