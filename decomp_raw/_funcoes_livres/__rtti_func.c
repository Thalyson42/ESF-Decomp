// __rtti_func @0x1975d4 size=50
typedef struct st_5975d4_0 {
    char padding_0[509183];
    char field_7c4ff;
    char padding_7c500[7515];
    unsigned int field_7e25b;
    char padding_7e25f[376];
    unsigned int field_7e3d7;
} st_5975d4_0;

unsigned int __rtti_func(unsigned int *a0, unsigned int a1)
{
    unsigned int v2;  // eax
    st_5975d4_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    unsigned int v5;  // eax
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    v2 = sub_5975d0(v0, &v1);
    v4 = &v3->field_7c4ff;
    if (!a0)
        return v2;
    a0[1] = v4[1974];
    *a0 = a1;
    v5 = v4[1879];
    a0[1] = v5;
    return v5;
}

