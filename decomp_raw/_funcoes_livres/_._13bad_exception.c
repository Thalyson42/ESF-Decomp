// _._13bad_exception @0x195cf4 size=59
typedef struct st_595cf4_0 {
    char padding_0[515548];
    char field_7dddc;
    char padding_7dddd[10171];
    unsigned int field_80598;
    char padding_8059c[424];
    unsigned int field_80744;
} st_595cf4_0;

unsigned int _._13bad_exception(unsigned int *a0, char a1)
{
    st_595cf4_0 *v1;  // ebx
    unsigned int *v2;  // ebx
    unsigned int v3;  // eax
    int v0;  // [bp-0x1c]

    sub_595cf0(v0);
    v2 = &v1->field_7dddc;
    *a0 = v2[2543];
    v3 = v2[2650];
    *a0 = v3;
    if (!(a1 & 1))
        return v3;
    return sub_48d4e0(a0);
}

