// set_new_handler__FPFv_v @0x198784 size=35
typedef struct st_598784_1 {
    unsigned int field_0;
} st_598784_1;

typedef struct st_598784_0 {
    char padding_0[513203];
    struct st_598784_1 *field_7d4b3;
} st_598784_0;

typedef struct st_598784_2 {
    char padding_0[8548];
    struct st_598784_1 *field_2164;
} st_598784_2;

unsigned int set_new_handler__FPFv_v(unsigned int a0)
{
    st_598784_0 *v2;  // ebx
    st_598784_2 *v3;  // ebx
    unsigned int v4;  // ecx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_598780(v0, &v1);
    v3 = &v2->padding_0[504655];
    v4 = *(int *)v3->field_2164;
    *(unsigned int *)v3->field_2164 = a0;
    return v4;
}

