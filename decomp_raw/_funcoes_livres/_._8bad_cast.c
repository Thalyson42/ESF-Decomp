// _._8bad_cast @0x1982fc size=59
typedef struct st_5982fc_0 {
    char padding_0[505812];
    char field_7b7d4;
    char padding_7b7d5[8283];
    unsigned int field_7d830;
    char padding_7d834[2312];
    unsigned int field_7e13c;
} st_5982fc_0;

unsigned int _._8bad_cast(unsigned int *a0, char a1)
{
    st_5982fc_0 *v1;  // ebx
    unsigned int *v2;  // ebx
    unsigned int v3;  // eax
    int v0;  // [bp-0x1c]

    sub_5982f8(v0);
    v2 = &v1->field_7b7d4;
    *a0 = v2[2071];
    v3 = v2[2650];
    *a0 = v3;
    if (!(a1 & 1))
        return v3;
    return sub_48d4e0(a0);
}

