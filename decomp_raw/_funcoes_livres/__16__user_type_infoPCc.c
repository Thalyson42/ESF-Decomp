// __16__user_type_infoPCc @0x1983ac size=48
typedef struct st_5983ac_0 {
    char padding_0[505639];
    char field_7b727;
    char padding_7b728[7895];
    unsigned int field_7d5ff;
    char padding_7d603[456];
    unsigned int field_7d7cb;
} st_5983ac_0;

unsigned int * __16__user_type_infoPCc(unsigned int *a0, unsigned int a1)
{
    st_5983ac_0 *v2;  // ebx
    unsigned int *v3;  // ebx
    unsigned int v4;  // edx
    unsigned int v5;  // eax
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_5983a8(v0, &v1);
    v3 = &v2->field_7b727;
    v4 = v3[1974];
    *a0 = a1;
    v5 = v3[2089];
    a0[1] = v4;
    a0[1] = v5;
    return a0;
}

