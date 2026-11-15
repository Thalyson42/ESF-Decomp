// _._9exception @0x195c8c size=51
typedef struct st_595c8c_0 {
    char padding_0[526252];
    unsigned int field_807ac;
} st_595c8c_0;

unsigned int _._9exception(unsigned int *a0, char a1)
{
    st_595c8c_0 *v1;  // ebx
    unsigned int v2;  // eax
    int v0;  // [bp-0x1c]

    sub_595c88(v0);
    v2 = v1->field_807ac;
    *a0 = v2;
    if (!(a1 & 1))
        return v2;
    return __builtin_delete(a0);
}

