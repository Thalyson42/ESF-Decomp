// __14__si_type_infoPCcRC16__user_type_info @0x1983e0 size=65
typedef struct st_5983e0_0 {
    char padding_0[505586];
    char field_7b6f2;
    char padding_7b6f3[7895];
    unsigned int field_7d5ca;
    char padding_7d5ce[456];
    unsigned int field_7d796;
    char padding_7d79a[2284];
    unsigned int field_7e086;
} st_5983e0_0;

unsigned int * __14__si_type_infoPCcRC16__user_type_info(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    int v2;  // esi
    st_5983e0_0 *v3;  // ebx
    unsigned int *v4;  // ebx
    int v0;  // [bp-0xc]
    char v1;  // [bp+0x0]

    sub_5983dc(v0, v2, &v1);
    v4 = &v3->field_7b6f2;
    a0[1] = v4[1974];
    *a0 = a1;
    a0[1] = v4[2089];
    a0[1] = v4[2661];
    a0[2] = a2;
    return a0;
}

