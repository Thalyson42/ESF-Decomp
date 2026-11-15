// eh_context_initialize @0x194a84 size=40
typedef struct st_594a84_0 {
    char padding_0[230244];
    unsigned int field_38364;
} st_594a84_0;

int eh_context_initialize(void)
{
    st_594a84_0 *v2;  // ebx
    int v0;  // [bp-0x1c]

    sub_594a80(v0);
    v2->field_38364 = &v2->padding_0[32];
    return eh_context_static(v0);
}

