// __get_eh_info @0x194a5c size=34
typedef struct st_594a5c_0 {
    char padding_0[230284];
    struct st_594a5c_1 *field_3838c;
} st_594a5c_0;

typedef struct st_594a5c_1 {
    unsigned int field_0;
} st_594a5c_1;

int __get_eh_info(void)
{
    st_594a5c_0 *v2;  // ebx
    int v0;  // [bp-0x1c]

    sub_594a58(v0);
    return v2->field_3838c(v0) + 8;
}

