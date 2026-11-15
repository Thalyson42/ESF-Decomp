// what__C9exception @0x195c2c size=50
typedef struct st_595c2c_1 {
    unsigned int field_0;
} st_595c2c_1;

typedef struct st_595c2c_0 {
    char padding_0[4];
    struct st_595c2c_1 *field_4;
} st_595c2c_0;

int what__C9exception(st_595c2c_0 **a0)
{
    unsigned int *v1;  // eax
    int v0;  // [bp-0x1c]

    sub_595c28(v0);
    if (a0)
    {
        v1 = *a0->field_4();
    }
    else
    {
        __throw_bad_typeid();
        v1 = NULL;
    }
    return *v1;
}

