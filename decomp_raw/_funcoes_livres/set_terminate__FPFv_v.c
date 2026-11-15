// set_terminate__FPFv_v @0x1955d0 size=35
typedef struct st_5955d0_1 {
    unsigned int field_0;
} st_5955d0_1;

typedef struct st_5955d0_0 {
    char padding_0[525819];
    struct st_5955d0_1 *field_805fb;
} st_5955d0_0;

typedef struct st_5955d0_2 {
    char padding_0[8440];
    struct st_5955d0_1 *field_20f8;
} st_5955d0_2;

unsigned int set_terminate__FPFv_v(unsigned int a0)
{
    st_5955d0_0 *v2;  // ebx
    st_5955d0_2 *v3;  // ebx
    unsigned int v4;  // ecx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_5955cc(v0, &v1);
    v3 = &v2->padding_0[517379];
    v4 = *(int *)v3->field_20f8;
    *(unsigned int *)v3->field_20f8 = a0;
    return v4;
}

