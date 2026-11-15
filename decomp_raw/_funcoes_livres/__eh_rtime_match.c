// __eh_rtime_match @0x194d3c size=86
typedef struct st_594d3c_1 {
    int field_0;
} st_594d3c_1;

typedef struct st_594d3c_0 {
    char padding_0[528232];
    struct st_594d3c_1 *field_80f68;
} st_594d3c_0;

unsigned int __eh_rtime_match(void)
{
    st_594d3c_1 **v2;  // edx
    st_594d3c_0 *v4;  // ebx
    int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp+0x4]

    sub_594d38(v0);
    v2 = *(int *)__get_eh_info(v0);
    if (!*v2)
    {
        fprintf@GLIBC_2.0(*(int *)v4->field_80f68, &v4->padding_0[127480]);
        return 0;
    }
    return (*v2)(v2, v1, 0) != 0;
}

