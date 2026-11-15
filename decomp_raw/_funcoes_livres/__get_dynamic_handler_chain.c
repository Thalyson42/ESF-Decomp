// __get_dynamic_handler_chain @0x194b0c size=34
typedef struct st_594b0c_0 {
    char padding_0[230108];
    struct st_594b0c_1 *field_382dc;
} st_594b0c_0;

typedef struct st_594b0c_1 {
    unsigned int field_0;
} st_594b0c_1;

int __get_dynamic_handler_chain(void)
{
    st_594b0c_0 *v2;  // ebx
    int v0;  // [bp-0x1c]

    sub_594b08(v0);
    return v2->field_382dc(v0) + 4;
}

