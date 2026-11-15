// __is_pointer__FPv @0x197500 size=79
typedef struct st_597500_0 {
    unsigned int field_0;
    int field_4;
} st_597500_0;

typedef struct st_597500_1 {
    char padding_0[4];
    struct st_597500_0 *field_4;
} st_597500_1;

char __is_pointer__FPv(st_597500_1 *a0)
{
    int v0;  // [bp-0x1c]

    sub_5974fc(v0);
    return a0 != NULL;
}

