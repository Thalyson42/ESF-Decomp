// __throw_bad_typeid @0x195b58 size=155
typedef struct st_595b58_1 {
    unsigned int field_0;
} st_595b58_1;

typedef struct st_595b58_2 {
    char padding_0[515959];
    char field_7df77;
    char padding_7df78[9075];
    struct st_595b58_0 *field_802eb;
    char padding_802ef[1460];
    unsigned int field_808a3;
    char padding_808a7[56];
    struct st_595b58_0 *field_808df;
} st_595b58_2;

typedef struct st_595b58_0 {
    char padding_0[4];
    struct st_595b58_1 *field_4;
} st_595b58_0;

typedef struct st_595b58_3 {
    char padding_0[9076];
    struct st_595b58_0 *field_2374;
} st_595b58_3;

void __throw_bad_typeid(void)
{
    st_595b58_2 *v4;  // ebx
    int v5;  // esi
    st_595b58_3 *iter;  // ebx
    st_595b58_0 **v7;  // esi
    st_595b58_0 **v0;  // [bp-0x5c]
    int v1;  // [bp-0x58]
    st_595b58_0 *v2;  // [bp-0x24]

    sub_595b54(v4, v5);
    iter = &v4->field_7df77;
    v2 = *(int *)&iter[1].padding_0[1520];
    v2 = iter->field_2374;
    v7 = sub_48df10(4);
    *v7 = *(int *)&iter[1].padding_0[1520];
    *v7 = iter->field_2374;
    while (1)
    {
        v2 = iter->field_2374;
        v2 = *(int *)&iter[1].padding_0[1520];
        v1 = *v7->field_4(*(int *)&iter[1].padding_0[1460]);
        v0 = v7;
        sub_488580(v0, v1);
        sub_48a220(v0, v1);
        sub_595b54();
        iter = &iter[56].padding_0[7363];
        v2 = iter->field_2374;
        v2 = *(int *)&iter[1].padding_0[1520];
        sub_48a220();
    }
}

