// __rtti_ptmf @0x19760c size=50
typedef struct st_59760c_0 {
    char padding_0[509127];
    char field_7c4c7;
    char padding_7c4c8[7895];
    unsigned int field_7e39f;
    char padding_7e3a3[1628];
    unsigned int field_7e9ff;
} st_59760c_0;

unsigned int __rtti_ptmf(unsigned int *a0, unsigned int a1)
{
    unsigned int v2;  // eax
    st_59760c_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    unsigned int v5;  // eax
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    v2 = sub_597608(v0, &v1);
    v4 = &v3->field_7c4c7;
    if (!a0)
        return v2;
    a0[1] = v4[1974];
    *a0 = a1;
    v5 = v4[2382];
    a0[1] = v5;
    return v5;
}

