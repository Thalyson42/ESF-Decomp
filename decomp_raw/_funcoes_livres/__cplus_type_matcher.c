// __cplus_type_matcher @0x195720 size=101
typedef struct st_595720_1 {
    char padding_0[8];
    unsigned int field_8;
    int field_c;
    char padding_10[16];
    int field_20;
} st_595720_1;

typedef struct st_595720_0 {
    char padding_0[4];
    unsigned short field_4;
} st_595720_0;

unsigned int __cplus_type_matcher(st_595720_1 *a0, unsigned int *a1, st_595720_0 *a2)
{
    int v2;  // eax
    unsigned int v3;  // eax
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    sub_59571c(v0, v1);
    if (a2 && a2->field_4 != 4)
        return 0;
    if (a1 == 0xffffffff)
        return a0->field_8;
    v2 = a1();
    v3 = __throw_type_match_rtti(v2, a0->field_c, a0->field_20);
    if (!v3)
        return v3;
    a0->field_8 = v3;
    return v3;
}

