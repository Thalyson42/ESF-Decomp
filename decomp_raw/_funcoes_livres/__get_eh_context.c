// __get_eh_context @0x194a38 size=31
typedef struct st_594a38_0 {
    char padding_0[230320];
    struct st_594a38_1 *field_383b0;
} st_594a38_0;

typedef struct st_594a38_1 {
    unsigned int field_0;
} st_594a38_1;

int __get_eh_context(void)
{
    st_594a38_0 *v2;  // ebx
    int v0;  // [bp-0x1c]

    sub_594a34(v0);
    return v2->field_383b0(v0);
}

