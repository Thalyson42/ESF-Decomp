// __register_frame_info_table @0x196908 size=67
typedef struct st_596908_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    struct st_596908_0 *field_14;
} st_596908_0;

typedef struct st_596908_1 {
    char padding_0[623051];
    struct st_596908_0 *field_981cb;
} st_596908_1;

typedef struct st_596908_2 {
    char padding_0[110592];
    struct st_596908_0 *field_1b000;
} st_596908_2;

st_596908_0 * __register_frame_info_table(unsigned int a0, st_596908_0 *a1)
{
    st_596908_1 *v2;  // ebx
    st_596908_2 *v3;  // ebx
    st_596908_0 *v4;  // eax
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_596904(v0, &v1);
    v3 = &v2->padding_0[512459];
    a1->field_8 = a0;
    a1->field_c = a0;
    v4 = v3->field_1b000;
    a1->field_4 = 0;
    a1->field_0 = 0;
    a1->field_10 = 0;
    a1->field_14 = v4;
    v3->field_1b000 = a1;
    return v4;
}

