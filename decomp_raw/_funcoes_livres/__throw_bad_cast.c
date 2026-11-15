// __throw_bad_cast @0x195ab4 size=159
typedef struct st_595ab4_1 {
    unsigned int field_0;
} st_595ab4_1;

typedef struct st_595ab4_2 {
    char padding_0[516123];
    char field_7e01b;
    char padding_7e01c[7147];
    unsigned int field_7fc07;
    char padding_7fc0b[1132];
    struct st_595ab4_0 *field_80077;
    char padding_8007b[2312];
    struct st_595ab4_0 *field_80983;
} st_595ab4_2;

typedef struct st_595ab4_3 {
    char padding_0[7148];
    unsigned int field_1bec;
} st_595ab4_3;

typedef struct st_595ab4_0 {
    char padding_0[4];
    struct st_595ab4_1 *field_4;
} st_595ab4_0;

void __throw_bad_cast(void)
{
    st_595ab4_2 *v4;  // ebx
    int v5;  // esi
    st_595ab4_3 *iter;  // ebx
    st_595ab4_0 **v7;  // esi
    st_595ab4_0 **v0;  // [bp-0x5c]
    int v1;  // [bp-0x58]
    st_595ab4_0 *v2;  // [bp-0x24]

    sub_595ab0(v4, v5);
    iter = &v4->field_7e01b;
    v2 = *(int *)&iter[1].padding_0[3448];
    v2 = *(int *)&iter[1].padding_0[1132];
    v7 = sub_48df10(4);
    *v7 = *(int *)&iter[1].padding_0[3448];
    *v7 = *(int *)&iter[1].padding_0[1132];
    while (1)
    {
        v2 = *(int *)&iter[1].padding_0[1132];
        v2 = *(int *)&iter[1].padding_0[3448];
        v1 = *v7->field_4(iter->field_1bec);
        v0 = v7;
        sub_488580(v0, v1);
        sub_48a220(v0, v1);
        sub_595ab0();
        iter = &iter[72].padding_0[1059];
        v2 = *(int *)&iter[1].padding_0[1132];
        v2 = *(int *)&iter[1].padding_0[3448];
        sub_48a220();
    }
}

